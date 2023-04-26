using Unity.Jobs;

public struct PositionJob : IJob
{
	public uint address;

	public int positionX;

	public int positionY;

	public int positionZ;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt32(address + 52, positionX);
		LegacyMemoryReader.WriteInt32(address + 56, positionY);
		LegacyMemoryReader.WriteInt32(address + 60, positionZ);
	}
}
