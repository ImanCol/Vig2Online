using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

public class Client : MonoBehaviour
{
	private delegate void PacketHandler(Packet _packet);

	public class TCP
	{
		public TcpClient socket;

		private NetworkStream stream;

		private Packet receivedData;

		private byte[] receiveBuffer;

		public void Connect()
		{
			socket = new TcpClient
			{
				ReceiveBufferSize = dataBufferSize,
				SendBufferSize = dataBufferSize
			};
			receiveBuffer = new byte[dataBufferSize];
			if (instance.ip == "v2o.ddns.net")
			{
				IPAddress address = Dns.GetHostEntry("v2o.ddns.net").AddressList[0];
				socket.BeginConnect(address, instance.port, ConnectCallback, socket);
			}
			else
			{
				socket.BeginConnect(instance.ip, instance.port, ConnectCallback, socket);
			}
		}

		private void ConnectCallback(IAsyncResult _result)
		{
			try
			{
				socket.EndConnect(_result);
			}
			catch (Exception arg)
			{
				UnityEngine.Debug.Log($"Error while connecting to the server: {arg}");
				ThreadManager.ExecuteOnMainThread(delegate
				{
					UIManager.instance.ServerDown();
				});
				return;
			}
			if (!socket.Connected)
			{
				ThreadManager.ExecuteOnMainThread(delegate
				{
					UIManager.instance.UnableToConnect();
				});
				return;
			}
			stream = socket.GetStream();
			receivedData = new Packet();
			stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
		}

		public void SendData(Packet _packet)
		{
			try
			{
				if (socket != null)
				{
					stream.BeginWrite(_packet.ToArray(), 0, _packet.Length(), null, null);
				}
			}
			catch (Exception arg)
			{
				UnityEngine.Debug.Log($"Error sending data to server via TCP: {arg}");
			}
		}

		private void ReceiveCallback(IAsyncResult _result)
		{
			try
			{
				int num = stream.EndRead(_result);
				if (num <= 0)
				{
					ThreadManager.ExecuteOnMainThread(delegate
					{
						UIManager.instance.ConnectionTimeout();
					});
					ThreadManager.ExecuteOnMainThread(delegate
					{
						GameManager.instance.DestroyAll();
					});
					instance.Disconnect();
				}
				else
				{
					byte[] array = new byte[num];
					Array.Copy(receiveBuffer, array, num);
					receivedData.Reset(HandleData(array));
					stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
				}
			}
			catch
			{
				ThreadManager.ExecuteOnMainThread(delegate
				{
					UIManager.instance.ConnectionTimeout();
				});
				ThreadManager.ExecuteOnMainThread(delegate
				{
					GameManager.instance.DestroyAll();
				});
				Disconnect();
			}
		}

		private bool HandleData(byte[] _data)
		{
			int num = 0;
			receivedData.SetBytes(_data);
			if (receivedData.UnreadLength() >= 4)
			{
				num = receivedData.ReadInt();
				if (num <= 0)
				{
					return true;
				}
			}
			while (num > 0 && num <= receivedData.UnreadLength())
			{
				byte[] _packetBytes = receivedData.ReadBytes(num);
				ThreadManager.ExecuteOnMainThread(delegate
				{
					using (Packet packet = new Packet(_packetBytes))
					{
						int key = packet.ReadInt();
						packetHandlers[key](packet);
					}
				});
				num = 0;
				if (receivedData.UnreadLength() >= 4)
				{
					num = receivedData.ReadInt();
					if (num <= 0)
					{
						return true;
					}
				}
			}
			if (num <= 1)
			{
				return true;
			}
			return false;
		}

		private void Disconnect()
		{
			instance.Disconnect();
			stream = null;
			receivedData = null;
			receiveBuffer = null;
			socket = null;
		}
	}

	public class UDP
	{
		public UdpClient socket;

		public IPEndPoint endPoint;

		public UDP()
		{
			if (instance.ip == "v2o.ddns.net")
			{
				IPAddress address = Dns.GetHostEntry("v2o.ddns.net").AddressList[0];
				endPoint = new IPEndPoint(address, instance.port);
			}
			else
			{
				endPoint = new IPEndPoint(IPAddress.Parse(instance.ip), instance.port);
			}
		}

		public void Connect(int _localPort)
		{
			socket = new UdpClient(_localPort);
			socket.Connect(endPoint);
			socket.BeginReceive(ReceiveCallback, null);
			using (Packet packet = new Packet())
			{
				SendData(packet);
			}
		}

		public void SendData(Packet _packet)
		{
			try
			{
				_packet.InsertInt(instance.myId);
				if (socket != null)
				{
					socket.BeginSend(_packet.ToArray(), _packet.Length(), null, null);
				}
			}
			catch (Exception arg)
			{
				UnityEngine.Debug.Log($"Error sending data to server via UDP: {arg}");
			}
		}

		private void ReceiveCallback(IAsyncResult _result)
		{
			try
			{
				byte[] array = socket.EndReceive(_result, ref endPoint);
				socket.BeginReceive(ReceiveCallback, null);
				if (array.Length < 4)
				{
					ThreadManager.ExecuteOnMainThread(delegate
					{
						UIManager.instance.ConnectionTimeout();
					});
					ThreadManager.ExecuteOnMainThread(delegate
					{
						GameManager.instance.DestroyAll();
					});
					instance.Disconnect();
				}
				else
				{
					HandleData(array);
				}
			}
			catch
			{
				ThreadManager.ExecuteOnMainThread(delegate
				{
					UIManager.instance.ConnectionTimeout();
				});
				ThreadManager.ExecuteOnMainThread(delegate
				{
					GameManager.instance.DestroyAll();
				});
				Disconnect();
			}
		}

		private void HandleData(byte[] _data)
		{
			using (Packet packet = new Packet(_data))
			{
				int length = packet.ReadInt();
				_data = packet.ReadBytes(length);
			}
			ThreadManager.ExecuteOnMainThread(delegate
			{
				using (Packet packet2 = new Packet(_data))
				{
					int key = packet2.ReadInt();
					packetHandlers[key](packet2);
				}
			});
		}

		private void Disconnect()
		{
			instance.Disconnect();
			endPoint = null;
			socket = null;
		}
	}

	public static Client instance;

	public static int dataBufferSize = 4096;

	public string ip = "127.0.0.1";

	public int port = 26950;

	public int myId;

	public TCP tcp;

	public UDP udp;

	private bool isConnected;

	private static Dictionary<int, PacketHandler> packetHandlers;

	private const string dnsServer = "v2o.ddns.net";

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
		if (isConnected && !LegacyMemoryReader.CheckProcess())
		{
			UIManager.instance.EmulatorClosed();
			GameManager.instance.DestroyAll();
			Disconnect();
		}
	}

	private void OnApplicationQuit()
	{
		Disconnect();
	}

	public void ConnectToServer(string ipaddress, string port_)
	{
		ip = ipaddress;
		port = int.Parse(port_);
		tcp = new TCP();
		udp = new UDP();
		InitializeClientData();
		isConnected = true;
		tcp.Connect();
	}

	private void InitializeClientData()
	{
		packetHandlers = new Dictionary<int, PacketHandler>
		{
			{
				1,
				ClientHandle.Welcome
			},
			{
				2,
				ClientHandle.SpawnPlayer
			},
			{
				3,
				ClientHandle.SelectMap
			},
			{
				4,
				ClientHandle.StartGame
			},
			{
				5,
				ClientHandle.PlayerReady
			},
			{
				6,
				ClientHandle.PlayerCharacter
			},
			{
				7,
				ClientHandle.PlayerMaxHealth
			},
			{
				8,
				ClientHandle.PlayerPosition
			},
			{
				9,
				ClientHandle.PlayerRotation
			},
			{
				10,
				ClientHandle.PlayerControls
			},
			{
				11,
				ClientHandle.PlayerPhysics
			},
			{
				12,
				ClientHandle.PlayerTrailer
			},
			{
				13,
				ClientHandle.PlayerDisconnected
			},
			{
				14,
				ClientHandle.PlayerHealth
			},
			{
				15,
				ClientHandle.PlayerPickup
			},
			{
				16,
				ClientHandle.PlayerAttack
			},
			{
				17,
				ClientHandle.PlayerWeapons
			},
			{
				18,
				ClientHandle.DropWeapon
			},
			{
				19,
				ClientHandle.TrailerDetach
			},
			{
				20,
				ClientHandle.PlayerDie
			},
			{
				21,
				ClientHandle.PlayerRespawned
			}
		};
		UnityEngine.Debug.Log("Initialized packets.");
//		UnityEngine.Debug.Log(packetHandlers);
	}

	private void Disconnect()
	{
		if (isConnected)
		{
			isConnected = false;
			tcp.socket?.Close();
			udp.socket?.Close();
			UnityEngine.Debug.Log("Disconnected from server.");
		}
	}
}
