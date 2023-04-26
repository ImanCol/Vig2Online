using System.Collections.Generic;
using UnityEngine;

public class NetworkManager : MonoBehaviour
{
	public static NetworkManager instance;

	public GameObject playerPrefab;

	public List<SpawnPoint> spawnPoints;

	public int map;

	private void Awake()
	{
		if (instance == null)
		{
			instance = this;
		}
		else if (instance != this)
		{
			UnityEngine.Debug.Log("Instance already exists, destroying object!");
			UnityEngine.Object.Destroy(this);
		}
	}

	public void Start()
	{
		QualitySettings.vSyncCount = 0;
		Application.targetFrameRate = 30;
		Server.Start(5, 26950);
	}

	private void OnApplicationQuit()
	{
		Server.Stop();
	}

	public Player InstantiatePlayer()
	{
		return UnityEngine.Object.Instantiate(playerPrefab, new Vector3(0f, 0.5f, 0f), Quaternion.identity).GetComponent<Player>();
	}

	public void AllReadyStart()
	{
		bool flag = true;
		if (GetPlayerCount() == 1)
		{
			return;
		}
		foreach (Client_2 value in Server.clients.Values)
		{
			if (value.player != null && !value.player.ready)
			{
				flag = false;
			}
		}
		if (!flag)
		{
			return;
		}
		ServerSend.SelectMap(1, (byte)map);
		List<int> list = new List<int>();
		for (int i = 1; i <= Server.clients.Count; i++)
		{
			if (!(Server.clients[i].player == null))
			{
				int item;
				do
				{
					item = UnityEngine.Random.Range(map * 5, map * 5 + 5);
				}
				while (list.Contains(item));
				list.Add(item);
				ServerSend.StartGame(i, spawnPoints[list[i - 1]]);
				Server.clients[i].player.ready = false;
			}
		}
	}

	public int GetPlayerCount()
	{
		int num = 0;
		for (int i = 1; i <= Server.clients.Count; i++)
		{
			if (Server.clients[i].player != null)
			{
				num++;
			}
		}
		return num;
	}
}