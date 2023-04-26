using Unity.Jobs;

public struct PhysicsJob : IJob
{
	public uint address;

	public int physics1;

	public int physics2;

	public int physics3;

	public int physics4;

	public int physics5;

	public int physics6;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt32(address + 128, physics1);
		LegacyMemoryReader.WriteInt32(address + 132, physics2);
		LegacyMemoryReader.WriteInt32(address + 136, physics3);
		LegacyMemoryReader.WriteInt32(address + 144, physics4);
		LegacyMemoryReader.WriteInt32(address + 148, physics5);
		LegacyMemoryReader.WriteInt32(address + 152, physics6);
	}
}
