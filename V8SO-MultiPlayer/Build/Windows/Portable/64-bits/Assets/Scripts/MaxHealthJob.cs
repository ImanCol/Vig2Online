using Unity.Jobs;

public struct MaxHealthJob : IJob
{
	public uint address;

	public short maxFullHealth;

	public short maxHalfHealth;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt16(address + 30, maxFullHealth);
		LegacyMemoryReader.WriteInt16(address + 28, maxHalfHealth);
	}
}
