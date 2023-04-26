using Discord;
using System;
using UnityEngine;

public class DiscordManager : MonoBehaviour
{
    public static DiscordManager instance;

    public Discord.Discord discord;

    public string details;

    public string state;

    public int partySize;

    public int partyMax;

    public int mapID;

    private const long CLIENT_ID = 814993856163479584L;

    private ActivityManager activityManager;

    private Activity activity;

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

    private void Start()
    {
        discord = new Discord.Discord(814993856163479584L, 1uL);
        activityManager = discord.GetActivityManager();
        activity = new Activity
        {
            Details = details,
            State = state,
            Timestamps =
            {
                Start = ToUnixTime(DateTime.UtcNow),
                End = 0L
            }
        };
        activityManager.UpdateActivity(activity, delegate (Result res)
        {
            if (res == Result.Ok)
            {
                UnityEngine.Debug.Log("Discord status set!");
            }
            else
            {
                UnityEngine.Debug.LogError("Discord status failed!");
            }
        });
    }

    private void Update()
    {
        discord?.RunCallbacks();
        UpdatePresence();
    }

    private void UpdatePresence()
    {
        if (discord != null)
        {
            activity.Details = details;
            activity.State = state;
            activity.Party.Size.CurrentSize = partySize;
            activity.Party.Size.MaxSize = partyMax;
            activity.Assets.LargeImage = "55369--vigilante-8-2nd-offense";
            if (mapID == -1)
            {
                activity.Assets.SmallImage = "None";
            }
            else
            {
                activity.Assets.SmallImage = UIManager.instance.mapSprites[mapID].name.ToLower();
            }
            activityManager.UpdateActivity(activity, delegate
            {
            });
        }
    }

    private void OnApplicationQuit()
    {
//        Debug.Log(discord);
        discord?.Dispose();
    }

    public static long ToUnixTime(DateTime date)
    {
        DateTime d = new DateTime(1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
//        Debug.Log(d);
        return Convert.ToInt64((date - d).TotalSeconds);
    }
}