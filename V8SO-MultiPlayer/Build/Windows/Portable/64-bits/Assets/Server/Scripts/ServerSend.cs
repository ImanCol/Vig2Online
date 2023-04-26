using System.Diagnostics;
using UnityEngine;

public class ServerSend
{
	private static void SendTCPData(int _toClient, Packet_2 _packet)
	{
		_packet.WriteLength();
		Server.clients[_toClient].tcp.SendData(_packet);
        UnityEngine.Debug.Log("Message from server:" + " Toc-Toc!");
	}

	private static void SendUDPData(int _toClient, Packet_2 _packet)
	{
		_packet.WriteLength();
		Server.clients[_toClient].udp.SendData(_packet);
	}

	private static void SendTCPDataToAll(Packet_2 _packet)
	{
		_packet.WriteLength();
		for (int i = 1; i <= Server.MaxPlayers; i++)
		{
			Server.clients[i].tcp.SendData(_packet);
		}
	}

	private static void SendTCPDataToAll(int _exceptClient, Packet_2 _packet)
	{
		_packet.WriteLength();
		for (int i = 1; i <= Server.MaxPlayers; i++)
		{
			if (i != _exceptClient)
			{
				Server.clients[i].tcp.SendData(_packet);
			}
		}
	}

	private static void SendUDPDataToAll(Packet_2 _packet)
	{
		_packet.WriteLength();
		for (int i = 1; i <= Server.MaxPlayers; i++)
		{
			Server.clients[i].udp.SendData(_packet);
		}
	}

	private static void SendUDPDataToAll(int _exceptClient, Packet_2 _packet)
	{
		_packet.WriteLength();
		for (int i = 1; i <= Server.MaxPlayers; i++)
		{
			if (i != _exceptClient)
			{
				Server.clients[i].udp.SendData(_packet);
			}
		}
	}

	public static void Welcome(int _toClient, string _msg)
	{
		using (Packet_2 packet = new Packet_2(1))
		{
			packet.Write(_msg);
			packet.Write(_toClient);
			SendTCPData(_toClient, packet);
		}
	}

	public static void SpawnPlayer(int _toClient, Player _player)
	{
		using (Packet_2 packet = new Packet_2(2))
		{
			packet.Write(_player.id);
			packet.Write(_player.username);
			packet.Write(_player.character);
			packet.Write(_player.ready);
			SendTCPData(_toClient, packet);
		}
	}

	public static void SelectMap(int _hostId, byte _map)
	{
		using (Packet_2 packet = new Packet_2(3))
		{
			packet.Write(_map);
			SendTCPDataToAll(_hostId, packet);
		}
	}

	public static void StartGame(int _toClient, SpawnPoint _spawnPoint)
	{
		using (Packet_2 packet = new Packet_2(4))
		{
			packet.Write(_spawnPoint.rot1);
			packet.Write(_spawnPoint.rot2);
			packet.Write(_spawnPoint.x);
			packet.Write(_spawnPoint.y);
			packet.Write(_spawnPoint.z);
			SendTCPData(_toClient, packet);
		}
	}

	public static void PlayerReady(int _playerId, byte _character)
	{
		using (Packet_2 packet = new Packet_2(5))
		{
			packet.Write(_playerId);
			packet.Write(_character);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void PlayerCharacter(int _playerId, byte _character)
	{
		using (Packet_2 packet = new Packet_2(6))
		{
			packet.Write(_playerId);
			packet.Write(_character);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void PlayerMaxHealth(Player _player)
	{
		using (Packet_2 packet = new Packet_2(7))
		{
			packet.Write(_player.id);
			packet.Write(_player.stats.maxFullHealth);
			packet.Write(_player.stats.maxHalfHealth);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerPosition(Player _player)
	{
		using (Packet_2 packet = new Packet_2(8))
		{
			packet.Write(_player.id);
			packet.Write(_player.movement.positionX);
			packet.Write(_player.movement.positionY);
			packet.Write(_player.movement.positionZ);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerRotation(Player _player)
	{
		using (Packet_2 packet = new Packet_2(9))
		{
			packet.Write(_player.id);
			packet.Write(_player.movement.rotSin);
			packet.Write(_player.movement.rotCos);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerControls(Player _player)
	{
		using (Packet_2 packet = new Packet_2(10))
		{
			packet.Write(_player.id);
			packet.Write(_player.movement.acceleration);
			packet.Write(_player.movement.turning);
			packet.Write(_player.movement.direction);
			packet.Write(_player.movement.ignition);
			packet.Write(_player.movement.breaking);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerPhysics(Player _player)
	{
		using (Packet_2 packet = new Packet_2(11))
		{
			packet.Write(_player.id);
			packet.Write(_player.movement.physics1);
			packet.Write(_player.movement.physics2);
			packet.Write(_player.movement.physics3);
			packet.Write(_player.movement.physics4);
			packet.Write(_player.movement.physics5);
			packet.Write(_player.movement.physics6);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerTrailer(Player _player)
	{
		using (Packet_2 packet = new Packet_2(12))
		{
			packet.Write(_player.id);
			packet.Write(_player.trailer.positionX);
			packet.Write(_player.trailer.positionY);
			packet.Write(_player.trailer.positionZ);
			packet.Write(_player.trailer.rotation1);
			packet.Write(_player.trailer.rotation2);
			packet.Write(_player.trailer.rotation3);
			packet.Write(_player.trailer.rotation4);
			packet.Write(_player.trailer.rotation5);
			packet.Write(_player.trailer.wheelsRotation1);
			packet.Write(_player.trailer.wheelsRotation2);
			packet.Write(_player.trailer.wheelsRotation3);
			packet.Write(_player.trailer.wheelsRotation4);
			packet.Write(_player.trailer.wheelsRotation5);
			packet.Write(_player.trailer.wheelsRotation6);
			packet.Write(_player.trailer.physics1);
			packet.Write(_player.trailer.physics2);
			packet.Write(_player.trailer.physics3);
			packet.Write(_player.trailer.physics4);
			packet.Write(_player.trailer.physics5);
			packet.Write(_player.trailer.physics6);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerDisconnected(int _playerId)
	{
		using (Packet_2 packet = new Packet_2(13))
		{
			packet.Write(_playerId);
			SendTCPDataToAll(packet);
		}
	}

	public static void PlayerHealth(Player _player)
	{
		using (Packet_2 packet = new Packet_2(14))
		{
			packet.Write(_player.id);
			packet.Write(_player.status.health1);
			packet.Write(_player.status.health2);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerPickup(Player _player)
	{
		using (Packet_2 packet = new Packet_2(15))
		{
			packet.Write(_player.id);
			packet.Write(_player.status.wheels);
			packet.Write(_player.status.weaponSlot);
			packet.Write(_player.status.mg);
			packet.Write(_player.status.target);
			packet.Write(_player.status.doubleDamage);
			packet.Write(_player.status.shield);
			packet.Write(_player.status.jammer);
			SendUDPDataToAll(_player.id, packet);
		}
	}

	public static void PlayerWeapons(int _playerId, byte _weapon, short _ammo, byte _slot)
	{
		using (Packet_2 packet = new Packet_2(17))
		{
			packet.Write(_playerId);
			packet.Write(_weapon);
			packet.Write(_ammo);
			packet.Write(_slot);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void PlayerAttack(int _playerId, short _attack)
	{
		using (Packet_2 packet = new Packet_2(16))
		{
			packet.Write(_playerId);
			packet.Write(_attack);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void DropWeapon(int _playerId, byte _drop, byte _slot)
	{
		using (Packet_2 packet = new Packet_2(18))
		{
			packet.Write(_playerId);
			packet.Write(_drop);
			packet.Write(_slot);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void TrailerDetach(int _playerId, byte _trailer)
	{
		using (Packet_2 packet = new Packet_2(19))
		{
			packet.Write(_playerId);
			packet.Write(_trailer);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void PlayerDie(int _playerId, byte _die)
	{
		using (Packet_2 packet = new Packet_2(20))
		{
			packet.Write(_playerId);
			packet.Write(_die);
			SendTCPDataToAll(_playerId, packet);
		}
	}

	public static void PlayerRespawned(Player _player)
	{
		using (Packet_2 packet = new Packet_2(21))
		{
			packet.Write(_player.id);
			SendTCPDataToAll(packet);
		}
	}
}
