using System.Collections.Generic;
using System.IO;

public class SpawnsImporter
{
	public static List<SpawnPoint> LoadAsset(string assetPath)
	{
		List<SpawnPoint> list = new List<SpawnPoint>();
		string s;
		using (BinaryReader binaryReader = new BinaryReader(File.Open(assetPath, FileMode.Open)))
		{
			s = new string(binaryReader.ReadChars((int)binaryReader.BaseStream.Length));
		}
		using (StringReader stringReader = new StringReader(s))
		{
			for (int i = 0; i < 18; i++)
			{
				stringReader.ReadLine();
				for (int j = 0; j < 5; j++)
				{
					list.Add(new SpawnPoint());
					string[] array = stringReader.ReadLine().Split(' ');
					list[i * 5 + j].rot1 = (int)uint.Parse(array[1].Trim(','));
					list[i * 5 + j].rot2 = (int)uint.Parse(array[2].Trim(','));
					list[i * 5 + j].x = (int)uint.Parse(array[3].Trim(','));
					list[i * 5 + j].y = (int)uint.Parse(array[4].Trim(','));
					list[i * 5 + j].z = (int)uint.Parse(array[5].Trim(','));
				}
				stringReader.ReadLine();
			}
			return list;
		}
	}
}
