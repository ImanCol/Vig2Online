using Unity.Jobs;

public struct TargetJob : IJob
{
	public uint address;

	public uint target;

	public void Execute()
	{
		LegacyMemoryReader.WriteUInt32(address + 240, target);
	}
}
