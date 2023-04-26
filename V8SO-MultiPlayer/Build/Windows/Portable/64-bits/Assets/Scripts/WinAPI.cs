using System;
using System.Runtime.InteropServices;

internal class WinAPI
{
	[DllImport("kernel32.dll")]
	public static extern IntPtr OpenProcess(int processAccess, bool bInheritHandle, int processId);

	[DllImport("kernel32.dll", SetLastError = true)]
	public static extern bool ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [Out] byte[] lpBuffer, int dwSize, [Out] int lpNumberOfBytesRead);

	[DllImport("kernel32.dll", SetLastError = true)]
	public static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [Out] byte[] lpBuffer, int nSize, [Out] int lpNumberOfBytesWritten);

	[DllImport("kernel32.dll")]
	public static extern uint GetLastError();
}
