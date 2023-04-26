using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
	private PlayerManager playerManager;

	private bool waiting;

	private bool pickedMap;

	private bool switched;

	private int character;

	private int spectator;

	private uint controller;

	private void Awake()
	{
		playerManager = GetComponent<PlayerManager>();
	}

	private void Start()
	{
		spectator = Client.instance.myId;
		controller = 2148225691u;
		InvokeRepeating("UpdatePlayer", 2f, 0.1f);
	}

	private void Update()
	{
		if (!GameManager.InMatch())
		{
			byte b = LegacyMemoryReader.ReadByte(2147923896u);
			if (b == 112 && !waiting)
			{
				character = LegacyMemoryReader.ReadByte(2147924212u);
				playerManager.characterID = (IsHotRod(character) ? (character + 21) : character);
				playerManager.status = 3;
				ClientSend.PlayerReady((byte)playerManager.characterID);
				playerManager.isReady = true;
				waiting = true;
			}
			else
			{
				switch (b)
				{
				case 120:
				case 150:
				{
					byte b2 = LegacyMemoryReader.ReadByte(2147924212u);
					if (waiting || character != b2)
					{
						character = b2;
						playerManager.characterID = (IsHotRod(character) ? (character + 21) : character);
						playerManager.status = 1;
						ClientSend.PlayerCharacter((byte)playerManager.characterID);
						playerManager.isReady = false;
						waiting = false;
					}
					if (playerManager.isHost && !pickedMap)
					{
						byte b3 = LegacyMemoryReader.ReadByte(2147922968u);
						ClientSend.HostMap(b3);
						UIManager.instance.UpdateMapPanel(b3);
						GameManager.SetMap(b3);
						pickedMap = true;
					}
					break;
				}
				case 16:
					if (pickedMap)
					{
						pickedMap = false;
					}
					break;
				case 24:
					if (waiting)
					{
						LegacyMemoryReader.WriteByte(2147894402u, 0);
						LegacyMemoryReader.WriteByte(2147894403u, 0);
						LegacyMemoryReader.WriteByte(2147894404u, 0);
						LegacyMemoryReader.WriteByte(2147894405u, 0);
						LegacyMemoryReader.WriteByte(2147894407u, 0);
						LegacyMemoryReader.WriteByte(2147894408u, 0);
						LegacyMemoryReader.WriteByte(2147894409u, 0);
						LegacyMemoryReader.WriteInt16(2147894410u, 0);
						LegacyMemoryReader.WriteInt16(2147894412u, 0);
						LegacyMemoryReader.WriteInt16(2147894414u, 0);
						LegacyMemoryReader.WriteByte(2147924213u, byte.MaxValue);
						playerManager.isReady = false;
						waiting = false;
					}
					break;
				}
			}
			DiscordManager.instance.details = "Waiting in lobby";
			DiscordManager.instance.state = "Private";
			DiscordManager.instance.mapID = -1;
		}
		if (!GameManager.InLevel())
		{
			return;
		}
		byte b4 = LegacyMemoryReader.ReadByte(2147894407u);
		if (b4 > 0 && b4 <= 11)
		{
			short ammo = LegacyMemoryReader.ReadInt16(2147894410u);
			byte slot = LegacyMemoryReader.ReadByte(2147894404u);
			LegacyMemoryReader.WriteByte(2147894407u, 0);
			ClientSend.PlayerWeapons(b4, ammo, slot);
		}
		else if (b4 >= 12 && b4 <= 13)
		{
			LegacyMemoryReader.WriteByte(2147894407u, 0);
			ClientSend.PlayerDie(b4);
		}
		else if (b4 >= 14 && b4 <= 15)
		{
			LegacyMemoryReader.WriteByte(2147894407u, 0);
			playerManager.DetachTrailer();
			ClientSend.TrailerDetach(b4);
		}
		else if (b4 >= 16 && b4 <= 17)
		{
			byte slot2 = LegacyMemoryReader.ReadByte(2147894404u);
			LegacyMemoryReader.WriteByte(2147894407u, 0);
			ClientSend.DropWeapon(b4, slot2);
		}
		short num = LegacyMemoryReader.ReadInt16(2147894412u);
		if (num != 0)
		{
			LegacyMemoryReader.WriteInt16(2147894412u, 0);
			ClientSend.PlayerShoot(num);
		}
		if (!playerManager.IsDead())
		{
			return;
		}
		if (!switched)
		{
			if (LegacyMemoryReader.ReadByte(controller) == 247)
			{
				switched = true;
				while (spectator != 5)
				{
					spectator++;
					if (GameManager.players.ContainsKey(spectator))
					{
						Spectate(spectator);
						break;
					}
				}
			}
			else if (LegacyMemoryReader.ReadByte(controller) == 251)
			{
				switched = true;
				while (spectator != 0)
				{
					spectator--;
					if (GameManager.players.ContainsKey(spectator))
					{
						Spectate(spectator);
						break;
					}
				}
			}
		}
		if (LegacyMemoryReader.ReadByte(controller) == byte.MaxValue)
		{
			switched = false;
		}
	}

	private void UpdatePlayer()
	{
		if (GameManager.InLevel())
		{
			if (playerManager.isReady && LegacyMemoryReader.ReadByte(2147923896u) == 160)
			{
				playerManager.isReady = false;
				ClientSend.PlayerCharacter((byte)playerManager.characterID);
				int map = GameManager.GetMap();
				IList<string> list = UIManager.instance.mapNames[map].Split(',');
				DiscordManager.instance.details = "Playing at " + list[0];
				DiscordManager.instance.mapID = map;
			}
			SendStatsToServer();
			SendMovementToServer();
			if (!playerManager.IsDead())
			{
				SendStatusToServer();
			}
			if (playerManager.HasTrailer())
			{
				SendTrailerToServer();
			}
		}
	}

	private void SendMovementToServer()
	{
		uint address = playerManager.Address;
		Movement movement = default(Movement);
		movement.positionX = LegacyMemoryReader.ReadInt32(address + 52);
		movement.positionY = LegacyMemoryReader.ReadInt32(address + 56);
		movement.positionZ = LegacyMemoryReader.ReadInt32(address + 60);
		movement.rotSin = LegacyMemoryReader.ReadInt16(address + 32);
		movement.rotCos = LegacyMemoryReader.ReadInt16(address + 36);
		movement.acceleration = LegacyMemoryReader.ReadInt16(address + 170);
		movement.turning = LegacyMemoryReader.ReadInt16(address + 168);
		movement.direction = LegacyMemoryReader.ReadInt16(address + 173);
		movement.ignition = LegacyMemoryReader.ReadInt16(address + 184);
		movement.breaking = LegacyMemoryReader.ReadByte(address + 193);
		movement.physics1 = LegacyMemoryReader.ReadInt32(address + 128);
		movement.physics2 = LegacyMemoryReader.ReadInt32(address + 132);
		movement.physics3 = LegacyMemoryReader.ReadInt32(address + 136);
		movement.physics4 = LegacyMemoryReader.ReadInt32(address + 144);
		movement.physics5 = LegacyMemoryReader.ReadInt32(address + 148);
		movement.physics6 = LegacyMemoryReader.ReadInt32(address + 152);
		ClientSend.PlayerMovement(movement);
	}

	private void SendStatusToServer()
	{
		uint address = playerManager.Address;
		Status status = default(Status);
		playerManager.GetHealth(out status.health1, out status.health2);
		status.wheels = LegacyMemoryReader.ReadByte(address + 172);
		status.weaponSlot = LegacyMemoryReader.ReadByte(address + 174);
		status.mg = (byte)(playerManager.IsUsingMG() ? 12 : 4);
		uint num = LegacyMemoryReader.ReadUInt32(address + 240);
		status.target = (byte)LegacyMemoryReader.ReadInt16(num + 10);
		status.target = (byte)GameManager.ConvertGameID(status.target);
		status.doubleDamage = LegacyMemoryReader.ReadInt16(address + 302);
		status.shield = LegacyMemoryReader.ReadInt16(address + 304);
		status.jammer = LegacyMemoryReader.ReadInt16(address + 306);
		ClientSend.PlayerStatus(status);
	}

	private void SendStatsToServer()
	{
		uint address = playerManager.Address;
		Stats stats = default(Stats);
		stats.maxFullHealth = LegacyMemoryReader.ReadInt16(address + 30);
		stats.maxHalfHealth = LegacyMemoryReader.ReadInt16(address + 28);
		ClientSend.PlayerStats(stats);
	}

	private void SendTrailerToServer()
	{
		uint trailer = playerManager.Trailer;
		uint trailerWheel = playerManager.TrailerWheel1;
		uint trailerWheel2 = playerManager.TrailerWheel2;
		Trailer trailer2 = default(Trailer);
		trailer2.positionX = LegacyMemoryReader.ReadInt32(trailer + 52);
		trailer2.positionY = LegacyMemoryReader.ReadInt32(trailer + 56);
		trailer2.positionZ = LegacyMemoryReader.ReadInt32(trailer + 60);
		trailer2.rotation1 = LegacyMemoryReader.ReadInt32(trailer + 32);
		trailer2.rotation2 = LegacyMemoryReader.ReadInt32(trailer + 36);
		trailer2.rotation3 = LegacyMemoryReader.ReadInt32(trailer + 40);
		trailer2.rotation4 = LegacyMemoryReader.ReadInt32(trailer + 44);
		trailer2.rotation5 = LegacyMemoryReader.ReadInt32(trailer + 48);
		trailer2.wheelsRotation1 = LegacyMemoryReader.ReadInt32(trailerWheel + 40);
		trailer2.wheelsRotation2 = LegacyMemoryReader.ReadInt32(trailerWheel + 44);
		trailer2.wheelsRotation3 = LegacyMemoryReader.ReadInt32(trailerWheel + 48);
		trailer2.wheelsRotation4 = LegacyMemoryReader.ReadInt32(trailerWheel2 + 40);
		trailer2.wheelsRotation5 = LegacyMemoryReader.ReadInt32(trailerWheel2 + 44);
		trailer2.wheelsRotation6 = LegacyMemoryReader.ReadInt32(trailerWheel2 + 48);
		trailer2.physics1 = LegacyMemoryReader.ReadInt32(trailer + 128);
		trailer2.physics2 = LegacyMemoryReader.ReadInt32(trailer + 132);
		trailer2.physics3 = LegacyMemoryReader.ReadInt32(trailer + 136);
		trailer2.physics4 = LegacyMemoryReader.ReadInt32(trailer + 144);
		trailer2.physics5 = LegacyMemoryReader.ReadInt32(trailer + 148);
		trailer2.physics6 = LegacyMemoryReader.ReadInt32(trailer + 152);
		ClientSend.PlayerTrailer(trailer2);
	}

	private bool IsHotRod(int characterID)
	{
		byte num = LegacyMemoryReader.ReadByte((uint)(-2147042840 + characterID * 10 + 6));
		byte b = LegacyMemoryReader.ReadByte((uint)(-2147042840 + characterID * 10 + 7));
		byte b2 = LegacyMemoryReader.ReadByte((uint)(-2147042840 + characterID * 10 + 8));
		byte b3 = LegacyMemoryReader.ReadByte((uint)(-2147042840 + characterID * 10 + 9));
		if (num == 100 && b == 100 && b2 == 100)
		{
			return b3 == 100;
		}
		return false;
	}

	private void Spectate(int id)
	{
		LegacyMemoryReader.WriteByte(playerManager.Camera + 7, 1);
		LegacyMemoryReader.WriteInt16(playerManager.Camera + 146, 0);
		LegacyMemoryReader.WriteInt32(playerManager.Camera + 156, 122880);
		LegacyMemoryReader.WriteUInt32(playerManager.Camera + 128, GameManager.players[id].Address);
	}
}
