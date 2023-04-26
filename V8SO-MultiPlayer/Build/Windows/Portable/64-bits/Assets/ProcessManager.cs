using System.Diagnostics;
using System.Linq;
using UnityEngine;
public class ProcessManager : MonoBehaviour
{
    public string epsxeProcessName = "mednafen";
    public string gameName = "";

    private void Start()
    {
        // Busca los procesos que coincidan con el nombre del emulador ePSXe
        Process[] processes = Process.GetProcessesByName(epsxeProcessName);

        if (processes.Length > 0)
        {
            Process gameProcess = null;

            if (!string.IsNullOrEmpty(gameName))
            {
                // Si se especificó un nombre de juego, busca procesos asociados con el nombre del juego
                gameProcess = processes.FirstOrDefault(p => p.MainWindowTitle.Contains(gameName));
            }
            else
            {
                // Si no se especificó un nombre de juego, busca cualquier proceso asociado con el emulador ePSXe
                gameProcess = processes.FirstOrDefault();
            }

            if (gameProcess != null)
            {
                // Si se encontró un proceso de juego, muestra información sobre él
                UnityEngine.Debug.Log($"El juego {gameName} se está ejecutando en el emulador ePSXe (PID {gameProcess.Id})");
            }
            else
            {
                UnityEngine.Debug.Log($"No se encontró ningún juego ejecutándose en el emulador ePSXe");
            }
        }
        else
        {
            UnityEngine.Debug.Log($"No se encontró el proceso del emulador ePSXe ({epsxeProcessName})");
        }
    }
}
