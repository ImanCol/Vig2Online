using Unity.Jobs;
using UnityEngine;

public struct WheelsJob : IJob
{
	public uint mgAddress;

	public byte type;

	public void Execute()
	{
		type = (byte)Mathf.Clamp(type, 0, 3);
		LegacyMemoryReader.WriteByte(mgAddress + 26, type);
	}
}
