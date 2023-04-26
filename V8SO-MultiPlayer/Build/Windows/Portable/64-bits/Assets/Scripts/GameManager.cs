using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    public static Dictionary<int, PlayerManager> players = new Dictionary<int, PlayerManager>();

    public static Queue<_Action> actions = new Queue<_Action>();

    public GameObject localPlayerPrefab;

    public GameObject playerPrefab;

    public string identifier;

    private bool inMatch;

    private bool mapLoaded;

    private const uint globalObjPtr = 2147924016u;

    private int mapID;

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

    private void Update()
    {
        if (InLevel() && LegacyMemoryReader.ReadByte(2147894407u) == 0 && LegacyMemoryReader.ReadInt16(2147894412u) == 0 && LegacyMemoryReader.ReadByte(2147894409u) == 0 && LegacyMemoryReader.ReadInt16(2147894414u) == 0 && actions.Count > 0)
        {
            _Action action = actions.Dequeue();
            LegacyMemoryReader.WriteByte(2147894403u, action.arg1);
            LegacyMemoryReader.WriteByte(2147894408u, action.arg2);
            LegacyMemoryReader.WriteInt16(2147894410u, action.arg3);
            LegacyMemoryReader.WriteByte(2147894404u, action.arg4);
            LegacyMemoryReader.WriteByte(2147894409u, action.a1);
            LegacyMemoryReader.WriteInt16(2147894414u, action.a2);
            Debug.Log(action);
        }
    }

    private void FixedUpdate()
    {
        if (LegacyMemoryReader.ReadUInt32(2147923996u) != 0 && LegacyMemoryReader.ReadByte(2147923992u) != 0)
        {
            if (!mapLoaded)
            {
                mapLoaded = true;
                SetPlayerAddresses();
                ClientSend.MapLoaded();
            }
        }
        else if (mapLoaded)
        {
            for (int i = 1; i <= players.Count; i++)
            {
                players[i].CompleteHandles();
                players[i].isWrecked = false;
            }
            mapLoaded = false;
            actions.Clear();
        }
        if (LegacyMemoryReader.ReadByte(2147919908u) == 0)
        {
            inMatch = true;
        }
        else
        {
            inMatch = false;
        }
    }

    private void SetPlayerAddresses()
    {
        if (!InLevel())
        {
            return;
        }
        for (int i = 1; i <= players.Count; i++)
        {
            if (i == Client.instance.myId)
            {
                players[i].Address = LegacyMemoryReader.ReadUInt32(2147923944u);
                continue;
            }
            int playerInGameID = GetPlayerInGameID(i);
            players[i].Address = LegacyMemoryReader.ReadUInt32((uint)(-2147072884 + playerInGameID * 16));
        }
    }

    public void SpawnPlayer(int _id, string _username)
    {
        GameObject gameObject = (_id != Client.instance.myId) ? UnityEngine.Object.Instantiate(playerPrefab) : UnityEngine.Object.Instantiate(localPlayerPrefab);
        gameObject.GetComponent<PlayerManager>().Initialize(_id, _username);
        players.Add(_id, gameObject.GetComponent<PlayerManager>());
        DiscordManager.instance.partySize = players.Count;
        DiscordManager.instance.partyMax = 5;
    }

    public void DestroyAll()
    {
        for (int i = 1; i <= players.Count; i++)
        {
            UnityEngine.Object.Destroy(players[i].gameObject);
            players.Remove(i);
        }
    }

    public static void SetMap(int id)
    {
        instance.mapID = id;
    }

    public static int GetMap()
    {
        return instance.mapID;
    }

    public static int GetPlayerInGameID(int id)
    {
        if (id > Client.instance.myId)
        {
            return id - 1;
        }
        return id;
    }

    public static int ConvertGameID(int id)
    {
        if (id < Client.instance.myId)
        {
            return id;
        }
        return id + 1;
    }

    public static bool InMatch()
    {
        return instance.inMatch;
    }

    public static bool InLevel()
    {
        return instance.mapLoaded;
    }

    private void Start()
    {
//        Debug.Log("Load...");
        UIManager.instance.usernameField.text = PlayerPrefs.GetString("usernameIndex");
        UIManager.instance.externalProgramRunner.programPathInputField.text = PlayerPrefs.GetString("programPathIndex");
        UIManager.instance.externalProgramRunner.programArgumentsInputField.text = PlayerPrefs.GetString("programArgumentsIndex");
        UIManager.instance.serverIPField.text = PlayerPrefs.GetString("serverIPIndex");
        UIManager.instance.serverPORTField.text = PlayerPrefs.GetString("serverPORTIndex");
    }

    public void savePrefusername()
    {
        PlayerPrefs.SetString("usernameIndex", UIManager.instance.usernameField.text);
//        Debug.Log("Save...");
    }
    public void savePrefprogramPath()
    {
//        Debug.Log("Save...");
        PlayerPrefs.SetString("programPathIndex", UIManager.instance.externalProgramRunner.programPathInputField.text);
    }

    public void savePrefprogramArguments()
    {
//        Debug.Log("Save...");
        PlayerPrefs.SetString("programArgumentsIndex", UIManager.instance.externalProgramRunner.programArgumentsInputField.text);
    }

    public void savePrefserverIP()
    {
//        Debug.Log("Save...");
        PlayerPrefs.SetString("serverIPIndex", UIManager.instance.serverIPField.text);
    }

    public void savePrefserverPORT()
    {
//        Debug.Log("Save...");
        PlayerPrefs.SetString("serverPORTIndex", UIManager.instance.serverPORTField.text);
    }

    public static uint GetTrailerAddress(uint playerAddress)
    {
        LegacyMemoryReader.ReadInt16(playerAddress + 10);
        if (LegacyMemoryReader.ReadByte(playerAddress + 220) == 4)
        {
            uint num = LegacyMemoryReader.ReadUInt32(2147924016u);
            do
            {
                uint num2 = LegacyMemoryReader.ReadUInt32(num + 8);
                if (num2 == 0)
                {
                    break;
                }
                if (LegacyMemoryReader.ReadUInt32(num2 + 192) == playerAddress)
                {
                    return num2;
                }
                num = LegacyMemoryReader.ReadUInt32(num);
            }
            while (num != 0);
            return 0u;
        }
        return 0u;
    }
}