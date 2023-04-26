using Unity.Jobs;

public struct RotationJob : IJob
{
	public uint address;

	public short sinus;

	public short cosinus;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt16(address + 32, sinus);
		LegacyMemoryReader.WriteInt16(address + 36, cosinus);
	}
}
