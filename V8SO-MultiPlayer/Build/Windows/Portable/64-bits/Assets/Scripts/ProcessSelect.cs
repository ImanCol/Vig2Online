using System;
using System.Diagnostics;

public static class ProcessSelect
{
	public static bool SelectProcess(string pid)
	{
		Process[] processes = Process.GetProcesses();
		foreach (Process process in processes)
		{
			try
			{
				if (!process.HasExited && string.Compare(process.Id.ToString(), pid, StringComparison.CurrentCultureIgnoreCase) == 0)
				{
					LegacyMemoryReader.Attach(process);
					return true;
				}
			}
			catch (Exception)
			{
			}
		}
		return false;
	}
}
