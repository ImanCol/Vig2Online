using System.Net;
using UnityEngine;

public class ClientHandle : MonoBehaviour
{
	public static void Welcome(Packet _packet)
	{
		string str = _packet.ReadString();
		int myId = _packet.ReadInt();
		UnityEngine.Debug.Log("Message from server: " + str);
		Client.instance.myId = myId;
		ClientSend.WelcomeReceived();
		Client.instance.udp.Connect(((IPEndPoint)Client.instance.tcp.socket.Client.LocalEndPoint).Port);
	}

	public static void SpawnPlayer(Packet _packet)
	{
		int num = _packet.ReadInt();
		string username = _packet.ReadString();
		byte b = _packet.ReadByte();
		byte b2 = (byte)((!_packet.ReadBool()) ? 1 : 3);
		GameManager.instance.SpawnPlayer(num, username);
		GameManager.players[num].isHost = (num == 1);
		if (Client.instance.myId == num)
		{
			if (num == 1)
			{
				LegacyMemoryReader.WriteByte(2147894400u, 1);
			}
			else
			{
				LegacyMemoryReader.WriteByte(2147894400u, 0);
			}
			UIManager.instance.ConnectionSuccessful();
		}
		else
		{
			GameManager.players[num].characterID = b;
			GameManager.players[num].status = b2;
			int playerInGameID = GameManager.GetPlayerInGameID(num);
			LegacyMemoryReader.WriteByte((uint)(-2147043082 + (playerInGameID - 1)), b);
			LegacyMemoryReader.WriteByte((uint)(-2147043324 + (playerInGameID - 1)), b2);
		}
	}

	public static void SelectMap(Packet _packet)
	{
		byte b = _packet.ReadByte();
		LegacyMemoryReader.WriteByte(2147922968u, b);
		UIManager.instance.UpdateMapPanel(b);
		GameManager.SetMap(b);
	}

	public static void StartGame(Packet _packet)
	{
		int @int = _packet.ReadInt();
		int int2 = _packet.ReadInt();
		int int3 = _packet.ReadInt();
		int int4 = _packet.ReadInt();
		int int5 = _packet.ReadInt();
		GameManager.players[Client.instance.myId].isReady = true;
		LegacyMemoryReader.WriteByte(2147894401u, 1);
		LegacyMemoryReader.WriteInt32(2147894480u, @int);
		LegacyMemoryReader.WriteInt32(2147894484u, int2);
		LegacyMemoryReader.WriteInt32(2147894488u, int3);
		LegacyMemoryReader.WriteInt32(2147894492u, int4);
		LegacyMemoryReader.WriteInt32(2147894496u, int5);
	}

	public static void PlayerMaxHealth(Packet _packet)
	{
		int key = _packet.ReadInt();
		short maxFull = _packet.ReadShort();
		short maxHalf = _packet.ReadShort();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetMaxHealth(maxFull, maxHalf);
		}
	}

	public static void PlayerPosition(Packet _packet)
	{
		int key = _packet.ReadInt();
		int x = _packet.ReadInt();
		int y = _packet.ReadInt();
		int z = _packet.ReadInt();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetPosition(x, y, z);
		}
	}

	public static void PlayerRotation(Packet _packet)
	{
		int key = _packet.ReadInt();
		Debug.Log("PlayControl:" + key);
		short sin = _packet.ReadShort();
		short cos = _packet.ReadShort();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetRotation(sin, cos);
		}
	}

	public static void PlayerControls(Packet _packet)
	{
		int key = _packet.ReadInt();
		Debug.Log("PlayControl:" + key);
		short a = _packet.ReadShort();
		short t = _packet.ReadShort();
		short d = _packet.ReadShort();
		short i = _packet.ReadShort();
		byte b = _packet.ReadByte();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetControls(a, t, d, i, b);
		}
	}

	public static void PlayerPhysics(Packet _packet)
	{
		int key = _packet.ReadInt();
		int num = _packet.ReadInt();
		int num2 = _packet.ReadInt();
		int num3 = _packet.ReadInt();
		int num4 = _packet.ReadInt();
		int num5 = _packet.ReadInt();
		int num6 = _packet.ReadInt();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetPhysics(new int[6]
			{
				num,
				num2,
				num3,
				num4,
				num5,
				num6
			});
		}
	}

	public static void PlayerTrailer(Packet _packet)
	{
		int key = _packet.ReadInt();
		Trailer trailer = default(Trailer);
		trailer.positionX = _packet.ReadInt();
		trailer.positionY = _packet.ReadInt();
		trailer.positionZ = _packet.ReadInt();
		trailer.rotation1 = _packet.ReadInt();
		trailer.rotation2 = _packet.ReadInt();
		trailer.rotation3 = _packet.ReadInt();
		trailer.rotation4 = _packet.ReadInt();
		trailer.rotation5 = _packet.ReadInt();
		trailer.wheelsRotation1 = _packet.ReadInt();
		trailer.wheelsRotation2 = _packet.ReadInt();
		trailer.wheelsRotation3 = _packet.ReadInt();
		trailer.wheelsRotation4 = _packet.ReadInt();
		trailer.wheelsRotation5 = _packet.ReadInt();
		trailer.wheelsRotation6 = _packet.ReadInt();
		trailer.physics1 = _packet.ReadInt();
		trailer.physics2 = _packet.ReadInt();
		trailer.physics3 = _packet.ReadInt();
		trailer.physics4 = _packet.ReadInt();
		trailer.physics5 = _packet.ReadInt();
		trailer.physics6 = _packet.ReadInt();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetTrailer(trailer);
		}
	}

	public static void PlayerReady(Packet _packet)
	{
		int num = _packet.ReadInt();
		byte b = _packet.ReadByte();
		GameManager.players[num].characterID = b;
		GameManager.players[num].status = 3;
		int playerInGameID = GameManager.GetPlayerInGameID(num);
		if (GameManager.players[Client.instance.myId].isReady)
		{
			LegacyMemoryReader.WriteByte(2147894403u, b);
			LegacyMemoryReader.WriteByte(2147894402u, (byte)playerInGameID);
		}
		else
		{
			LegacyMemoryReader.WriteByte((uint)(-2147043082 + (playerInGameID - 1)), b);
			LegacyMemoryReader.WriteByte((uint)(-2147043324 + (playerInGameID - 1)), 3);
		}
	}

	public static void PlayerCharacter(Packet _packet)
	{
		int num = _packet.ReadInt();
		byte b = _packet.ReadByte();
		GameManager.players[num].characterID = b;
		GameManager.players[num].status = 1;
		int playerInGameID = GameManager.GetPlayerInGameID(num);
		if (GameManager.players[Client.instance.myId].isReady)
		{
			LegacyMemoryReader.WriteByte(2147894403u, b);
			LegacyMemoryReader.WriteByte(2147894404u, (byte)playerInGameID);
		}
		else
		{
			LegacyMemoryReader.WriteByte((uint)(-2147043082 + (playerInGameID - 1)), b);
			LegacyMemoryReader.WriteByte((uint)(-2147043324 + (playerInGameID - 1)), 1);
		}
	}

	public static void PlayerDisconnected(Packet _packet)
	{
		int num = _packet.ReadInt();
		int playerInGameID = GameManager.GetPlayerInGameID(num);
		if (GameManager.players[Client.instance.myId].isReady)
		{
			LegacyMemoryReader.WriteByte(2147894405u, (byte)playerInGameID);
		}
		else
		{
			LegacyMemoryReader.WriteByte((uint)(-2147043324 + (playerInGameID - 1)), 0);
		}
		UnityEngine.Object.Destroy(GameManager.players[num].gameObject);
		GameManager.players.Remove(num);
	}

	public static void PlayerHealth(Packet _packet)
	{
		int key = _packet.ReadInt();
		short h = _packet.ReadShort();
		short h2 = _packet.ReadShort();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetHealth(h, h2);
		}
	}

	public static void PlayerPickup(Packet _packet)
	{
		int key = _packet.ReadInt();
		byte wheels = _packet.ReadByte();
		byte s = _packet.ReadByte();
		byte gun = _packet.ReadByte();
		byte target = _packet.ReadByte();
		short d = _packet.ReadShort();
		short s2 = _packet.ReadShort();
		short j = _packet.ReadShort();
		if (GameManager.InLevel())
		{
			GameManager.players[key].SetWheels(wheels);
			GameManager.players[key].SetWeaponSlot(s, gun);
			GameManager.players[key].SetTarget(target);
			GameManager.players[key].SetBonus(d, s2, j);
		}
	}

	public static void PlayerAttack(Packet _packet)
	{
		int num = _packet.ReadInt();
		short num2 = _packet.ReadShort();
		if (GameManager.InLevel())
		{
			int num3 = num2 & 0xFFF;
			int num4 = num2 >> 12;
			if (num3 != 0)
			{
				num4 = GameManager.players[num].GetWeaponFromCombo(num3);
			}
			int playerInGameID = GameManager.GetPlayerInGameID(num);
			_Action item = default(_Action);
			item.a1 = 0;
			item.arg2 = 0;
			item.arg3 = 0;
			item.arg4 = 0;
			item.a2 = (short)((playerInGameID << 12) + num3);
			item.arg1 = (byte)num4;
			GameManager.actions.Enqueue(item);
		}
	}

	public static void PlayerWeapons(Packet _packet)
	{
		int id = _packet.ReadInt();
		byte arg = _packet.ReadByte();
		short arg2 = _packet.ReadShort();
		byte arg3 = _packet.ReadByte();
		if (GameManager.InLevel())
		{
			int playerInGameID = GameManager.GetPlayerInGameID(id);
			_Action item = default(_Action);
			item.a2 = 0;
			item.arg1 = 0;
			item.a1 = (byte)playerInGameID;
			item.arg2 = arg;
			item.arg3 = arg2;
			item.arg4 = arg3;
			GameManager.actions.Enqueue(item);
		}
	}

	public static void DropWeapon(Packet _packet)
	{
		int id = _packet.ReadInt();
		byte arg = _packet.ReadByte();
		byte arg2 = _packet.ReadByte();
		if (GameManager.InLevel())
		{
			int playerInGameID = GameManager.GetPlayerInGameID(id);
			_Action item = default(_Action);
			item.a2 = 0;
			item.arg1 = 0;
			item.arg3 = 0;
			item.a1 = (byte)playerInGameID;
			item.arg2 = arg;
			item.arg4 = arg2;
			GameManager.actions.Enqueue(item);
		}
	}

	public static void TrailerDetach(Packet _packet)
	{
		int id = _packet.ReadInt();
		byte arg = _packet.ReadByte();
		if (GameManager.InLevel())
		{
			int playerInGameID = GameManager.GetPlayerInGameID(id);
			_Action item = default(_Action);
			item.a2 = 0;
			item.arg1 = 0;
			item.arg3 = 0;
			item.arg4 = 0;
			item.a1 = (byte)playerInGameID;
			item.arg2 = arg;
			GameManager.actions.Enqueue(item);
		}
	}

	public static void PlayerDie(Packet _packet)
	{
		int num = _packet.ReadInt();
		byte arg = _packet.ReadByte();
		if (GameManager.InLevel() && !GameManager.players[num].isWrecked)
		{
			int playerInGameID = GameManager.GetPlayerInGameID(num);
			GameManager.players[num].isWrecked = true;
			_Action item = default(_Action);
			item.a2 = 0;
			item.arg1 = 0;
			item.arg3 = 0;
			item.arg4 = 0;
			item.a1 = (byte)playerInGameID;
			item.arg2 = arg;
			GameManager.actions.Enqueue(item);
		}
	}

	public static void PlayerRespawned(Packet _packet)
	{
		int key = _packet.ReadInt();
		GameManager.players[key].Respawn();
	}
}
