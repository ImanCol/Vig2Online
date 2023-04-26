using System.Diagnostics;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Debug = UnityEngine.Debug;

public class ExternalProgramRunner : MonoBehaviour
{
    public string programPath;
    public string programArguments;
    public string GamePath;
    public TMP_InputField programPathInputField;
    public TMP_InputField programArgumentsInputField;
    public Button programPathButton;
    public Button programArgumentsButton;
    public bool isRunning = false;
    public int processId = -1;
    private Process process;
    private Process fullName;
    public Button openButton;
    public Button stopButton;
    public Text textWaiting;
    public Text Console;
    public UIManager uiManager;
    public GameObject buttonsParent;
    private string TextMessage;
    int pid;
    private void Start()
    {
        programPathInputField.text = programPath;
        programArgumentsInputField.text = GamePath;
        //Llamar LaunchProgram desde un botón en lugar de Start()
    }

    private void Update()
    {
        if (isRunning && process.HasExited)
        {
            isRunning = false;
            process = null;
            isStop();
            TextMessage = "El juego se ha cerrado...";
            Debug.Log("External program has exited.");
        }
    }

    private void isStop()
    {
        uiManager.usernameField.gameObject.SetActive(value: false);
        uiManager.connectButton.gameObject.SetActive(value: false);
        TextMessage = "El juego se ha cerrado...";
        textWaiting.text = TextMessage; // Limpia el texto una vez que se abra el proceso
        textWaiting.gameObject.SetActive(true);
        Console.gameObject.SetActive(false);
        openButton.gameObject.SetActive(true);
        stopButton.gameObject.SetActive(false);
        CancelInvoke("CallOpenProcess");
    }
    private int GetProcessId()
    {
        //fullName = process;
        //int firstParenthesis = fullName.IndexOf("(");
        //int lastParenthesis = fullName.LastIndexOf(")");
        //Debug.Log("External program: " + (process.ProcessName));

        if (string.IsNullOrEmpty(programPath))
        {
            Debug.Log("External program path is null or empty.");
            return -1;
        }
        string fileName = "ePSXe";
        if (isRunning)
        {
            fileName = Path.GetFileName(process.ProcessName);
        }
        if (string.IsNullOrEmpty(fileName))
        {
            Debug.Log("External program file name is null or empty.");
            return -1;
        }

        Process[] processes = Process.GetProcessesByName(fileName);
        if (processes.Length == 0)
        {
            return -1;
        }
        else
        {
            int pid = processes[0].Id;
            Debug.Log("External program PID: " + pid);
            return pid;
        }
    }
    public void LaunchProgram()
    {
        if (openButton == true)
        {
            programPath = programPathInputField.text;
            GamePath = programArgumentsInputField.text;
        }
        if (!isRunning)
        {
            process = new Process();
            if (!programPath.StartsWith("\"") || !programPath.EndsWith("\""))
            {
                programPath = "\"" + programPath + "\"";
            }

            if (!GamePath.StartsWith("\"") || !GamePath.EndsWith("\""))
            {
                GamePath = "\"" + GamePath + "\"";
            }

            process.StartInfo.FileName = programPath;
            process.StartInfo.Arguments = programArguments + " " + GamePath;

//            Debug.Log(process.StartInfo.Arguments);
            process.Start();
            isRunning = true;
            processId = process.Id;
            pid = processId;
            PlayerPrefs.SetInt("pid", process.Id);
            openButton.gameObject.SetActive(false);
            stopButton.gameObject.SetActive(true);
            Debug.Log("External program has started. PID: " + processId);
            TextMessage = "Esperando a que se termine de abrir el programa...";
            textWaiting.text = TextMessage;
            Invoke("CallOpenProcess", 5f);
        }
        else
        {
            Debug.Log("External program is already running. PID: " + processId);
        }
    }
    private void CallOpenProcess()
    {
        if (uiManager != null)
        {
            stopButton.gameObject.SetActive(false);
            uiManager.OpenProcess();
            textWaiting.text = "Listo"; // Limpia el texto una vez que se abra el proceso
            textWaiting.gameObject.SetActive(false);
            Console.gameObject.SetActive(true);
        }
    }
    public void StopProgram()
    {

        int pid = GetProcessId();
        if (isRunning)
        {
            Debug.Log("Stop Program: " + pid);
        }
        if (pid != -1)
        {
            Process p = Process.GetProcessById(pid);
            p.Kill();
            isRunning = false;
            process = null;
            processId = -1;
            TextMessage = "Cerrastes el juego";
            isStop();
            CancelInvoke("CallOpenProcess");
            Debug.Log("External program has been stopped.");
        }
        else
        {
            TextMessage = "Ya has detenido el programa";
            isStop();
            Debug.Log("External program is not running.");
        }
    }
    public void OpenprogramPath()
    {

    }
    public void OpenprogramArguments()
    {

    }
    private void OnApplicationQuit()
    {
        StopProgram();
    }
}