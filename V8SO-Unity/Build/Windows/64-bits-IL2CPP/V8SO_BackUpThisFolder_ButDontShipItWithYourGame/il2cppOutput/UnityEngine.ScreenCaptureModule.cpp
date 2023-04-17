#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE8CCFA91781BB9C429F0997CDE2C44CCD8FBF84E 
{
};
struct Il2CppArrayBounds;

// UnityEngine.ScreenCapture
struct ScreenCapture_t513DA8E74951FF61C8421D7046F6FC69A4153092  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.ScreenCapture/StereoScreenCaptureMode
struct StereoScreenCaptureMode_tB7D8063E43F187AF9CA59AA9E9ED1492A2280268 
{
	// System.Int32 UnityEngine.ScreenCapture/StereoScreenCaptureMode::value__
	int32_t ___value___2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608 (String_t* ___filename0, int32_t ___superSize1, int32_t ___CaptureMode2, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m1FAFDB15448C41E697212E54F852DDD196E15CFF (String_t* ___filename0, const RuntimeMethod* method) 
{
{
		String_t* L_0 = ___filename0;
		ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608(L_0, 1, 1, NULL);
		return;
	}
}
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608 (String_t* ___filename0, int32_t ___superSize1, int32_t ___CaptureMode2, const RuntimeMethod* method) 
{
typedef void (*ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608_ftn) (String_t*, int32_t, int32_t);
	static ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScreenCapture_CaptureScreenshot_mD9416E855CC184119DB9BE11CFA0787F49C7F608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32,UnityEngine.ScreenCapture/StereoScreenCaptureMode)");
	_il2cpp_icall_func(___filename0, ___superSize1, ___CaptureMode2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
