using System;
using System.Diagnostics;
using System.Text;

public static class LegacyMemoryReader
{
	private static IntPtr _memoryHandle;

	private static Process _memoryProcess;

	private static long baseAddress;

	private static bool _isAttached
	{
		get
		{
			if (_memoryHandle != IntPtr.Zero && _memoryProcess != null)
			{
				return !_memoryProcess.HasExited;
			}
			return false;
		}
	}

	internal static void SetBaseAddress(IntPtr memoryAddress)
	{
		baseAddress = (long)memoryAddress;
		baseAddress -= 2147894112L;
	}

	internal static void Attach(Process process)
	{
		Detach();
		if (process == null || process.HasExited)
		{
			UIManager.instance.FailedToOpenProcess();
			return;
		}
		IntPtr intPtr = WinAPI.OpenProcess(56, bInheritHandle: false, process.Id);
		if (!(intPtr == IntPtr.Zero))
		{
			_memoryProcess = process;
			_memoryHandle = intPtr;
		}
	}

	internal static bool CheckProcess()
	{
		if (_memoryProcess == null || _memoryProcess.HasExited)
		{
			Detach();
			return false;
		}
		return true;
	}

	internal static void Detach()
	{
		_memoryProcess?.Dispose();
		_memoryProcess = null;
		_memoryHandle = IntPtr.Zero;
	}

	internal static int GetPID()
	{
		return _memoryProcess.Id;
	}

	public static int ReadInt32(uint address)
	{
		return BitConverter.ToInt32(ReadBytes(address, 4), 0);
	}

	public static short ReadInt16(uint address)
	{
		return BitConverter.ToInt16(ReadBytes(address, 2), 0);
	}

	public static uint ReadUInt32(uint address)
	{
		return BitConverter.ToUInt32(ReadBytes(address, 4), 0);
	}

	public static ushort ReadUInt16(uint address)
	{
		return BitConverter.ToUInt16(ReadBytes(address, 2), 0);
	}

	public static bool ReadByteFlag(uint address)
	{
		if (ReadBytes(address, 1)[0] != 1)
		{
			return false;
		}
		return true;
	}

	public static byte ReadByte(uint address)
	{
		return ReadBytes(address, 1)[0];
	}

	public static byte[] ReadBytes(uint address, int length)
	{
		if (!_isAttached)
		{
			return new byte[length];
		}
		byte[] array = new byte[length];
		int lpNumberOfBytesRead = 0;
		WinAPI.ReadProcessMemory(_memoryHandle, (IntPtr)(baseAddress + address), array, length, lpNumberOfBytesRead);
		return array;
	}

	public static bool WriteInt32(uint address, int int32)
	{
		byte[] bytes = BitConverter.GetBytes(int32);
		return WriteBytes(address, bytes);
	}

	public static bool WriteInt16(uint address, short int16)
	{
		byte[] bytes = BitConverter.GetBytes(int16);
		return WriteBytes(address, bytes);
	}

	public static bool WriteUInt32(uint address, uint uint32)
	{
		byte[] bytes = BitConverter.GetBytes(uint32);
		return WriteBytes(address, bytes);
	}

	public static bool WriteUInt16(uint address, ushort uint16)
	{
		byte[] bytes = BitConverter.GetBytes(uint16);
		return WriteBytes(address, bytes);
	}

	public static bool WriteString(uint address, string s)
	{
		byte[] bytes = Encoding.ASCII.GetBytes(s + "\0");
		return WriteBytes(address, bytes);
	}

	public static bool WriteBool(uint address, bool boolean)
	{
		byte[] bytes = BitConverter.GetBytes(boolean);
		return WriteByte(address, bytes[0]);
	}

	public static bool WriteBytes(uint address, byte[] bytes)
	{
		if (!_isAttached)
		{
			return false;
		}
		byte[] array = new byte[bytes.Length];
		bytes.CopyTo(array, 0);
		int lpNumberOfBytesWritten = 0;
		return WinAPI.WriteProcessMemory(_memoryHandle, (IntPtr)(baseAddress + address), array, array.Length, lpNumberOfBytesWritten);
	}

	public static bool WriteByte(uint address, byte bytes)
	{
		if (!_isAttached)
		{
			return false;
		}
		int lpNumberOfBytesWritten = 0;
		return WinAPI.WriteProcessMemory(_memoryHandle, (IntPtr)(baseAddress + address), new byte[1]
		{
			bytes
		}, 1, lpNumberOfBytesWritten);
	}
}
