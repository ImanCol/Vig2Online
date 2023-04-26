using Unity.Jobs;

public struct ControlsJob : IJob
{
	public uint address;

	public short acceleration;

	public short turning;

	public short direction;

	public short ignition;

	public byte breaking;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt16(address + 170, acceleration);
		LegacyMemoryReader.WriteInt16(address + 168, turning);
		LegacyMemoryReader.WriteInt16(address + 173, direction);
		LegacyMemoryReader.WriteInt16(address + 184, ignition);
		LegacyMemoryReader.WriteByte(address + 193, breaking);
	}
}
