using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class Scanner
{
	private static byte[] ReadMemory(IntPtr handle, IntPtr address, int size)
	{
		byte[] array = new byte[size];
		ReadProcessMemory(handle, address, array, array.Length, out IntPtr _);
		return array;
	}

	private static bool WriteMemory(IntPtr handle, IntPtr address, byte[] data)
	{
		UIntPtr lpNumberOfBytesWritten;
		return WriteProcessMemory(handle, address, data, (uint)data.Length, out lpNumberOfBytesWritten);
	}

	public static IntPtr OpenProcess(int id)
	{
		return OpenProcess(2035711, bInheritHandle: true, id);
	}

	public static List<IntPtr> FindData(IntPtr handle, byte[] data)
	{
		List<IntPtr> list = new List<IntPtr>();
		IntPtr address = new IntPtr(0);
		IntPtr endaddress = new IntPtr(2130706432);
		Queue<byte> queue = new Queue<byte>();
		int num = 2048;
		address = Fill(queue, handle, address, num, endaddress);
		int num2 = 0;
		IntPtr intPtr = IntPtr.Zero;
		while (queue.Count > 0)
		{
			if (queue.Count < num / 2)
			{
				address = Fill(queue, handle, address, num, endaddress);
			}
			if (queue.Dequeue() == data[num2])
			{
				if (num2 == 0)
				{
					intPtr = IntPtr.Subtract(address, queue.Count + 1);
				}
				num2++;
			}
			else
			{
				num2 = 0;
			}
			if (num2 == data.Length)
			{
				ReadMemory(handle, intPtr, data.Length * 2);
				num2 = 0;
				list.Add(intPtr);
				return list;
			}
		}
		return list;
	}

	private static IntPtr Fill(Queue<byte> data, IntPtr handle, IntPtr address, int buffsize, IntPtr endaddress)
	{
		if ((int)address >= (int)endaddress)
		{
			return address;
		}
		IntPtr lpNumberOfBytesRead = IntPtr.Zero;
		byte[] array = new byte[buffsize];
		IntPtr intPtr = address;
		while ((int)lpNumberOfBytesRead == 0 && (int)intPtr < (int)endaddress)
		{
			double num = (double)(long)intPtr / (double)(long)endaddress;
			ReadProcessMemory(handle, intPtr, array, array.Length, out lpNumberOfBytesRead);
			for (int i = 0; i < (int)lpNumberOfBytesRead; i++)
			{
				data.Enqueue(array[i]);
			}
			intPtr = (((int)lpNumberOfBytesRead > 0) ? IntPtr.Add(intPtr, (int)lpNumberOfBytesRead) : IntPtr.Add(intPtr, buffsize));
		}
		return intPtr;
	}

	private static uint GetError()
	{
		return GetLastError();
	}

	[DllImport("kernel32.dll", SetLastError = true)]
	private static extern bool ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [Out] byte[] lpBuffer, int dwSize, out IntPtr lpNumberOfBytesRead);

	[DllImport("kernel32.dll", SetLastError = true)]
	private static extern bool WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, byte[] lpBuffer, uint nSize, out UIntPtr lpNumberOfBytesWritten);

	[DllImport("kernel32.dll")]
	private static extern IntPtr OpenProcess(int dwDesiredAccess, bool bInheritHandle, int dwProcessId);

	[DllImport("kernel32.dll")]
	private static extern uint GetLastError();
}
