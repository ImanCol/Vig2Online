using Unity.Jobs;

public struct BonusJob : IJob
{
	public uint address;

	public short doubleDamage;

	public short shield;

	public short jammer;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt16(address + 302, doubleDamage);
		LegacyMemoryReader.WriteInt16(address + 304, shield);
		LegacyMemoryReader.WriteInt16(address + 306, jammer);
	}
}
