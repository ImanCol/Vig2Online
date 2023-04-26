using Unity.Jobs;

public struct HealthJob : IJob
{
	public uint healthAddress1;

	public uint healthAddress2;

	public short health1;

	public short health2;

	public void Execute()
	{
		if (healthAddress1 != 0)
		{
			LegacyMemoryReader.WriteInt16(healthAddress1 + 28, health1);
		}
		if (healthAddress2 != 0)
		{
			LegacyMemoryReader.WriteInt16(healthAddress2 + 28, health2);
		}
	}
}
