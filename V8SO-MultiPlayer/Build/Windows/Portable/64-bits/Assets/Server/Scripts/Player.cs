using System.Collections;
using UnityEngine;

public class Player : MonoBehaviour
{
	public int id;

	public string username;

	public int character;

	public bool ready;

	public Movement_2 movement;

	public Status_2 status;

	public Stats_2 stats;

	public Trailer_2 trailer;

	public float health;

	public float maxHealth = 100f;

	public void Initialize(int _id, string _username)
	{
		id = _id;
		username = _username;
		health = maxHealth;
		character = 0;
		ready = false;
	}

	public void SetStats(Stats_2 _stats)
	{
		stats = _stats;
		ServerSend.PlayerMaxHealth(this);
	}

	public void SetMovement(Movement_2 _movement)
	{
		movement = _movement;
		ServerSend.PlayerPosition(this);
		ServerSend.PlayerRotation(this);
		ServerSend.PlayerControls(this);
		ServerSend.PlayerPhysics(this);
	}

	public void SetStatus(Status_2 _status)
	{
		status = _status;
		health = status.health1 + status.health2;
		ServerSend.PlayerHealth(this);
		ServerSend.PlayerPickup(this);
	}

	public void SetTrailer(Trailer_2 _trailer)
	{
		trailer = _trailer;
		ServerSend.PlayerTrailer(this);
	}

	private IEnumerator Respawn()
	{
		yield return new WaitForSeconds(5f);
		health = maxHealth;
		ServerSend.PlayerRespawned(this);
	}
}
