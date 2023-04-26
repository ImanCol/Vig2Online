using System;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

public class Client_2
{
	public class TCP
	{
		public TcpClient socket;

		private readonly int id;

		private NetworkStream stream;

		private Packet_2 receivedData;

		private byte[] receiveBuffer;

		public TCP(int _id)
		{
			id = _id;
		}

		public void Connect(TcpClient _socket)
		{
			socket = _socket;
			socket.ReceiveBufferSize = dataBufferSize;
			socket.SendBufferSize = dataBufferSize;
			stream = socket.GetStream();
			receivedData = new Packet_2();
			receiveBuffer = new byte[dataBufferSize];
			stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
			ServerSend.Welcome(id, "Welcome to the server!");
		}

		public void SendData(Packet_2 _packet)
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
				UnityEngine.Debug.Log($"Error sending data to player {id} via TCP: {arg}");
			}
		}

		private void ReceiveCallback(IAsyncResult _result)
		{
			try
			{
				int num = stream.EndRead(_result);
				if (num <= 0)
				{
					Server.clients[id].Disconnect();
				}
				else
				{
					byte[] array = new byte[num];
					Array.Copy(receiveBuffer, array, num);
					receivedData.Reset(HandleData(array));
					stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
				}
			}
			catch (Exception arg)
			{
				UnityEngine.Debug.Log($"Error receiving TCP data: {arg}");
				Server.clients[id].Disconnect();
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
				ThreadManager_2.ExecuteOnMainThread(delegate
				{
					using (Packet_2 packet = new Packet_2(_packetBytes))
					{
						int key = packet.ReadInt();
						Server.packetHandlers[key](id, packet);
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

		public void Disconnect()
		{
			socket.Close();
			stream = null;
			receivedData = null;
			receiveBuffer = null;
			socket = null;
		}
	}

	public class UDP
	{
		public IPEndPoint endPoint;

		private int id;

		public UDP(int _id)
		{
			id = _id;
		}

		public void Connect(IPEndPoint _endPoint)
		{
			endPoint = _endPoint;
		}

		public void SendData(Packet_2 _packet)
		{
			Server.SendUDPData(endPoint, _packet);
		}

		public void HandleData(Packet_2 _packetData)
		{
			int length = _packetData.ReadInt();
			byte[] _packetBytes = _packetData.ReadBytes(length);
			ThreadManager_2.ExecuteOnMainThread(delegate
			{
				using (Packet_2 packet = new Packet_2(_packetBytes))
				{
					int key = packet.ReadInt();
					Server.packetHandlers[key](id, packet);
				}
			});
		}

		public void Disconnect()
		{
			endPoint = null;
		}
	}

	public static int dataBufferSize = 4096;

	public int id;

	public Player player;

	public TCP tcp;

	public UDP udp;

	public Client_2(int _clientId)
	{
		id = _clientId;
		tcp = new TCP(id);
		udp = new UDP(id);
	}

	public void SendIntoGame(string _playerName)
	{
		player = NetworkManager.instance.InstantiatePlayer();
		player.Initialize(id, _playerName);
		foreach (Client_2 value in Server.clients.Values)
		{
			if (value.player != null && value.id != id)
			{
				ServerSend.SpawnPlayer(id, value.player);
			}
		}
		foreach (Client_2 value2 in Server.clients.Values)
		{
			if (value2.player != null)
			{
				ServerSend.SpawnPlayer(value2.id, player);
			}
		}
	}

	private void Disconnect()
	{
		UnityEngine.Debug.Log($"{tcp.socket.Client.RemoteEndPoint} has disconnected.");
		ThreadManager_2.ExecuteOnMainThread(delegate
		{
			UnityEngine.Object.Destroy(player.gameObject);
			player = null;
		});
		tcp.Disconnect();
		udp.Disconnect();
		ServerSend.PlayerDisconnected(id);
	}
}
