using Unity.Jobs;
using UnityEngine;

public struct WeaponSlotJob : IJob
{
	public uint address;

	public uint mgAddress;

	public byte slot;

	public byte mg;

	public void Execute()
	{
		if (LegacyMemoryReader.ReadByte(2147894409u) == 0)
		{
			slot = (byte)Mathf.Clamp(slot, 0, 2);
			LegacyMemoryReader.WriteByte(address + 174, slot);
			LegacyMemoryReader.WriteByte(mgAddress + 25, mg);
		}
	}
}
