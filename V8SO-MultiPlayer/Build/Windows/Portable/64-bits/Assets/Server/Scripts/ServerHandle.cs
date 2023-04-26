using UnityEngine;

public class ServerHandle
{
	public static void WelcomeReceived(int _fromClient, Packet_2 _packet)
	{
		int num = _packet.ReadInt();
		string text = _packet.ReadString();
		UnityEngine.Debug.Log($"{Server.clients[_fromClient].tcp.socket.Client.RemoteEndPoint} connected successfully and is now player {_fromClient}.");
		if (_fromClient != num)
		{
			UnityEngine.Debug.Log($"Player \"{text}\" (ID: {_fromClient}) has assumed the wrong client ID ({num})!");
		}
		Server.clients[_fromClient].SendIntoGame(text);
	}

	public static void HostMap(int _fromClient, Packet_2 _packet)
	{
		byte map = _packet.ReadByte();
		NetworkManager.instance.map = map;
		ServerSend.SelectMap(_fromClient, map);
	}

	public static void PlayerReady(int _fromClient, Packet_2 _packet)
	{
		byte character = _packet.ReadByte();
		Server.clients[_fromClient].player.character = character;
		Server.clients[_fromClient].player.ready = true;
		ServerSend.PlayerReady(_fromClient, character);
		NetworkManager.instance.AllReadyStart();
	}

	public static void PlayerCharacter(int _fromClient, Packet_2 _packet)
	{
		byte character = _packet.ReadByte();
		Server.clients[_fromClient].player.character = character;
		Server.clients[_fromClient].player.ready = false;
		ServerSend.PlayerCharacter(_fromClient, character);
	}

	public static void MapLoaded(int _fromClient, Packet_2 _packet)
	{
		Server.clients[_fromClient].player.ready = true;
		NetworkManager.instance.AllReadyStart();
	}

	public static void PlayerStats(int _fromClient, Packet_2 _packet)
	{
		Stats_2 stats = default(Stats_2);
		stats.maxFullHealth = _packet.ReadShort();
		stats.maxHalfHealth = _packet.ReadShort();
		Server.clients[_fromClient].player?.SetStats(stats);
	}

	public static void PlayerMovement(int _fromClient, Packet_2 _packet)
	{
		Movement_2 movement = default(Movement_2);
		movement.positionX = _packet.ReadInt();
		movement.positionY = _packet.ReadInt();
		movement.positionZ = _packet.ReadInt();
		movement.rotSin = _packet.ReadShort();
		movement.rotCos = _packet.ReadShort();
		movement.acceleration = _packet.ReadShort();
		movement.turning = _packet.ReadShort();
		movement.direction = _packet.ReadShort();
		movement.ignition = _packet.ReadShort();
		movement.breaking = _packet.ReadByte();
		movement.physics1 = _packet.ReadInt();
		movement.physics2 = _packet.ReadInt();
		movement.physics3 = _packet.ReadInt();
		movement.physics4 = _packet.ReadInt();
		movement.physics5 = _packet.ReadInt();
		movement.physics6 = _packet.ReadInt();
		Server.clients[_fromClient].player?.SetMovement(movement);
	}

	public static void PlayerStatus(int _fromClient, Packet_2 _packet)
	{
		Status_2 status = default(Status_2);
		status.health1 = _packet.ReadShort();
		status.health2 = _packet.ReadShort();
		status.wheels = _packet.ReadByte();
		status.weaponSlot = _packet.ReadByte();
		status.mg = _packet.ReadByte();
		status.target = _packet.ReadByte();
		status.doubleDamage = _packet.ReadShort();
		status.shield = _packet.ReadShort();
		status.jammer = _packet.ReadShort();
		Server.clients[_fromClient].player?.SetStatus(status);
	}

	public static void PlayerTrailer(int _fromClient, Packet_2 _packet)
	{
		Trailer_2 trailer = default(Trailer_2);
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
		Server.clients[_fromClient].player?.SetTrailer(trailer);
	}

	public static void PlayerWeapons(int _fromClient, Packet_2 _packet)
	{
		byte weapon = _packet.ReadByte();
		short ammo = _packet.ReadShort();
		byte slot = _packet.ReadByte();
		ServerSend.PlayerWeapons(_fromClient, weapon, ammo, slot);
	}

	public static void PlayerShoot(int _fromClient, Packet_2 _packet)
	{
		short attack = _packet.ReadShort();
		ServerSend.PlayerAttack(_fromClient, attack);
	}

	public static void DropWeapon(int _fromClient, Packet_2 _packet)
	{
		byte drop = _packet.ReadByte();
		byte slot = _packet.ReadByte();
		ServerSend.DropWeapon(_fromClient, drop, slot);
	}

	public static void TrailerDetach(int _fromClient, Packet_2 _packet)
	{
		byte trailer = _packet.ReadByte();
		ServerSend.TrailerDetach(_fromClient, trailer);
	}

	public static void PlayerDie(int _fromClient, Packet_2 _packet)
	{
		byte die = _packet.ReadByte();
		ServerSend.PlayerDie(_fromClient, die);
	}
}
