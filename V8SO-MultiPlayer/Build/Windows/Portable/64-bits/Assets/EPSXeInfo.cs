using System;
using System.Diagnostics;
using System.Linq;
using UnityEngine;

public class EPSXeInfo : MonoBehaviour
{
    private const string ProcessName = "ePSXe";

    private void Start()
    {
        // Busca los procesos que coincidan con el nombre especificado
        Process[] processes = Process.GetProcessesByName(ProcessName);

        if (processes.Length > 0)
        {
            if (processes.Length == 1)
            {
                // Si solo hay un proceso con el nombre especificado, se obtiene su información
                Process process = processes[0];
                int processId = process.Id;
                TimeSpan processTime = process.TotalProcessorTime;
                string gameTitle = process.MainWindowTitle;
                UnityEngine.Debug.Log($"El proceso {ProcessName} con PID {processId} lleva ejecutándose {processTime} y está ejecutando el juego {gameTitle}");
            }
            else
            {
                // Si hay varios procesos con el nombre especificado, se ordenan por tiempo de ejecución
                processes = processes.OrderBy(p => p.TotalProcessorTime).ToArray();

                // Se selecciona el proceso con menos tiempo de ejecución
                Process selectedProcess = processes[0];

                // Se obtiene la información del proceso seleccionado
                int processId = selectedProcess.Id;
                TimeSpan processTime = selectedProcess.TotalProcessorTime;
                string gameTitle = selectedProcess.MainWindowTitle;

                // Se muestra la información del proceso seleccionado
                UnityEngine.Debug.Log($"Se encontraron {processes.Length} procesos con el nombre {ProcessName}. " +
                    $"Seleccionando el proceso con menor tiempo de ejecución: {selectedProcess.ProcessName} (PID {processId}), " +
                    $"tiempo de ejecución {processTime} y ejecutando el juego {gameTitle}");
            }
        }
        else
        {
            UnityEngine.Debug.Log($"No se encontró el proceso {ProcessName}");
        }
    }
}
