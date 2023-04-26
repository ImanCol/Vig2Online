using Unity.Jobs;

public struct TrailerJob : IJob
{
	public uint trailerAddr;

	public uint wheelsAddr1;

	public uint wheelsAddr2;

	public Trailer trailer;

	public void Execute()
	{
		LegacyMemoryReader.WriteInt32(trailerAddr + 52, trailer.positionX);
		LegacyMemoryReader.WriteInt32(trailerAddr + 56, trailer.positionY);
		LegacyMemoryReader.WriteInt32(trailerAddr + 60, trailer.positionZ);
		LegacyMemoryReader.WriteInt32(trailerAddr + 32, trailer.rotation1);
		LegacyMemoryReader.WriteInt32(trailerAddr + 36, trailer.rotation2);
		LegacyMemoryReader.WriteInt32(trailerAddr + 40, trailer.rotation3);
		LegacyMemoryReader.WriteInt32(trailerAddr + 44, trailer.rotation4);
		LegacyMemoryReader.WriteInt32(trailerAddr + 48, trailer.rotation5);
		LegacyMemoryReader.WriteInt32(wheelsAddr1 + 40, trailer.wheelsRotation1);
		LegacyMemoryReader.WriteInt32(wheelsAddr1 + 44, trailer.wheelsRotation2);
		LegacyMemoryReader.WriteInt32(wheelsAddr1 + 48, trailer.wheelsRotation3);
		LegacyMemoryReader.WriteInt32(wheelsAddr2 + 40, trailer.wheelsRotation4);
		LegacyMemoryReader.WriteInt32(wheelsAddr2 + 44, trailer.wheelsRotation5);
		LegacyMemoryReader.WriteInt32(wheelsAddr2 + 48, trailer.wheelsRotation6);
		LegacyMemoryReader.WriteInt32(trailerAddr + 128, trailer.physics1);
		LegacyMemoryReader.WriteInt32(trailerAddr + 132, trailer.physics2);
		LegacyMemoryReader.WriteInt32(trailerAddr + 136, trailer.physics3);
		LegacyMemoryReader.WriteInt32(trailerAddr + 144, trailer.physics4);
		LegacyMemoryReader.WriteInt32(trailerAddr + 148, trailer.physics5);
		LegacyMemoryReader.WriteInt32(trailerAddr + 152, trailer.physics6);
	}
}
