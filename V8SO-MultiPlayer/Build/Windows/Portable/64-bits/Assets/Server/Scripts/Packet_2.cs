using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

public class Packet_2 : IDisposable
{
	private List<byte> buffer2;

	private byte[] readableBuffer2;

	private int readPos2;

	private bool disposed2;

	public Packet_2()
	{
		buffer2 = new List<byte>();
		readPos2 = 0;
	}

	public Packet_2(int _id)
	{
		buffer2 = new List<byte>();
		readPos2 = 0;
		Write(_id);
	}

	public Packet_2(byte[] _data)
	{
		buffer2 = new List<byte>();
		readPos2 = 0;
		SetBytes(_data);
	}

	public void SetBytes(byte[] _data)
	{
		Write(_data);
		readableBuffer2 = buffer2.ToArray();
	}

	public void WriteLength()
	{
		buffer2.InsertRange(0, BitConverter.GetBytes(buffer2.Count));
	}

	public void InsertInt(int _value)
	{
		buffer2.InsertRange(0, BitConverter.GetBytes(_value));
	}

	public byte[] ToArray()
	{
		readableBuffer2 = buffer2.ToArray();
		return readableBuffer2;
	}

	public int Length()
	{
		return buffer2.Count;
	}

	public int UnreadLength()
	{
		return Length() - readPos2;
	}

	public void Reset(bool _shouldReset = true)
	{
		if (_shouldReset)
		{
			buffer2.Clear();
			readableBuffer2 = null;
			readPos2 = 0;
		}
		else
		{
			readPos2 -= 4;
		}
	}

	public void Write(byte _value)
	{
		buffer2.Add(_value);
	}

	public void Write(byte[] _value)
	{
		buffer2.AddRange(_value);
	}

	public void Write(short _value)
	{
		buffer2.AddRange(BitConverter.GetBytes(_value));
	}

	public void Write(int _value)
	{
		buffer2.AddRange(BitConverter.GetBytes(_value));
	}

	public void Write(long _value)
	{
		buffer2.AddRange(BitConverter.GetBytes(_value));
	}

	public void Write(float _value)
	{
		buffer2.AddRange(BitConverter.GetBytes(_value));
	}

	public void Write(bool _value)
	{
		buffer2.AddRange(BitConverter.GetBytes(_value));
	}

	public void Write(string _value)
	{
		Write(_value.Length);
		buffer2.AddRange(Encoding.ASCII.GetBytes(_value));
	}

	public void Write(Vector3 _value)
	{
		Write(_value.x);
		Write(_value.y);
		Write(_value.z);
	}

	public void Write(Quaternion _value)
	{
		Write(_value.x);
		Write(_value.y);
		Write(_value.z);
		Write(_value.w);
	}

	public byte ReadByte(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			byte result = readableBuffer2[readPos2];
			if (_moveReadPos)
			{
				readPos2++;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'byte'!");
	}

	public byte[] ReadBytes(int _length, bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			byte[] result = buffer2.GetRange(readPos2, _length).ToArray();
			if (_moveReadPos)
			{
				readPos2 += _length;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'byte[]'!");
	}

	public short ReadShort(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			short result = BitConverter.ToInt16(readableBuffer2, readPos2);
			if (_moveReadPos)
			{
				readPos2 += 2;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'short'!");
	}

	public int ReadInt(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			int result = BitConverter.ToInt32(readableBuffer2, readPos2);
			if (_moveReadPos)
			{
				readPos2 += 4;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'int'!");
	}

	public long ReadLong(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			long result = BitConverter.ToInt64(readableBuffer2, readPos2);
			if (_moveReadPos)
			{
				readPos2 += 8;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'long'!");
	}

	public float ReadFloat(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			float result = BitConverter.ToSingle(readableBuffer2, readPos2);
			if (_moveReadPos)
			{
				readPos2 += 4;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'float'!");
	}

	public bool ReadBool(bool _moveReadPos = true)
	{
		if (buffer2.Count > readPos2)
		{
			bool result = BitConverter.ToBoolean(readableBuffer2, readPos2);
			if (_moveReadPos)
			{
				readPos2++;
			}
			return result;
		}
		throw new Exception("Could not read value of type 'bool'!");
	}

	public string ReadString(bool _moveReadPos = true)
	{
		try
		{
			int num = ReadInt();
			string @string = Encoding.ASCII.GetString(readableBuffer2, readPos2, num);
			if (_moveReadPos && @string.Length > 0)
			{
				readPos2 += num;
			}
			return @string;
		}
		catch
		{
			throw new Exception("Could not read value of type 'string'!");
		}
	}

	public Vector3 ReadVector3(bool _moveReadPos = true)
	{
		return new Vector3(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
	}

	public Quaternion ReadQuaternion(bool _moveReadPos = true)
	{
		return new Quaternion(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
	}

	protected virtual void Dispose(bool _disposing)
	{
		if (!disposed2)
		{
			if (_disposing)
			{
				buffer2 = null;
				readableBuffer2 = null;
				readPos2 = 0;
			}
			disposed2 = true;
		}
	}

	public void Dispose()
	{
		Dispose(_disposing: true);
		GC.SuppressFinalize(this);
	}
}
