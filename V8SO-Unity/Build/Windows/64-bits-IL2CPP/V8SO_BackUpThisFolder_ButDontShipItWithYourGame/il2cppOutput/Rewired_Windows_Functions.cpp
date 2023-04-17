#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E18341054184FF288383CECD8D0983A3E3C7303 
{
};
struct Il2CppArrayBounds;

// Rewired.Internal.Windows.Functions
struct Functions_t37CEE114FE0513CF802CAB9D7902B29011C76DEC  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Windows.Input::ForwardRawInput(System.UInt32*,System.UInt32*,System.UInt32,System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_ForwardRawInput_m3CDF5C7F461FA19B3642EE9EB581A145FF786A6A (uint32_t* p0, uint32_t* p1, uint32_t p2, uint8_t* p3, uint32_t p4, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rewired.Internal.Windows.Functions::ForwardRawInput(System.IntPtr,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Functions_ForwardRawInput_m2A5D3730E10397921F4702784BF18361C4206079 (intptr_t ___rawInputHeaderIndices0, intptr_t ___rawInputDataIndices1, uint32_t ___indicesCount2, intptr_t ___rawInputData3, uint32_t ___rawInputDataSize4, const RuntimeMethod* method) 
{
{
		intptr_t L_0 = ___rawInputHeaderIndices0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		intptr_t L_2 = ___rawInputDataIndices1;
		void* L_3;
		L_3 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_2, NULL);
		uint32_t L_4 = ___indicesCount2;
		intptr_t L_5 = ___rawInputData3;
		void* L_6;
		L_6 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_5, NULL);
		uint32_t L_7 = ___rawInputDataSize4;
		Input_ForwardRawInput_m3CDF5C7F461FA19B3642EE9EB581A145FF786A6A((uint32_t*)L_1, (uint32_t*)L_3, L_4, (uint8_t*)L_6, L_7, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
