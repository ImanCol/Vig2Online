using UnityEngine;

public class ClientSend : MonoBehaviour
{
	private static void SendTCPData(Packet _packet)
	{
		_packet.WriteLength();
		Client.instance.tcp.SendData(_packet);
	}

	private static void SendUDPData(Packet _packet)
	{
		_packet.WriteLength();
		Client.instance.udp.SendData(_packet);
	}

	public static void WelcomeReceived()
	{
		using (Packet packet = new Packet(1))
		{
			packet.Write(Client.instance.myId);
			packet.Write(UIManager.instance.usernameField.text);
			SendTCPData(packet);
		}
	}

	public static void HostMap(byte _map)
	{
		using (Packet packet = new Packet(2))
		{
			packet.Write(_map);
			SendTCPData(packet);
		}
	}

	public static void PlayerReady(byte _character)
	{
		using (Packet packet = new Packet(3))
		{
			packet.Write(_character);
			SendTCPData(packet);
		}
	}

	public static void PlayerCharacter(byte _character)
	{
		using (Packet packet = new Packet(4))
		{
			packet.Write(_character);
			SendTCPData(packet);
		}
	}

	public static void MapLoaded()
	{
		using (Packet packet = new Packet(5))
		{
			SendTCPData(packet);
		}
	}

	public static void PlayerStats(Stats _stats)
	{
		using (Packet packet = new Packet(6))
		{
			packet.Write(_stats.maxFullHealth);
			packet.Write(_stats.maxHalfHealth);
			SendUDPData(packet);
		}
	}

	public static void PlayerMovement(Movement _movement)
	{
		using (Packet packet = new Packet(7))
		{
			packet.Write(_movement.positionX);
			packet.Write(_movement.positionY);
			packet.Write(_movement.positionZ);
			packet.Write(_movement.rotSin);
			packet.Write(_movement.rotCos);
			packet.Write(_movement.acceleration);
			packet.Write(_movement.turning);
			packet.Write(_movement.direction);
			packet.Write(_movement.ignition);
			packet.Write(_movement.breaking);
			packet.Write(_movement.physics1);
			packet.Write(_movement.physics2);
			packet.Write(_movement.physics3);
			packet.Write(_movement.physics4);
			packet.Write(_movement.physics5);
			packet.Write(_movement.physics6);
			SendUDPData(packet);
		}
	}

	public static void PlayerStatus(Status _status)
	{
		using (Packet packet = new Packet(8))
		{
			packet.Write(_status.health1);
			packet.Write(_status.health2);
			packet.Write(_status.wheels);
			packet.Write(_status.weaponSlot);
			packet.Write(_status.mg);
			packet.Write(_status.target);
			packet.Write(_status.doubleDamage);
			packet.Write(_status.shield);
			packet.Write(_status.jammer);
			SendUDPData(packet);
		}
	}

	public static void PlayerTrailer(Trailer _trailer)
	{
		using (Packet packet = new Packet(9))
		{
			packet.Write(_trailer.positionX);
			packet.Write(_trailer.positionY);
			packet.Write(_trailer.positionZ);
			packet.Write(_trailer.rotation1);
			packet.Write(_trailer.rotation2);
			packet.Write(_trailer.rotation3);
			packet.Write(_trailer.rotation4);
			packet.Write(_trailer.rotation5);
			packet.Write(_trailer.wheelsRotation1);
			packet.Write(_trailer.wheelsRotation2);
			packet.Write(_trailer.wheelsRotation3);
			packet.Write(_trailer.wheelsRotation4);
			packet.Write(_trailer.wheelsRotation5);
			packet.Write(_trailer.wheelsRotation6);
			packet.Write(_trailer.physics1);
			packet.Write(_trailer.physics2);
			packet.Write(_trailer.physics3);
			packet.Write(_trailer.physics4);
			packet.Write(_trailer.physics5);
			packet.Write(_trailer.physics6);
			SendUDPData(packet);
		}
	}

	public static void PlayerWeapons(byte _weapon, short _ammo, byte _slot)
	{
		using (Packet packet = new Packet(10))
		{
			packet.Write(_weapon);
			packet.Write(_ammo);
			packet.Write(_slot);
			SendTCPData(packet);
		}
	}

	public static void PlayerShoot(short _attack)
	{
		using (Packet packet = new Packet(11))
		{
			packet.Write(_attack);
			SendTCPData(packet);
		}
	}

	public static void DropWeapon(byte _drop, byte _slot)
	{
		using (Packet packet = new Packet(12))
		{
			packet.Write(_drop);
			packet.Write(_slot);
			SendTCPData(packet);
		}
	}

	public static void TrailerDetach(byte _trailer)
	{
		using (Packet packet = new Packet(13))
		{
			packet.Write(_trailer);
			SendTCPData(packet);
		}
	}

	public static void PlayerDie(byte _die)
	{
		using (Packet packet = new Packet(14))
		{
			packet.Write(_die);
			SendTCPData(packet);
		}
	}
}
