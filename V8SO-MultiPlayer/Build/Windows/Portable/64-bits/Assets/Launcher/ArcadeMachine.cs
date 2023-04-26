using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class ArcadeMachine : MonoBehaviour
{
    // Point this at the necessary core
    // to emulate the selected game
    public string libretroCorePath;

    // Point this at the ROM file for the
    // intended game to launch
    public string romPath;

    // Point this at the RetroArch executable
    // on your system
    public string retroarchExecutablePath;

    // Store the window handle for the RetroArch process
    private IntPtr retroArchWindowHandle = IntPtr.Zero;

    [DllImport("user32.dll", SetLastError = true)]
    static extern IntPtr SetParent(IntPtr hWndChild, IntPtr hWndNewParent);

    [DllImport("user32.dll")]
    private static extern bool SetWindowPos(IntPtr hWnd, IntPtr hWndInsertAfter, int x, int y, int cx, int cy, uint uFlags);

    [DllImport("user32.dll")]
    private static extern bool ShowWindow(IntPtr hWnd, int nCmdShow);

    [DllImport("user32.dll", SetLastError = true)]
    private static extern bool MoveWindow(IntPtr hwnd, int x, int y, int cx, int cy, bool repaint);

    public void LaunchGame()
    {
        ProcessStartInfo startInfo = new ProcessStartInfo();
        startInfo.FileName = retroarchExecutablePath;
        startInfo.Arguments = string.Format("-L {0} {1}", libretroCorePath, romPath);
        Process retroArchProcess = Process.Start(startInfo);

        // Wait for RetroArch to start up
        retroArchProcess.WaitForInputIdle();

        // Get the window handle for the RetroArch process
        retroArchWindowHandle = retroArchProcess.MainWindowHandle;

        // Set the parent of the RetroArch window to the Unity window
        SetParent(retroArchWindowHandle, GetUnityWindowHandle());

        // Get the canvas component of the Unity window
        Canvas canvas = GetCanvasComponent();

        // Get the position and size of the canvas
        Vector3[] canvasCorners = new Vector3[4];
        canvas.GetComponent<RectTransform>().GetWorldCorners(canvasCorners);
        int canvasX = (int)canvasCorners[0].x;
        int canvasY = (int)canvasCorners[0].y;
        int canvasWidth = (int)Math.Abs(canvasCorners[2].x - canvasCorners[0].x);
        int canvasHeight = (int)Math.Abs(canvasCorners[2].y - canvasCorners[0].y);

        // Set the position and size of the RetroArch window within the Unity window
        SetWindowPos(retroArchWindowHandle, IntPtr.Zero, canvasX, canvasY, canvasWidth, canvasHeight, 0);

        // Show the RetroArch window
        ShowWindow(retroArchWindowHandle, 1);
    }

    private static IntPtr GetUnityWindowHandle()
    {
        return FindWindow("UnityWndClass", Application.productName);
    }

    [DllImport("user32.dll")]
    private static extern IntPtr FindWindow(string className, string windowName);

    private Canvas GetCanvasComponent()
    {
        return GetComponentInChildren<Canvas>();
    }
}
