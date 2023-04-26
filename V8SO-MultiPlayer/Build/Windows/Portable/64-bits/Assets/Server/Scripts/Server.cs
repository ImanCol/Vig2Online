using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
public class Server
{
    public delegate void PacketHandler(int _fromClient, Packet_2 _packet);

    public static Dictionary<int, Client_2> clients = new Dictionary<int, Client_2>();

    public static Dictionary<int, PacketHandler> packetHandlers;

    private static TcpListener tcpListener;

    private static UdpClient udpListener;

    public static int MaxPlayers
    {
        get;
        private set;
    }

    public static int Port
    {
        get;
        private set;
    }

    public static void Start(int _maxPlayers, int _port)
    {
        MaxPlayers = _maxPlayers;
        Port = int.Parse(UIManager.instance.serverPORTField.text);
        UnityEngine.Debug.Log("Starting server...");
        InitializeServerData();
        tcpListener = new TcpListener(IPAddress.Any, Port);
        tcpListener.Start();
        tcpListener.BeginAcceptTcpClient(TCPConnectCallback, null);
        udpListener = new UdpClient(Port);
        udpListener.BeginReceive(UDPReceiveCallback, null);
        UnityEngine.Debug.Log($"Server started on port {Port}.");
    }

    private static void TCPConnectCallback(IAsyncResult _result)
    {
        TcpClient tcpClient = tcpListener.EndAcceptTcpClient(_result);
        tcpListener.BeginAcceptTcpClient(TCPConnectCallback, null);
        UnityEngine.Debug.Log($"Incoming connection from {tcpClient.Client.RemoteEndPoint}...");
        for (int i = 1; i <= MaxPlayers; i++)
        {
            if (clients[i].tcp.socket == null)
            {
                clients[i].tcp.Connect(tcpClient);
                return;
            }
        }
        UnityEngine.Debug.Log($"{tcpClient.Client.RemoteEndPoint} failed to connect: Server full!");
    }

    private static void UDPReceiveCallback(IAsyncResult _result)
    {
        try
        {
            IPEndPoint remoteEP = new IPEndPoint(IPAddress.Any, 0);
            byte[] array = udpListener.EndReceive(_result, ref remoteEP);
            udpListener.BeginReceive(UDPReceiveCallback, null);
            if (array.Length >= 4)
            {
                using (Packet_2 packet = new Packet_2(array))
                {
                    int num = packet.ReadInt();
                    if (num != 0)
                    {
                        if (clients[num].udp.endPoint == null)
                        {
                            clients[num].udp.Connect(remoteEP);
                        }
                        else if (clients[num].udp.endPoint.ToString() == remoteEP.ToString())
                        {
                            clients[num].udp.HandleData(packet);
                        }
                    }
                }
            }
        }
        catch (Exception arg)
        {
            UnityEngine.Debug.Log($"Error receiving UDP data: {arg}");
        }
    }

    public static void SendUDPData(IPEndPoint _clientEndPoint, Packet_2 _packet)
    {
        try
        {
            if (_clientEndPoint != null)
            {
                udpListener.BeginSend(_packet.ToArray(), _packet.Length(), _clientEndPoint, null, null);
            }
        }
        catch (Exception arg)
        {
            UnityEngine.Debug.Log($"Error sending data to {_clientEndPoint} via UDP: {arg}");
        }
    }

    private static void InitializeServerData()
    {
        for (int i = 1; i <= MaxPlayers; i++)
        {
            clients.Add(i, new Client_2(i));
        }
        packetHandlers = new Dictionary<int, PacketHandler>
        {
            {
                1,
                ServerHandle.WelcomeReceived
            },
            {
                2,
                ServerHandle.HostMap
            },
            {
                3,
                ServerHandle.PlayerReady
            },
            {
                4,
                ServerHandle.PlayerCharacter
            },
            {
                5,
                ServerHandle.MapLoaded
            },
            {
                6,
                ServerHandle.PlayerStats
            },
            {
                7,
                ServerHandle.PlayerMovement
            },
            {
                8,
                ServerHandle.PlayerStatus
            },
            {
                9,
                ServerHandle.PlayerTrailer
            },
            {
                10,
                ServerHandle.PlayerWeapons
            },
            {
                11,
                ServerHandle.PlayerShoot
            },
            {
                12,
                ServerHandle.DropWeapon
            },
            {
                13,
                ServerHandle.TrailerDetach
            },
            {
                14,
                ServerHandle.PlayerDie
            }
        };
        UnityEngine.Debug.Log("Initialized packets.");
    }

    public static void Stop()
    {
        if (GameManager.instance.GetComponent<NetworkManager>().enabled)
        {
            tcpListener.Stop();
            udpListener.Close();
        }
    }
}