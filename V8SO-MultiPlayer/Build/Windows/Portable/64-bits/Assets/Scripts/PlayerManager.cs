using Unity.Jobs;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
	public int id;

	public string username;

	public bool isHost;

	public bool isReady;

	public bool isWrecked;

	public int characterID;

	public int status;

	public float health;

	public float maxHealth = 100f;

	private JobHandle positionHandle;

	private JobHandle rotationHandle;

	private JobHandle controlsHandle;

	private JobHandle physicsHandle;

	private JobHandle trailerHandle;

	private JobHandle healthHandle;

	private JobHandle wheelsHandle;

	private JobHandle slotHandle;

	private JobHandle bonusHandle;

	private JobHandle maxHealthHandle;

	private JobHandle targetHandle;

	private uint address;

	private uint healthAddr1;

	private uint healthAddr2;

	private uint mgAddr;

	private uint trailerAddr;

	private uint trailerWheelAddr1;

	private uint trailerWheelAddr2;

	private uint cameraAddr;

	public uint Address
	{
		get
		{
			return address;
		}
		set
		{
			address = value;
			healthAddr1 = LegacyMemoryReader.ReadUInt32(address + 248);
			healthAddr2 = LegacyMemoryReader.ReadUInt32(address + 252);
			mgAddr = LegacyMemoryReader.ReadUInt32(address + 284);
			Trailer = GameManager.GetTrailerAddress(address);
			Camera = LegacyMemoryReader.ReadUInt32(address + 236);
		}
	}

	public uint Trailer
	{
		get
		{
			return trailerAddr;
		}
		set
		{
			trailerAddr = value;
			TrailerWheel1 = LegacyMemoryReader.ReadUInt32(trailerAddr + 16);
		}
	}

	public uint TrailerWheel1
	{
		get
		{
			return trailerWheelAddr1;
		}
		set
		{
			trailerWheelAddr1 = value;
			trailerWheelAddr2 = LegacyMemoryReader.ReadUInt32(trailerWheelAddr1 + 12);
		}
	}

	public uint TrailerWheel2
	{
		get
		{
			return trailerWheelAddr2;
		}
		set
		{
			trailerWheelAddr2 = value;
		}
	}

	public uint Camera
	{
		get
		{
			return cameraAddr;
		}
		set
		{
			cameraAddr = value;
		}
	}

	public void Initialize(int _id, string _username)
	{
		id = _id;
		username = _username;
		health = maxHealth;
		if (id != Client.instance.myId)
		{
			int playerInGameID = GameManager.GetPlayerInGameID(id);
			LegacyMemoryReader.WriteString((uint)(-2147072896 + playerInGameID * 16), username);
		}
	}

	public void SetPosition(int x, int y, int z)
	{
		positionHandle.Complete();
		PositionJob positionJob = default(PositionJob);
		positionJob.address = Address;
		positionJob.positionX = x;
		positionJob.positionY = y;
		positionJob.positionZ = z;
		PositionJob jobData = positionJob;
		positionHandle = jobData.Schedule();
	}

	public void SetRotation(short sin, short cos)
	{
		rotationHandle.Complete();
		RotationJob rotationJob = default(RotationJob);
		rotationJob.address = Address;
		rotationJob.sinus = sin;
		rotationJob.cosinus = cos;
		RotationJob jobData = rotationJob;
		rotationHandle = jobData.Schedule();
	}

	public void SetControls(short a, short t, short d, short i, byte b)
	{
		controlsHandle.Complete();
		ControlsJob controlsJob = default(ControlsJob);
		controlsJob.address = Address;
		controlsJob.acceleration = a;
		controlsJob.turning = t;
		controlsJob.direction = d;
		controlsJob.ignition = i;
		controlsJob.breaking = b;
		ControlsJob jobData = controlsJob;
		controlsHandle = jobData.Schedule();
	}

	public void SetPhysics(int[] physics)
	{
		physicsHandle.Complete();
		PhysicsJob physicsJob = default(PhysicsJob);
		physicsJob.address = Address;
		physicsJob.physics1 = physics[0];
		physicsJob.physics2 = physics[1];
		physicsJob.physics3 = physics[2];
		physicsJob.physics4 = physics[3];
		physicsJob.physics5 = physics[4];
		physicsJob.physics6 = physics[5];
		PhysicsJob jobData = physicsJob;
		physicsHandle = jobData.Schedule();
	}

	public void SetTrailer(Trailer t)
	{
		trailerHandle.Complete();
		TrailerJob trailerJob = default(TrailerJob);
		trailerJob.trailerAddr = Trailer;
		trailerJob.wheelsAddr1 = TrailerWheel1;
		trailerJob.wheelsAddr2 = TrailerWheel2;
		trailerJob.trailer = t;
		TrailerJob jobData = trailerJob;
		trailerHandle = jobData.Schedule();
	}

	public void SetHealth(short h1, short h2)
	{
		healthHandle.Complete();
		if (!IsDead())
		{
			health = h1 + h2;
			HealthJob healthJob = default(HealthJob);
			healthJob.healthAddress1 = healthAddr1;
			healthJob.healthAddress2 = healthAddr2;
			healthJob.health1 = h1;
			healthJob.health2 = h2;
			HealthJob jobData = healthJob;
			healthHandle = jobData.Schedule();
			if (health <= 0f)
			{
				Die();
			}
		}
	}

	public void GetHealth(out short health1, out short health2)
	{
		health1 = 0;
		health2 = 0;
		if (healthAddr1 != 0)
		{
			health1 = LegacyMemoryReader.ReadInt16(healthAddr1 + 28);
		}
		if (healthAddr2 != 0)
		{
			health2 = LegacyMemoryReader.ReadInt16(healthAddr2 + 28);
		}
	}

	public void SetWheels(byte t)
	{
		wheelsHandle.Complete();
		WheelsJob wheelsJob = default(WheelsJob);
		wheelsJob.mgAddress = mgAddr;
		wheelsJob.type = t;
		WheelsJob jobData = wheelsJob;
		wheelsHandle = jobData.Schedule();
	}

	public void SetWeaponSlot(byte s, byte gun)
	{
		slotHandle.Complete();
		WeaponSlotJob weaponSlotJob = default(WeaponSlotJob);
		weaponSlotJob.address = Address;
		weaponSlotJob.mgAddress = mgAddr;
		weaponSlotJob.slot = s;
		weaponSlotJob.mg = gun;
		WeaponSlotJob jobData = weaponSlotJob;
		slotHandle = jobData.Schedule();
	}

	public void SetBonus(short d, short s, short j)
	{
		bonusHandle.Complete();
		BonusJob bonusJob = default(BonusJob);
		bonusJob.address = Address;
		bonusJob.doubleDamage = d;
		bonusJob.shield = s;
		bonusJob.jammer = j;
		BonusJob jobData = bonusJob;
		bonusHandle = jobData.Schedule();
	}

	public void SetMaxHealth(short maxFull, short maxHalf)
	{
		maxHealth = maxFull;
		maxHealthHandle.Complete();
		MaxHealthJob maxHealthJob = default(MaxHealthJob);
		maxHealthJob.address = Address;
		maxHealthJob.maxFullHealth = maxFull;
		maxHealthJob.maxHalfHealth = maxHalf;
		MaxHealthJob jobData = maxHealthJob;
		maxHealthHandle = jobData.Schedule();
	}

	public void SetTarget(int id)
	{
		id = Mathf.Clamp(id, 1, GameManager.players.Count);
		uint target = GameManager.players[id].Address;
		targetHandle.Complete();
		TargetJob targetJob = default(TargetJob);
		targetJob.address = Address;
		targetJob.target = target;
		TargetJob jobData = targetJob;
		targetHandle = jobData.Schedule();
	}

	public void DetachTrailer()
	{
		trailerAddr = 0u;
	}

	public byte GetWeaponFromCombo(int combo)
	{
		if (combo >= 1058 && combo <= 1060)
		{
			return 1;
		}
		if (combo >= 1090 && combo <= 1092)
		{
			return 2;
		}
		if (combo >= 578 && combo <= 580)
		{
			return 3;
		}
		if (combo >= 786 && combo <= 788)
		{
			return 6;
		}
		if (combo >= 546 && combo <= 548)
		{
			return 4;
		}
		if (combo >= 306 && combo <= 308)
		{
			return 5;
		}
		return 0;
	}

	public bool IsSlotEmpty(int slot)
	{
		return LegacyMemoryReader.ReadUInt32((uint)((int)address + (288 + slot * 4))) == 0;
	}

	public bool IsDead()
	{
		uint num = LegacyMemoryReader.ReadUInt32(address);
		if (num != 2147716260u)
		{
			return num == 2147714212u;
		}
		return true;
	}

	public bool IsUsingMG()
	{
		return LegacyMemoryReader.ReadByte(mgAddr + 24) != 0;
	}

	public bool HasTrailer()
	{
		return trailerAddr != 0;
	}

	public void Die()
	{
	}

	public void Respawn()
	{
	}

	public void CompleteHandles()
	{
		positionHandle.Complete();
		rotationHandle.Complete();
		controlsHandle.Complete();
		physicsHandle.Complete();
		trailerHandle.Complete();
		healthHandle.Complete();
		wheelsHandle.Complete();
		slotHandle.Complete();
		bonusHandle.Complete();
		maxHealthHandle.Complete();
		targetHandle.Complete();
	}

	private void OnApplicationQuit()
	{
		CompleteHandles();
	}
}
