#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct VirtualFuncInvoker9
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, T9, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8, T9 p9)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, p9, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator>
struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.DateTimeParse/MatchNumberDelegate>
struct Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C;
// System.Lazy`1<System.Boolean>
struct Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6;
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Globalization.CalendarId[]
struct CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Globalization.DateTimeFormatInfo/TokenHashValue[]
struct TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9;
// System.DateTimeParse/DS[]
struct DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Globalization.ISimpleCollator
struct ISimpleCollator_t084383013F96378AFFD4540649E086C9C13BFF5B;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Globalization.SortVersion
struct SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.TimeZoneInfo
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0;
// System.DateTimeParse/<>c
struct U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23;
// System.TimeZoneInfo/CachedData
struct CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF;

IL2CPP_EXTERN_C RuntimeClass* AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormat_tE5F9F8059A3910CA0E37935312AAEDC297D907A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HebrewNumber_tF89734089EC4188BCF2BBBAC98D5AEA14DEA3EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JapaneseCalendar_t639E4548E016255B55B31A644186A40A5D055E0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaiwanCalendar_tFC159D82844A64A93FE1EB3363CC64DE933EE64B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_20_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_21_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_23_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_40_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_47_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_54_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_57_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_59_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_71_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_74_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_76_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_84_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_88_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_91_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_93_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_97_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_98_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_101_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_115_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880;
IL2CPP_EXTERN_C String_t* _stringLiteral061124E28B93E647C6AA75774A91732587C06ECF;
IL2CPP_EXTERN_C String_t* _stringLiteral11911B3D4C1551AA9AE78EADF7852BAE78025BB1;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral18B4C3FF17ADD49C3A5FCB657614AF5293A47A25;
IL2CPP_EXTERN_C String_t* _stringLiteral1EEA80CEDFABFC29B06BF4349B427A62D62722AC;
IL2CPP_EXTERN_C String_t* _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380;
IL2CPP_EXTERN_C String_t* _stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24;
IL2CPP_EXTERN_C String_t* _stringLiteral3BFFD325D0E9B8DB1041A8F32A1F7B2DBB2042C8;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4E26F21A69E717A950F1684EADFD0443AD7B19;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9C538E6EC016DFB961C75A2EDB9047E7364ADD;
IL2CPP_EXTERN_C String_t* _stringLiteral5942706348DC624AD1C57CB5A1B99A73876BDDE6;
IL2CPP_EXTERN_C String_t* _stringLiteral632A16D967E0C773F8BD6CC0C1BC0757266B098C;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9E79CFA886984022D22A5A9A8CF4B9F5ED9E94;
IL2CPP_EXTERN_C String_t* _stringLiteral8198C3D4DD21FBED5685EAF69C1087FA1961F2F6;
IL2CPP_EXTERN_C String_t* _stringLiteral83EBD43501C62D49B91CCC44587BCA88778AD230;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral9E73F441AA920D49C2AE389F5A0431D2B7955821;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE21686ED85979C6721683C1AE7814B97848718;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralAA665F32B703053351F7E870B8F846853A461A04;
IL2CPP_EXTERN_C String_t* _stringLiteralAEDC38B460FBB683110DEB27588A680B6A5D27D8;
IL2CPP_EXTERN_C String_t* _stringLiteralAF58B0212B060B5C1E0C49A01A669F6E85E98C07;
IL2CPP_EXTERN_C String_t* _stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480;
IL2CPP_EXTERN_C String_t* _stringLiteralC933E93DDFB39592649EC75ECA0E66F2D71BCEF3;
IL2CPP_EXTERN_C String_t* _stringLiteralCA04D202AC5F9C676BB75B6E26B16EE1F062729C;
IL2CPP_EXTERN_C String_t* _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE;
IL2CPP_EXTERN_C String_t* _stringLiteralDCA17A4DF49FD0CA7B9C262B02F93841AF666D1D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7F3659E8021DAE64079570DFC3041787F1C824D;
IL2CPP_EXTERN_C String_t* _stringLiteralFA21AE346609B8F4B72E20E1720DE0FA22D72B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_GetJapaneseCalendarDefaultInstance_m265C8A05BBC8F95D6F85943B9B2AA58209C3BF9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_GetTaiwanCalendarDefaultInstance_m3A580037CB29251883ECC6F2407CC19C07189038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_MatchHebrewDigits_m03CAD73DA2FCCC7F09F07BEA555193162E56F589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_ParseExact_mDC1B5C2449904A353081D0850E2B8FC14083426C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeParse_Parse_mF6DF993FDB62A61683BB195599B7CAAAF6A3BF07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mCF3E5EA78F58EDA223E913A1F22CE65E3FBEF864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_Parse_m27437873A5D6028EC14C9F03EC8B1E3D1B94474D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_Parse_mB77635A06E746DF3C9C954225B44573E44FB40A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitialized_TisMatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_m387D9AC7A4D34344F13BE2F282207626389032C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDoStrictParseU3Eb__98_0_mF26A33BFA38CE8BD4EA470D27BE5C6EB131C37C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unsafe_As_TisRawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_m44DAFBC67DEF3D913BD3478467D12FACF8E786F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppContextSwitches
struct AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38  : public RuntimeObject
{
};

struct AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_StaticFields
{
	// System.Boolean System.AppContextSwitches::SetActorAsReferenceWhenCopyingClaimsIdentity
	bool ___SetActorAsReferenceWhenCopyingClaimsIdentity_0;
	// System.Boolean System.AppContextSwitches::EnforceJapaneseEraYearRanges
	bool ___EnforceJapaneseEraYearRanges_1;
	// System.Boolean System.AppContextSwitches::FormatJapaneseFirstYearAsANumber
	bool ___FormatJapaneseFirstYearAsANumber_2;
	// System.Boolean System.AppContextSwitches::EnforceLegacyJapaneseDateParsing
	bool ___EnforceLegacyJapaneseDateParsing_3;
};
struct Il2CppArrayBounds;

// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B  : public RuntimeObject
{
	// System.Int32 System.Globalization.Calendar::m_currentEraValue
	int32_t ___m_currentEraValue_38;
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_39;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_41;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_38;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.DateTimeParse
struct DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045  : public RuntimeObject
{
};

struct DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields
{
	// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse::m_hebrewNumberParser
	MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* ___m_hebrewNumberParser_0;
	// System.DateTimeParse/DS[][] System.DateTimeParse::dateParsingStates
	DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* ___dateParsingStates_1;
};

// System.Globalization.GlobalizationMode
struct GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A  : public RuntimeObject
{
};

struct GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_StaticFields
{
	// System.Boolean System.Globalization.GlobalizationMode::<Invariant>k__BackingField
	bool ___U3CInvariantU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.DateTimeParse/<>c
struct U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9  : public RuntimeObject
{
};

struct U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields
{
	// System.DateTimeParse/<>c System.DateTimeParse/<>c::<>9
	U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* ___U3CU3E9_0;
	// System.Func`1<System.DateTimeParse/MatchNumberDelegate> System.DateTimeParse/<>c::<>9__98_0
	Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* ___U3CU3E9__98_0_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Globalization.CompareOptions
struct CompareOptions_tE5E7275E1FCBD5F8F3B53CC0038A11CABE120B00 
{
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;
};

// System.DTSubStringType
struct DTSubStringType_t4DE771F45FDC82704745E307FBAEEDC66B952318 
{
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;
};

// System.Globalization.DateTimeFormatFlags
struct DateTimeFormatFlags_tB7CDDA8D7A3A0B2B9F64DB7704671F07FCE88FDC 
{
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;
};

// System.DateTimeKind
struct DateTimeKind_t3AD6DA06BEF8955A740777163FFB481C19089BBC 
{
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;
};

// System.Globalization.DateTimeStyles
struct DateTimeStyles_t68D2C41B347837759F064D04F256AC268AF50465 
{
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;
};

// System.DayOfWeek
struct DayOfWeek_t726DBD527FF9B9D2A0352FB80C55EE2EBE56783D 
{
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.ExceptionArgument
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;
};

// System.Globalization.HebrewNumberParsingState
struct HebrewNumberParsingState_t0EB6FC1852941E696A61C0E940AF4AACB0C481C5 
{
	// System.Int32 System.Globalization.HebrewNumberParsingState::value__
	int32_t ___value___2;
};

// System.ParseFailureKind
struct ParseFailureKind_tB1D640DCD04E9EF83FE97F5D1B7A428710BB9C03 
{
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;
};

// System.ParseFlags
struct ParseFlags_tBBA53127C62E87967B778C02A44DBEEFB08B4057 
{
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.TimeZoneInfo
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8  : public RuntimeObject
{
	// System.String System.TimeZoneInfo::_id
	String_t* ____id_1;
	// System.String System.TimeZoneInfo::_displayName
	String_t* ____displayName_2;
	// System.String System.TimeZoneInfo::_standardDisplayName
	String_t* ____standardDisplayName_3;
	// System.String System.TimeZoneInfo::_daylightDisplayName
	String_t* ____daylightDisplayName_4;
	// System.TimeSpan System.TimeZoneInfo::_baseUtcOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____baseUtcOffset_5;
	// System.Boolean System.TimeZoneInfo::_supportsDaylightSavingTime
	bool ____supportsDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::_adjustmentRules
	AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA* ____adjustmentRules_7;
};

struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_StaticFields
{
	// System.Lazy`1<System.Boolean> System.TimeZoneInfo::lazyHaveRegistry
	Lazy_1_tE828BFCC51472E56E0835AF95E5D43FAA716D0D6* ___lazyHaveRegistry_0;
	// System.TimeZoneInfo System.TimeZoneInfo::s_utcTimeZone
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* ___s_utcTimeZone_8;
	// System.TimeZoneInfo/CachedData System.TimeZoneInfo::s_cachedData
	CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF* ___s_cachedData_9;
	// System.DateTime System.TimeZoneInfo::s_maxDateOnly
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateOnly_10;
	// System.DateTime System.TimeZoneInfo::s_minDateOnly
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateOnly_11;
	// System.TimeSpan System.TimeZoneInfo::MaxOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxOffset_12;
	// System.TimeSpan System.TimeZoneInfo::MinOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinOffset_13;
};

// System.TimeZoneInfoOptions
struct TimeZoneInfoOptions_t9AA92EAC7395567D8B804551E641CF11D98FA345 
{
	// System.Int32 System.TimeZoneInfoOptions::value__
	int32_t ___value___2;
};

// System.TokenType
struct TokenType_tFEF2C0C88ED336E8E442A81590A0C9FB5C362AF1 
{
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.DateTimeParse/DS
struct DS_t4210ADFA858C9858D9B59DDB281DAAEA614E4CC9 
{
	// System.Int32 System.DateTimeParse/DS::value__
	int32_t ___value___2;
};

// System.DateTimeParse/DTT
struct DTT_tF6E28023B1F18A1BD5F8ECCC95FFADD73E2B2609 
{
	// System.Int32 System.DateTimeParse/DTT::value__
	int32_t ___value___2;
};

// System.DateTimeParse/TM
struct TM_t50A790136390ECED3528819935E28B98DBD4BCCF 
{
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;
};

// System.Guid/GuidParseThrowStyle
struct GuidParseThrowStyle_tC43639E880DA4E673887F036F8AF058CB0CD7607 
{
	// System.Int32 System.Guid/GuidParseThrowStyle::value__
	int32_t ___value___2;
};

// System.Guid/GuidStyles
struct GuidStyles_tA5E84D8946B641F25E891557158D0B1D03CFC124 
{
	// System.Int32 System.Guid/GuidStyles::value__
	int32_t ___value___2;
};

// System.Guid/ParseFailureKind
struct ParseFailureKind_tCA3A4FEE02BFE41966CB58DC0E2D36C63EA7E0DB 
{
	// System.Int32 System.Guid/ParseFailureKind::value__
	int32_t ___value___2;
};

// System.Globalization.HebrewNumber/HS
struct HS_tE7761E764A7A65A73109C01489193C59242BBA3D 
{
	// System.SByte System.Globalization.HebrewNumber/HS::value__
	int8_t ___value___2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57  : public RuntimeObject
{
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_5;
	// System.String System.Globalization.CompareInfo::_sortName
	String_t* ____sortName_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E* ___m_SortVersion_7;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_8;
	// System.Globalization.ISimpleCollator System.Globalization.CompareInfo::collator
	RuntimeObject* ___collator_9;
};

struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_StaticFields
{
	// System.Globalization.CompareInfo System.Globalization.CompareInfo::Invariant
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___Invariant_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470* ___collators_10;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_11;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_12;
};

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A  : public RuntimeObject
{
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ____cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::_name
	String_t* ____name_2;
	// System.String System.Globalization.DateTimeFormatInfo::_langName
	String_t* ____langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::_cultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_abbrevEnglishEraNames_41;
	// System.Globalization.CalendarId[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	CalendarIdU5BU5D_t559EDBF1B819A695624BE9004EAA4FFA38B65CDA* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::_isReadOnly
	bool ____isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanPositivePattern
	String_t* ____fullTimeSpanPositivePattern_49;
	// System.String System.Globalization.DateTimeFormatInfo::_fullTimeSpanNegativePattern
	String_t* ____fullTimeSpanNegativePattern_50;
	// System.Globalization.DateTimeFormatInfo/TokenHashValue[] System.Globalization.DateTimeFormatInfo::_dtfiTokenHash
	TokenHashValueU5BU5D_t3F8794937D04BA380989A813F33418CED58E80B9* ____dtfiTokenHash_52;
};

struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_StaticFields
{
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_invariantInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_invariantInfo_0;
	// System.Char[] System.Globalization.DateTimeFormatInfo::s_monthSpaces
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_monthSpaces_46;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_jajpDTFI_80;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___s_zhtwDTFI_81;
};

// System.DateTimeRawInfo
struct DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 
{
	// System.Int32* System.DateTimeRawInfo::num
	int32_t* ___num_0;
	// System.Int32 System.DateTimeRawInfo::numCount
	int32_t ___numCount_1;
	// System.Int32 System.DateTimeRawInfo::month
	int32_t ___month_2;
	// System.Int32 System.DateTimeRawInfo::year
	int32_t ___year_3;
	// System.Int32 System.DateTimeRawInfo::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Int32 System.DateTimeRawInfo::era
	int32_t ___era_5;
	// System.DateTimeParse/TM System.DateTimeRawInfo::timeMark
	int32_t ___timeMark_6;
	// System.Double System.DateTimeRawInfo::fraction
	double ___fraction_7;
	// System.Boolean System.DateTimeRawInfo::hasSameDateAndTimeSeparators
	bool ___hasSameDateAndTimeSeparators_8;
};
// Native definition for P/Invoke marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_pinvoke
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
};
// Native definition for COM marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_com
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
};

// System.DateTimeToken
struct DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 
{
	// System.DateTimeParse/DTT System.DateTimeToken::dtt
	int32_t ___dtt_0;
	// System.TokenType System.DateTimeToken::suffix
	int32_t ___suffix_1;
	// System.Int32 System.DateTimeToken::num
	int32_t ___num_2;
};

// System.Globalization.HebrewNumberParsingContext
struct HebrewNumberParsingContext_t24269EE9BFA992FFBDB9F20C1A0C51639AD6FC09 
{
	// System.Globalization.HebrewNumber/HS System.Globalization.HebrewNumberParsingContext::state
	int8_t ___state_0;
	// System.Int32 System.Globalization.HebrewNumberParsingContext::result
	int32_t ___result_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.ParsingInfo
struct ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 
{
	// System.Globalization.Calendar System.ParsingInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_0;
	// System.Int32 System.ParsingInfo::dayOfWeek
	int32_t ___dayOfWeek_1;
	// System.DateTimeParse/TM System.ParsingInfo::timeMark
	int32_t ___timeMark_2;
	// System.Boolean System.ParsingInfo::fUseHour12
	bool ___fUseHour12_3;
	// System.Boolean System.ParsingInfo::fUseTwoDigitYear
	bool ___fUseTwoDigitYear_4;
	// System.Boolean System.ParsingInfo::fAllowInnerWhite
	bool ___fAllowInnerWhite_5;
	// System.Boolean System.ParsingInfo::fAllowTrailingWhite
	bool ___fAllowTrailingWhite_6;
	// System.Boolean System.ParsingInfo::fCustomNumberParser
	bool ___fCustomNumberParser_7;
	// System.DateTimeParse/MatchNumberDelegate System.ParsingInfo::parseNumberDelegate
	MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* ___parseNumberDelegate_8;
};
// Native definition for P/Invoke marshalling of System.ParsingInfo
struct ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_pinvoke
{
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
// Native definition for COM marshalling of System.ParsingInfo
struct ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_com
{
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Guid/GuidResult
struct GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 
{
	// System.Guid System.Guid/GuidResult::_parsedGuid
	Guid_t ____parsedGuid_0;
	// System.Guid/GuidParseThrowStyle System.Guid/GuidResult::_throwStyle
	int32_t ____throwStyle_1;
	// System.Guid/ParseFailureKind System.Guid/GuidResult::_failure
	int32_t ____failure_2;
	// System.String System.Guid/GuidResult::_failureMessageID
	String_t* ____failureMessageID_3;
	// System.Object System.Guid/GuidResult::_failureMessageFormatArgument
	RuntimeObject* ____failureMessageFormatArgument_4;
	// System.String System.Guid/GuidResult::_failureArgumentName
	String_t* ____failureArgumentName_5;
	// System.Exception System.Guid/GuidResult::_innerException
	Exception_t* ____innerException_6;
};
// Native definition for P/Invoke marshalling of System.Guid/GuidResult
struct GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshaled_pinvoke
{
	Guid_t ____parsedGuid_0;
	int32_t ____throwStyle_1;
	int32_t ____failure_2;
	char* ____failureMessageID_3;
	Il2CppIUnknown* ____failureMessageFormatArgument_4;
	char* ____failureArgumentName_5;
	Exception_t_marshaled_pinvoke* ____innerException_6;
};
// Native definition for COM marshalling of System.Guid/GuidResult
struct GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79_marshaled_com
{
	Guid_t ____parsedGuid_0;
	int32_t ____throwStyle_1;
	int32_t ____failure_2;
	Il2CppChar* ____failureMessageID_3;
	Il2CppIUnknown* ____failureMessageFormatArgument_4;
	Il2CppChar* ____failureArgumentName_5;
	Exception_t_marshaled_com* ____innerException_6;
};

// System.Func`1<System.DateTimeParse/MatchNumberDelegate>
struct Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.DTSubString
struct DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 
{
	// System.ReadOnlySpan`1<System.Char> System.DTSubString::s
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;
};

// System.DateTimeResult
struct DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 
{
	// System.Int32 System.DateTimeResult::Year
	int32_t ___Year_0;
	// System.Int32 System.DateTimeResult::Month
	int32_t ___Month_1;
	// System.Int32 System.DateTimeResult::Day
	int32_t ___Day_2;
	// System.Int32 System.DateTimeResult::Hour
	int32_t ___Hour_3;
	// System.Int32 System.DateTimeResult::Minute
	int32_t ___Minute_4;
	// System.Int32 System.DateTimeResult::Second
	int32_t ___Second_5;
	// System.Double System.DateTimeResult::fraction
	double ___fraction_6;
	// System.Int32 System.DateTimeResult::era
	int32_t ___era_7;
	// System.ParseFlags System.DateTimeResult::flags
	int32_t ___flags_8;
	// System.TimeSpan System.DateTimeResult::timeZoneOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeZoneOffset_9;
	// System.Globalization.Calendar System.DateTimeResult::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_10;
	// System.DateTime System.DateTimeResult::parsedDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___parsedDate_11;
	// System.ParseFailureKind System.DateTimeResult::failure
	int32_t ___failure_12;
	// System.String System.DateTimeResult::failureMessageID
	String_t* ___failureMessageID_13;
	// System.Object System.DateTimeResult::failureMessageFormatArgument
	RuntimeObject* ___failureMessageFormatArgument_14;
	// System.String System.DateTimeResult::failureArgumentName
	String_t* ___failureArgumentName_15;
	// System.ReadOnlySpan`1<System.Char> System.DateTimeResult::originalDateTimeString
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___originalDateTimeString_16;
	// System.ReadOnlySpan`1<System.Char> System.DateTimeResult::failedFormatSpecifier
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___failedFormatSpecifier_17;
};
// Native definition for P/Invoke marshalling of System.DateTimeResult
struct DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeZoneOffset_9;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_10;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___parsedDate_11;
	int32_t ___failure_12;
	char* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	char* ___failureArgumentName_15;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___originalDateTimeString_16;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___failedFormatSpecifier_17;
};
// Native definition for COM marshalling of System.DateTimeResult
struct DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeZoneOffset_9;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_10;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___parsedDate_11;
	int32_t ___failure_12;
	Il2CppChar* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	Il2CppChar* ___failureArgumentName_15;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___originalDateTimeString_16;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___failedFormatSpecifier_17;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.__DTString
struct __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637 
{
	// System.ReadOnlySpan`1<System.Char> System.__DTString::Value
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_2;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_info_3;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_4;
};

struct __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_StaticFields
{
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___WhiteSpaceChecks_5;
};
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_pinvoke
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___Value_0;
	int32_t ___Index_1;
	uint8_t ___m_current_2;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_info_3;
	int32_t ___m_checkDigitToken_4;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_com
{
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___Value_0;
	int32_t ___Index_1;
	uint8_t ___m_current_2;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_info_3;
	int32_t ___m_checkDigitToken_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.DateTimeParse/DS[]
struct DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A  : public RuntimeArray
{
	ALIGN_FIELD (8) DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* m_Items[1];

	inline DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m0E12CBD20A01B68BE6591F27A0CFFF9D09BA3FE0_gshared (RuntimeObject** ___target0, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory1, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method) ;
// T& System.Span`1<System.Char>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850_gshared (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.MemoryExtensions::IndexOf<System.Char>(System.ReadOnlySpan`1<T>,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_gshared (Il2CppChar* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) ;

// System.Void System.DateTimeResult::Init(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___originalDateTimeString0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::TryParseExact(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParseExact_mE278766D22954690798736AD38FB25607FF3C605 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, int32_t ___style3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) ;
// System.Exception System.DateTimeParse::GetDateTimeParseException(System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* DateTimeParse_GetDateTimeParseException_m7775A148A55B3FF70DDFCD608E55B11E7A84ECC8 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Void System.DateTimeResult::SetFailure(System.ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___failure0, String_t* ___failureMessageID1, const RuntimeMethod* method) ;
// System.Void System.DateTimeResult::SetBadFormatSpecifierFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadFormatSpecifierFailure_m9FC4392236DE50A674F50361A1BB06F6944BD214 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::DoStrictParse(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeStyles,System.Globalization.DateTimeFormatInfo,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DoStrictParse_mC03205AA52B2A37EE27088FEA9ED7DD4E7F20F9F (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___formatParam1, int32_t ___styles2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* __DTString_get_CompareInfo_m60B598A103E1AD8C7A84D1294398713BB72EC372_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Int32 System.Globalization.CompareInfo::Compare(System.ReadOnlySpan`1<System.Char>,System.String,System.Globalization.CompareOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6 (CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___string10, String_t* ___string21, int32_t ___options2, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::get_Item(System.Int32)
inline Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_gshared_inline)(__this, ___index0, method);
}
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.__DTString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchWord(System.__DTString&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchWord_mA7B7DC7F197B764C500FA173FB1F5BB3F110A6D1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, String_t* ___target1, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.DTSubString System.__DTString::GetSubString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Char System.DTSubString::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DTSubString_get_Item_m1F52F78057FA33F0CB350659CF94DC678C4725B6 (DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70* __this, int32_t ___relativeIndex0, const RuntimeMethod* method) ;
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 ___sub0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Negate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Negate_m3BF3036191A2FDC35250891CD82AD3283A13ABB4 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.DateTimeResult::SetBadDateTimeFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseTimeZone(System.__DTString&,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseTimeZone_mF3F355E14D6B76BA74234B98A6049BBB58439934 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result1, const RuntimeMethod* method) ;
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_mF7E4F8A3FDA483D70D31E919BD247BE18834842A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseFraction(System.__DTString&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseFraction_m98F0CC92F633C924C6AFD0D7B97277517CF82AF4 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, double* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::HandleTimeZone(System.__DTString&,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_HandleTimeZone_mFED144664DF98BB5DA4C18A04CCCB5580EAD843C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, const RuntimeMethod* method) ;
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method) ;
// System.Void System.DateTimeRawInfo::AddNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ProcessTerminalState(System.DateTimeParse/DS,System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessTerminalState_mBBB5DA91A449E17952389A39AF326E7D2B286DFB (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result2, int32_t* ___styles3, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi5, const RuntimeMethod* method) ;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.GlobalizationMode::get_Invariant()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline (const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Globalization.Calendar System.DateTimeParse::GetJapaneseCalendarDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeParse_GetJapaneseCalendarDefaultInstance_m265C8A05BBC8F95D6F85943B9B2AA58209C3BF9D (const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetJapaneseCalendarDTFI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* DateTimeFormatInfo_GetJapaneseCalendarDTFI_m99547D0BCED27B4FC1678390663487A1A97E8FF6 (const RuntimeMethod* method) ;
// System.Globalization.Calendar System.DateTimeParse::GetTaiwanCalendarDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeParse_GetTaiwanCalendarDefaultInstance_m3A580037CB29251883ECC6F2407CC19C07189038 (const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetTaiwanCalendarDTFI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* DateTimeFormatInfo_GetTaiwanCalendarDTFI_mC9D2BCBD331BB4D07B02A2740817962AD77019FF (const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.Void System.DateTimeResult::SetFailure(System.ParseFailureKind,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___failure0, String_t* ___failureMessageID1, RuntimeObject* ___failureMessageFormatArgument2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::VerifyValidPunctuation(System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_VerifyValidPunctuation_m620C9F9E5B0C07AD43A7826A3156033B6B75CE2F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, const RuntimeMethod* method) ;
// System.Globalization.Calendar System.Globalization.JapaneseCalendar::GetDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* JapaneseCalendar_GetDefaultInstance_mEDD5EEFAF9B20CC6616CA8DAB8ADCE47E5565657 (const RuntimeMethod* method) ;
// System.Globalization.Calendar System.Globalization.TaiwanCalendar::GetDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* TaiwanCalendar_GetDefaultInstance_m8DA29AC16562ED3BA40872B88C52376450602D8D (const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.DateTimeResult::SetDate(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::SetDateYMD(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeParse::GetDateTimeNow(System.DateTimeResult&,System.Globalization.DateTimeStyles&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeParse_GetDateTimeNow_m3ACC9E28E9EF3C9DD0C39F3856B25AC87F79D785 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, const RuntimeMethod* method) ;
// System.Int32 System.DateTimeRawInfo::GetNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1 (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.DateTimeParse::GetDefaultYear(System.DateTimeResult&,System.Globalization.DateTimeStyles&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetMonthDayOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE (String_t* ___pattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetYearMonthDayOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147 (String_t* ___datePattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::TryAdjustYear(System.DateTimeResult&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t* ___adjustedYear2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::SetDateMDY(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateMDY_m7390A07BD849AF83B9D9A89EB1E7C27AA935A70F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___month1, int32_t ___day2, int32_t ___year3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::SetDateDMY(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateDMY_m181967A0A6F28FA6A133CDE4C3FF0D62D0FA80A8 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___day1, int32_t ___month2, int32_t ___year3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::SetDateYDM(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateYDM_mF01738E63D893F277DF0EB83553CB1A8D7590C87 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t ___day2, int32_t ___month3, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_YearMonthPattern_m98C6AAE1CA577D103C522991D843FCD5817EDF04 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetYearMonthOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetYearMonthOrder_mB243726286078DF919A8931DB4DD3C72D6E54C39 (String_t* ___pattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::YearMonthAdjustment(System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t* ___year0, int32_t* ___month1, bool ___parsedMonthName2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfMNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfMNN_m374885010D6E03B9B0B9C324D1AE4756C0ABA795 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfYMN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYMN_m9EC1B0DBB59A970EA94F294ACD50123AFC3362F6 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfNNY(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNNY_mDCE42330005F3DA5EF837F7721C858E297627043 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetHebrewDayOfNM(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetHebrewDayOfNM_mEBE5CE6FBE5C0D10A502AE942379D874BED6B8A2 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfYM(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYM_m173BCA48C0D30DE6B1AAB01093EEC592D47926E6 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetTimeOfN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfN_m9B63BD06594CD66CE23924A5768F307AE0FACB1D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetTimeOfNN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfNN_m80DC7C7902F70FA3663A2D256965165B0347C950 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetTimeOfNNN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfNNN_m4D34E7E93A269A2A174F44C816A72E8C6967D653 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfNN(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNN_m7738DD5E78F313BF6367703FD465AB24D7BA20AB (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfNNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNNN_m2A81AF7ACFA6CAFC475BDADC38CE4F24412075B1 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfMN(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfMN_m8625D53F8DA2F8D59B7FD01C78B93147E881159C (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfNM(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNM_m73B51B6379B671C4A1B06465FDF3F415A184D848 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfYNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYNN_mDEF587962F7CB32F0B6CB7FDDE62D69F1B95A795 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDayOfYN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYN_m73B0D6F7E10F34653FF6ACAD19C9FC938F6CEB5F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDateOfDSN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfDSN_mFE26096316EC26A9296C03F218C875009160B30F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDateOfNDS(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfNDS_mC1115237FFC072275859B7A2C7311D084698FAC3 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetDateOfNNDS(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfNNDS_mAE5DE28ADA2D07A07E4DDED4FAC88BB6800F64D5 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::TryParse(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParse_m4BD5F36F86016435BD86F195833AC1762E4A8FB7 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t ___styles2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) ;
// System.Void System.DateTimeRawInfo::Init(System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeRawInfo_Init_m58939922AA569BAE7260CFD425D079C654D0731B (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t* ___numberBuffer0, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_DateSeparator_mBD2B8F51FE1491BC6695B10CB1973754BBF54CDD (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_get_TimeSeparator_m708070A0307E7FB6D0FB9C5FF3E371EBF8800791 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Void System.__DTString::.ctor(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_mA373A18F43531434E2B5644E88171623C86416F6 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::Lex(System.DateTimeParse/DS,System.__DTString&,System.DateTimeToken&,System.DateTimeRawInfo&,System.DateTimeResult&,System.Globalization.DateTimeFormatInfo&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5 (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* ___dtok2, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** ___dtfi5, int32_t ___styles6, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ProcessDateTimeSuffix(System.DateTimeResult&,System.DateTimeRawInfo&,System.DateTimeToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessDateTimeSuffix_m0AC07A4509DE7988542BE587425011D8987404BD (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* ___dtok2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseISO8601(System.DateTimeRawInfo&,System.__DTString&,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseISO8601_m569DBDBBAFE09743C5B368B703FF5F715A5E7856 (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, int32_t ___styles2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::AtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m842272A109A260E9175838B489D9A8582400E59A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::get_FormatFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ProcessHebrewTerminalState(System.DateTimeParse/DS,System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessHebrewTerminalState_mFFA26D8103E3D9FC4F8B79881D86B6DCD1945083 (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result2, int32_t* ___styles3, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi5, const RuntimeMethod* method) ;
// System.Void System.DateTimeParse::AdjustTimeMark(System.Globalization.DateTimeFormatInfo,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeParse_AdjustTimeMark_m7FAFD00A68546CBB5D476DEBB836936FC68F6FAB (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::AdjustHour(System.Int32&,System.DateTimeParse/TM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustHour_mEACD0EE6D5FC4D5B35B3077B5D7825278BF0C31B (int32_t* ___hour0, int32_t ___timeMark1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::CheckDefaultDateTime(System.DateTimeResult&,System.Globalization.Calendar&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_CheckDefaultDateTime_m034340E5F9C42CEB315E7A5F13A5E983C2B6883E (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** ___cal1, int32_t ___styles2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::DetermineTimeZoneAdjustments(System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DetermineTimeZoneAdjustments_mCC9DAEFF572D2B894A28E593F0873FE6C0305395 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, int32_t ___styles2, bool ___bTimeOnly3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::DateTimeOffsetTimeZonePostProcessing(System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DateTimeOffsetTimeZonePostProcessing_m0D9114B6363F6C2191FAAD4736380E306C6E3232 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, int32_t ___styles2, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeZoneInfo::GetLocalUtcOffset(System.DateTime,System.TimeZoneInfoOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeZoneInfo_GetLocalUtcOffset_m9F9CD0276FC458225F33C992E8B4CD6B3C81E0CC (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::AdjustTimeZoneToUniversal(System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustTimeZoneToUniversal_m264D31BD710639881C914DE8CE2A2D8AB8345930 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::AdjustTimeZoneToLocal(System.DateTimeResult&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustTimeZoneToLocal_m0A9FE63D12564B35445A57A38F50D50B7B97B1A1 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, bool ___bTimeOnly1, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___ticks0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* TimeZoneInfo_get_Local_mFE5FE1C25C014521B6BCC9BE11AA67A1AF3C91B0 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime,System.TimeZoneInfoOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeZoneInfo_GetUtcOffset_m0BDDBF392737305C4A4AA517DD3CB0DA40C7D375 (TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeZoneInfo::GetUtcOffsetFromUtc(System.DateTime,System.TimeZoneInfo,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeZoneInfo_GetUtcOffsetFromUtc_m56457555F1923B673BDA645C17CBE6E7547B13EE (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* ___zone1, bool* ___isDaylightSavings2, bool* ___isAmbiguousLocalDst3, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m8CFD20DDCCB14AB28392A047FC4EE3F11929B8F2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___ticks0, int32_t ___kind1, bool ___isAmbiguousDst2, const RuntimeMethod* method) ;
// System.Void System.__DTString::SkipWhiteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseDigits(System.__DTString&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___digitLen1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::Match(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Char System.__DTString::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Globalization.Calendar System.Globalization.GregorianCalendar::GetDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6 (const RuntimeMethod* method) ;
// System.Void System.Globalization.HebrewNumberParsingContext::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HebrewNumberParsingContext__ctor_mF04BF245C589BD01536CAE69FE0938DD731E80B0 (HebrewNumberParsingContext_t24269EE9BFA992FFBDB9F20C1A0C51639AD6FC09* __this, int32_t ___result0, const RuntimeMethod* method) ;
// System.Globalization.HebrewNumberParsingState System.Globalization.HebrewNumber::ParseByChar(System.Char,System.Globalization.HebrewNumberParsingContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HebrewNumber_ParseByChar_m48D888FCA3686A3841CA480EE0D70F879D6198A5 (Il2CppChar ___ch0, HebrewNumberParsingContext_t24269EE9BFA992FFBDB9F20C1A0C51639AD6FC09* ___context1, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseDigits(System.__DTString&,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseDigits_m3DD067E6F62657C12B0B284D864E66F4137C097B (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___minDigitLen1, int32_t ___maxDigitLen2, int32_t* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::GetNextDigit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Int32 System.__DTString::GetDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m2C1710445781E19205ECECC147287B2A1E325A4B (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Int64 System.Globalization.TimeSpanParse::Pow10(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeSpanParse_Pow10_m4AF3631D30A076C9A94AFE9951C51C083828C59C (int32_t ___pow0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseSign(System.__DTString&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseSign_mEC5D058BD2D20805D692352D55F312FA7B846D30 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, bool* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetMonthName_mCCCA8C327C346C7B2AE22AFD9C42C4DCBF48B539 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___month0, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_mC0DF9D2AABADA5B7F47C6856F78B7BCC11FC8C89 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___month0, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_HasSpacesInMonthNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_get_HasSpacesInMonthNames_m93B2F520AE7A2E5F0FF27A033C090D1EA6DF61C9 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method) ;
// System.String[] System.Globalization.DateTimeFormatInfo::internalGetLeapYearMonthNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DateTimeFormatInfo_internalGetLeapYearMonthNames_mE8FA856937882C90948FEABC760B73546B10D894 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m18DECB9B44ED3656943F375BBB8474CBD7FEA5A1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method) ;
// System.String[] System.Globalization.DateTimeFormatInfo::get_MonthGenitiveNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* DateTimeFormatInfo_get_MonthGenitiveNames_mD2F2B8EE9EC2B9D47F4F7F368874D34B183920B3 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m12EC6E4400C2FC1B69A7F987338F9EF0A100277E (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___dayofweek0, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_HasSpacesInDayNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_get_HasSpacesInDayNames_mE14BD4B06203A8592604D170CCF7EE8303B9D771 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetDayName_m7C4E70449F205F063D75944FEC66A3B0FFD3F20A (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___dayofweek0, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetEraName_mEFEC407D99F9C8D98C332FB785B1D32A8BC8202F (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___era0, const RuntimeMethod* method) ;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedEraName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormatInfo_GetAbbreviatedEraName_mF42A4A5F3EB9EF1B9DD7465BB563E3D60AFBA7C5 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___era0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD (const RuntimeMethod* method) ;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DateTimeFormatInfo_Clone_mCBA61859E15A29FC79AC3CDAA616D063901540E8 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeFormatInfo_set_Calendar_m46840C102CBE9D5BF30C44F0910426969A543564 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___value0, const RuntimeMethod* method) ;
// System.String System.DateTimeFormat::GetRealFormat(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeFormat_GetRealFormat_mF7CAEDA2701F1D8B57C7BBB5F10C2912D98E0834 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) ;
// System.Int32 System.__DTString::GetRepeatCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseJapaneseEraStart(System.__DTString&,System.Globalization.DateTimeFormatInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DateTimeParse_ParseJapaneseEraStart_mA92A09D4BAD4A6FD450C0AACFB3EFEC4DBEEE0D6_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_HasForceTwoDigitYears()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_get_HasForceTwoDigitYears_m25CFF727E1A830DF26A757917BAD564C99DE3899 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse/MatchNumberDelegate::Invoke(System.__DTString&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchNumberDelegate_Invoke_m5B60C560B1348302810E1020E7A9356E5506A83D (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* __this, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___digitLen1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::CheckNewValue(System.Int32&,System.Int32,System.Char,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247 (int32_t* ___currentValue0, int32_t ___newValue1, Il2CppChar ___patternChar2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchAbbreviatedMonthName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedMonthName_m805D9B328FB1263F1BF46ECA9838664F8843108A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchMonthName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchMonthName_mE7D367082924EBA06BC8DF210B4B352F01FD0A4E (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchAbbreviatedDayName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedDayName_mF643640119B5703882D13747F619E2D83185EBD3 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchDayName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchDayName_m7F4A56E577849BFDB5052849F36956A5D3D0B091 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchEraName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchEraName_mC7797A9D26B3AA12B009E9AAE108D5303D73AB60 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseFractionExact(System.__DTString&,System.Int32,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseFractionExact_m8D05591EC51611279D35A0AEF1CF18340DD24EC1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___maxDigitLen1, double* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchAbbreviatedTimeMark(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.DateTimeParse/TM&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedTimeMark_m948220A2738E1BE22F2704A0BF673100EA420174 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::MatchTimeMark(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.DateTimeParse/TM&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchTimeMark_mA275F7CC9F7894A06E7E6D8A5E43D59224C340E7 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseTimeZoneOffset(System.__DTString&,System.Int32,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseTimeZoneOffset_mF5FAD2F2CF2EA5F8C2D3344F322372028C56E3BC (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___len1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result2, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_m702FEB395C90D5B23E2F7CD61B44846CD9B2C808 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::GetTimeZoneName(System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeZoneName_mE95CAA2AEEC0A0D1B66F23DAAFF4A440B517343F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::TryParseQuoteString(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Text.StringBuilder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParseQuoteString_mDC8CE63E2A3C64389F240D0CF9FCB5643CB8CD44 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format0, int32_t ___pos1, StringBuilder_t* ___result2, int32_t* ___returnValue3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilderCache::Release(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilderCache_Release_mE49F645AD4CCFE33D4C66C584E805FA0227ED3B2 (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.DateTimeResult::SetBadFormatSpecifierFailure(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___failedFormatSpecifier0, const RuntimeMethod* method) ;
// System.Boolean System.DateTimeParse::ParseByFormat(System.__DTString&,System.__DTString&,System.ParsingInfo&,System.Globalization.DateTimeFormatInfo,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseByFormat_m864D2112CA5AB13BBE1E21DD2B950FEDD9B04381 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___format1, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* ___parseInfo2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Void System.ParsingInfo::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingInfo_Init_m9A009DDE21A06FC19AE6FA3068AD1A8D31985E0F (ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* __this, const RuntimeMethod* method) ;
// System.String System.DateTimeParse::ExpandPredefinedFormat(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo&,System.ParsingInfo&,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeParse_ExpandPredefinedFormat_m319F6300D5E4F8F88D74F14D594B80349B69193D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** ___dtfi1, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* ___parseInfo2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.String::op_Implicit(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.DateTimeParse/MatchNumberDelegate>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCF3E5EA78F58EDA223E913A1F22CE65E3FBEF864 (Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.DateTimeParse/MatchNumberDelegate>(T&,System.Func`1<T>)
inline MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* LazyInitializer_EnsureInitialized_TisMatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_m387D9AC7A4D34344F13BE2F282207626389032C3 (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23** ___target0, Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* ___valueFactory1, const RuntimeMethod* method)
{
	return ((  MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* (*) (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23**, Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C*, const RuntimeMethod*))LazyInitializer_EnsureInitialized_TisRuntimeObject_m0E12CBD20A01B68BE6591F27A0CFFF9D09BA3FE0_gshared)(___target0, ___valueFactory1, method);
}
// System.Void System.__DTString::.ctor(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_m6CC4A0D6F0C02640CACC04DD665EFA24307D8478 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method) ;
// System.Void System.__DTString::TrimTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_TrimTail_mCFE6DEF7DDA912AF107D97086C6E0FE416C0CD60 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_mDF1784B60E93E485C47ED45D379E5FDA0BFE7840 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m1CA6C255525A3C0FE23F0BBCF2B72FCDED9D9B4C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_HasYearMonthAdjustment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_get_HasYearMonthAdjustment_m24FE49DE75A8D1487AB0635B55AF815BC1BE139D (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.String SR::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8 (String_t* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.DateTimeParse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0050EAB7763433D525E9E9DDCA2FC7340FA4A280 (U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.DateTimeParse/MatchNumberDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchNumberDelegate__ctor_m7469C81CA13108B615B04E0FCB04F283C27AEDA6 (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::get_CompareInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* DateTimeFormatInfo_get_CompareInfo_m5EE0D2D859788948D1A235DD8166A25B30908426 (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.Boolean System.Globalization.DateTimeFormatInfo::Tokenize(System.TokenType,System.TokenType&,System.Int32&,System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeFormatInfo_Tokenize_mF3AFCE9FF7A9E916C1FD45D74259144A5F9B773F (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, int32_t ___TokenMask0, int32_t* ___tokenType1, int32_t* ___tokenValue2, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str3, const RuntimeMethod* method) ;
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_mEFCC8DCABD43754458F9DB4C371AE9BBE9961D91 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m1AE18DB3B14A0D05EF4A2D3403D4DC1930A199F3 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___anyOf0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m5164781404FE3D882902D92409C003B29659A049_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.Globalization.CompareInfo::CompareOptionIgnoreCase(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompareInfo_CompareOptionIgnoreCase_m707A09DA84BE513742B5F7A05138A6E96809EEBE (CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___string10, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___string21, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_gshared)(___array0, method);
}
// T& System.Span`1<System.Char>::get_Item(System.Int32)
inline Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared_inline)(__this, ___index0, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___destination0, method);
}
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_gshared)(___span0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline)(__this, ___start0, method);
}
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___start0, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::get_Empty()
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850 (const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (const RuntimeMethod*))ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850_gshared)(method);
}
// System.Void Interop::GetRandomBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interop_GetRandomBytes_m2DEA3C88AAD51EEDCAF09A1855A07149EB945BFC (uint8_t* ___buffer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___array0, method);
}
// System.Void System.Guid::.ctor(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D (Guid_t* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___b0, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Guid::.ctor(System.UInt32,System.UInt16,System.UInt16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m124D0C0C7E661194DA48CA77B878BF15F6D83871 (Guid_t* __this, uint32_t ___a0, uint16_t ___b1, uint16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d3, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method) ;
// System.Void System.Guid/GuidResult::Init(System.Guid/GuidParseThrowStyle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GuidResult_Init_mA6B695110665C265D17C97D0AB8AA25D25D874AB_inline (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, int32_t ___canThrow0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::TryParseGuid(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidStyles,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuid_mCB8E7DF84B31E7F4C8A638E45F7A57C34DB29AEE (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, int32_t ___flags1, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result2, const RuntimeMethod* method) ;
// System.Exception System.Guid/GuidResult::GetGuidParseException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* GuidResult_GetGuidParseException_m64B716090AACED88AAA921D1B6EE7BC3AB7F606B (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) ;
// System.Guid System.Guid::Parse(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_Parse_mB77635A06E746DF3C9C954225B44573E44FB40A9 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___input0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::TryParse(System.ReadOnlySpan`1<System.Char>,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParse_mB19C7BFAD87082A0ABA099F6734DB90C77971C41 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___input0, Guid_t* ___result1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::Trim(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_Trim_mC32111CFD6C9DA051BE42AC049FE2F6C68A31BB0 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method) ;
// System.Void System.Guid/GuidResult::SetFailure(System.Guid/ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, int32_t ___failure0, String_t* ___failureMessageID1, const RuntimeMethod* method) ;
// System.Int32 System.MemoryExtensions::IndexOf<System.Char>(System.ReadOnlySpan`1<T>,T)
inline int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Il2CppChar, const RuntimeMethod*))MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_gshared_inline)(___span0, ___value1, method);
}
// System.Boolean System.Guid::TryParseGuidWithDashes(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithDashes_mFD211756C6B22DA5D11B078B9095D71812EEFA03 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Guid::TryParseGuidWithHexPrefix(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithHexPrefix_m331094BD74A21994E5C107DB0C2FF85E9CEAC396 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Guid::TryParseGuidWithNoStyle(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithNoStyle_m917E01A7C80B6757DBC13B919F93EB4B30BACF06 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) ;
// System.Void System.Guid/GuidResult::SetFailure(System.Guid/ParseFailureKind,System.String,System.Object,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidResult_SetFailure_m0F74454921C3AAAC764BC7144BF33D95CF131AE8 (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, int32_t ___failure0, String_t* ___failureMessageID1, RuntimeObject* ___failureMessageFormatArgument2, String_t* ___failureArgumentName3, Exception_t* ___innerException4, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.Guid::EatAllWhitespace(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Guid_EatAllWhitespace_m1093C9CD65CE0CA00C47709D941152C9606D1B42 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::IsHexPrefix(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void System.Guid/GuidResult::SetFailure(System.Guid/ParseFailureKind,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidResult_SetFailure_m15EA2A1141E6D694F88A1B01982D8FD25B77635A (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, int32_t ___failure0, String_t* ___failureMessageID1, RuntimeObject* ___failureMessageFormatArgument2, const RuntimeMethod* method) ;
// System.Boolean System.Guid::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___requiredLength1, int32_t ___flags2, int32_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) ;
// System.Boolean System.Guid::StringToShort(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int16&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___requiredLength1, int32_t ___flags2, int16_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// T& System.Span`1<System.Byte>::get_Item(System.Int32)
inline uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Char System.Char::ToUpperInvariant(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpperInvariant_m4A8EEECCB38A511AC2EE02680ED999CC48601D06 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int64&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___flags2, int64_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) ;
// System.Boolean System.Guid::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int32,System.Int32&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___requiredLength2, int32_t ___flags3, int32_t* ___result4, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult5, const RuntimeMethod* method) ;
// System.Boolean System.Guid::StringToShort(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int32,System.Int16&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToShort_m81CA6AE106ECEDB75FD2BA5F96B9F316ABE10987 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___requiredLength2, int32_t ___flags3, int16_t* ___result4, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult5, const RuntimeMethod* method) ;
// System.Int32 System.ParseNumbers::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseNumbers_StringToInt_mFA272AA5E18321305FCBA935AA610A039B7A7636 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, int32_t ___radix1, int32_t ___flags2, int32_t* ___currPos3, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Guid/GuidResult::SetFailure(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuidResult_SetFailure_mA88DCBD6280AA9823F2A2810AD3B0BDF50EAD239 (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, Exception_t* ___nativeException0, const RuntimeMethod* method) ;
// System.Int64 System.ParseNumbers::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParseNumbers_StringToLong_m08F9FD5BE462015BCE7DF43ADB709A2C639D561A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, int32_t ___radix1, int32_t ___flags2, int32_t* ___currPos3, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Char System.Char::ToLowerInvariant(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToLowerInvariant_mDC9BA9523EA82DE91CD6F814206EB3C9F15BFA2C (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Guid::WriteByteHelper(System.Span`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E_inline (Guid_t* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357_gshared)(___array0, method);
}
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130 (Guid_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32>(T&,System.Int32)
inline int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (int32_t*, int32_t, const RuntimeMethod*))Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_gshared)(___source0, ___elementOffset1, method);
}
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B (Guid_t* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___g0, const RuntimeMethod* method) ;
// System.Int32 System.Guid::GetResult(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C (Guid_t* __this, uint32_t ___me0, uint32_t ___them1, const RuntimeMethod* method) ;
// System.Int32 System.Guid::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB (Guid_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Guid::CompareTo(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586 (Guid_t* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Char System.Guid::HexToChar(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline (int32_t ___a0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Boolean System.Guid::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79 (Guid_t* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Char>::get_Length()
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
inline Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_gshared)(___span0, method);
}
// System.Int32 System.Guid::HexsToChars(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70 (Il2CppChar* ___guidChars0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) ;
// System.Int32 System.Guid::HexsToCharsHexOutput(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851 (Il2CppChar* ___guidChars0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) ;
// System.Boolean System.Guid::System.ISpanFormattable.TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_System_ISpanFormattable_TryFormat_mAA4B1A160D805A87D08267AA47C933CE1480404D (Guid_t* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, RuntimeObject* ___provider3, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E (int32_t ___argument0, const RuntimeMethod* method) ;
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.Int32)
inline Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5 (Il2CppChar* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_gshared)(___source0, ___elementOffset1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowIndexOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_mF34F12100A9B32CC6EC10AE7582D7177F2289C06 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// T System.Runtime.CompilerServices.Unsafe::As<System.Array/RawData>(System.Object)
inline RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* Unsafe_As_TisRawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_m44DAFBC67DEF3D913BD3478467D12FACF8E786F7 (RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return ((  RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* (*) (RuntimeObject*, const RuntimeMethod*))Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared)(___o0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTime System.DateTimeParse::ParseExact(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeParse_ParseExact_mDC1B5C2449904A353081D0850E2B8FC14083426C (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, int32_t ___style3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___s0;
		DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D((&V_0), L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___s0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___format1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi2;
		int32_t L_4 = ___style3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DateTimeParse_TryParseExact_mE278766D22954690798736AD38FB25607FF3C605(L_1, L_2, L_3, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 L_6 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = L_6.___parsedDate_11;
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var)));
		Exception_t* L_8;
		L_8 = DateTimeParse_GetDateTimeParseException_m7775A148A55B3FF70DDFCD608E55B11E7A84ECC8((&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_ParseExact_mDC1B5C2449904A353081D0850E2B8FC14083426C_RuntimeMethod_var)));
	}
}
// System.Boolean System.DateTimeParse::TryParseExact(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParseExact_m815D4E080DDCD01EF0C8B3A7F541E371060B3132 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, int32_t ___style3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___result4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_0 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___s0;
		DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D((&V_0), L_2, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___s0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___format1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_5 = ___dtfi2;
		int32_t L_6 = ___style3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DateTimeParse_TryParseExact_mE278766D22954690798736AD38FB25607FF3C605(L_3, L_4, L_5, L_6, (&V_0), NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_8 = ___result4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 L_9 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10 = L_9.___parsedDate_11;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_8 = L_10;
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::TryParseExact(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParseExact_mE278766D22954690798736AD38FB25607FF3C605 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, int32_t ___style3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___s0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_1 = ___result4;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_1, 3, _stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880, NULL);
		return (bool)0;
	}

IL_0018:
	{
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___format1), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result4;
		DateTimeResult_SetBadFormatSpecifierFailure_m9FC4392236DE50A674F50361A1BB06F6944BD214(L_3, NULL);
		return (bool)0;
	}

IL_002a:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___s0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___format1;
		int32_t L_6 = ___style3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_7 = ___dtfi2;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_8 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = DateTimeParse_DoStrictParse_mC03205AA52B2A37EE27088FEA9ED7DD4E7F20F9F(L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean System.DateTimeParse::MatchWord(System.__DTString&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchWord_mA7B7DC7F197B764C500FA173FB1F5BB3F110A6D1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, String_t* ___target1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		String_t* L_0 = ___target1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_3 = (&L_2->___Value_0);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_3, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_5 = ___str0;
		int32_t L_6 = L_5->___Index_1;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_6)))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_7 = ___str0;
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_8;
		L_8 = __DTString_get_CompareInfo_m60B598A103E1AD8C7A84D1294398713BB72EC372_inline(L_7, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_10 = (&L_9->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_11 = ___str0;
		int32_t L_12 = L_11->___Index_1;
		String_t* L_13 = ___target1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_15;
		L_15 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_10, L_12, L_14, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_16 = ___target1;
		NullCheck(L_8);
		int32_t L_17;
		L_17 = CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6(L_8, L_15, L_16, 1, NULL);
		if (!L_17)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str0;
		int32_t L_19 = L_18->___Index_1;
		String_t* L_20 = ___target1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_20, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, L_21));
		int32_t L_22 = V_0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_23 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_24 = (&L_23->___Value_0);
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_24, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_22) >= ((int32_t)L_25)))
		{
			goto IL_0076;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_26 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_27 = (&L_26->___Value_0);
		int32_t L_28 = V_0;
		Il2CppChar* L_29;
		L_29 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_27, L_28, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_30 = *((uint16_t*)L_29);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678(L_30, NULL);
		if (!L_31)
		{
			goto IL_0076;
		}
	}
	{
		return (bool)0;
	}

IL_0076:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_32 = ___str0;
		int32_t L_33 = V_0;
		L_32->___Index_1 = L_33;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_34 = ___str0;
		int32_t L_35 = L_34->___Index_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_36 = ___str0;
		int32_t L_37;
		L_37 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_36, NULL);
		if ((((int32_t)L_35) >= ((int32_t)L_37)))
		{
			goto IL_00a3;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_39 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_40 = (&L_39->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_41 = ___str0;
		int32_t L_42 = L_41->___Index_1;
		Il2CppChar* L_43;
		L_43 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_40, L_42, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_44 = *((uint16_t*)L_43);
		L_38->___m_current_2 = L_44;
	}

IL_00a3:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetTimeZoneName(System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeZoneName_mE95CAA2AEEC0A0D1B66F23DAAFF4A440B517343F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735);
		s_Il2CppMethodInitialized = true;
	}
{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DateTimeParse_MatchWord_mA7B7DC7F197B764C500FA173FB1F5BB3F110A6D1(L_0, _stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DateTimeParse_MatchWord_mA7B7DC7F197B764C500FA173FB1F5BB3F110A6D1(L_2, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
{
		Il2CppChar L_0 = ___ch0;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)48)))) <= ((uint32_t)((int32_t)9))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.DateTimeParse::ParseFraction(System.__DTString&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseFraction_m98F0CC92F633C924C6AFD0D7B97277517CF82AF4 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, double* ___result1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
double V_0 = 0.0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		double* L_0 = ___result1;
		*((double*)L_0) = (double)(0.0);
		V_0 = (0.10000000000000001);
		V_1 = 0;
		goto IL_0035;
	}

IL_0019:
	{
		double* L_1 = ___result1;
		double* L_2 = ___result1;
		double L_3 = *((double*)L_2);
		Il2CppChar L_4 = V_2;
		double L_5 = V_0;
		*((double*)L_1) = (double)((double)il2cpp_codegen_add(L_3, ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)48)))), L_5))));
		double L_6 = V_0;
		V_0 = ((double)il2cpp_codegen_multiply(L_6, (0.10000000000000001)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0035:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_8 = ___str0;
		bool L_9;
		L_9 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_8, NULL);
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str0;
		Il2CppChar L_11 = L_10->___m_current_2;
		Il2CppChar L_12 = L_11;
		V_2 = L_12;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557(L_12, NULL);
		if (L_13)
		{
			goto IL_0019;
		}
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		return (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.DateTimeParse::ParseTimeZone(System.__DTString&,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseTimeZone_mF3F355E14D6B76BA74234B98A6049BBB58439934 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result1, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_1;
		L_1 = __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27(L_0, NULL);
		V_2 = L_1;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_2 = V_2;
		int32_t L_3 = L_2.___length_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		Il2CppChar L_4;
		L_4 = DTSubString_get_Item_m1F52F78057FA33F0CB350659CF94DC678C4725B6((&V_2), 0, NULL);
		V_3 = L_4;
		Il2CppChar L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)43))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)45))))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_7 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_8 = V_2;
		__DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F(L_7, L_8, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_10;
		L_10 = __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27(L_9, NULL);
		V_2 = L_10;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_11 = V_2;
		int32_t L_12 = L_11.___type_3;
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_13 = V_2;
		int32_t L_14 = L_13.___value_4;
		V_4 = L_14;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_15 = V_2;
		int32_t L_16 = L_15.___length_2;
		V_5 = L_16;
		int32_t L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}

IL_005e:
	{
		int32_t L_19 = V_4;
		V_0 = L_19;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_20 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_21 = V_2;
		__DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F(L_20, L_21, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_22 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_23;
		L_23 = __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27(L_22, NULL);
		V_2 = L_23;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_24 = V_2;
		int32_t L_25 = L_24.___length_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_00e0;
		}
	}
	{
		Il2CppChar L_26;
		L_26 = DTSubString_get_Item_m1F52F78057FA33F0CB350659CF94DC678C4725B6((&V_2), 0, NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_00e0;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_27 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_28 = V_2;
		__DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F(L_27, L_28, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_30;
		L_30 = __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27(L_29, NULL);
		V_2 = L_30;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_31 = V_2;
		int32_t L_32 = L_31.___type_3;
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_00ad;
		}
	}
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_33 = V_2;
		int32_t L_34 = L_33.___length_2;
		if ((((int32_t)L_34) < ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_35 = V_2;
		int32_t L_36 = L_35.___length_2;
		if ((((int32_t)L_36) <= ((int32_t)2)))
		{
			goto IL_00af;
		}
	}

IL_00ad:
	{
		return (bool)0;
	}

IL_00af:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_37 = V_2;
		int32_t L_38 = L_37.___value_4;
		V_1 = L_38;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_39 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_40 = V_2;
		__DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F(L_39, L_40, NULL);
		goto IL_00e0;
	}

IL_00bf:
	{
		int32_t L_41 = V_5;
		if ((((int32_t)L_41) == ((int32_t)3)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_42 = V_5;
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_00de;
		}
	}

IL_00c9:
	{
		int32_t L_43 = V_4;
		V_0 = ((int32_t)(L_43/((int32_t)100)));
		int32_t L_44 = V_4;
		V_1 = ((int32_t)(L_44%((int32_t)100)));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_45 = ___str0;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_46 = V_2;
		__DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F(L_45, L_46, NULL);
		goto IL_00e0;
	}

IL_00de:
	{
		return (bool)0;
	}

IL_00e0:
	{
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_48 = V_1;
		if ((((int32_t)L_48) < ((int32_t)((int32_t)60))))
		{
			goto IL_00eb;
		}
	}

IL_00e9:
	{
		return (bool)0;
	}

IL_00eb:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_49 = ___result1;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_52;
		memset((&L_52), 0, sizeof(L_52));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_52), L_50, L_51, 0, /*hidden argument*/NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_49 = L_52;
		Il2CppChar L_53 = V_3;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_010a;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_54 = ___result1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_55 = ___result1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_56;
		L_56 = TimeSpan_Negate_m3BF3036191A2FDC35250891CD82AD3283A13ABB4(L_55, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_54 = L_56;
	}

IL_010a:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::HandleTimeZone(System.__DTString&,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_HandleTimeZone_mFED144664DF98BB5DA4C18A04CCCB5580EAD843C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		int32_t L_1 = L_0->___Index_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_2, NULL);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_00ad;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_4 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_5 = (&L_4->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str0;
		int32_t L_7 = L_6->___Index_1;
		Il2CppChar* L_8;
		L_8 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_5, L_7, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_9 = *((uint16_t*)L_8);
		V_0 = L_9;
		V_1 = 0;
		goto IL_0043;
	}

IL_002a:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_11 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_12 = (&L_11->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_13 = ___str0;
		int32_t L_14 = L_13->___Index_1;
		int32_t L_15 = V_1;
		Il2CppChar* L_16;
		L_16 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_12, ((int32_t)il2cpp_codegen_add(L_14, L_15)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_17 = *((uint16_t*)L_16);
		V_0 = L_17;
	}

IL_0043:
	{
		Il2CppChar L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_18, NULL);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_20 = ___str0;
		int32_t L_21 = L_20->___Index_1;
		int32_t L_22 = V_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_23 = ___str0;
		int32_t L_24;
		L_24 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_23, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_21, L_22))) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1)))))
		{
			goto IL_002a;
		}
	}

IL_005d:
	{
		Il2CppChar L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)43))))
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00ad;
		}
	}

IL_0067:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_27 = ___str0;
		int32_t* L_28 = (&L_27->___Index_1);
		int32_t* L_29 = L_28;
		int32_t L_30 = *((int32_t*)L_29);
		int32_t L_31 = V_1;
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result1;
		int32_t L_33 = L_32->___flags_8;
		if (!((int32_t)((int32_t)L_33&((int32_t)256))))
		{
			goto IL_0088;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_34 = ___result1;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_34, NULL);
		return (bool)0;
	}

IL_0088:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_35 = ___result1;
		int32_t* L_36 = (&L_35->___flags_8);
		int32_t* L_37 = L_36;
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)L_37) = (int32_t)((int32_t)(L_38|((int32_t)256)));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_39 = ___str0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_40 = ___result1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_41 = (&L_40->___timeZoneOffset_9);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = DateTimeParse_ParseTimeZone_mF3F355E14D6B76BA74234B98A6049BBB58439934(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_00ad;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_43 = ___result1;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_43, NULL);
		return (bool)0;
	}

IL_00ad:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::Lex(System.DateTimeParse/DS,System.__DTString&,System.DateTimeToken&,System.DateTimeRawInfo&,System.DateTimeResult&,System.Globalization.DateTimeFormatInfo&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5 (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* ___dtok2, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** ___dtfi5, int32_t ___styles6, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B4E26F21A69E717A950F1684EADFD0443AD7B19);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B42_0 = NULL;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B41_0 = NULL;
	int32_t G_B43_0 = 0;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B43_1 = NULL;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B88_0 = NULL;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* G_B89_1 = NULL;
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_0 = ___dtok2;
		L_0->___dtt_0 = ((int32_t)18);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_2 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_2);
		__DTString_GetRegularToken_mF7E4F8A3FDA483D70D31E919BD247BE18834842A(L_1, (&V_0), (&V_1), L_3, NULL);
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_005e;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0925;
			}
			case 3:
			{
				goto IL_0925;
			}
			case 4:
			{
				goto IL_0724;
			}
			case 5:
			{
				goto IL_0919;
			}
			case 6:
			{
				goto IL_06fe;
			}
			case 7:
			{
				goto IL_08c6;
			}
			case 8:
			{
				goto IL_080c;
			}
			case 9:
			{
				goto IL_09d1;
			}
			case 10:
			{
				goto IL_0943;
			}
			case 11:
			{
				goto IL_05a8;
			}
			case 12:
			{
				goto IL_0834;
			}
			case 13:
			{
				goto IL_087d;
			}
			case 14:
			{
				goto IL_09d1;
			}
		}
	}
	{
		goto IL_09d1;
	}

IL_005e:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw3;
		int32_t L_6 = L_5->___numCount_1;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0074;
		}
	}

IL_006b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_8 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_8, NULL);
		return (bool)0;
	}

IL_0074:
	{
		int32_t L_9 = ___dps0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_00ac;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str1;
		int32_t L_11 = L_10->___Index_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_12 = ___str1;
		int32_t L_13;
		L_13 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_12, NULL);
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, 1)))))
		{
			goto IL_00ac;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_14 = ___str1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_15 = (&L_14->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_16 = ___str1;
		int32_t L_17 = L_16->___Index_1;
		Il2CppChar* L_18;
		L_18 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_15, L_17, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_19 = *((uint16_t*)L_18);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00ac;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_20 = ___str1;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_21 = ___raw3;
		double* L_22 = (&L_21->___fraction_7);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = DateTimeParse_ParseFraction_m98F0CC92F633C924C6AFD0D7B97277517CF82AF4(L_20, L_22, NULL);
	}

IL_00ac:
	{
		int32_t L_24 = ___dps0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)19))))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_25 = ___dps0;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_00d2;
		}
	}

IL_00b6:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_26 = ___str1;
		int32_t L_27 = L_26->___Index_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_28 = ___str1;
		int32_t L_29;
		L_29 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_28, NULL);
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_29, 1)))))
		{
			goto IL_00d2;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_30 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = DateTimeParse_HandleTimeZone_mFED144664DF98BB5DA4C18A04CCCB5580EAD843C(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00d2;
		}
	}
	{
		return (bool)0;
	}

IL_00d2:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_33 = ___dtok2;
		int32_t L_34 = V_1;
		L_33->___num_2 = L_34;
		int32_t L_35 = V_0;
		if ((!(((uint32_t)L_35) == ((uint32_t)2))))
		{
			goto IL_02c8;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_36 = ___raw3;
		int32_t L_37 = L_36->___year_3;
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_02bf;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_38 = ___raw3;
		int32_t L_39 = V_1;
		L_38->___year_3 = L_39;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_40 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_41 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_42 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_41);
		int32_t L_43;
		L_43 = __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84(L_40, L_42, (&V_2), (&V_3), NULL);
		int32_t L_44 = L_43;
		V_4 = L_44;
		V_5 = L_44;
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) > ((int32_t)((int32_t)1792))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_46 = V_5;
		if ((((int32_t)L_46) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_47 = V_5;
		if ((((int32_t)L_47) == ((int32_t)((int32_t)512))))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)768))))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_49 = V_5;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)1024))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_02b4;
	}

IL_0140:
	{
		int32_t L_50 = V_5;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)1280))))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)1536))))
		{
			goto IL_022a;
		}
	}
	{
		int32_t L_52 = V_5;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)1792))))
		{
			goto IL_0237;
		}
	}
	{
		goto IL_02b4;
	}

IL_0169:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) > ((int32_t)((int32_t)2560))))
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)2304))))
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)2560))))
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b4;
	}

IL_019b:
	{
		int32_t L_57 = V_5;
		if ((((int32_t)L_57) > ((int32_t)((int32_t)3072))))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)2816))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_59 = V_5;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)3072))))
		{
			goto IL_02a2;
		}
	}
	{
		goto IL_02b4;
	}

IL_01c1:
	{
		int32_t L_60 = V_5;
		if ((((int32_t)L_60) == ((int32_t)((int32_t)3328))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_61 = V_5;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)3840))))
		{
			goto IL_0252;
		}
	}
	{
		goto IL_02b4;
	}

IL_01db:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_62 = ___dtok2;
		L_62->___dtt_0 = ((int32_t)14);
		goto IL_02bd;
	}

IL_01e8:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_63 = ___raw3;
		int32_t L_64 = L_63->___timeMark_6;
		if ((!(((uint32_t)L_64) == ((uint32_t)(-1)))))
		{
			goto IL_0211;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_65 = ___raw3;
		int32_t L_66 = V_4;
		G_B41_0 = L_65;
		if ((((int32_t)L_66) == ((int32_t)((int32_t)1024))))
		{
			G_B42_0 = L_65;
			goto IL_01fe;
		}
	}
	{
		G_B43_0 = 1;
		G_B43_1 = G_B41_0;
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B43_0 = 0;
		G_B43_1 = G_B42_0;
	}

IL_01ff:
	{
		G_B43_1->___timeMark_6 = G_B43_0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_67 = ___dtok2;
		L_67->___dtt_0 = ((int32_t)12);
		goto IL_02bd;
	}

IL_0211:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_68 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_68, NULL);
		goto IL_02bd;
	}

IL_021d:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_69 = ___dtok2;
		L_69->___dtt_0 = ((int32_t)12);
		goto IL_02bd;
	}

IL_022a:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_70 = ___dtok2;
		L_70->___dtt_0 = ((int32_t)13);
		goto IL_02bd;
	}

IL_0237:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_71 = ___raw3;
		bool L_72 = L_71->___hasSameDateAndTimeSeparators_8;
		if (L_72)
		{
			goto IL_0248;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_73 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_73, NULL);
		return (bool)0;
	}

IL_0248:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_74 = ___dtok2;
		L_74->___dtt_0 = ((int32_t)13);
		goto IL_02bd;
	}

IL_0252:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_75 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_76 = ___dps0;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)13);
		int32_t L_80 = (int32_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0286;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_81 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_82 = ___dps0;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)12);
		int32_t L_86 = (int32_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((((int32_t)L_86) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0286;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_87 = ___str1;
		int32_t L_88 = V_2;
		L_87->___Index_1 = L_88;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_89 = ___str1;
		Il2CppChar L_90 = V_3;
		L_89->___m_current_2 = L_90;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_91 = ___dtok2;
		L_91->___dtt_0 = ((int32_t)12);
		goto IL_02bd;
	}

IL_0286:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_92 = ___dtok2;
		L_92->___dtt_0 = ((int32_t)13);
		goto IL_02bd;
	}

IL_0290:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_93 = ___dtok2;
		L_93->___dtt_0 = ((int32_t)9);
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_94 = ___dtok2;
		int32_t L_95 = V_4;
		L_94->___suffix_1 = L_95;
		goto IL_02bd;
	}

IL_02a2:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_96 = ___dtok2;
		L_96->___dtt_0 = ((int32_t)10);
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_97 = ___dtok2;
		int32_t L_98 = V_4;
		L_97->___suffix_1 = L_98;
		goto IL_02bd;
	}

IL_02b4:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_99 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_99, NULL);
		return (bool)0;
	}

IL_02bd:
	{
		return (bool)1;
	}

IL_02bf:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_100 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_100, NULL);
		return (bool)0;
	}

IL_02c8:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_101 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_102 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_103 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_102);
		int32_t L_104;
		L_104 = __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84(L_101, L_103, (&V_2), (&V_3), NULL);
		int32_t L_105 = L_104;
		V_4 = L_105;
		V_5 = L_105;
		int32_t L_106 = V_5;
		if ((((int32_t)L_106) > ((int32_t)((int32_t)2048))))
		{
			goto IL_0358;
		}
	}
	{
		int32_t L_107 = V_5;
		if ((((int32_t)L_107) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0315;
		}
	}
	{
		int32_t L_108 = V_5;
		if ((((int32_t)L_108) == ((int32_t)((int32_t)512))))
		{
			goto IL_03cd;
		}
	}
	{
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) == ((int32_t)((int32_t)768))))
		{
			goto IL_0456;
		}
	}
	{
		int32_t L_110 = V_5;
		if ((((int32_t)L_110) == ((int32_t)((int32_t)1024))))
		{
			goto IL_03e5;
		}
	}
	{
		goto IL_059f;
	}

IL_0315:
	{
		int32_t L_111 = V_5;
		if ((((int32_t)L_111) > ((int32_t)((int32_t)1536))))
		{
			goto IL_033b;
		}
	}
	{
		int32_t L_112 = V_5;
		if ((((int32_t)L_112) == ((int32_t)((int32_t)1280))))
		{
			goto IL_03e5;
		}
	}
	{
		int32_t L_113 = V_5;
		if ((((int32_t)L_113) == ((int32_t)((int32_t)1536))))
		{
			goto IL_046e;
		}
	}
	{
		goto IL_059f;
	}

IL_033b:
	{
		int32_t L_114 = V_5;
		if ((((int32_t)L_114) == ((int32_t)((int32_t)1792))))
		{
			goto IL_04cf;
		}
	}
	{
		int32_t L_115 = V_5;
		if ((((int32_t)L_115) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0520;
		}
	}
	{
		goto IL_059f;
	}

IL_0358:
	{
		int32_t L_116 = V_5;
		if ((((int32_t)L_116) > ((int32_t)((int32_t)2816))))
		{
			goto IL_038a;
		}
	}
	{
		int32_t L_117 = V_5;
		if ((((int32_t)L_117) == ((int32_t)((int32_t)2304))))
		{
			goto IL_055c;
		}
	}
	{
		int32_t L_118 = V_5;
		if ((((int32_t)L_118) == ((int32_t)((int32_t)2560))))
		{
			goto IL_055c;
		}
	}
	{
		int32_t L_119 = V_5;
		if ((((int32_t)L_119) == ((int32_t)((int32_t)2816))))
		{
			goto IL_0571;
		}
	}
	{
		goto IL_059f;
	}

IL_038a:
	{
		int32_t L_120 = V_5;
		if ((((int32_t)L_120) > ((int32_t)((int32_t)3328))))
		{
			goto IL_03b0;
		}
	}
	{
		int32_t L_121 = V_5;
		if ((((int32_t)L_121) == ((int32_t)((int32_t)3072))))
		{
			goto IL_0571;
		}
	}
	{
		int32_t L_122 = V_5;
		if ((((int32_t)L_122) == ((int32_t)((int32_t)3328))))
		{
			goto IL_0571;
		}
	}
	{
		goto IL_059f;
	}

IL_03b0:
	{
		int32_t L_123 = V_5;
		if ((((int32_t)L_123) == ((int32_t)((int32_t)3584))))
		{
			goto IL_0586;
		}
	}
	{
		int32_t L_124 = V_5;
		if ((((int32_t)L_124) == ((int32_t)((int32_t)3840))))
		{
			goto IL_0486;
		}
	}
	{
		goto IL_059f;
	}

IL_03cd:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_125 = ___dtok2;
		L_125->___dtt_0 = 1;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_126 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_127 = ___dtok2;
		int32_t L_128 = L_127->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_126, L_128, NULL);
		goto IL_09d1;
	}

IL_03e5:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_129 = ___raw3;
		int32_t L_130 = L_129->___timeMark_6;
		if ((!(((uint32_t)L_130) == ((uint32_t)(-1)))))
		{
			goto IL_042e;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_131 = ___raw3;
		int32_t L_132 = V_4;
		G_B87_0 = L_131;
		if ((((int32_t)L_132) == ((int32_t)((int32_t)1024))))
		{
			G_B88_0 = L_131;
			goto IL_03fb;
		}
	}
	{
		G_B89_0 = 1;
		G_B89_1 = G_B87_0;
		goto IL_03fc;
	}

IL_03fb:
	{
		G_B89_0 = 0;
		G_B89_1 = G_B88_0;
	}

IL_03fc:
	{
		G_B89_1->___timeMark_6 = G_B89_0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_133 = ___dtok2;
		L_133->___dtt_0 = 2;
		int32_t L_134 = ___dps0;
		if ((!(((uint32_t)L_134) == ((uint32_t)4))))
		{
			goto IL_0420;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_135 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_136 = ___result4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_137 = ___raw3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_138 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_139 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_138);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_140;
		L_140 = DateTimeParse_ProcessTerminalState_mBBB5DA91A449E17952389A39AF326E7D2B286DFB(((int32_t)21), L_135, L_136, (&___styles6), L_137, L_139, NULL);
		if (L_140)
		{
			goto IL_0420;
		}
	}
	{
		return (bool)0;
	}

IL_0420:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_141 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_142 = ___dtok2;
		int32_t L_143 = L_142->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_141, L_143, NULL);
		goto IL_043a;
	}

IL_042e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_144 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_144, NULL);
		goto IL_09d1;
	}

IL_043a:
	{
		int32_t L_145 = ___dps0;
		if ((((int32_t)L_145) == ((int32_t)((int32_t)19))))
		{
			goto IL_0447;
		}
	}
	{
		int32_t L_146 = ___dps0;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_09d1;
		}
	}

IL_0447:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_147 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_148 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = DateTimeParse_HandleTimeZone_mFED144664DF98BB5DA4C18A04CCCB5580EAD843C(L_147, L_148, NULL);
		if (L_149)
		{
			goto IL_09d1;
		}
	}
	{
		return (bool)0;
	}

IL_0456:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_150 = ___dtok2;
		L_150->___dtt_0 = 3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_151 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_152 = ___dtok2;
		int32_t L_153 = L_152->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_151, L_153, NULL);
		goto IL_09d1;
	}

IL_046e:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_154 = ___dtok2;
		L_154->___dtt_0 = 4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_155 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_156 = ___dtok2;
		int32_t L_157 = L_156->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_155, L_157, NULL);
		goto IL_09d1;
	}

IL_0486:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_158 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_159 = ___dps0;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		int32_t L_162 = 4;
		int32_t L_163 = (int32_t)(L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_04b7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_164 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_165 = ___dps0;
		NullCheck(L_164);
		int32_t L_166 = L_165;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_167 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		NullCheck(L_167);
		int32_t L_168 = 3;
		int32_t L_169 = (int32_t)(L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		if ((((int32_t)L_169) <= ((int32_t)((int32_t)20))))
		{
			goto IL_04b7;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_170 = ___str1;
		int32_t L_171 = V_2;
		L_170->___Index_1 = L_171;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_172 = ___str1;
		Il2CppChar L_173 = V_3;
		L_172->___m_current_2 = L_173;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_174 = ___dtok2;
		L_174->___dtt_0 = 3;
		goto IL_04be;
	}

IL_04b7:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_175 = ___dtok2;
		L_175->___dtt_0 = 4;
	}

IL_04be:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_176 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_177 = ___dtok2;
		int32_t L_178 = L_177->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_176, L_178, NULL);
		goto IL_09d1;
	}

IL_04cf:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_179 = ___raw3;
		bool L_180 = L_179->___hasSameDateAndTimeSeparators_8;
		if (!L_180)
		{
			goto IL_0508;
		}
	}
	{
		int32_t L_181 = ___dps0;
		if ((((int32_t)L_181) == ((int32_t)((int32_t)11))))
		{
			goto IL_04f0;
		}
	}
	{
		int32_t L_182 = ___dps0;
		if ((((int32_t)L_182) == ((int32_t)((int32_t)12))))
		{
			goto IL_04f0;
		}
	}
	{
		int32_t L_183 = ___dps0;
		if ((((int32_t)L_183) == ((int32_t)((int32_t)13))))
		{
			goto IL_04f0;
		}
	}
	{
		int32_t L_184 = ___dps0;
		if ((((int32_t)L_184) == ((int32_t)((int32_t)14))))
		{
			goto IL_04f0;
		}
	}
	{
		int32_t L_185 = ___dps0;
		if ((!(((uint32_t)L_185) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0508;
		}
	}

IL_04f0:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_186 = ___dtok2;
		L_186->___dtt_0 = 4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_187 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_188 = ___dtok2;
		int32_t L_189 = L_188->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_187, L_189, NULL);
		goto IL_09d1;
	}

IL_0508:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_190 = ___dtok2;
		L_190->___dtt_0 = 5;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_191 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_192 = ___dtok2;
		int32_t L_193 = L_192->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_191, L_193, NULL);
		goto IL_09d1;
	}

IL_0520:
	{
	}

IL_0521:
	try
	{// begin try (depth: 1)
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_194 = ___dtok2;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_195 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_196 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_195);
		NullCheck(L_196);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_197;
		L_197 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_196, NULL);
		int32_t L_198 = V_1;
		NullCheck(L_197);
		int32_t L_199;
		L_199 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(29 /* System.Int32 System.Globalization.Calendar::ToFourDigitYear(System.Int32) */, L_197, L_198);
		L_194->___num_2 = L_199;
		goto IL_0547;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0537;
		}
		throw e;
	}

CATCH_0537:
	{// begin catch(System.ArgumentOutOfRangeException)
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_200 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_200, NULL);
		V_6 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_09d3;
	}// end catch (depth: 1)

IL_0547:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_201 = ___dtok2;
		L_201->___dtt_0 = ((int32_t)9);
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_202 = ___dtok2;
		int32_t L_203 = V_4;
		L_202->___suffix_1 = L_203;
		goto IL_09d1;
	}

IL_055c:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_204 = ___dtok2;
		L_204->___dtt_0 = ((int32_t)9);
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_205 = ___dtok2;
		int32_t L_206 = V_4;
		L_205->___suffix_1 = L_206;
		goto IL_09d1;
	}

IL_0571:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_207 = ___dtok2;
		L_207->___dtt_0 = ((int32_t)10);
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_208 = ___dtok2;
		int32_t L_209 = V_4;
		L_208->___suffix_1 = L_209;
		goto IL_09d1;
	}

IL_0586:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_210 = ___dtok2;
		L_210->___dtt_0 = ((int32_t)19);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_211 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_212 = ___dtok2;
		int32_t L_213 = L_212->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_211, L_213, NULL);
		goto IL_09d1;
	}

IL_059f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_214 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_214, NULL);
		return (bool)0;
	}

IL_05a8:
	{
		int32_t L_215 = V_1;
		if ((((int32_t)L_215) < ((int32_t)((int32_t)100))))
		{
			goto IL_0647;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_216 = ___raw3;
		int32_t L_217 = L_216->___year_3;
		if ((!(((uint32_t)L_217) == ((uint32_t)(-1)))))
		{
			goto IL_063e;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_218 = ___raw3;
		int32_t L_219 = V_1;
		L_218->___year_3 = L_219;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_220 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_221 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_222 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_221);
		int32_t L_223;
		L_223 = __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84(L_220, L_222, (&V_2), (&V_3), NULL);
		int32_t L_224 = L_223;
		V_4 = L_224;
		V_5 = L_224;
		int32_t L_225 = V_5;
		if ((((int32_t)L_225) == ((int32_t)((int32_t)512))))
		{
			goto IL_05f2;
		}
	}
	{
		int32_t L_226 = V_5;
		if ((((int32_t)L_226) == ((int32_t)((int32_t)768))))
		{
			goto IL_05ff;
		}
	}
	{
		int32_t L_227 = V_5;
		if ((((int32_t)L_227) == ((int32_t)((int32_t)3840))))
		{
			goto IL_060c;
		}
	}
	{
		goto IL_0635;
	}

IL_05f2:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_228 = ___dtok2;
		L_228->___dtt_0 = ((int32_t)14);
		goto IL_09d1;
	}

IL_05ff:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_229 = ___dtok2;
		L_229->___dtt_0 = ((int32_t)12);
		goto IL_09d1;
	}

IL_060c:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_230 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_231 = ___dps0;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)12);
		int32_t L_235 = (int32_t)(L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		if ((((int32_t)L_235) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0635;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_236 = ___str1;
		int32_t L_237 = V_2;
		L_236->___Index_1 = L_237;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_238 = ___str1;
		Il2CppChar L_239 = V_3;
		L_238->___m_current_2 = L_239;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_240 = ___dtok2;
		L_240->___dtt_0 = ((int32_t)12);
		goto IL_09d1;
	}

IL_0635:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_241 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_241, NULL);
		return (bool)0;
	}

IL_063e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_242 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_242, NULL);
		return (bool)0;
	}

IL_0647:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_243 = ___dtok2;
		int32_t L_244 = V_1;
		L_243->___num_2 = L_244;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_245 = ___raw3;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_246 = ___dtok2;
		int32_t L_247 = L_246->___num_2;
		DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(L_245, L_247, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_248 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_249 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_250 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_249);
		int32_t L_251;
		L_251 = __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84(L_248, L_250, (&V_2), (&V_3), NULL);
		int32_t L_252 = L_251;
		V_4 = L_252;
		V_5 = L_252;
		int32_t L_253 = V_5;
		if ((((int32_t)L_253) > ((int32_t)((int32_t)768))))
		{
			goto IL_0689;
		}
	}
	{
		int32_t L_254 = V_5;
		if ((((int32_t)L_254) == ((int32_t)((int32_t)512))))
		{
			goto IL_069d;
		}
	}
	{
		int32_t L_255 = V_5;
		if ((((int32_t)L_255) == ((int32_t)((int32_t)768))))
		{
			goto IL_06a9;
		}
	}
	{
		goto IL_06f5;
	}

IL_0689:
	{
		int32_t L_256 = V_5;
		if ((((int32_t)L_256) == ((int32_t)((int32_t)1536))))
		{
			goto IL_06a9;
		}
	}
	{
		int32_t L_257 = V_5;
		if ((((int32_t)L_257) == ((int32_t)((int32_t)3840))))
		{
			goto IL_06b5;
		}
	}
	{
		goto IL_06f5;
	}

IL_069d:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_258 = ___dtok2;
		L_258->___dtt_0 = 1;
		goto IL_09d1;
	}

IL_06a9:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_259 = ___dtok2;
		L_259->___dtt_0 = 4;
		goto IL_09d1;
	}

IL_06b5:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_260 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_261 = ___dps0;
		NullCheck(L_260);
		int32_t L_262 = L_261;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		NullCheck(L_263);
		int32_t L_264 = 4;
		int32_t L_265 = (int32_t)(L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		if ((!(((uint32_t)L_265) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_06e9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_266 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_267 = ___dps0;
		NullCheck(L_266);
		int32_t L_268 = L_267;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_269 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		NullCheck(L_269);
		int32_t L_270 = 3;
		int32_t L_271 = (int32_t)(L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		if ((((int32_t)L_271) <= ((int32_t)((int32_t)20))))
		{
			goto IL_06e9;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_272 = ___str1;
		int32_t L_273 = V_2;
		L_272->___Index_1 = L_273;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_274 = ___str1;
		Il2CppChar L_275 = V_3;
		L_274->___m_current_2 = L_275;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_276 = ___dtok2;
		L_276->___dtt_0 = 3;
		goto IL_09d1;
	}

IL_06e9:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_277 = ___dtok2;
		L_277->___dtt_0 = 4;
		goto IL_09d1;
	}

IL_06f5:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_278 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_278, NULL);
		return (bool)0;
	}

IL_06fe:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_279 = ___raw3;
		int32_t L_280 = L_279->___dayOfWeek_4;
		if ((!(((uint32_t)L_280) == ((uint32_t)(-1)))))
		{
			goto IL_071b;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_281 = ___raw3;
		int32_t L_282 = V_1;
		L_281->___dayOfWeek_4 = L_282;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_283 = ___dtok2;
		L_283->___dtt_0 = ((int32_t)11);
		goto IL_09d1;
	}

IL_071b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_284 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_284, NULL);
		return (bool)0;
	}

IL_0724:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_285 = ___raw3;
		int32_t L_286 = L_285->___month_2;
		if ((!(((uint32_t)L_286) == ((uint32_t)(-1)))))
		{
			goto IL_0803;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_287 = ___str1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_288 = ___dtfi5;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_289 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_288);
		int32_t L_290;
		L_290 = __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84(L_287, L_289, (&V_2), (&V_3), NULL);
		int32_t L_291 = L_290;
		V_4 = L_291;
		V_5 = L_291;
		int32_t L_292 = V_5;
		if ((((int32_t)L_292) > ((int32_t)((int32_t)768))))
		{
			goto IL_0762;
		}
	}
	{
		int32_t L_293 = V_5;
		if ((((int32_t)L_293) == ((int32_t)((int32_t)512))))
		{
			goto IL_077f;
		}
	}
	{
		int32_t L_294 = V_5;
		if ((((int32_t)L_294) == ((int32_t)((int32_t)768))))
		{
			goto IL_0788;
		}
	}
	{
		goto IL_07ee;
	}

IL_0762:
	{
		int32_t L_295 = V_5;
		if ((((int32_t)L_295) == ((int32_t)((int32_t)1536))))
		{
			goto IL_0791;
		}
	}
	{
		int32_t L_296 = V_5;
		if ((((int32_t)L_296) == ((int32_t)((int32_t)1792))))
		{
			goto IL_079a;
		}
	}
	{
		int32_t L_297 = V_5;
		if ((((int32_t)L_297) == ((int32_t)((int32_t)3840))))
		{
			goto IL_07b4;
		}
	}
	{
		goto IL_07ee;
	}

IL_077f:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_298 = ___dtok2;
		L_298->___dtt_0 = 6;
		goto IL_07f7;
	}

IL_0788:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_299 = ___dtok2;
		L_299->___dtt_0 = 7;
		goto IL_07f7;
	}

IL_0791:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_300 = ___dtok2;
		L_300->___dtt_0 = 8;
		goto IL_07f7;
	}

IL_079a:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_301 = ___raw3;
		bool L_302 = L_301->___hasSameDateAndTimeSeparators_8;
		if (L_302)
		{
			goto IL_07ab;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_303 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_303, NULL);
		return (bool)0;
	}

IL_07ab:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_304 = ___dtok2;
		L_304->___dtt_0 = 8;
		goto IL_07f7;
	}

IL_07b4:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_305 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_306 = ___dps0;
		NullCheck(L_305);
		int32_t L_307 = L_306;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_308 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		NullCheck(L_308);
		int32_t L_309 = 8;
		int32_t L_310 = (int32_t)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		if ((!(((uint32_t)L_310) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_07e5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_311 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_312 = ___dps0;
		NullCheck(L_311);
		int32_t L_313 = L_312;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		NullCheck(L_314);
		int32_t L_315 = 7;
		int32_t L_316 = (int32_t)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		if ((((int32_t)L_316) <= ((int32_t)((int32_t)20))))
		{
			goto IL_07e5;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_317 = ___str1;
		int32_t L_318 = V_2;
		L_317->___Index_1 = L_318;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_319 = ___str1;
		Il2CppChar L_320 = V_3;
		L_319->___m_current_2 = L_320;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_321 = ___dtok2;
		L_321->___dtt_0 = 7;
		goto IL_07f7;
	}

IL_07e5:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_322 = ___dtok2;
		L_322->___dtt_0 = 8;
		goto IL_07f7;
	}

IL_07ee:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_323 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_323, NULL);
		return (bool)0;
	}

IL_07f7:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_324 = ___raw3;
		int32_t L_325 = V_1;
		L_324->___month_2 = L_325;
		goto IL_09d1;
	}

IL_0803:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_326 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_326, NULL);
		return (bool)0;
	}

IL_080c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_327 = ___result4;
		int32_t L_328 = L_327->___era_7;
		if ((((int32_t)L_328) == ((int32_t)(-1))))
		{
			goto IL_082b;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_329 = ___result4;
		int32_t L_330 = V_1;
		L_329->___era_7 = L_330;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_331 = ___dtok2;
		L_331->___dtt_0 = ((int32_t)16);
		goto IL_09d1;
	}

IL_082b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_332 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_332, NULL);
		return (bool)0;
	}

IL_0834:
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_333;
		L_333 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (!L_333)
		{
			goto IL_0841;
		}
	}
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_334 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_334, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_334, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5_RuntimeMethod_var)));
	}

IL_0841:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_335 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_336;
		L_336 = DateTimeParse_GetJapaneseCalendarDefaultInstance_m265C8A05BBC8F95D6F85943B9B2AA58209C3BF9D(NULL);
		L_335->___calendar_10 = L_336;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_337 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_338;
		L_338 = DateTimeFormatInfo_GetJapaneseCalendarDTFI_m99547D0BCED27B4FC1678390663487A1A97E8FF6(NULL);
		*((RuntimeObject**)L_337) = (RuntimeObject*)L_338;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_337, (void*)(RuntimeObject*)L_338);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_339 = ___result4;
		int32_t L_340 = L_339->___era_7;
		if ((((int32_t)L_340) == ((int32_t)(-1))))
		{
			goto IL_0874;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_341 = ___result4;
		int32_t L_342 = V_1;
		L_341->___era_7 = L_342;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_343 = ___dtok2;
		L_343->___dtt_0 = ((int32_t)16);
		goto IL_09d1;
	}

IL_0874:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_344 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_344, NULL);
		return (bool)0;
	}

IL_087d:
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_345;
		L_345 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (!L_345)
		{
			goto IL_088a;
		}
	}
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_346 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_346, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5_RuntimeMethod_var)));
	}

IL_088a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_347 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_348;
		L_348 = DateTimeParse_GetTaiwanCalendarDefaultInstance_m3A580037CB29251883ECC6F2407CC19C07189038(NULL);
		L_347->___calendar_10 = L_348;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_349 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_350;
		L_350 = DateTimeFormatInfo_GetTaiwanCalendarDTFI_mC9D2BCBD331BB4D07B02A2740817962AD77019FF(NULL);
		*((RuntimeObject**)L_349) = (RuntimeObject*)L_350;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_349, (void*)(RuntimeObject*)L_350);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_351 = ___result4;
		int32_t L_352 = L_351->___era_7;
		if ((((int32_t)L_352) == ((int32_t)(-1))))
		{
			goto IL_08bd;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_353 = ___result4;
		int32_t L_354 = V_1;
		L_353->___era_7 = L_354;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_355 = ___dtok2;
		L_355->___dtt_0 = ((int32_t)16);
		goto IL_09d1;
	}

IL_08bd:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_356 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_356, NULL);
		return (bool)0;
	}

IL_08c6:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_357 = ___result4;
		int32_t L_358 = L_357->___flags_8;
		if (!((int32_t)((int32_t)L_358&((int32_t)256))))
		{
			goto IL_08de;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_359 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_359, NULL);
		return (bool)0;
	}

IL_08de:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_360 = ___dtok2;
		L_360->___dtt_0 = ((int32_t)15);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_361 = ___result4;
		int32_t* L_362 = (&L_361->___flags_8);
		int32_t* L_363 = L_362;
		int32_t L_364 = *((int32_t*)L_363);
		*((int32_t*)L_363) = (int32_t)((int32_t)(L_364|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_365 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_366;
		memset((&L_366), 0, sizeof(L_366));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_366), ((int64_t)0), /*hidden argument*/NULL);
		L_365->___timeZoneOffset_9 = L_366;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_367 = ___result4;
		int32_t* L_368 = (&L_367->___flags_8);
		int32_t* L_369 = L_368;
		int32_t L_370 = *((int32_t*)L_369);
		*((int32_t*)L_369) = (int32_t)((int32_t)(L_370|((int32_t)512)));
		goto IL_09d1;
	}

IL_0919:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_371 = ___dtok2;
		L_371->___dtt_0 = 0;
		goto IL_09d1;
	}

IL_0925:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_372 = ___raw3;
		int32_t L_373 = L_372->___timeMark_6;
		if ((!(((uint32_t)L_373) == ((uint32_t)(-1)))))
		{
			goto IL_093a;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_374 = ___raw3;
		int32_t L_375 = V_1;
		L_374->___timeMark_6 = L_375;
		goto IL_09d1;
	}

IL_093a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_376 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_376, NULL);
		return (bool)0;
	}

IL_0943:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_377 = ___str1;
		Il2CppChar L_378 = L_377->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_379;
		L_379 = Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678(L_378, NULL);
		if (!L_379)
		{
			goto IL_096a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_380 = ___result4;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_381 = ___str1;
		int32_t L_382 = L_381->___Index_1;
		int32_t L_383 = L_382;
		RuntimeObject* L_384 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_383);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_380, 6, _stringLiteral4B4E26F21A69E717A950F1684EADFD0443AD7B19, L_384, NULL);
		return (bool)0;
	}

IL_096a:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_385 = ___str1;
		Il2CppChar L_386 = L_385->___m_current_2;
		if ((((int32_t)L_386) == ((int32_t)((int32_t)45))))
		{
			goto IL_097e;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_387 = ___str1;
		Il2CppChar L_388 = L_387->___m_current_2;
		if ((!(((uint32_t)L_388) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_09be;
		}
	}

IL_097e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_389 = ___result4;
		int32_t L_390 = L_389->___flags_8;
		if (((int32_t)((int32_t)L_390&((int32_t)256))))
		{
			goto IL_09be;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_391 = ___str1;
		int32_t L_392 = L_391->___Index_1;
		V_7 = L_392;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_393 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_394 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_395 = (&L_394->___timeZoneOffset_9);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_396;
		L_396 = DateTimeParse_ParseTimeZone_mF3F355E14D6B76BA74234B98A6049BBB58439934(L_393, L_395, NULL);
		if (!L_396)
		{
			goto IL_09b6;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_397 = ___result4;
		int32_t* L_398 = (&L_397->___flags_8);
		int32_t* L_399 = L_398;
		int32_t L_400 = *((int32_t*)L_399);
		*((int32_t*)L_399) = (int32_t)((int32_t)(L_400|((int32_t)256)));
		return (bool)1;
	}

IL_09b6:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_401 = ___str1;
		int32_t L_402 = V_7;
		L_401->___Index_1 = L_402;
	}

IL_09be:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_403 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_404;
		L_404 = DateTimeParse_VerifyValidPunctuation_m620C9F9E5B0C07AD43A7826A3156033B6B75CE2F(L_403, NULL);
		if (!L_404)
		{
			goto IL_09c8;
		}
	}
	{
		return (bool)1;
	}

IL_09c8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_405 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_405, NULL);
		return (bool)0;
	}

IL_09d1:
	{
		return (bool)1;
	}

IL_09d3:
	{
		bool L_406 = V_6;
		return L_406;
	}
}
// System.Globalization.Calendar System.DateTimeParse::GetJapaneseCalendarDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeParse_GetJapaneseCalendarDefaultInstance_m265C8A05BBC8F95D6F85943B9B2AA58209C3BF9D (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JapaneseCalendar_t639E4548E016255B55B31A644186A40A5D055E0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_1 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_GetJapaneseCalendarDefaultInstance_m265C8A05BBC8F95D6F85943B9B2AA58209C3BF9D_RuntimeMethod_var)));
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(JapaneseCalendar_t639E4548E016255B55B31A644186A40A5D055E0E_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2;
		L_2 = JapaneseCalendar_GetDefaultInstance_mEDD5EEFAF9B20CC6616CA8DAB8ADCE47E5565657(NULL);
		return L_2;
	}
}
// System.Globalization.Calendar System.DateTimeParse::GetTaiwanCalendarDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeParse_GetTaiwanCalendarDefaultInstance_m3A580037CB29251883ECC6F2407CC19C07189038 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaiwanCalendar_tFC159D82844A64A93FE1EB3363CC64DE933EE64B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_1 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_GetTaiwanCalendarDefaultInstance_m3A580037CB29251883ECC6F2407CC19C07189038_RuntimeMethod_var)));
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(TaiwanCalendar_tFC159D82844A64A93FE1EB3363CC64DE933EE64B_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2;
		L_2 = TaiwanCalendar_GetDefaultInstance_m8DA29AC16562ED3BA40872B88C52376450602D8D(NULL);
		return L_2;
	}
}
// System.Boolean System.DateTimeParse::VerifyValidPunctuation(System.__DTString&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_VerifyValidPunctuation_m620C9F9E5B0C07AD43A7826A3156033B6B75CE2F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Il2CppChar V_0 = 0x0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_1 = (&L_0->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		int32_t L_3 = L_2->___Index_1;
		Il2CppChar* L_4;
		L_4 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_1, L_3, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_5 = *((uint16_t*)L_4);
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0078;
		}
	}
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0061;
	}

IL_0020:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_7 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_8 = (&L_7->___Value_0);
		int32_t L_9 = V_3;
		Il2CppChar* L_10;
		L_10 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_8, L_9, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_11 = *((uint16_t*)L_10);
		V_0 = L_11;
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_003f:
	{
		V_1 = (bool)1;
		goto IL_005d;
	}

IL_0043:
	{
		Il2CppChar L_15 = V_0;
		if (L_15)
		{
			goto IL_004b;
		}
	}
	{
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_004b:
	{
		Il2CppChar L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_17, NULL);
		if (L_18)
		{
			goto IL_005d;
		}
	}
	{
		bool L_19 = V_1;
		bool L_20 = V_2;
		if (!((int32_t)(((((int32_t)L_19) == ((int32_t)0))? 1 : 0)|(int32_t)L_20)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_005d:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0061:
	{
		int32_t L_22 = V_3;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_23 = ___str0;
		int32_t L_24;
		L_24 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0020;
		}
	}
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_26 = ___str0;
		bool L_27;
		L_27 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_26, NULL);
		return (bool)1;
	}

IL_0078:
	{
		Il2CppChar L_28 = V_0;
		if (L_28)
		{
			goto IL_00b5;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		int32_t L_30 = L_29->___Index_1;
		V_4 = L_30;
		goto IL_009d;
	}

IL_0085:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_31 = ___str0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_32 = (&L_31->___Value_0);
		int32_t L_33 = V_4;
		Il2CppChar* L_34;
		L_34 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_32, L_33, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_35 = *((uint16_t*)L_34);
		if (!L_35)
		{
			goto IL_0097;
		}
	}
	{
		return (bool)0;
	}

IL_0097:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_009d:
	{
		int32_t L_37 = V_4;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str0;
		int32_t L_39;
		L_39 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_38, NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0085;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_40 = ___str0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_41 = ___str0;
		int32_t L_42;
		L_42 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(L_41, NULL);
		L_40->___Index_1 = L_42;
		return (bool)1;
	}

IL_00b5:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetYearMonthDayOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147 (String_t* ___datePattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	int32_t V_7 = 0;
	{
		V_0 = (-1);
		V_1 = (-1);
		V_2 = (-1);
		V_3 = 0;
		V_4 = (bool)0;
		V_5 = 0;
		goto IL_00f0;
	}

IL_0013:
	{
		String_t* L_0 = ___datePattern0;
		int32_t L_1 = V_5;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_6 = L_2;
		Il2CppChar L_3 = V_6;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppChar L_4 = V_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		int32_t L_5 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_00ea;
	}

IL_0034:
	{
		Il2CppChar L_6 = V_6;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0040;
		}
	}
	{
		Il2CppChar L_7 = V_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0047;
		}
	}

IL_0040:
	{
		bool L_8 = V_4;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_00ea;
		}
	}
	{
		Il2CppChar L_10 = V_6;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)121)))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		V_0 = L_12;
		goto IL_0062;
	}

IL_005c:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0062:
	{
		int32_t L_14 = V_5;
		String_t* L_15 = ___datePattern0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1))) >= ((int32_t)L_16)))
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_17 = ___datePattern0;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)121))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_00ea;
	}

IL_007e:
	{
		Il2CppChar L_20 = V_6;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_1 = L_22;
		goto IL_0092;
	}

IL_008c:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0092:
	{
		int32_t L_24 = V_5;
		String_t* L_25 = ___datePattern0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) >= ((int32_t)L_26)))
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_27 = ___datePattern0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, ((int32_t)il2cpp_codegen_add(L_28, 1)), NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)77))))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_00ea;
	}

IL_00ae:
	{
		Il2CppChar L_30 = V_6;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_00ea;
		}
	}
	{
		V_7 = 1;
		goto IL_00c5;
	}

IL_00b9:
	{
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00c5:
	{
		int32_t L_33 = V_5;
		String_t* L_34 = ___datePattern0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_34, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_33, 1))) >= ((int32_t)L_35)))
		{
			goto IL_00df;
		}
	}
	{
		String_t* L_36 = ___datePattern0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Il2CppChar L_38;
		L_38 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_36, ((int32_t)il2cpp_codegen_add(L_37, 1)), NULL);
		if ((((int32_t)L_38) == ((int32_t)((int32_t)100))))
		{
			goto IL_00b9;
		}
	}

IL_00df:
	{
		int32_t L_39 = V_7;
		if ((((int32_t)L_39) > ((int32_t)2)))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = V_3;
		int32_t L_41 = L_40;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		V_2 = L_41;
	}

IL_00ea:
	{
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00f0:
	{
		int32_t L_43 = V_5;
		String_t* L_44 = ___datePattern0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_44, NULL);
		if ((((int32_t)L_43) >= ((int32_t)L_45)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)3)))
		{
			goto IL_0013;
		}
	}

IL_0101:
	{
		int32_t L_47 = V_0;
		if (L_47)
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_48 = V_1;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)2))))
		{
			goto IL_0111;
		}
	}
	{
		int32_t* L_50 = ___order2;
		*((int32_t*)L_50) = (int32_t)0;
		return (bool)1;
	}

IL_0111:
	{
		int32_t L_51 = V_1;
		if (L_51)
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_53) == ((uint32_t)2))))
		{
			goto IL_0121;
		}
	}
	{
		int32_t* L_54 = ___order2;
		*((int32_t*)L_54) = (int32_t)1;
		return (bool)1;
	}

IL_0121:
	{
		int32_t L_55 = V_2;
		if (L_55)
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_56 = V_1;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t* L_58 = ___order2;
		*((int32_t*)L_58) = (int32_t)2;
		return (bool)1;
	}

IL_0131:
	{
		int32_t L_59 = V_0;
		if (L_59)
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_60 = V_2;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_61 = V_1;
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			goto IL_0141;
		}
	}
	{
		int32_t* L_62 = ___order2;
		*((int32_t*)L_62) = (int32_t)3;
		return (bool)1;
	}

IL_0141:
	{
		int32_t* L_63 = ___order2;
		*((int32_t*)L_63) = (int32_t)(-1);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetYearMonthOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetYearMonthOrder_mB243726286078DF919A8931DB4DD3C72D6E54C39 (String_t* ___pattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	{
		V_0 = (-1);
		V_1 = (-1);
		V_2 = 0;
		V_3 = (bool)0;
		V_4 = 0;
		goto IL_00a6;
	}

IL_0010:
	{
		String_t* L_0 = ___pattern0;
		int32_t L_1 = V_4;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_5 = L_2;
		Il2CppChar L_3 = V_5;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = V_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_002e;
		}
	}

IL_0026:
	{
		int32_t L_5 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_00a0;
	}

IL_002e:
	{
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_003f;
		}
	}

IL_003a:
	{
		bool L_8 = V_3;
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_00a0;
		}
	}
	{
		Il2CppChar L_10 = V_5;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)121)))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		V_0 = L_12;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0056:
	{
		int32_t L_14 = V_4;
		String_t* L_15 = ___pattern0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_14, 1))) >= ((int32_t)L_16)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = ___pattern0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppChar L_19;
		L_19 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), NULL);
		if ((((int32_t)L_19) == ((int32_t)((int32_t)121))))
		{
			goto IL_0050;
		}
	}
	{
		goto IL_00a0;
	}

IL_0072:
	{
		Il2CppChar L_20 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_1 = L_22;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0086:
	{
		int32_t L_24 = V_4;
		String_t* L_25 = ___pattern0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_24, 1))) >= ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_27 = ___pattern0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_27, ((int32_t)il2cpp_codegen_add(L_28, 1)), NULL);
		if ((((int32_t)L_29) == ((int32_t)((int32_t)77))))
		{
			goto IL_0080;
		}
	}

IL_00a0:
	{
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a6:
	{
		int32_t L_31 = V_4;
		String_t* L_32 = ___pattern0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_32, NULL);
		if ((((int32_t)L_31) >= ((int32_t)L_33)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) < ((int32_t)2)))
		{
			goto IL_0010;
		}
	}

IL_00b7:
	{
		int32_t L_35 = V_0;
		if (L_35)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_36 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t* L_37 = ___order2;
		*((int32_t*)L_37) = (int32_t)4;
		return (bool)1;
	}

IL_00c3:
	{
		int32_t L_38 = V_1;
		if (L_38)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t* L_40 = ___order2;
		*((int32_t*)L_40) = (int32_t)5;
		return (bool)1;
	}

IL_00cf:
	{
		int32_t* L_41 = ___order2;
		*((int32_t*)L_41) = (int32_t)(-1);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetMonthDayOrder(System.String,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE (String_t* ___pattern0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___order2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	{
		V_0 = (-1);
		V_1 = (-1);
		V_2 = 0;
		V_3 = (bool)0;
		V_4 = 0;
		goto IL_00b7;
	}

IL_0010:
	{
		String_t* L_0 = ___pattern0;
		int32_t L_1 = V_4;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		V_5 = L_2;
		Il2CppChar L_3 = V_5;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)92))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = V_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0031;
		}
	}

IL_0026:
	{
		int32_t L_5 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_00b1;
	}

IL_0031:
	{
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_003d;
		}
	}
	{
		Il2CppChar L_7 = V_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0042;
		}
	}

IL_003d:
	{
		bool L_8 = V_3;
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0042:
	{
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_00b1;
		}
	}
	{
		Il2CppChar L_10 = V_5;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0083;
		}
	}
	{
		V_6 = 1;
		goto IL_005c;
	}

IL_0050:
	{
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005c:
	{
		int32_t L_13 = V_4;
		String_t* L_14 = ___pattern0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, 1))) >= ((int32_t)L_15)))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_16 = ___pattern0;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)100))))
		{
			goto IL_0050;
		}
	}

IL_0076:
	{
		int32_t L_19 = V_6;
		if ((((int32_t)L_19) > ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		V_1 = L_21;
		goto IL_00b1;
	}

IL_0083:
	{
		Il2CppChar L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		V_0 = L_24;
		goto IL_0097;
	}

IL_0091:
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0097:
	{
		int32_t L_26 = V_4;
		String_t* L_27 = ___pattern0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_26, 1))) >= ((int32_t)L_28)))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_29 = ___pattern0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		if ((((int32_t)L_31) == ((int32_t)((int32_t)77))))
		{
			goto IL_0091;
		}
	}

IL_00b1:
	{
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b7:
	{
		int32_t L_33 = V_4;
		String_t* L_34 = ___pattern0;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_34, NULL);
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_36 = V_2;
		if ((((int32_t)L_36) < ((int32_t)2)))
		{
			goto IL_0010;
		}
	}

IL_00c8:
	{
		int32_t L_37 = V_0;
		if (L_37)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t* L_39 = ___order2;
		*((int32_t*)L_39) = (int32_t)6;
		return (bool)1;
	}

IL_00d4:
	{
		int32_t L_40 = V_1;
		if (L_40)
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_41 = V_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t* L_42 = ___order2;
		*((int32_t*)L_42) = (int32_t)7;
		return (bool)1;
	}

IL_00e0:
	{
		int32_t* L_43 = ___order2;
		*((int32_t*)L_43) = (int32_t)(-1);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::TryAdjustYear(System.DateTimeResult&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t* ___adjustedYear2, const RuntimeMethod* method) 
{
bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___year1;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)100))))
		{
			goto IL_001d;
		}
	}

IL_0005:
	try
	{// begin try (depth: 1)
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_1 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2 = L_1->___calendar_10;
		int32_t L_3 = ___year1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(29 /* System.Int32 System.Globalization.Calendar::ToFourDigitYear(System.Int32) */, L_2, L_3);
		___year1 = L_4;
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.ArgumentOutOfRangeException)
		int32_t* L_5 = ___adjustedYear2;
		*((int32_t*)L_5) = (int32_t)(-1);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0022;
	}// end catch (depth: 1)

IL_001d:
	{
		int32_t* L_6 = ___adjustedYear2;
		int32_t L_7 = ___year1;
		*((int32_t*)L_6) = (int32_t)L_7;
		return (bool)1;
	}

IL_0022:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean System.DateTimeParse::SetDateYMD(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const RuntimeMethod* method) 
{
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_1 = L_0->___calendar_10;
		int32_t L_2 = ___year1;
		int32_t L_3 = ___month2;
		int32_t L_4 = ___day3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result0;
		int32_t L_6 = L_5->___era_7;
		NullCheck(L_1);
		bool L_7;
		L_7 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_1, L_2, L_3, L_4, L_6);
		if (!L_7)
		{
			goto IL_0021;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_8 = ___result0;
		int32_t L_9 = ___year1;
		int32_t L_10 = ___month2;
		int32_t L_11 = ___day3;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_8, L_9, L_10, L_11, NULL);
		return (bool)1;
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::SetDateMDY(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateMDY_m7390A07BD849AF83B9D9A89EB1E7C27AA935A70F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___month1, int32_t ___day2, int32_t ___year3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = ___year3;
		int32_t L_2 = ___month1;
		int32_t L_3 = ___day2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.DateTimeParse::SetDateDMY(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateDMY_m181967A0A6F28FA6A133CDE4C3FF0D62D0FA80A8 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___day1, int32_t ___month2, int32_t ___year3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = ___year3;
		int32_t L_2 = ___month2;
		int32_t L_3 = ___day1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Boolean System.DateTimeParse::SetDateYDM(System.DateTimeResult&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_SetDateYDM_mF01738E63D893F277DF0EB83553CB1A8D7590C87 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t ___year1, int32_t ___day2, int32_t ___month3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = ___year1;
		int32_t L_2 = ___month3;
		int32_t L_3 = ___day2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void System.DateTimeParse::GetDefaultYear(System.DateTimeResult&,System.Globalization.DateTimeStyles&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_1 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2 = L_1->___calendar_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		int32_t* L_4 = ___styles1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTimeParse_GetDateTimeNow_m3ACC9E28E9EF3C9DD0C39F3856B25AC87F79D785(L_3, L_4, NULL);
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(19 /* System.Int32 System.Globalization.Calendar::GetYear(System.DateTime) */, L_2, L_5);
		L_0->___Year_0 = L_6;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result0;
		int32_t* L_8 = (&L_7->___flags_8);
		int32_t* L_9 = L_8;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)(L_10|((int32_t)4096)));
		return;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfNN(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNN_m7738DD5E78F313BF6367703FD465AB24D7BA20AB (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw2;
		int32_t L_4;
		L_4 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_3, 0, NULL);
		V_0 = L_4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw2;
		int32_t L_6;
		L_6 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_5, 1, NULL);
		V_1 = L_6;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result0;
		int32_t* L_8 = ___styles1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D(L_7, L_8, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi3;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_9, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi3;
		bool L_12;
		L_12 = DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE(L_10, L_11, (&V_2), NULL);
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_14 = ___dtfi3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_14, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_13, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_15, NULL);
		return (bool)0;
	}

IL_0051:
	{
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)6))))
		{
			goto IL_0076;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_18 = ___result0;
		int32_t L_19 = L_18->___Year_0;
		int32_t L_20 = V_0;
		int32_t L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_17, L_19, L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0097;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		int32_t* L_24 = (&L_23->___flags_8);
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)(L_26|((int32_t)128)));
		return (bool)1;
	}

IL_0076:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_27 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result0;
		int32_t L_29 = L_28->___Year_0;
		int32_t L_30 = V_1;
		int32_t L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_27, L_29, L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_0097;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result0;
		int32_t* L_34 = (&L_33->___flags_8);
		int32_t* L_35 = L_34;
		int32_t L_36 = *((int32_t*)L_35);
		*((int32_t*)L_35) = (int32_t)((int32_t)(L_36|((int32_t)128)));
		return (bool)1;
	}

IL_0097:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_37 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_37, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfNNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNNN_m2A81AF7ACFA6CAFC475BDADC38CE4F24412075B1 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw1;
		int32_t L_4;
		L_4 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_3, 0, NULL);
		V_0 = L_4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw1;
		int32_t L_6;
		L_6 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_5, 1, NULL);
		V_1 = L_6;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8;
		L_8 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_7, 2, NULL);
		V_2 = L_8;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi2;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_9, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147(L_10, L_11, (&V_3), NULL);
		if (L_12)
		{
			goto IL_0052;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_14 = ___dtfi2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_14, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_13, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_15, NULL);
		return (bool)0;
	}

IL_0052:
	{
		int32_t L_16 = V_3;
		if (L_16)
		{
			goto IL_0083;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result0;
		int32_t L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_17, L_18, (&V_4), NULL);
		if (!L_19)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_20, L_21, L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_25 = ___result0;
		int32_t* L_26 = (&L_25->___flags_8);
		int32_t* L_27 = L_26;
		int32_t L_28 = *((int32_t*)L_27);
		*((int32_t*)L_27) = (int32_t)((int32_t)(L_28|((int32_t)128)));
		return (bool)1;
	}

IL_0083:
	{
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result0;
		int32_t L_31 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_30, L_31, (&V_4), NULL);
		if (!L_32)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result0;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = V_4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = DateTimeParse_SetDateMDY_m7390A07BD849AF83B9D9A89EB1E7C27AA935A70F(L_33, L_34, L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_38 = ___result0;
		int32_t* L_39 = (&L_38->___flags_8);
		int32_t* L_40 = L_39;
		int32_t L_41 = *((int32_t*)L_40);
		*((int32_t*)L_40) = (int32_t)((int32_t)(L_41|((int32_t)128)));
		return (bool)1;
	}

IL_00af:
	{
		int32_t L_42 = V_3;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_43 = ___result0;
		int32_t L_44 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_43, L_44, (&V_4), NULL);
		if (!L_45)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_46 = ___result0;
		int32_t L_47 = V_0;
		int32_t L_48 = V_1;
		int32_t L_49 = V_4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = DateTimeParse_SetDateDMY_m181967A0A6F28FA6A133CDE4C3FF0D62D0FA80A8(L_46, L_47, L_48, L_49, NULL);
		if (!L_50)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_51 = ___result0;
		int32_t* L_52 = (&L_51->___flags_8);
		int32_t* L_53 = L_52;
		int32_t L_54 = *((int32_t*)L_53);
		*((int32_t*)L_53) = (int32_t)((int32_t)(L_54|((int32_t)128)));
		return (bool)1;
	}

IL_00db:
	{
		int32_t L_55 = V_3;
		if ((!(((uint32_t)L_55) == ((uint32_t)3))))
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_56 = ___result0;
		int32_t L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_56, L_57, (&V_4), NULL);
		if (!L_58)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_59 = ___result0;
		int32_t L_60 = V_4;
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = DateTimeParse_SetDateYDM_mF01738E63D893F277DF0EB83553CB1A8D7590C87(L_59, L_60, L_61, L_62, NULL);
		if (!L_63)
		{
			goto IL_0107;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_64 = ___result0;
		int32_t* L_65 = (&L_64->___flags_8);
		int32_t* L_66 = L_65;
		int32_t L_67 = *((int32_t*)L_66);
		*((int32_t*)L_66) = (int32_t)((int32_t)(L_67|((int32_t)128)));
		return (bool)1;
	}

IL_0107:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_68 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_68, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfMN(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfMN_m8625D53F8DA2F8D59B7FD01C78B93147E881159C (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi3;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_3, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_5 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE(L_4, L_5, (&V_0), NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_8 = ___dtfi3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_8, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_7, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_9, NULL);
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)7))))
		{
			goto IL_0091;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi3;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DateTimeFormatInfo_get_YearMonthPattern_m98C6AAE1CA577D103C522991D843FCD5817EDF04(L_11, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_13 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = DateTimeParse_GetYearMonthOrder_mB243726286078DF919A8931DB4DD3C72D6E54C39(L_12, L_13, (&V_1), NULL);
		if (L_14)
		{
			goto IL_0062;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_16 = ___dtfi3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = DateTimeFormatInfo_get_YearMonthPattern_m98C6AAE1CA577D103C522991D843FCD5817EDF04(L_16, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_15, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_17, NULL);
		return (bool)0;
	}

IL_0062:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_0091;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_19 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_20 = ___raw2;
		int32_t L_21;
		L_21 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_20, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_19, L_21, (&V_2), NULL);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		int32_t L_24 = V_2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_25 = ___raw2;
		int32_t L_26 = L_25->___month_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_23, L_24, L_26, 1, NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}

IL_0087:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_28, NULL);
		return (bool)0;
	}

IL_008f:
	{
		return (bool)1;
	}

IL_0091:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_29 = ___result0;
		int32_t* L_30 = ___styles1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D(L_29, L_30, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		int32_t L_33 = L_32->___Year_0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_34 = ___raw2;
		int32_t L_35 = L_34->___month_2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_36 = ___raw2;
		int32_t L_37;
		L_37 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_36, 0, NULL);
		bool L_38;
		L_38 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_31, L_33, L_35, L_37, NULL);
		if (L_38)
		{
			goto IL_00bb;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_39 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_39, NULL);
		return (bool)0;
	}

IL_00bb:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetHebrewDayOfNM(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetHebrewDayOfNM_mEBE5CE6FBE5C0D10A502AE942379D874BED6B8A2 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_0 = ___dtfi2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_0, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE(L_1, L_2, (&V_0), NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_4 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_5 = ___dtfi2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_5, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_4, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_6, NULL);
		return (bool)0;
	}

IL_0024:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_8 = ___raw1;
		int32_t L_9 = L_8->___month_2;
		L_7->___Month_1 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)7)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)6))))
		{
			goto IL_006d;
		}
	}

IL_0038:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_13 = L_12->___calendar_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_14 = ___result0;
		int32_t L_15 = L_14->___Year_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_16 = ___result0;
		int32_t L_17 = L_16->___Month_1;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_18 = ___raw1;
		int32_t L_19;
		L_19 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_18, 0, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result0;
		int32_t L_21 = L_20->___era_7;
		NullCheck(L_13);
		bool L_22;
		L_22 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_13, L_15, L_17, L_19, L_21);
		if (!L_22)
		{
			goto IL_006d;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_24 = ___raw1;
		int32_t L_25;
		L_25 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_24, 0, NULL);
		L_23->___Day_2 = L_25;
		return (bool)1;
	}

IL_006d:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_26 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_26, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfNM(System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNM_m73B51B6379B671C4A1B06465FDF3F415A184D848 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi3;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_3, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_5 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTimeParse_GetMonthDayOrder_m84232B1C0EE3C353BA3847F59A62E159DF64AEEE(L_4, L_5, (&V_0), NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_8 = ___dtfi3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = DateTimeFormatInfo_get_MonthDayPattern_m868752F743E864688FC5D251412A5657747EEEFD(L_8, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_7, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_9, NULL);
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)6))))
		{
			goto IL_0091;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi3;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DateTimeFormatInfo_get_YearMonthPattern_m98C6AAE1CA577D103C522991D843FCD5817EDF04(L_11, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_13 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = DateTimeParse_GetYearMonthOrder_mB243726286078DF919A8931DB4DD3C72D6E54C39(L_12, L_13, (&V_1), NULL);
		if (L_14)
		{
			goto IL_0062;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_16 = ___dtfi3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = DateTimeFormatInfo_get_YearMonthPattern_m98C6AAE1CA577D103C522991D843FCD5817EDF04(L_16, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_15, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_17, NULL);
		return (bool)0;
	}

IL_0062:
	{
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)4))))
		{
			goto IL_0091;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_19 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_20 = ___raw2;
		int32_t L_21;
		L_21 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_20, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_19, L_21, (&V_2), NULL);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		int32_t L_24 = V_2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_25 = ___raw2;
		int32_t L_26 = L_25->___month_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_23, L_24, L_26, 1, NULL);
		if (L_27)
		{
			goto IL_008f;
		}
	}

IL_0087:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_28, NULL);
		return (bool)0;
	}

IL_008f:
	{
		return (bool)1;
	}

IL_0091:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_29 = ___result0;
		int32_t* L_30 = ___styles1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D(L_29, L_30, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		int32_t L_33 = L_32->___Year_0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_34 = ___raw2;
		int32_t L_35 = L_34->___month_2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_36 = ___raw2;
		int32_t L_37;
		L_37 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_36, 0, NULL);
		bool L_38;
		L_38 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_31, L_33, L_35, L_37, NULL);
		if (L_38)
		{
			goto IL_00bb;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_39 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_39, NULL);
		return (bool)0;
	}

IL_00bb:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfMNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfMNN_m374885010D6E03B9B0B9C324D1AE4756C0ABA795 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw1;
		int32_t L_4;
		L_4 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_3, 0, NULL);
		V_0 = L_4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw1;
		int32_t L_6;
		L_6 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_5, 1, NULL);
		V_1 = L_6;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_7 = ___dtfi2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_7, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147(L_8, L_9, (&V_2), NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_12 = ___dtfi2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_12, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_11, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_13, NULL);
		return (bool)0;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00e1;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		int32_t L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_15, L_16, (&V_3), NULL);
		if (!L_17)
		{
			goto IL_0096;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_18 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_19 = L_18->___calendar_10;
		int32_t L_20 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_21 = ___raw1;
		int32_t L_22 = L_21->___month_2;
		int32_t L_23 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_24 = ___result0;
		int32_t L_25 = L_24->___era_7;
		NullCheck(L_19);
		bool L_26;
		L_26 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_19, L_20, L_22, L_23, L_25);
		if (!L_26)
		{
			goto IL_0096;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_27 = ___result0;
		int32_t L_28 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_29 = ___raw1;
		int32_t L_30 = L_29->___month_2;
		int32_t L_31 = V_0;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_27, L_28, L_30, L_31, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		int32_t* L_33 = (&L_32->___flags_8);
		int32_t* L_34 = L_33;
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)(L_35|((int32_t)128)));
		return (bool)1;
	}

IL_0096:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_36 = ___result0;
		int32_t L_37 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_36, L_37, (&V_3), NULL);
		if (!L_38)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_39 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_40 = L_39->___calendar_10;
		int32_t L_41 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_42 = ___raw1;
		int32_t L_43 = L_42->___month_2;
		int32_t L_44 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_45 = ___result0;
		int32_t L_46 = L_45->___era_7;
		NullCheck(L_40);
		bool L_47;
		L_47 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_40, L_41, L_43, L_44, L_46);
		if (!L_47)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_48 = ___result0;
		int32_t L_49 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_50 = ___raw1;
		int32_t L_51 = L_50->___month_2;
		int32_t L_52 = V_1;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_48, L_49, L_51, L_52, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result0;
		int32_t* L_54 = (&L_53->___flags_8);
		int32_t* L_55 = L_54;
		int32_t L_56 = *((int32_t*)L_55);
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56|((int32_t)128)));
		return (bool)1;
	}

IL_00e1:
	{
		int32_t L_57 = V_2;
		if (L_57)
		{
			goto IL_0177;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_58 = ___result0;
		int32_t L_59 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_58, L_59, (&V_3), NULL);
		if (!L_60)
		{
			goto IL_012c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_61 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_62 = L_61->___calendar_10;
		int32_t L_63 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_64 = ___raw1;
		int32_t L_65 = L_64->___month_2;
		int32_t L_66 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_67 = ___result0;
		int32_t L_68 = L_67->___era_7;
		NullCheck(L_62);
		bool L_69;
		L_69 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_62, L_63, L_65, L_66, L_68);
		if (!L_69)
		{
			goto IL_012c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_70 = ___result0;
		int32_t L_71 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_72 = ___raw1;
		int32_t L_73 = L_72->___month_2;
		int32_t L_74 = V_1;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_70, L_71, L_73, L_74, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_75 = ___result0;
		int32_t* L_76 = (&L_75->___flags_8);
		int32_t* L_77 = L_76;
		int32_t L_78 = *((int32_t*)L_77);
		*((int32_t*)L_77) = (int32_t)((int32_t)(L_78|((int32_t)128)));
		return (bool)1;
	}

IL_012c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_79 = ___result0;
		int32_t L_80 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_79, L_80, (&V_3), NULL);
		if (!L_81)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_82 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_83 = L_82->___calendar_10;
		int32_t L_84 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_85 = ___raw1;
		int32_t L_86 = L_85->___month_2;
		int32_t L_87 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_88 = ___result0;
		int32_t L_89 = L_88->___era_7;
		NullCheck(L_83);
		bool L_90;
		L_90 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_83, L_84, L_86, L_87, L_89);
		if (!L_90)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_91 = ___result0;
		int32_t L_92 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_93 = ___raw1;
		int32_t L_94 = L_93->___month_2;
		int32_t L_95 = V_0;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_91, L_92, L_94, L_95, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_96 = ___result0;
		int32_t* L_97 = (&L_96->___flags_8);
		int32_t* L_98 = L_97;
		int32_t L_99 = *((int32_t*)L_98);
		*((int32_t*)L_98) = (int32_t)((int32_t)(L_99|((int32_t)128)));
		return (bool)1;
	}

IL_0177:
	{
		int32_t L_100 = V_2;
		if ((!(((uint32_t)L_100) == ((uint32_t)2))))
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_101 = ___result0;
		int32_t L_102 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_101, L_102, (&V_3), NULL);
		if (!L_103)
		{
			goto IL_01c3;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_104 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_105 = L_104->___calendar_10;
		int32_t L_106 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_107 = ___raw1;
		int32_t L_108 = L_107->___month_2;
		int32_t L_109 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_110 = ___result0;
		int32_t L_111 = L_110->___era_7;
		NullCheck(L_105);
		bool L_112;
		L_112 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_105, L_106, L_108, L_109, L_111);
		if (!L_112)
		{
			goto IL_01c3;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_113 = ___result0;
		int32_t L_114 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_115 = ___raw1;
		int32_t L_116 = L_115->___month_2;
		int32_t L_117 = V_0;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_113, L_114, L_116, L_117, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_118 = ___result0;
		int32_t* L_119 = (&L_118->___flags_8);
		int32_t* L_120 = L_119;
		int32_t L_121 = *((int32_t*)L_120);
		*((int32_t*)L_120) = (int32_t)((int32_t)(L_121|((int32_t)128)));
		return (bool)1;
	}

IL_01c3:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_122 = ___result0;
		int32_t L_123 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_122, L_123, (&V_3), NULL);
		if (!L_124)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_125 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_126 = L_125->___calendar_10;
		int32_t L_127 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_128 = ___raw1;
		int32_t L_129 = L_128->___month_2;
		int32_t L_130 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_131 = ___result0;
		int32_t L_132 = L_131->___era_7;
		NullCheck(L_126);
		bool L_133;
		L_133 = VirtualFuncInvoker4< bool, int32_t, int32_t, int32_t, int32_t >::Invoke(26 /* System.Boolean System.Globalization.Calendar::IsValidDay(System.Int32,System.Int32,System.Int32,System.Int32) */, L_126, L_127, L_129, L_130, L_132);
		if (!L_133)
		{
			goto IL_0208;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_134 = ___result0;
		int32_t L_135 = V_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_136 = ___raw1;
		int32_t L_137 = L_136->___month_2;
		int32_t L_138 = V_1;
		DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE(L_134, L_135, L_137, L_138, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_139 = ___result0;
		int32_t* L_140 = (&L_139->___flags_8);
		int32_t* L_141 = L_140;
		int32_t L_142 = *((int32_t*)L_141);
		*((int32_t*)L_141) = (int32_t)((int32_t)(L_142|((int32_t)128)));
		return (bool)1;
	}

IL_0208:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_143 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_143, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfYNN(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYNN_mDEF587962F7CB32F0B6CB7FDDE62D69F1B95A795 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw1;
		int32_t L_4;
		L_4 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_3, 0, NULL);
		V_0 = L_4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw1;
		int32_t L_6;
		L_6 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_5, 1, NULL);
		V_1 = L_6;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_7 = ___dtfi2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_7, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147(L_8, L_9, (&V_2), NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_005b;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_13 = ___raw1;
		int32_t L_14 = L_13->___year_3;
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_12, L_14, L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_18 = ___result0;
		int32_t* L_19 = (&L_18->___flags_8);
		int32_t* L_20 = L_19;
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_20) = (int32_t)((int32_t)(L_21|((int32_t)128)));
		return (bool)1;
	}

IL_005b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_22 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_23 = ___raw1;
		int32_t L_24 = L_23->___year_3;
		int32_t L_25 = V_0;
		int32_t L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_22, L_24, L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_007c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result0;
		int32_t* L_29 = (&L_28->___flags_8);
		int32_t* L_30 = L_29;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_31|((int32_t)128)));
		return (bool)1;
	}

IL_007c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_32, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfNNY(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfNNY_mDCE42330005F3DA5EF837F7721C858E297627043 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw1;
		int32_t L_4;
		L_4 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_3, 0, NULL);
		V_0 = L_4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw1;
		int32_t L_6;
		L_6 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_5, 1, NULL);
		V_1 = L_6;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_7 = ___dtfi2;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_7, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147(L_8, L_9, (&V_2), NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_12 = ___dtfi2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_12, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_11, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_13, NULL);
		return (bool)0;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15)
		{
			goto IL_0072;
		}
	}

IL_0051:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_16 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_17 = ___raw1;
		int32_t L_18 = L_17->___year_3;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_16, L_18, L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_22 = ___result0;
		int32_t* L_23 = (&L_22->___flags_8);
		int32_t* L_24 = L_23;
		int32_t L_25 = *((int32_t*)L_24);
		*((int32_t*)L_24) = (int32_t)((int32_t)(L_25|((int32_t)128)));
		return (bool)1;
	}

IL_0072:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_26 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_27 = ___raw1;
		int32_t L_28 = L_27->___year_3;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_26, L_28, L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		int32_t* L_33 = (&L_32->___flags_8);
		int32_t* L_34 = L_33;
		int32_t L_35 = *((int32_t*)L_34);
		*((int32_t*)L_34) = (int32_t)((int32_t)(L_35|((int32_t)128)));
		return (bool)1;
	}

IL_0093:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_36 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_36, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfYMN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYMN_m9EC1B0DBB59A970EA94F294ACD50123AFC3362F6 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw1;
		int32_t L_5 = L_4->___year_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_6 = ___raw1;
		int32_t L_7 = L_6->___month_2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_8 = ___raw1;
		int32_t L_9;
		L_9 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_8, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_3, L_5, L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result0;
		int32_t* L_12 = (&L_11->___flags_8);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14|((int32_t)128)));
		return (bool)1;
	}

IL_0042:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_15, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfYN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYN_m73B0D6F7E10F34653FF6ACAD19C9FC938F6CEB5F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw1;
		int32_t L_5 = L_4->___year_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_6 = ___raw1;
		int32_t L_7;
		L_7 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_6, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_3, L_5, L_7, 1, NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___flags_8);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12|((int32_t)128)));
		return (bool)1;
	}

IL_003d:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_13, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::GetDayOfYM(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDayOfYM_m173BCA48C0D30DE6B1AAB01093EEC592D47926E6 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0016:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw1;
		int32_t L_5 = L_4->___year_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_6 = ___raw1;
		int32_t L_7 = L_6->___month_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_3, L_5, L_7, 1, NULL);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___flags_8);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12|((int32_t)128)));
		return (bool)1;
	}

IL_003c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_13, NULL);
		return (bool)0;
	}
}
// System.Void System.DateTimeParse::AdjustTimeMark(System.Globalization.DateTimeFormatInfo,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeParse_AdjustTimeMark_m7FAFD00A68546CBB5D476DEBB836936FC68F6FAB (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_0 = ___raw1;
		int32_t L_1 = L_0->___timeMark_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_005b;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_2, NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_4, NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_6 = ___dtfi0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if (L_8)
		{
			goto IL_003a;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_9 = ___dtfi0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_003a;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_12 = ___raw1;
		L_12->___timeMark_6 = 0;
	}

IL_003a:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_13 = ___dtfi0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_16 = ___dtfi0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_16, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_19 = ___raw1;
		L_19->___timeMark_6 = 1;
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean System.DateTimeParse::AdjustHour(System.Int32&,System.DateTimeParse/TM)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustHour_mEACD0EE6D5FC4D5B35B3077B5D7825278BF0C31B (int32_t* ___hour0, int32_t ___timeMark1, const RuntimeMethod* method) 
{
int32_t* G_B7_0 = NULL;
	int32_t* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	int32_t* G_B8_1 = NULL;
	{
		int32_t L_0 = ___timeMark1;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = ___timeMark1;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		int32_t* L_2 = ___hour0;
		int32_t L_3 = *((int32_t*)L_2);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t* L_4 = ___hour0;
		int32_t L_5 = *((int32_t*)L_4);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t* L_6 = ___hour0;
		int32_t* L_7 = ___hour0;
		int32_t L_8 = *((int32_t*)L_7);
		G_B6_0 = L_6;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)12))))
		{
			G_B7_0 = L_6;
			goto IL_001f;
		}
	}
	{
		int32_t* L_9 = ___hour0;
		int32_t L_10 = *((int32_t*)L_9);
		G_B8_0 = L_10;
		G_B8_1 = G_B6_0;
		goto IL_0020;
	}

IL_001f:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0020:
	{
		*((int32_t*)G_B8_1) = (int32_t)G_B8_0;
		goto IL_003d;
	}

IL_0023:
	{
		int32_t* L_11 = ___hour0;
		int32_t L_12 = *((int32_t*)L_11);
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t* L_13 = ___hour0;
		int32_t L_14 = *((int32_t*)L_13);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)23))))
		{
			goto IL_0030;
		}
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		int32_t* L_15 = ___hour0;
		int32_t L_16 = *((int32_t*)L_15);
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)12))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_17 = ___hour0;
		int32_t* L_18 = ___hour0;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12)));
	}

IL_003d:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetTimeOfN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfN_m9B63BD06594CD66CE23924A5768F307AE0FACB1D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)64))))
		{
			goto IL_0013;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0013:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw1;
		int32_t L_4 = L_3->___timeMark_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0024;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_5, NULL);
		return (bool)0;
	}

IL_0024:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8;
		L_8 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_7, 0, NULL);
		L_6->___Hour_3 = L_8;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___flags_8);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12|((int32_t)64)));
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetTimeOfNN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfNN_m80DC7C7902F70FA3663A2D256965165B0347C950 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)64))))
		{
			goto IL_0013;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0013:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw1;
		int32_t L_5;
		L_5 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_4, 0, NULL);
		L_3->___Hour_3 = L_5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8;
		L_8 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_7, 1, NULL);
		L_6->___Minute_4 = L_8;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___flags_8);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12|((int32_t)64)));
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetTimeOfNNN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetTimeOfNNN_m4D34E7E93A269A2A174F44C816A72E8C6967D653 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)64))))
		{
			goto IL_0013;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0013:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw1;
		int32_t L_5;
		L_5 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_4, 0, NULL);
		L_3->___Hour_3 = L_5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8;
		L_8 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_7, 1, NULL);
		L_6->___Minute_4 = L_8;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_10 = ___raw1;
		int32_t L_11;
		L_11 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_10, 2, NULL);
		L_9->___Second_5 = L_11;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		int32_t* L_13 = (&L_12->___flags_8);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		*((int32_t*)L_14) = (int32_t)((int32_t)(L_15|((int32_t)64)));
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetDateOfDSN(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfDSN_mFE26096316EC26A9296C03F218C875009160B30F (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_0 = ___raw1;
		int32_t L_1 = L_0->___numCount_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		int32_t L_3 = L_2->___Day_2;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_4 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_4, NULL);
		return (bool)0;
	}

IL_001a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_6 = ___raw1;
		int32_t L_7;
		L_7 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_6, 0, NULL);
		L_5->___Day_2 = L_7;
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetDateOfNDS(System.DateTimeResult&,System.DateTimeRawInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfNDS_mC1115237FFC072275859B7A2C7311D084698FAC3 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___Month_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_2, NULL);
		return (bool)0;
	}

IL_0011:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		int32_t L_4 = L_3->___Year_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0022;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_5, NULL);
		return (bool)0;
	}

IL_0022:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8;
		L_8 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_7, 0, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___Year_0);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_6, L_8, L_10, NULL);
		if (L_11)
		{
			goto IL_003f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_12, NULL);
		return (bool)0;
	}

IL_003f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		L_13->___Day_2 = 1;
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::GetDateOfNNDS(System.DateTimeResult&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_GetDateOfNNDS_mAE5DE28ADA2D07A07E4DDED4FAC88BB6800F64D5 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&1)))
		{
			goto IL_005c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		int32_t L_3 = L_2->___flags_8;
		if (((int32_t)((int32_t)L_3&2)))
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_4 = ___result0;
		int32_t L_5 = L_4->___flags_8;
		if (((int32_t)((int32_t)L_5&4)))
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw1;
		int32_t L_8 = L_7->___year_3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t* L_10 = (&L_9->___Year_0);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_6, L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		int32_t L_14 = L_13->___Year_0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_15 = ___raw1;
		int32_t L_16;
		L_16 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_15, 0, NULL);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_17 = ___raw1;
		int32_t L_18;
		L_18 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_17, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_12, L_14, L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)1;
	}

IL_005c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result0;
		int32_t L_21 = L_20->___flags_8;
		if (!((int32_t)((int32_t)L_21&2)))
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_22 = ___result0;
		int32_t L_23 = L_22->___flags_8;
		if (((int32_t)((int32_t)L_23&1)))
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_24 = ___result0;
		int32_t L_25 = L_24->___flags_8;
		if (((int32_t)((int32_t)L_25&4)))
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_26 = ___dtfi2;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_26, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_28 = ___dtfi2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = DateTimeParse_GetYearMonthDayOrder_m359EEAB61A283114B4C4AC1C30FD988946BB6147(L_27, L_28, (&V_0), NULL);
		if (L_29)
		{
			goto IL_00a4;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_31 = ___dtfi2;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = DateTimeFormatInfo_get_ShortDatePattern_m8B5B3BC573F1836C9257B9CCB9C3C4B890E66A0D(L_31, NULL);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_30, 3, _stringLiteral2C154FDD6479BB0DFCA8AAC5E34CF91832191F24, L_32, NULL);
		return (bool)0;
	}

IL_00a4:
	{
		int32_t L_33 = V_0;
		if (L_33)
		{
			goto IL_00d0;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_34 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_35 = ___raw1;
		int32_t L_36;
		L_36 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_35, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_34, L_36, (&V_1), NULL);
		if (!L_37)
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_38 = ___result0;
		int32_t L_39 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_40 = ___result0;
		int32_t L_41 = L_40->___Month_1;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_42 = ___raw1;
		int32_t L_43;
		L_43 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_42, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_38, L_39, L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)1;
	}

IL_00d0:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_45 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_46 = ___raw1;
		int32_t L_47;
		L_47 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_46, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = DateTimeParse_TryAdjustYear_m1E50CC311BA4DF1371CBB4EEC138501259CEEBEE(L_45, L_47, (&V_1), NULL);
		if (!L_48)
		{
			goto IL_00f9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_49 = ___result0;
		int32_t L_50 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_51 = ___result0;
		int32_t L_52 = L_51->___Month_1;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_53 = ___raw1;
		int32_t L_54;
		L_54 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_53, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = DateTimeParse_SetDateYMD_mE2458F6D62F9494B6C42DB491ABC01AB206D86C5(L_49, L_50, L_52, L_54, NULL);
		if (!L_55)
		{
			goto IL_00f9;
		}
	}
	{
		return (bool)1;
	}

IL_00f9:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_56 = ___result0;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_56, NULL);
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::ProcessDateTimeSuffix(System.DateTimeResult&,System.DateTimeRawInfo&,System.DateTimeToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessDateTimeSuffix_m0AC07A4509DE7988542BE587425011D8987404BD (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw1, DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* ___dtok2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_0 = ___dtok2;
		int32_t L_1 = L_0->___suffix_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)2560))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)2304))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)2560))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_014d;
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)2816))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)3072))))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)3328))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_014d;
	}

IL_0055:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		int32_t L_10 = L_9->___flags_8;
		if (!((int32_t)((int32_t)L_10&1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result0;
		int32_t* L_12 = (&L_11->___flags_8);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14|1));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_16 = ___raw1;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_17 = ___dtok2;
		int32_t L_18 = L_17->___num_2;
		int32_t L_19 = L_18;
		V_1 = L_19;
		L_16->___year_3 = L_19;
		int32_t L_20 = V_1;
		L_15->___Year_0 = L_20;
		goto IL_014d;
	}

IL_0086:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result0;
		int32_t L_22 = L_21->___flags_8;
		if (!((int32_t)((int32_t)L_22&2)))
		{
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0092:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		int32_t* L_24 = (&L_23->___flags_8);
		int32_t* L_25 = L_24;
		int32_t L_26 = *((int32_t*)L_25);
		*((int32_t*)L_25) = (int32_t)((int32_t)(L_26|2));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_27 = ___result0;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_28 = ___raw1;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_29 = ___dtok2;
		int32_t L_30 = L_29->___num_2;
		int32_t L_31 = L_30;
		V_1 = L_31;
		L_28->___month_2 = L_31;
		int32_t L_32 = V_1;
		L_27->___Month_1 = L_32;
		goto IL_014d;
	}

IL_00b7:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result0;
		int32_t L_34 = L_33->___flags_8;
		if (!((int32_t)((int32_t)L_34&4)))
		{
			goto IL_00c3;
		}
	}
	{
		return (bool)0;
	}

IL_00c3:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_35 = ___result0;
		int32_t* L_36 = (&L_35->___flags_8);
		int32_t* L_37 = L_36;
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)L_37) = (int32_t)((int32_t)(L_38|4));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_39 = ___result0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_40 = ___dtok2;
		int32_t L_41 = L_40->___num_2;
		L_39->___Day_2 = L_41;
		goto IL_014d;
	}

IL_00dc:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_42 = ___result0;
		int32_t L_43 = L_42->___flags_8;
		if (!((int32_t)((int32_t)L_43&8)))
		{
			goto IL_00e8;
		}
	}
	{
		return (bool)0;
	}

IL_00e8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_44 = ___result0;
		int32_t* L_45 = (&L_44->___flags_8);
		int32_t* L_46 = L_45;
		int32_t L_47 = *((int32_t*)L_46);
		*((int32_t*)L_46) = (int32_t)((int32_t)(L_47|8));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_48 = ___result0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_49 = ___dtok2;
		int32_t L_50 = L_49->___num_2;
		L_48->___Hour_3 = L_50;
		goto IL_014d;
	}

IL_0101:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_51 = ___result0;
		int32_t L_52 = L_51->___flags_8;
		if (!((int32_t)((int32_t)L_52&((int32_t)16))))
		{
			goto IL_010e;
		}
	}
	{
		return (bool)0;
	}

IL_010e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result0;
		int32_t* L_54 = (&L_53->___flags_8);
		int32_t* L_55 = L_54;
		int32_t L_56 = *((int32_t*)L_55);
		*((int32_t*)L_55) = (int32_t)((int32_t)(L_56|((int32_t)16)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_57 = ___result0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_58 = ___dtok2;
		int32_t L_59 = L_58->___num_2;
		L_57->___Minute_4 = L_59;
		goto IL_014d;
	}

IL_0128:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_60 = ___result0;
		int32_t L_61 = L_60->___flags_8;
		if (!((int32_t)((int32_t)L_61&((int32_t)32))))
		{
			goto IL_0135;
		}
	}
	{
		return (bool)0;
	}

IL_0135:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_62 = ___result0;
		int32_t* L_63 = (&L_62->___flags_8);
		int32_t* L_64 = L_63;
		int32_t L_65 = *((int32_t*)L_64);
		*((int32_t*)L_64) = (int32_t)((int32_t)(L_65|((int32_t)32)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_66 = ___result0;
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* L_67 = ___dtok2;
		int32_t L_68 = L_67->___num_2;
		L_66->___Second_5 = L_68;
	}

IL_014d:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::ProcessHebrewTerminalState(System.DateTimeParse/DS,System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessHebrewTerminalState_mFFA26D8103E3D9FC4F8B79881D86B6DCD1945083 (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result2, int32_t* ___styles3, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi5, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ___dps0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)23))))
		{
			case 0:
			{
				goto IL_011d;
			}
			case 1:
			{
				goto IL_011d;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_01b4;
			}
			case 4:
			{
				goto IL_01b4;
			}
			case 5:
			{
				goto IL_01b4;
			}
			case 6:
			{
				goto IL_01b4;
			}
			case 7:
			{
				goto IL_01b4;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_01b4;
			}
			case 10:
			{
				goto IL_015e;
			}
			case 11:
			{
				goto IL_0190;
			}
			case 12:
			{
				goto IL_019c;
			}
			case 13:
			{
				goto IL_01a8;
			}
			case 14:
			{
				goto IL_01b4;
			}
			case 15:
			{
				goto IL_00c9;
			}
		}
	}
	{
		goto IL_01b4;
	}

IL_004e:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_1 = ___raw4;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_2 = ___raw4;
		int32_t L_3;
		L_3 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_2, 1, NULL);
		L_1->___year_3 = L_3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi5;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_5 = ___raw4;
		int32_t* L_6 = (&L_5->___year_3);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw4;
		int32_t* L_8 = (&L_7->___month_2);
		NullCheck(L_4);
		bool L_9;
		L_9 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_4, L_6, L_8, (bool)1, NULL);
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_10 = ___result2;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_10, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_0083:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_12 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_13 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = DateTimeParse_GetDayOfMNN_m374885010D6E03B9B0B9C324D1AE4756C0ABA795(L_11, L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_0094:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_15 = ___dtfi5;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_16 = ___raw4;
		int32_t* L_17 = (&L_16->___year_3);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_18 = ___raw4;
		int32_t* L_19 = (&L_18->___month_2);
		NullCheck(L_15);
		bool L_20;
		L_20 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_15, L_17, L_19, (bool)1, NULL);
		if (L_20)
		{
			goto IL_00ba;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result2;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_21, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_00ba:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_22 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_23 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = DateTimeParse_GetDayOfYMN_m9EC1B0DBB59A970EA94F294ACD50123AFC3362F6(L_22, L_23, NULL);
		if (L_24)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_00c9:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_25 = ___raw4;
		int32_t L_26 = L_25->___year_3;
		if ((((int32_t)L_26) >= ((int32_t)((int32_t)1000))))
		{
			goto IL_00e7;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_27 = ___raw4;
		int32_t* L_28 = (&L_27->___year_3);
		int32_t* L_29 = L_28;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, ((int32_t)5000)));
	}

IL_00e7:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_32 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_33 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = DateTimeParse_GetDayOfNNY_mDCE42330005F3DA5EF837F7721C858E297627043(L_31, L_32, L_33, NULL);
		if (L_34)
		{
			goto IL_00f5;
		}
	}
	{
		return (bool)0;
	}

IL_00f5:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_35 = ___dtfi5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_36 = ___result2;
		int32_t* L_37 = (&L_36->___Year_0);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_38 = ___raw4;
		int32_t* L_39 = (&L_38->___month_2);
		NullCheck(L_35);
		bool L_40;
		L_40 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_35, L_37, L_39, (bool)1, NULL);
		if (L_40)
		{
			goto IL_01bc;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result2;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_41, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_011d:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_42 = ___result2;
		int32_t* L_43 = ___styles3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTimeParse_GetDefaultYear_m1BAA4D9814ED875A41527184395004D81DAA560D(L_42, L_43, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_44 = ___dtfi5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_45 = ___result2;
		int32_t* L_46 = (&L_45->___Year_0);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_47 = ___raw4;
		int32_t* L_48 = (&L_47->___month_2);
		NullCheck(L_44);
		bool L_49;
		L_49 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_44, L_46, L_48, (bool)1, NULL);
		if (L_49)
		{
			goto IL_0149;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_50 = ___result2;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_50, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_0149:
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (L_51)
		{
			goto IL_01bc;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_52 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_53 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_54 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = DateTimeParse_GetHebrewDayOfNM_mEBE5CE6FBE5C0D10A502AE942379D874BED6B8A2(L_52, L_53, L_54, NULL);
		if (L_55)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_015e:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_56 = ___dtfi5;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_57 = ___raw4;
		int32_t* L_58 = (&L_57->___year_3);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_59 = ___raw4;
		int32_t* L_60 = (&L_59->___month_2);
		NullCheck(L_56);
		bool L_61;
		L_61 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_56, L_58, L_60, (bool)1, NULL);
		if (L_61)
		{
			goto IL_0184;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_62 = ___result2;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_62, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_0184:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_63 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_64 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = DateTimeParse_GetDayOfYM_m173BCA48C0D30DE6B1AAB01093EEC592D47926E6(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_0190:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_66 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_67 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = DateTimeParse_GetTimeOfN_m9B63BD06594CD66CE23924A5768F307AE0FACB1D(L_66, L_67, NULL);
		if (L_68)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_019c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_69 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_70 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = DateTimeParse_GetTimeOfNN_m80DC7C7902F70FA3663A2D256965165B0347C950(L_69, L_70, NULL);
		if (L_71)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_01a8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_72 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_73 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = DateTimeParse_GetTimeOfNNN_m4D34E7E93A269A2A174F44C816A72E8C6967D653(L_72, L_73, NULL);
		if (L_74)
		{
			goto IL_01bc;
		}
	}
	{
		return (bool)0;
	}

IL_01b4:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_75 = ___result2;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_75, NULL);
		return (bool)0;
	}

IL_01bc:
	{
		int32_t L_76 = ___dps0;
		if ((((int32_t)L_76) <= ((int32_t)((int32_t)20))))
		{
			goto IL_01c9;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_77 = ___raw4;
		L_77->___numCount_1 = 0;
	}

IL_01c9:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::ProcessTerminalState(System.DateTimeParse/DS,System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles&,System.DateTimeRawInfo&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ProcessTerminalState_mBBB5DA91A449E17952389A39AF326E7D2B286DFB (int32_t ___dps0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result2, int32_t* ___styles3, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw4, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi5, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	{
		V_0 = (bool)1;
		int32_t L_0 = ___dps0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)21))))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_009b;
			}
			case 5:
			{
				goto IL_00ab;
			}
			case 6:
			{
				goto IL_0112;
			}
			case 7:
			{
				goto IL_011d;
			}
			case 8:
			{
				goto IL_0128;
			}
			case 9:
			{
				goto IL_00b2;
			}
			case 10:
			{
				goto IL_00cc;
			}
			case 11:
			{
				goto IL_00d7;
			}
			case 12:
			{
				goto IL_00e2;
			}
			case 13:
			{
				goto IL_00ed;
			}
			case 14:
			{
				goto IL_00f8;
			}
			case 15:
			{
				goto IL_0103;
			}
			case 16:
			{
				goto IL_010e;
			}
			case 17:
			{
				goto IL_00bf;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_0058:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_1 = ___result2;
		int32_t* L_2 = ___styles3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_3 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DateTimeParse_GetDayOfNN_m7738DD5E78F313BF6367703FD465AB24D7BA20AB(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0133;
	}

IL_0069:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_7 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_8 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = DateTimeParse_GetDayOfNNN_m2A81AF7ACFA6CAFC475BDADC38CE4F24412075B1(L_6, L_7, L_8, NULL);
		V_0 = L_9;
		goto IL_0133;
	}

IL_0079:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_10 = ___result2;
		int32_t* L_11 = ___styles3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_12 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_13 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = DateTimeParse_GetDayOfMN_m8625D53F8DA2F8D59B7FD01C78B93147E881159C(L_10, L_11, L_12, L_13, NULL);
		V_0 = L_14;
		goto IL_0133;
	}

IL_008a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result2;
		int32_t* L_16 = ___styles3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_17 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_18 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTimeParse_GetDayOfNM_m73B51B6379B671C4A1B06465FDF3F415A184D848(L_15, L_16, L_17, L_18, NULL);
		V_0 = L_19;
		goto IL_0133;
	}

IL_009b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_21 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_22 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = DateTimeParse_GetDayOfMNN_m374885010D6E03B9B0B9C324D1AE4756C0ABA795(L_20, L_21, L_22, NULL);
		V_0 = L_23;
		goto IL_0133;
	}

IL_00ab:
	{
		V_0 = (bool)1;
		goto IL_0133;
	}

IL_00b2:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_24 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_25 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_26 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_GetDayOfYNN_mDEF587962F7CB32F0B6CB7FDDE62D69F1B95A795(L_24, L_25, L_26, NULL);
		V_0 = L_27;
		goto IL_0133;
	}

IL_00bf:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_29 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_30 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = DateTimeParse_GetDayOfNNY_mDCE42330005F3DA5EF837F7721C858E297627043(L_28, L_29, L_30, NULL);
		V_0 = L_31;
		goto IL_0133;
	}

IL_00cc:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_33 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = DateTimeParse_GetDayOfYMN_m9EC1B0DBB59A970EA94F294ACD50123AFC3362F6(L_32, L_33, NULL);
		V_0 = L_34;
		goto IL_0133;
	}

IL_00d7:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_35 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_36 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = DateTimeParse_GetDayOfYN_m73B0D6F7E10F34653FF6ACAD19C9FC938F6CEB5F(L_35, L_36, NULL);
		V_0 = L_37;
		goto IL_0133;
	}

IL_00e2:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_38 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_39 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = DateTimeParse_GetDayOfYM_m173BCA48C0D30DE6B1AAB01093EEC592D47926E6(L_38, L_39, NULL);
		V_0 = L_40;
		goto IL_0133;
	}

IL_00ed:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_42 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = DateTimeParse_GetTimeOfN_m9B63BD06594CD66CE23924A5768F307AE0FACB1D(L_41, L_42, NULL);
		V_0 = L_43;
		goto IL_0133;
	}

IL_00f8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_44 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_45 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = DateTimeParse_GetTimeOfNN_m80DC7C7902F70FA3663A2D256965165B0347C950(L_44, L_45, NULL);
		V_0 = L_46;
		goto IL_0133;
	}

IL_0103:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_47 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_48 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = DateTimeParse_GetTimeOfNNN_m4D34E7E93A269A2A174F44C816A72E8C6967D653(L_47, L_48, NULL);
		V_0 = L_49;
		goto IL_0133;
	}

IL_010e:
	{
		V_0 = (bool)1;
		goto IL_0133;
	}

IL_0112:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_50 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_51 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = DateTimeParse_GetDateOfDSN_mFE26096316EC26A9296C03F218C875009160B30F(L_50, L_51, NULL);
		V_0 = L_52;
		goto IL_0133;
	}

IL_011d:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_54 = ___raw4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = DateTimeParse_GetDateOfNDS_mC1115237FFC072275859B7A2C7311D084698FAC3(L_53, L_54, NULL);
		V_0 = L_55;
		goto IL_0133;
	}

IL_0128:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_56 = ___result2;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_57 = ___raw4;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_58 = ___dtfi5;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = DateTimeParse_GetDateOfNNDS_mAE5DE28ADA2D07A07E4DDED4FAC88BB6800F64D5(L_56, L_57, L_58, NULL);
		V_0 = L_59;
	}

IL_0133:
	{
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0138;
		}
	}
	{
		return (bool)0;
	}

IL_0138:
	{
		int32_t L_61 = ___dps0;
		if ((((int32_t)L_61) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0145;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_62 = ___raw4;
		L_62->___numCount_1 = 0;
	}

IL_0145:
	{
		return (bool)1;
	}
}
// System.DateTime System.DateTimeParse::Parse(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeParse_Parse_mF6DF993FDB62A61683BB195599B7CAAAF6A3BF07 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t ___styles2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___s0;
		DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D((&V_0), L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___s0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi1;
		int32_t L_3 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = DateTimeParse_TryParse_m4BD5F36F86016435BD86F195833AC1762E4A8FB7(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 L_5 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = L_5.___parsedDate_11;
		return L_6;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var)));
		Exception_t* L_7;
		L_7 = DateTimeParse_GetDateTimeParseException_m7775A148A55B3FF70DDFCD608E55B11E7A84ECC8((&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeParse_Parse_mF6DF993FDB62A61683BB195599B7CAAAF6A3BF07_RuntimeMethod_var)));
	}
}
// System.Boolean System.DateTimeParse::TryParse(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParse_m58B0E256C4A238478677946DB08C4C4B617B470B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t ___styles2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___result3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = ___result3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_0 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___s0;
		DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D((&V_0), L_2, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___s0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi1;
		int32_t L_5 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTimeParse_TryParse_m4BD5F36F86016435BD86F195833AC1762E4A8FB7(L_3, L_4, L_5, (&V_0), NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_7 = ___result3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722 L_8 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = L_8.___parsedDate_11;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_7 = L_9;
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::TryParse(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParse_m4BD5F36F86016435BD86F195833AC1762E4A8FB7 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t ___styles2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BFFD325D0E9B8DB1041A8F32A1F7B2DBB2042C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162);
		s_Il2CppMethodInitialized = true;
	}
DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 V_4;
	memset((&V_4), 0, sizeof(V_4));
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B28_0 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B29_1 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B32_0 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B31_0 = NULL;
	int32_t G_B33_0 = 0;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B33_1 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B36_0 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B35_0 = NULL;
	int32_t G_B37_0 = 0;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B37_1 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B40_0 = NULL;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B39_0 = NULL;
	int32_t G_B41_0 = 0;
	DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4* G_B41_1 = NULL;
	int32_t G_B63_0 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___s0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_1 = ___result3;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_1, 3, _stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880, NULL);
		return (bool)0;
	}

IL_0017:
	{
		V_1 = 0;
		V_2 = (bool)0;
		il2cpp_codegen_initobj((&V_3), sizeof(DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4));
		(&V_3)->___suffix_1 = ((int32_t)256);
		il2cpp_codegen_initobj((&V_4), sizeof(DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03));
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)12)));
		memset(L_2, 0, ((uintptr_t)((int32_t)12)));
		V_7 = (int32_t*)(L_2);
		int32_t* L_3 = V_7;
		DateTimeRawInfo_Init_m58939922AA569BAE7260CFD425D079C654D0731B((&V_4), L_3, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = DateTimeFormatInfo_get_DateSeparator_mBD2B8F51FE1491BC6695B10CB1973754BBF54CDD(L_4, NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_6 = ___dtfi1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = DateTimeFormatInfo_get_TimeSeparator_m708070A0307E7FB6D0FB9C5FF3E371EBF8800791(L_6, NULL);
		NullCheck(L_5);
		bool L_8;
		L_8 = String_Equals_m7BDFC0B951005B9DC2BAED464AFE68FF7E9ACE5A(L_5, L_7, 4, NULL);
		(&V_4)->___hasSameDateAndTimeSeparators_8 = L_8;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_10 = ___dtfi1;
		NullCheck(L_10);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_11;
		L_11 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_10, NULL);
		L_9->___calendar_10 = L_11;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result3;
		L_12->___era_7 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_13 = ___s0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_14 = ___dtfi1;
		__DTString__ctor_mA373A18F43531434E2B5644E88171623C86416F6((&V_5), L_13, L_14, NULL);
		bool L_15;
		L_15 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F((&V_5), NULL);
	}

IL_0084:
	{
		int32_t L_16 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result3;
		int32_t L_18 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTimeParse_Lex_m5778AA0A94C3B2EB028DE18C6CC35556C972C9A5(L_16, (&V_5), (&V_3), (&V_4), L_17, (&___dtfi1), L_18, NULL);
		if (L_19)
		{
			goto IL_0098;
		}
	}
	{
		return (bool)0;
	}

IL_0098:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_20 = V_3;
		int32_t L_21 = L_20.___dtt_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)18))))
		{
			goto IL_021b;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_22 = V_3;
		int32_t L_23 = L_22.___suffix_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)256))))
		{
			goto IL_00d2;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_24 = ___result3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = DateTimeParse_ProcessDateTimeSuffix_m0AC07A4509DE7988542BE587425011D8987404BD(L_24, (&V_4), (&V_3), NULL);
		if (L_25)
		{
			goto IL_00c6;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_26 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_26, NULL);
		return (bool)0;
	}

IL_00c6:
	{
		(&V_3)->___suffix_1 = ((int32_t)256);
	}

IL_00d2:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_27 = V_3;
		int32_t L_28 = L_27.___dtt_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)13))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00f2;
		}
	}

IL_00e6:
	{
		int32_t L_31 = ___styles2;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = DateTimeParse_ParseISO8601_m569DBDBBAFE09743C5B368B703FF5F715A5E7856((&V_4), (&V_5), L_31, L_32, NULL);
		return L_33;
	}

IL_00f2:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_34 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_34, NULL);
		return (bool)0;
	}

IL_00fa:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_35 = V_4;
		bool L_36 = L_35.___hasSameDateAndTimeSeparators_8;
		if (!L_36)
		{
			goto IL_01c1;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_37 = V_3;
		int32_t L_38 = L_37.___dtt_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)14))))
		{
			goto IL_0124;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_39 = V_3;
		int32_t L_40 = L_39.___dtt_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)12))))
		{
			goto IL_0124;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_41 = V_3;
		int32_t L_42 = L_41.___dtt_0;
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0132;
		}
	}

IL_0124:
	{
		int32_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_012b;
		}
	}
	{
		V_1 = 3;
	}

IL_012b:
	{
		int32_t L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0132;
		}
	}
	{
		V_1 = 5;
	}

IL_0132:
	{
		bool L_45;
		L_45 = __DTString_AtEnd_m842272A109A260E9175838B489D9A8582400E59A((&V_5), NULL);
		V_8 = L_45;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_46 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_50 = V_3;
		int32_t L_51 = L_50.___dtt_0;
		NullCheck(L_49);
		int32_t L_52 = L_51;
		int32_t L_53 = (int32_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		bool L_54 = V_8;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)((int32_t)20)))? 1 : 0)|(int32_t)L_54)))
		{
			goto IL_01c1;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_55 = V_3;
		int32_t L_56 = L_55.___dtt_0;
		V_9 = L_56;
		int32_t L_57 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_57, 4)))
		{
			case 0:
			{
				goto IL_0190;
			}
			case 1:
			{
				goto IL_01a1;
			}
			case 2:
			{
				goto IL_01c1;
			}
			case 3:
			{
				goto IL_01c1;
			}
			case 4:
			{
				goto IL_01b2;
			}
		}
	}
	{
		int32_t L_58 = V_9;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_01c1;
		}
	}
	{
		bool L_59 = V_8;
		G_B27_0 = (&V_3);
		if (L_59)
		{
			G_B28_0 = (&V_3);
			goto IL_0187;
		}
	}
	{
		G_B29_0 = ((int32_t)12);
		G_B29_1 = G_B27_0;
		goto IL_0189;
	}

IL_0187:
	{
		G_B29_0 = ((int32_t)14);
		G_B29_1 = G_B28_0;
	}

IL_0189:
	{
		G_B29_1->___dtt_0 = G_B29_0;
		goto IL_01c1;
	}

IL_0190:
	{
		bool L_60 = V_8;
		G_B31_0 = (&V_3);
		if (L_60)
		{
			G_B32_0 = (&V_3);
			goto IL_0199;
		}
	}
	{
		G_B33_0 = 3;
		G_B33_1 = G_B31_0;
		goto IL_019a;
	}

IL_0199:
	{
		G_B33_0 = 1;
		G_B33_1 = G_B32_0;
	}

IL_019a:
	{
		G_B33_1->___dtt_0 = G_B33_0;
		goto IL_01c1;
	}

IL_01a1:
	{
		bool L_61 = V_8;
		G_B35_0 = (&V_3);
		if (L_61)
		{
			G_B36_0 = (&V_3);
			goto IL_01aa;
		}
	}
	{
		G_B37_0 = 3;
		G_B37_1 = G_B35_0;
		goto IL_01ab;
	}

IL_01aa:
	{
		G_B37_0 = 1;
		G_B37_1 = G_B36_0;
	}

IL_01ab:
	{
		G_B37_1->___dtt_0 = G_B37_0;
		goto IL_01c1;
	}

IL_01b2:
	{
		bool L_62 = V_8;
		G_B39_0 = (&V_3);
		if (L_62)
		{
			G_B40_0 = (&V_3);
			goto IL_01bb;
		}
	}
	{
		G_B41_0 = 7;
		G_B41_1 = G_B39_0;
		goto IL_01bc;
	}

IL_01bb:
	{
		G_B41_0 = 6;
		G_B41_1 = G_B40_0;
	}

IL_01bc:
	{
		G_B41_1->___dtt_0 = G_B41_0;
	}

IL_01c1:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_63 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1;
		int32_t L_64 = V_1;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_67 = V_3;
		int32_t L_68 = L_67.___dtt_0;
		NullCheck(L_66);
		int32_t L_69 = L_68;
		int32_t L_70 = (int32_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_1 = L_70;
		int32_t L_71 = V_1;
		if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_01dd;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_72 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_72, NULL);
		return (bool)0;
	}

IL_01dd:
	{
		int32_t L_73 = V_1;
		if ((((int32_t)L_73) <= ((int32_t)((int32_t)20))))
		{
			goto IL_021b;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_74 = ___dtfi1;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_74, NULL);
		if (!((int32_t)((int32_t)L_75&8)))
		{
			goto IL_0205;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (L_76)
		{
			goto IL_0217;
		}
	}
	{
		int32_t L_77 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_78 = ___result3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_79 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = DateTimeParse_ProcessHebrewTerminalState_mFFA26D8103E3D9FC4F8B79881D86B6DCD1945083(L_77, (&V_5), L_78, (&___styles2), (&V_4), L_79, NULL);
		if (L_80)
		{
			goto IL_0217;
		}
	}
	{
		return (bool)0;
	}

IL_0205:
	{
		int32_t L_81 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_82 = ___result3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_83 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = DateTimeParse_ProcessTerminalState_mBBB5DA91A449E17952389A39AF326E7D2B286DFB(L_81, (&V_5), L_82, (&___styles2), (&V_4), L_83, NULL);
		if (L_84)
		{
			goto IL_0217;
		}
	}
	{
		return (bool)0;
	}

IL_0217:
	{
		V_2 = (bool)1;
		V_1 = 0;
	}

IL_021b:
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_85 = V_3;
		int32_t L_86 = L_85.___dtt_0;
		if (!L_86)
		{
			goto IL_0238;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_87 = V_3;
		int32_t L_88 = L_87.___dtt_0;
		if ((((int32_t)L_88) == ((int32_t)1)))
		{
			goto IL_0238;
		}
	}
	{
		DateTimeToken_t39E2670CBE0C34AB5AE9852D1A5785F1C6B0A9B4 L_89 = V_3;
		int32_t L_90 = L_89.___dtt_0;
		if ((!(((uint32_t)L_90) == ((uint32_t)6))))
		{
			goto IL_0084;
		}
	}

IL_0238:
	{
		bool L_91 = V_2;
		if (L_91)
		{
			goto IL_0243;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_92 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_92, NULL);
		return (bool)0;
	}

IL_0243:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_93 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTimeParse_AdjustTimeMark_m7FAFD00A68546CBB5D476DEBB836936FC68F6FAB(L_93, (&V_4), NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_94 = ___result3;
		int32_t* L_95 = (&L_94->___Hour_3);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_96 = V_4;
		int32_t L_97 = L_96.___timeMark_6;
		bool L_98;
		L_98 = DateTimeParse_AdjustHour_mEACD0EE6D5FC4D5B35B3077B5D7825278BF0C31B(L_95, L_97, NULL);
		if (L_98)
		{
			goto IL_0267;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_99 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_99, NULL);
		return (bool)0;
	}

IL_0267:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_100 = ___result3;
		int32_t L_101 = L_100->___Year_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)(-1)))))
		{
			goto IL_0284;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_102 = ___result3;
		int32_t L_103 = L_102->___Month_1;
		if ((!(((uint32_t)L_103) == ((uint32_t)(-1)))))
		{
			goto IL_0284;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_104 = ___result3;
		int32_t L_105 = L_104->___Day_2;
		G_B63_0 = ((((int32_t)L_105) == ((int32_t)(-1)))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B63_0 = 0;
	}

IL_0285:
	{
		V_6 = (bool)G_B63_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_106 = ___result3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_107 = ___result3;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_108 = (&L_107->___calendar_10);
		int32_t L_109 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = DateTimeParse_CheckDefaultDateTime_m034340E5F9C42CEB315E7A5F13A5E983C2B6883E(L_106, L_108, L_109, NULL);
		if (L_110)
		{
			goto IL_0298;
		}
	}
	{
		return (bool)0;
	}

IL_0298:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_111 = ___result3;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_112 = L_111->___calendar_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_113 = ___result3;
		int32_t L_114 = L_113->___Year_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_115 = ___result3;
		int32_t L_116 = L_115->___Month_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_117 = ___result3;
		int32_t L_118 = L_117->___Day_2;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_119 = ___result3;
		int32_t L_120 = L_119->___Hour_3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_121 = ___result3;
		int32_t L_122 = L_121->___Minute_4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_123 = ___result3;
		int32_t L_124 = L_123->___Second_5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_125 = ___result3;
		int32_t L_126 = L_125->___era_7;
		NullCheck(L_112);
		bool L_127;
		L_127 = VirtualFuncInvoker9< bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* >::Invoke(23 /* System.Boolean System.Globalization.Calendar::TryToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTime&) */, L_112, L_114, L_116, L_118, L_120, L_122, L_124, 0, L_126, (&V_0));
		if (L_127)
		{
			goto IL_02e0;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_128 = ___result3;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_128, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_02e0:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_129 = V_4;
		double L_130 = L_129.___fraction_7;
		if ((!(((double)L_130) > ((double)(0.0)))))
		{
			goto IL_0311;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_131 = V_4;
		double L_132 = L_131.___fraction_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_133;
		L_133 = bankers_round(((double)il2cpp_codegen_multiply(L_132, (10000000.0))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_134;
		L_134 = DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D((&V_0), il2cpp_codegen_cast_double_to_int<int64_t>(L_133), NULL);
		V_0 = L_134;
	}

IL_0311:
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_135 = V_4;
		int32_t L_136 = L_135.___dayOfWeek_4;
		if ((((int32_t)L_136) == ((int32_t)(-1))))
		{
			goto IL_033e;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03 L_137 = V_4;
		int32_t L_138 = L_137.___dayOfWeek_4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_139 = ___result3;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_140 = L_139->___calendar_10;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_141 = V_0;
		NullCheck(L_140);
		int32_t L_142;
		L_142 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(12 /* System.DayOfWeek System.Globalization.Calendar::GetDayOfWeek(System.DateTime) */, L_140, L_141);
		if ((((int32_t)L_138) == ((int32_t)L_142)))
		{
			goto IL_033e;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_143 = ___result3;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_143, 4, _stringLiteral3BFFD325D0E9B8DB1041A8F32A1F7B2DBB2042C8, NULL);
		return (bool)0;
	}

IL_033e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_144 = ___result3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_145 = V_0;
		L_144->___parsedDate_11 = L_145;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_146 = ___result3;
		int32_t L_147 = ___styles2;
		bool L_148 = V_6;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = DateTimeParse_DetermineTimeZoneAdjustments_mCC9DAEFF572D2B894A28E593F0873FE6C0305395((&V_5), L_146, L_147, L_148, NULL);
		if (L_149)
		{
			goto IL_0354;
		}
	}
	{
		return (bool)0;
	}

IL_0354:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::DetermineTimeZoneAdjustments(System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DetermineTimeZoneAdjustments_mCC9DAEFF572D2B894A28E593F0873FE6C0305395 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, int32_t ___styles2, bool ___bTimeOnly3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9E79CFA886984022D22A5A9A8CF4B9F5ED9E94);
		s_Il2CppMethodInitialized = true;
	}
int64_t V_0 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result1;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)2048))))
		{
			goto IL_0017;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result1;
		int32_t L_4 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DateTimeParse_DateTimeOffsetTimeZonePostProcessing_m0D9114B6363F6C2191FAAD4736380E306C6E3232(L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0017:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_7 = (&L_6->___timeZoneOffset_9);
		int64_t L_8;
		L_8 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_7, NULL);
		V_0 = L_8;
		int64_t L_9 = V_0;
		if ((((int64_t)L_9) < ((int64_t)((int64_t)-504000000000LL))))
		{
			goto IL_003b;
		}
	}
	{
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)504000000000LL))))
		{
			goto IL_0049;
		}
	}

IL_003b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result1;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_11, 4, _stringLiteral6D9E79CFA886984022D22A5A9A8CF4B9F5ED9E94, NULL);
		return (bool)0;
	}

IL_0049:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result1;
		int32_t L_13 = L_12->___flags_8;
		if (((int32_t)((int32_t)L_13&((int32_t)256))))
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_14 = ___styles2;
		if (!((int32_t)((int32_t)L_14&((int32_t)32))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_15 = ___styles2;
		if (!((int32_t)((int32_t)L_15&((int32_t)16))))
		{
			goto IL_0089;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_16 = ___result1;
		int32_t* L_17 = (&L_16->___flags_8);
		int32_t* L_18 = L_17;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_18) = (int32_t)((int32_t)(L_19|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_22 = L_21->___parsedDate_11;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_23;
		L_23 = TimeZoneInfo_GetLocalUtcOffset_m9F9CD0276FC458225F33C992E8B4CD6B3C81E0CC(L_22, 2, NULL);
		L_20->___timeZoneOffset_9 = L_23;
		goto IL_00db;
	}

IL_0089:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_24 = ___result1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_25 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_26 = L_25->___parsedDate_11;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_27;
		L_27 = DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4(L_26, 2, NULL);
		L_24->___parsedDate_11 = L_27;
		return (bool)1;
	}

IL_009d:
	{
		int32_t L_28 = ___styles2;
		if (!((int32_t)((int32_t)L_28&((int32_t)64))))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_29 = ___styles2;
		if (!((int32_t)((int32_t)L_29&((int32_t)16))))
		{
			goto IL_00bd;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_32 = L_31->___parsedDate_11;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33;
		L_33 = DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4(L_32, 1, NULL);
		L_30->___parsedDate_11 = L_33;
		return (bool)1;
	}

IL_00bd:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_34 = ___result1;
		int32_t* L_35 = (&L_34->___flags_8);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		*((int32_t*)L_36) = (int32_t)((int32_t)(L_37|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_38 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_39 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_38->___timeZoneOffset_9 = L_39;
		goto IL_00db;
	}

IL_00d9:
	{
		return (bool)1;
	}

IL_00db:
	{
		int32_t L_40 = ___styles2;
		if (!((int32_t)((int32_t)L_40&((int32_t)128))))
		{
			goto IL_0106;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result1;
		int32_t L_42 = L_41->___flags_8;
		if (!((int32_t)((int32_t)L_42&((int32_t)512))))
		{
			goto IL_0106;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_43 = ___result1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_44 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = L_44->___parsedDate_11;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_46;
		L_46 = DateTime_SpecifyKind_mDDC07FD5DC16F2EC56ECBDB8F58E1C5FBDF426B4(L_45, 1, NULL);
		L_43->___parsedDate_11 = L_46;
		return (bool)1;
	}

IL_0106:
	{
		int32_t L_47 = ___styles2;
		if (!((int32_t)((int32_t)L_47&((int32_t)16))))
		{
			goto IL_0113;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_48 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = DateTimeParse_AdjustTimeZoneToUniversal_m264D31BD710639881C914DE8CE2A2D8AB8345930(L_48, NULL);
		return L_49;
	}

IL_0113:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_50 = ___result1;
		bool L_51 = ___bTimeOnly3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = DateTimeParse_AdjustTimeZoneToLocal_m0A9FE63D12564B35445A57A38F50D50B7B97B1A1(L_50, L_51, NULL);
		return L_52;
	}
}
// System.Boolean System.DateTimeParse::DateTimeOffsetTimeZonePostProcessing(System.__DTString&,System.DateTimeResult&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DateTimeOffsetTimeZonePostProcessing_m0D9114B6363F6C2191FAAD4736380E306C6E3232 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result1, int32_t ___styles2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9C538E6EC016DFB961C75A2EDB9047E7364ADD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9E79CFA886984022D22A5A9A8CF4B9F5ED9E94);
		s_Il2CppMethodInitialized = true;
	}
int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result1;
		int32_t L_1 = L_0->___flags_8;
		if (((int32_t)((int32_t)L_1&((int32_t)256))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = ___styles2;
		if (!((int32_t)((int32_t)L_2&((int32_t)64))))
		{
			goto IL_0021;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_3->___timeZoneOffset_9 = L_4;
		goto IL_0033;
	}

IL_0021:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = L_6->___parsedDate_11;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = TimeZoneInfo_GetLocalUtcOffset_m9F9CD0276FC458225F33C992E8B4CD6B3C81E0CC(L_7, 2, NULL);
		L_5->___timeZoneOffset_9 = L_8;
	}

IL_0033:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = (&L_9->___timeZoneOffset_9);
		int64_t L_11;
		L_11 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_10, NULL);
		V_0 = L_11;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_13 = (&L_12->___parsedDate_11);
		int64_t L_14;
		L_14 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_13, NULL);
		int64_t L_15 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_14, L_15));
		int64_t L_16 = V_1;
		if ((((int64_t)L_16) < ((int64_t)((int64_t)0))))
		{
			goto IL_005e;
		}
	}
	{
		int64_t L_17 = V_1;
		if ((((int64_t)L_17) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_006c;
		}
	}

IL_005e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_18 = ___result1;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_18, 4, _stringLiteral4D9C538E6EC016DFB961C75A2EDB9047E7364ADD, NULL);
		return (bool)0;
	}

IL_006c:
	{
		int64_t L_19 = V_0;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)-504000000000LL))))
		{
			goto IL_0084;
		}
	}
	{
		int64_t L_20 = V_0;
		if ((((int64_t)L_20) <= ((int64_t)((int64_t)504000000000LL))))
		{
			goto IL_0092;
		}
	}

IL_0084:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result1;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_21, 4, _stringLiteral6D9E79CFA886984022D22A5A9A8CF4B9F5ED9E94, NULL);
		return (bool)0;
	}

IL_0092:
	{
		int32_t L_22 = ___styles2;
		if (!((int32_t)((int32_t)L_22&((int32_t)16))))
		{
			goto IL_00d6;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result1;
		int32_t L_24 = L_23->___flags_8;
		if (((int32_t)((int32_t)L_24&((int32_t)256))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_25 = ___styles2;
		if (((int32_t)((int32_t)L_25&((int32_t)64))))
		{
			goto IL_00be;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_26 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_AdjustTimeZoneToUniversal_m264D31BD710639881C914DE8CE2A2D8AB8345930(L_26, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_28->___timeZoneOffset_9 = L_29;
		return L_27;
	}

IL_00be:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result1;
		int64_t L_31 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_32;
		memset((&L_32), 0, sizeof(L_32));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_32), L_31, 1, /*hidden argument*/NULL);
		L_30->___parsedDate_11 = L_32;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_34 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_33->___timeZoneOffset_9 = L_34;
	}

IL_00d6:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::AdjustTimeZoneToUniversal(System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustTimeZoneToUniversal_m264D31BD710639881C914DE8CE2A2D8AB8345930 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EEA80CEDFABFC29B06BF4349B427A62D62722AC);
		s_Il2CppMethodInitialized = true;
	}
int64_t V_0 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&L_0->___parsedDate_11);
		int64_t L_2;
		L_2 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_1, NULL);
		V_0 = L_2;
		int64_t L_3 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_4 = ___result0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = (&L_4->___timeZoneOffset_9);
		int64_t L_6;
		L_6 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_5, NULL);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_3, L_6));
		int64_t L_7 = V_0;
		if ((((int64_t)L_7) >= ((int64_t)((int64_t)0))))
		{
			goto IL_002b;
		}
	}
	{
		int64_t L_8 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)864000000000LL)));
	}

IL_002b:
	{
		int64_t L_9 = V_0;
		if ((((int64_t)L_9) < ((int64_t)((int64_t)0))))
		{
			goto IL_003c;
		}
	}
	{
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_004a;
		}
	}

IL_003c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_11 = ___result0;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_11, 4, _stringLiteral1EEA80CEDFABFC29B06BF4349B427A62D62722AC, NULL);
		return (bool)0;
	}

IL_004a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		int64_t L_13 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		memset((&L_14), 0, sizeof(L_14));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_14), L_13, 1, /*hidden argument*/NULL);
		L_12->___parsedDate_11 = L_14;
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::AdjustTimeZoneToLocal(System.DateTimeResult&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_AdjustTimeZoneToLocal_m0A9FE63D12564B35445A57A38F50D50B7B97B1A1 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, bool ___bTimeOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EEA80CEDFABFC29B06BF4349B427A62D62722AC);
		s_Il2CppMethodInitialized = true;
	}
int64_t V_0 = 0;
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* V_1 = NULL;
	bool V_2 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* G_B3_0 = NULL;
	int64_t G_B3_1 = 0;
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* G_B2_0 = NULL;
	int64_t G_B2_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* G_B4_1 = NULL;
	int64_t G_B4_2 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&L_0->___parsedDate_11);
		int64_t L_2;
		L_2 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_1, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_3;
		L_3 = TimeZoneInfo_get_Local_mFE5FE1C25C014521B6BCC9BE11AA67A1AF3C91B0(NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		int64_t L_4 = V_0;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)864000000000LL))))
		{
			goto IL_0063;
		}
	}
	{
		int64_t L_5 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_7 = (&L_6->___timeZoneOffset_9);
		int64_t L_8;
		L_8 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_7, NULL);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_5, L_8));
		int64_t L_9 = V_0;
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_10 = V_1;
		bool L_11 = ___bTimeOnly1;
		G_B2_0 = L_10;
		G_B2_1 = L_9;
		if (L_11)
		{
			G_B3_0 = L_10;
			G_B3_1 = L_9;
			goto IL_003b;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = L_12->___parsedDate_11;
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0040;
	}

IL_003b:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_15;
		L_15 = TimeZoneInfo_GetUtcOffset_m0BDDBF392737305C4A4AA517DD3CB0DA40C7D375(G_B4_1, G_B4_0, 2, NULL);
		V_3 = L_15;
		int64_t L_16;
		L_16 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_3), NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(G_B4_2, L_16));
		int64_t L_17 = V_0;
		if ((((int64_t)L_17) >= ((int64_t)((int64_t)0))))
		{
			goto IL_00c3;
		}
	}
	{
		int64_t L_18 = V_0;
		V_0 = ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)864000000000LL)));
		goto IL_00c3;
	}

IL_0063:
	{
		int64_t L_19 = V_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = (&L_20->___timeZoneOffset_9);
		int64_t L_22;
		L_22 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_21, NULL);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_19, L_22));
		int64_t L_23 = V_0;
		if ((((int64_t)L_23) < ((int64_t)((int64_t)0))))
		{
			goto IL_0082;
		}
	}
	{
		int64_t L_24 = V_0;
		if ((((int64_t)L_24) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_009c;
		}
	}

IL_0082:
	{
		int64_t L_25 = V_0;
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_26 = V_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_27 = ___result0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28 = L_27->___parsedDate_11;
		NullCheck(L_26);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29;
		L_29 = TimeZoneInfo_GetUtcOffset_m0BDDBF392737305C4A4AA517DD3CB0DA40C7D375(L_26, L_28, 2, NULL);
		V_3 = L_29;
		int64_t L_30;
		L_30 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_3), NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(L_25, L_30));
		goto IL_00c3;
	}

IL_009c:
	{
		int64_t L_31 = V_0;
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&V_4), L_31, 1, NULL);
		V_5 = (bool)0;
		int64_t L_32 = V_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33 = V_4;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_34;
		L_34 = TimeZoneInfo_get_Local_mFE5FE1C25C014521B6BCC9BE11AA67A1AF3C91B0(NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_35;
		L_35 = TimeZoneInfo_GetUtcOffsetFromUtc_m56457555F1923B673BDA645C17CBE6E7547B13EE(L_33, L_34, (&V_5), (&V_2), NULL);
		V_3 = L_35;
		int64_t L_36;
		L_36 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_3), NULL);
		V_0 = ((int64_t)il2cpp_codegen_add(L_32, L_36));
	}

IL_00c3:
	{
		int64_t L_37 = V_0;
		if ((((int64_t)L_37) < ((int64_t)((int64_t)0))))
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_38 = V_0;
		if ((((int64_t)L_38) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_00ed;
		}
	}

IL_00d4:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_39 = ___result0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_40 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		L_39->___parsedDate_11 = L_40;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result0;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_41, 4, _stringLiteral1EEA80CEDFABFC29B06BF4349B427A62D62722AC, NULL);
		return (bool)0;
	}

IL_00ed:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_42 = ___result0;
		int64_t L_43 = V_0;
		bool L_44 = V_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45;
		memset((&L_45), 0, sizeof(L_45));
		DateTime__ctor_m8CFD20DDCCB14AB28392A047FC4EE3F11929B8F2((&L_45), L_43, 2, L_44, /*hidden argument*/NULL);
		L_42->___parsedDate_11 = L_45;
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::ParseISO8601(System.DateTimeRawInfo&,System.__DTString&,System.Globalization.DateTimeStyles,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseISO8601_m569DBDBBAFE09743C5B368B703FF5F715A5E7856 (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* ___raw0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str1, int32_t ___styles2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Il2CppChar V_5 = 0x0;
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_0 = ___raw0;
		int32_t L_1 = L_0->___year_3;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_2 = ___raw0;
		int32_t L_3;
		L_3 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_2, 0, NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_4 = ___raw0;
		int32_t L_5;
		L_5 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_4, 1, NULL);
	}

IL_001d:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str1;
		int32_t* L_7 = (&L_6->___Index_1);
		int32_t* L_8 = L_7;
		int32_t L_9 = *((int32_t*)L_8);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_2 = 0;
		V_3 = (0.0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_10, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_11 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_11, 2, (&V_0), NULL);
		if (L_12)
		{
			goto IL_004d;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_13, NULL);
		return (bool)0;
	}

IL_004d:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_14 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_14, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_15 = ___str1;
		bool L_16;
		L_16 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_15, ((int32_t)58), NULL);
		if (L_16)
		{
			goto IL_0065;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_17, NULL);
		return (bool)0;
	}

IL_0065:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_18, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_19 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_19, 2, (&V_1), NULL);
		if (L_20)
		{
			goto IL_007e;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_21, NULL);
		return (bool)0;
	}

IL_007e:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_22 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_22, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_23 = ___str1;
		bool L_24;
		L_24 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_23, ((int32_t)58), NULL);
		if (!L_24)
		{
			goto IL_00d4;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_25 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_25, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_26 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_26, 2, (&V_2), NULL);
		if (L_27)
		{
			goto IL_00a7;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_28 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_28, NULL);
		return (bool)0;
	}

IL_00a7:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str1;
		bool L_30;
		L_30 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_29, ((int32_t)46), NULL);
		if (!L_30)
		{
			goto IL_00ce;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_31 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = DateTimeParse_ParseFraction_m98F0CC92F633C924C6AFD0D7B97277517CF82AF4(L_31, (&V_3), NULL);
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_33, NULL);
		return (bool)0;
	}

IL_00c3:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_34 = ___str1;
		int32_t* L_35 = (&L_34->___Index_1);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_37, 1));
	}

IL_00ce:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_38, NULL);
	}

IL_00d4:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_39 = ___str1;
		bool L_40;
		L_40 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_39, NULL);
		if (!L_40)
		{
			goto IL_01a9;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_41 = ___str1;
		Il2CppChar L_42;
		L_42 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_41, NULL);
		V_5 = L_42;
		Il2CppChar L_43 = V_5;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)43))))
		{
			goto IL_00f3;
		}
	}
	{
		Il2CppChar L_44 = V_5;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0118;
		}
	}

IL_00f3:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_45 = ___result3;
		int32_t* L_46 = (&L_45->___flags_8);
		int32_t* L_47 = L_46;
		int32_t L_48 = *((int32_t*)L_47);
		*((int32_t*)L_47) = (int32_t)((int32_t)(L_48|((int32_t)256)));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_49 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_50 = ___result3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_51 = (&L_50->___timeZoneOffset_9);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = DateTimeParse_ParseTimeZone_mF3F355E14D6B76BA74234B98A6049BBB58439934(L_49, L_51, NULL);
		if (L_52)
		{
			goto IL_015a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_53, NULL);
		return (bool)0;
	}

IL_0118:
	{
		Il2CppChar L_54 = V_5;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)90))))
		{
			goto IL_0124;
		}
	}
	{
		Il2CppChar L_55 = V_5;
		if ((!(((uint32_t)L_55) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_014f;
		}
	}

IL_0124:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_56 = ___result3;
		int32_t* L_57 = (&L_56->___flags_8);
		int32_t* L_58 = L_57;
		int32_t L_59 = *((int32_t*)L_58);
		*((int32_t*)L_58) = (int32_t)((int32_t)(L_59|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_60 = ___result3;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_61 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_60->___timeZoneOffset_9 = L_61;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_62 = ___result3;
		int32_t* L_63 = (&L_62->___flags_8);
		int32_t* L_64 = L_63;
		int32_t L_65 = *((int32_t*)L_64);
		*((int32_t*)L_64) = (int32_t)((int32_t)(L_65|((int32_t)512)));
		goto IL_015a;
	}

IL_014f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_66 = ___str1;
		int32_t* L_67 = (&L_66->___Index_1);
		int32_t* L_68 = L_67;
		int32_t L_69 = *((int32_t*)L_68);
		*((int32_t*)L_68) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_69, 1));
	}

IL_015a:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_70 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_70, NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_71 = ___str1;
		bool L_72;
		L_72 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_71, ((int32_t)35), NULL);
		if (!L_72)
		{
			goto IL_0180;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_73 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = DateTimeParse_VerifyValidPunctuation_m620C9F9E5B0C07AD43A7826A3156033B6B75CE2F(L_73, NULL);
		if (L_74)
		{
			goto IL_017a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_75 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_75, NULL);
		return (bool)0;
	}

IL_017a:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_76 = ___str1;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_76, NULL);
	}

IL_0180:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_77 = ___str1;
		bool L_78;
		L_78 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_77, 0, NULL);
		if (!L_78)
		{
			goto IL_0199;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_79 = ___str1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = DateTimeParse_VerifyValidPunctuation_m620C9F9E5B0C07AD43A7826A3156033B6B75CE2F(L_79, NULL);
		if (L_80)
		{
			goto IL_0199;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_81 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_81, NULL);
		return (bool)0;
	}

IL_0199:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_82 = ___str1;
		bool L_83;
		L_83 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_82, NULL);
		if (!L_83)
		{
			goto IL_01a9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_84 = ___result3;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_84, NULL);
		return (bool)0;
	}

IL_01a9:
	{
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_85;
		L_85 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_86 = ___raw0;
		int32_t L_87 = L_86->___year_3;
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_88 = ___raw0;
		int32_t L_89;
		L_89 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_88, 0, NULL);
		DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* L_90 = ___raw0;
		int32_t L_91;
		L_91 = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(L_90, 1, NULL);
		int32_t L_92 = V_0;
		int32_t L_93 = V_1;
		int32_t L_94 = V_2;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_95 = ___result3;
		int32_t L_96 = L_95->___era_7;
		NullCheck(L_85);
		bool L_97;
		L_97 = VirtualFuncInvoker9< bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* >::Invoke(23 /* System.Boolean System.Globalization.Calendar::TryToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTime&) */, L_85, L_87, L_89, L_91, L_92, L_93, L_94, 0, L_96, (&V_4));
		if (L_97)
		{
			goto IL_01e3;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_98 = ___result3;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_98, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_01e3:
	{
		double L_99 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_100;
		L_100 = bankers_round(((double)il2cpp_codegen_multiply(L_99, (10000000.0))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_101;
		L_101 = DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D((&V_4), il2cpp_codegen_cast_double_to_int<int64_t>(L_100), NULL);
		V_4 = L_101;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_102 = ___result3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_103 = V_4;
		L_102->___parsedDate_11 = L_103;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_104 = ___str1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_105 = ___result3;
		int32_t L_106 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_107;
		L_107 = DateTimeParse_DetermineTimeZoneAdjustments_mCC9DAEFF572D2B894A28E593F0873FE6C0305395(L_104, L_105, L_106, (bool)0, NULL);
		if (L_107)
		{
			goto IL_0212;
		}
	}
	{
		return (bool)0;
	}

IL_0212:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::MatchHebrewDigits(System.__DTString&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchHebrewDigits_m03CAD73DA2FCCC7F09F07BEA555193162E56F589 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___digitLen1, int32_t* ___number2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HebrewNumber_tF89734089EC4188BCF2BBBAC98D5AEA14DEA3EAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
HebrewNumberParsingContext_t24269EE9BFA992FFBDB9F20C1A0C51639AD6FC09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___number2;
		*((int32_t*)L_0) = (int32_t)0;
		HebrewNumberParsingContext__ctor_mF04BF245C589BD01536CAE69FE0938DD731E80B0((&V_0), 0, NULL);
		V_1 = 3;
		goto IL_001d;
	}

IL_000f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		Il2CppChar L_2;
		L_2 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(HebrewNumber_tF89734089EC4188BCF2BBBAC98D5AEA14DEA3EAF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HebrewNumber_ParseByChar_m48D888FCA3686A3841CA480EE0D70F879D6198A5(L_2, (&V_0), NULL);
		V_1 = L_3;
	}

IL_001d:
	{
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0029;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_5 = ___str0;
		bool L_6;
		L_6 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_5, NULL);
		if (L_6)
		{
			goto IL_000f;
		}
	}

IL_0029:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t* L_8 = ___number2;
		HebrewNumberParsingContext_t24269EE9BFA992FFBDB9F20C1A0C51639AD6FC09 L_9 = V_0;
		int32_t L_10 = L_9.___result_1;
		*((int32_t*)L_8) = (int32_t)L_10;
		return (bool)1;
	}

IL_0037:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::ParseDigits(System.__DTString&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___digitLen1, int32_t* ___result2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ___digitLen1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000e;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		int32_t* L_2 = ___result2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = DateTimeParse_ParseDigits_m3DD067E6F62657C12B0B284D864E66F4137C097B(L_1, 1, 2, L_2, NULL);
		return L_3;
	}

IL_000e:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_4 = ___str0;
		int32_t L_5 = ___digitLen1;
		int32_t L_6 = ___digitLen1;
		int32_t* L_7 = ___result2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeParse_ParseDigits_m3DD067E6F62657C12B0B284D864E66F4137C097B(L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Boolean System.DateTimeParse::ParseDigits(System.__DTString&,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseDigits_m3DD067E6F62657C12B0B284D864E66F4137C097B (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___minDigitLen1, int32_t ___maxDigitLen2, int32_t* ___result3, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		int32_t L_1 = L_0->___Index_1;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		bool L_3;
		L_3 = __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_4 = ___str0;
		int32_t* L_5 = (&L_4->___Index_1);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_0036;
	}

IL_0022:
	{
		int32_t L_8 = V_0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		int32_t L_10;
		L_10 = __DTString_GetDigit_m2C1710445781E19205ECECC147287B2A1E325A4B(L_9, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)10))), L_10));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___maxDigitLen2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}

IL_0036:
	{
		int32_t* L_14 = ___result3;
		int32_t L_15 = V_0;
		*((int32_t*)L_14) = (int32_t)L_15;
		int32_t L_16 = V_2;
		int32_t L_17 = ___minDigitLen1;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0046;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str0;
		int32_t L_19 = V_1;
		L_18->___Index_1 = L_19;
		return (bool)0;
	}

IL_0046:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::ParseFractionExact(System.__DTString&,System.Int32,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseFractionExact_m8D05591EC51611279D35A0AEF1CF18340DD24EC1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___maxDigitLen1, double* ___result2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		bool L_1;
		L_1 = __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		int32_t* L_3 = (&L_2->___Index_1);
		int32_t* L_4 = L_3;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_5, 1));
		return (bool)0;
	}

IL_0015:
	{
		double* L_6 = ___result2;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_7 = ___str0;
		int32_t L_8;
		L_8 = __DTString_GetDigit_m2C1710445781E19205ECECC147287B2A1E325A4B(L_7, NULL);
		*((double*)L_6) = (double)((double)L_8);
		V_0 = 1;
		goto IL_0051;
	}

IL_0022:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		bool L_10;
		L_10 = __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_0037;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_11 = ___str0;
		int32_t* L_12 = (&L_11->___Index_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0055;
	}

IL_0037:
	{
		double* L_15 = ___result2;
		double* L_16 = ___result2;
		double L_17 = *((double*)L_16);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str0;
		int32_t L_19;
		L_19 = __DTString_GetDigit_m2C1710445781E19205ECECC147287B2A1E325A4B(L_18, NULL);
		*((double*)L_15) = (double)((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_17, (10.0))), ((double)L_19)));
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0051:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = ___maxDigitLen1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0022;
		}
	}

IL_0055:
	{
		double* L_23 = ___result2;
		double* L_24 = ___result2;
		double L_25 = *((double*)L_24);
		int32_t L_26 = V_0;
		int64_t L_27;
		L_27 = TimeSpanParse_Pow10_m4AF3631D30A076C9A94AFE9951C51C083828C59C(L_26, NULL);
		*((double*)L_23) = (double)((double)(L_25/((double)L_27)));
		int32_t L_28 = V_0;
		int32_t L_29 = ___maxDigitLen1;
		return (bool)((((int32_t)L_28) == ((int32_t)L_29))? 1 : 0);
	}
}
// System.Boolean System.DateTimeParse::ParseSign(System.__DTString&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseSign_mEC5D058BD2D20805D692352D55F312FA7B846D30 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, bool* ___result1, const RuntimeMethod* method) 
{
Il2CppChar V_0 = 0x0;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		bool L_1;
		L_1 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_2 = ___str0;
		Il2CppChar L_3;
		L_3 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_2, NULL);
		V_0 = L_3;
		Il2CppChar L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_001b;
		}
	}
	{
		bool* L_5 = ___result1;
		*((int8_t*)L_5) = (int8_t)1;
		return (bool)1;
	}

IL_001b:
	{
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_7 = ___result1;
		*((int8_t*)L_7) = (int8_t)0;
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::ParseTimeZoneOffset(System.__DTString&,System.Int32,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseTimeZoneOffset_mF5FAD2F2CF2EA5F8C2D3344F322372028C56E3BC (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___len1, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (bool)1;
		V_2 = 0;
		int32_t L_0 = ___len1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, 1))) <= ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DateTimeParse_ParseSign_mEC5D058BD2D20805D692352D55F312FA7B846D30(L_1, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_3 = ___str0;
		int32_t L_4 = ___len1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_3, L_4, (&V_1), NULL);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DateTimeParse_ParseSign_mEC5D058BD2D20805D692352D55F312FA7B846D30(L_6, (&V_0), NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}

IL_002f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_8 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_8, 1, (&V_1), NULL);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str0;
		bool L_11;
		L_11 = __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3(L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_12 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_12, 2, (&V_2), NULL);
		if (L_13)
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_0056:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_14 = ___str0;
		int32_t* L_15 = (&L_14->___Index_1);
		int32_t* L_16 = L_15;
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_17, 1));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_18, 2, (&V_2), NULL);
		if (L_19)
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_006e:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)60))))
		{
			goto IL_0079;
		}
	}

IL_0077:
	{
		return (bool)0;
	}

IL_0079:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_22 = ___result2;
		int32_t L_23 = V_1;
		int32_t L_24 = V_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_25;
		memset((&L_25), 0, sizeof(L_25));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_25), L_23, L_24, 0, /*hidden argument*/NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_22 = L_25;
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_0096;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_27 = ___result2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = ___result2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29;
		L_29 = TimeSpan_Negate_m3BF3036191A2FDC35250891CD82AD3283A13ABB4(L_28, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_27 = L_29;
	}

IL_0096:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::MatchAbbreviatedMonthName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedMonthName_m805D9B328FB1263F1BF46ECA9838664F8843108A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B4_0 = 0;
	bool G_B8_0 = false;
	{
		V_0 = 0;
		int32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)(-1);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		bool L_2;
		L_2 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_1, NULL);
		if (!L_2)
		{
			goto IL_008c;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DateTimeFormatInfo_GetMonthName_mCCCA8C327C346C7B2AE22AFD9C42C4DCBF48B539(L_3, ((int32_t)13), NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		G_B4_0 = ((int32_t)13);
		goto IL_0022;
	}

IL_0020:
	{
		G_B4_0 = ((int32_t)12);
	}

IL_0022:
	{
		V_1 = G_B4_0;
		V_2 = 1;
		goto IL_0063;
	}

IL_0027:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_6 = ___dtfi1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = DateTimeFormatInfo_GetAbbreviatedMonthName_mC0DF9D2AABADA5B7F47C6856F78B7BCC11FC8C89(L_6, L_7, NULL);
		V_3 = L_8;
		String_t* L_9 = V_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		V_4 = L_10;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi1;
		NullCheck(L_11);
		bool L_12;
		L_12 = DateTimeFormatInfo_get_HasSpacesInMonthNames_m93B2F520AE7A2E5F0FF27A033C090D1EA6DF61C9(L_11, NULL);
		if (L_12)
		{
			goto IL_0048;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_13 = ___str0;
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_13, L_14, NULL);
		G_B8_0 = L_15;
		goto IL_0052;
	}

IL_0048:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_16 = ___str0;
		String_t* L_17 = V_3;
		bool L_18;
		L_18 = __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4(L_16, L_17, (bool)0, (&V_4), NULL);
		G_B8_0 = L_18;
	}

IL_0052:
	{
		if (!G_B8_0)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_21 = V_4;
		V_0 = L_21;
		int32_t* L_22 = ___result2;
		int32_t L_23 = V_2;
		*((int32_t*)L_22) = (int32_t)L_23;
	}

IL_005f:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0063:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_0027;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_27 = ___dtfi1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_27, NULL);
		if (!((int32_t)((int32_t)L_28&2)))
		{
			goto IL_008c;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_30 = ___dtfi1;
		NullCheck(L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = DateTimeFormatInfo_internalGetLeapYearMonthNames_mE8FA856937882C90948FEABC760B73546B10D894(L_30, NULL);
		int32_t L_32;
		L_32 = __DTString_MatchLongestWords_m18DECB9B44ED3656943F375BBB8474CBD7FEA5A1(L_29, L_31, (&V_0), NULL);
		V_5 = L_32;
		int32_t L_33 = V_5;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t* L_34 = ___result2;
		int32_t L_35 = V_5;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_008c:
	{
		int32_t* L_36 = ___result2;
		int32_t L_37 = *((int32_t*)L_36);
		if ((((int32_t)L_37) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str0;
		int32_t* L_39 = (&L_38->___Index_1);
		int32_t* L_40 = L_39;
		int32_t L_41 = *((int32_t*)L_40);
		int32_t L_42 = V_0;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_41, ((int32_t)il2cpp_codegen_subtract(L_42, 1))));
		return (bool)1;
	}

IL_00a0:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchMonthName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchMonthName_mE7D367082924EBA06BC8DF210B4B352F01FD0A4E (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B4_0 = 0;
	bool G_B8_0 = false;
	{
		V_0 = 0;
		int32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)(-1);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		bool L_2;
		L_2 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_1, NULL);
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DateTimeFormatInfo_GetMonthName_mCCCA8C327C346C7B2AE22AFD9C42C4DCBF48B539(L_3, ((int32_t)13), NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		G_B4_0 = ((int32_t)13);
		goto IL_0025;
	}

IL_0023:
	{
		G_B4_0 = ((int32_t)12);
	}

IL_0025:
	{
		V_1 = G_B4_0;
		V_2 = 1;
		goto IL_0066;
	}

IL_002a:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_6 = ___dtfi1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = DateTimeFormatInfo_GetMonthName_mCCCA8C327C346C7B2AE22AFD9C42C4DCBF48B539(L_6, L_7, NULL);
		V_3 = L_8;
		String_t* L_9 = V_3;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		V_4 = L_10;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi1;
		NullCheck(L_11);
		bool L_12;
		L_12 = DateTimeFormatInfo_get_HasSpacesInMonthNames_m93B2F520AE7A2E5F0FF27A033C090D1EA6DF61C9(L_11, NULL);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_13 = ___str0;
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_13, L_14, NULL);
		G_B8_0 = L_15;
		goto IL_0055;
	}

IL_004b:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_16 = ___str0;
		String_t* L_17 = V_3;
		bool L_18;
		L_18 = __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4(L_16, L_17, (bool)0, (&V_4), NULL);
		G_B8_0 = L_18;
	}

IL_0055:
	{
		if (!G_B8_0)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_19 = V_4;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) <= ((int32_t)L_20)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_21 = V_4;
		V_0 = L_21;
		int32_t* L_22 = ___result2;
		int32_t L_23 = V_2;
		*((int32_t*)L_22) = (int32_t)L_23;
	}

IL_0062:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0066:
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		if ((((int32_t)L_25) <= ((int32_t)L_26)))
		{
			goto IL_002a;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_27 = ___dtfi1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_27, NULL);
		if (!((int32_t)((int32_t)L_28&1)))
		{
			goto IL_008f;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_30 = ___dtfi1;
		NullCheck(L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = DateTimeFormatInfo_get_MonthGenitiveNames_mD2F2B8EE9EC2B9D47F4F7F368874D34B183920B3(L_30, NULL);
		int32_t L_32;
		L_32 = __DTString_MatchLongestWords_m18DECB9B44ED3656943F375BBB8474CBD7FEA5A1(L_29, L_31, (&V_0), NULL);
		V_5 = L_32;
		int32_t L_33 = V_5;
		if ((((int32_t)L_33) < ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		int32_t* L_34 = ___result2;
		int32_t L_35 = V_5;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_008f:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_36 = ___dtfi1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_36, NULL);
		if (!((int32_t)((int32_t)L_37&2)))
		{
			goto IL_00b4;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_39 = ___dtfi1;
		NullCheck(L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40;
		L_40 = DateTimeFormatInfo_internalGetLeapYearMonthNames_mE8FA856937882C90948FEABC760B73546B10D894(L_39, NULL);
		int32_t L_41;
		L_41 = __DTString_MatchLongestWords_m18DECB9B44ED3656943F375BBB8474CBD7FEA5A1(L_38, L_40, (&V_0), NULL);
		V_6 = L_41;
		int32_t L_42 = V_6;
		if ((((int32_t)L_42) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t* L_43 = ___result2;
		int32_t L_44 = V_6;
		*((int32_t*)L_43) = (int32_t)((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b4:
	{
		int32_t* L_45 = ___result2;
		int32_t L_46 = *((int32_t*)L_45);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_47 = ___str0;
		int32_t* L_48 = (&L_47->___Index_1);
		int32_t* L_49 = L_48;
		int32_t L_50 = *((int32_t*)L_49);
		int32_t L_51 = V_0;
		*((int32_t*)L_49) = (int32_t)((int32_t)il2cpp_codegen_add(L_50, ((int32_t)il2cpp_codegen_subtract(L_51, 1))));
		return (bool)1;
	}

IL_00c8:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchAbbreviatedDayName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedDayName_mF643640119B5703882D13747F619E2D83185EBD3 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool G_B5_0 = false;
	{
		V_0 = 0;
		int32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)(-1);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		bool L_2;
		L_2 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_1, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = 0;
		goto IL_004a;
	}

IL_0011:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = DateTimeFormatInfo_GetAbbreviatedDayName_m12EC6E4400C2FC1B69A7F987338F9EF0A100277E(L_3, L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_3 = L_7;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_8 = ___dtfi1;
		NullCheck(L_8);
		bool L_9;
		L_9 = DateTimeFormatInfo_get_HasSpacesInDayNames_mE14BD4B06203A8592604D170CCF7EE8303B9D771(L_8, NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str0;
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_10, L_11, NULL);
		G_B5_0 = L_12;
		goto IL_003b;
	}

IL_0031:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_13 = ___str0;
		String_t* L_14 = V_2;
		bool L_15;
		L_15 = __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4(L_13, L_14, (bool)0, (&V_3), NULL);
		G_B5_0 = L_15;
	}

IL_003b:
	{
		if (!G_B5_0)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_18 = V_3;
		V_0 = L_18;
		int32_t* L_19 = ___result2;
		int32_t L_20 = V_1;
		*((int32_t*)L_19) = (int32_t)L_20;
	}

IL_0046:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
	}

IL_004a:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)6)))
		{
			goto IL_0011;
		}
	}

IL_004e:
	{
		int32_t* L_23 = ___result2;
		int32_t L_24 = *((int32_t*)L_23);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_25 = ___str0;
		int32_t* L_26 = (&L_25->___Index_1);
		int32_t* L_27 = L_26;
		int32_t L_28 = *((int32_t*)L_27);
		int32_t L_29 = V_0;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, ((int32_t)il2cpp_codegen_subtract(L_29, 1))));
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchDayName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchDayName_m7F4A56E577849BFDB5052849F36956A5D3D0B091 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	bool G_B5_0 = false;
	{
		V_0 = 0;
		int32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)(-1);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_1 = ___str0;
		bool L_2;
		L_2 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_1, NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		V_1 = 0;
		goto IL_004a;
	}

IL_0011:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_3 = ___dtfi1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = DateTimeFormatInfo_GetDayName_m7C4E70449F205F063D75944FEC66A3B0FFD3F20A(L_3, L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		V_3 = L_7;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_8 = ___dtfi1;
		NullCheck(L_8);
		bool L_9;
		L_9 = DateTimeFormatInfo_get_HasSpacesInDayNames_mE14BD4B06203A8592604D170CCF7EE8303B9D771(L_8, NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_10 = ___str0;
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_10, L_11, NULL);
		G_B5_0 = L_12;
		goto IL_003b;
	}

IL_0031:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_13 = ___str0;
		String_t* L_14 = V_2;
		bool L_15;
		L_15 = __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4(L_13, L_14, (bool)0, (&V_3), NULL);
		G_B5_0 = L_15;
	}

IL_003b:
	{
		if (!G_B5_0)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)L_17)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_18 = V_3;
		V_0 = L_18;
		int32_t* L_19 = ___result2;
		int32_t L_20 = V_1;
		*((int32_t*)L_19) = (int32_t)L_20;
	}

IL_0046:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 1));
	}

IL_004a:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) <= ((int32_t)6)))
		{
			goto IL_0011;
		}
	}

IL_004e:
	{
		int32_t* L_23 = ___result2;
		int32_t L_24 = *((int32_t*)L_23);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_25 = ___str0;
		int32_t* L_26 = (&L_25->___Index_1);
		int32_t* L_27 = L_26;
		int32_t L_28 = *((int32_t*)L_27);
		int32_t L_29 = V_0;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, ((int32_t)il2cpp_codegen_subtract(L_29, 1))));
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchEraName(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchEraName_mC7797A9D26B3AA12B009E9AAE108D5303D73AB60 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		bool L_1;
		L_1 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_0, NULL);
		if (!L_1)
		{
			goto IL_007d;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi1;
		NullCheck(L_2);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_3;
		L_3 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_2, NULL);
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = VirtualFuncInvoker0< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* >::Invoke(16 /* System.Int32[] System.Globalization.Calendar::get_Eras() */, L_3);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		V_1 = 0;
		goto IL_0077;
	}

IL_001b:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_6 = ___dtfi1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		String_t* L_11;
		L_11 = DateTimeFormatInfo_GetEraName_mEFEC407D99F9C8D98C332FB785B1D32A8BC8202F(L_6, L_10, NULL);
		V_2 = L_11;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_12 = ___str0;
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_15 = ___str0;
		int32_t* L_16 = (&L_15->___Index_1);
		int32_t* L_17 = L_16;
		int32_t L_18 = *((int32_t*)L_17);
		String_t* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, ((int32_t)il2cpp_codegen_subtract(L_20, 1))));
		int32_t* L_21 = ___result2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		*((int32_t*)L_21) = (int32_t)L_25;
		return (bool)1;
	}

IL_0047:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_26 = ___dtfi1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_26);
		String_t* L_31;
		L_31 = DateTimeFormatInfo_GetAbbreviatedEraName_mF42A4A5F3EB9EF1B9DD7465BB563E3D60AFBA7C5(L_26, L_30, NULL);
		V_2 = L_31;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_32 = ___str0;
		String_t* L_33 = V_2;
		bool L_34;
		L_34 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_32, L_33, NULL);
		if (!L_34)
		{
			goto IL_0073;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_35 = ___str0;
		int32_t* L_36 = (&L_35->___Index_1);
		int32_t* L_37 = L_36;
		int32_t L_38 = *((int32_t*)L_37);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		*((int32_t*)L_37) = (int32_t)((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_subtract(L_40, 1))));
		int32_t* L_41 = ___result2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_0;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		*((int32_t*)L_41) = (int32_t)L_45;
		return (bool)1;
	}

IL_0073:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0077:
	{
		int32_t L_47 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_0;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_001b;
		}
	}

IL_007d:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchTimeMark(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.DateTimeParse/TM&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchTimeMark_mA275F7CC9F7894A06E7E6D8A5E43D59224C340E7 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
String_t* V_0 = NULL;
	{
		int32_t* L_0 = ___result2;
		*((int32_t*)L_0) = (int32_t)(-1);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_1 = ___dtfi1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_4 = ___result2;
		*((int32_t*)L_4) = (int32_t)0;
	}

IL_0013:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_5 = ___dtfi1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_0023;
		}
	}
	{
		int32_t* L_8 = ___result2;
		*((int32_t*)L_8) = (int32_t)1;
	}

IL_0023:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		bool L_10;
		L_10 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_9, NULL);
		if (!L_10)
		{
			goto IL_0096;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_11, NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_15 = ___str0;
		String_t* L_16 = V_0;
		bool L_17;
		L_17 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_005b;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_18 = ___str0;
		int32_t* L_19 = (&L_18->___Index_1);
		int32_t* L_20 = L_19;
		int32_t L_21 = *((int32_t*)L_20);
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, ((int32_t)il2cpp_codegen_subtract(L_23, 1))));
		int32_t* L_24 = ___result2;
		*((int32_t*)L_24) = (int32_t)0;
		return (bool)1;
	}

IL_005b:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_25 = ___dtfi1;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_25, NULL);
		V_0 = L_26;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		String_t* L_30 = V_0;
		bool L_31;
		L_31 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_008b;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_32 = ___str0;
		int32_t* L_33 = (&L_32->___Index_1);
		int32_t* L_34 = L_33;
		int32_t L_35 = *((int32_t*)L_34);
		String_t* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_35, ((int32_t)il2cpp_codegen_subtract(L_37, 1))));
		int32_t* L_38 = ___result2;
		*((int32_t*)L_38) = (int32_t)1;
		return (bool)1;
	}

IL_008b:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_39 = ___str0;
		int32_t* L_40 = (&L_39->___Index_1);
		int32_t* L_41 = L_40;
		int32_t L_42 = *((int32_t*)L_41);
		*((int32_t*)L_41) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_0096:
	{
		int32_t* L_43 = ___result2;
		int32_t L_44 = *((int32_t*)L_43);
		if ((((int32_t)L_44) == ((int32_t)(-1))))
		{
			goto IL_009d;
		}
	}
	{
		return (bool)1;
	}

IL_009d:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::MatchAbbreviatedTimeMark(System.__DTString&,System.Globalization.DateTimeFormatInfo,System.DateTimeParse/TM&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_MatchAbbreviatedTimeMark_m948220A2738E1BE22F2704A0BF673100EA420174 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, int32_t* ___result2, const RuntimeMethod* method) 
{
String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___str0;
		bool L_1;
		L_1 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DateTimeFormatInfo_get_AMDesignator_m132D601293E679B6FC624E88517B25246F6EC4CB(L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str0;
		Il2CppChar L_7;
		L_7 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_6, NULL);
		String_t* L_8 = V_0;
		NullCheck(L_8);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, 0, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_10 = ___result2;
		*((int32_t*)L_10) = (int32_t)0;
		return (bool)1;
	}

IL_002c:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_11 = ___dtfi1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = DateTimeFormatInfo_get_PMDesignator_m3B06ECAF8B79E1AAAF8159198A9334658EB1F2CC(L_11, NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_15 = ___str0;
		Il2CppChar L_16;
		L_16 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_15, NULL);
		String_t* L_17 = V_1;
		NullCheck(L_17);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_17, 0, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t* L_19 = ___result2;
		*((int32_t*)L_19) = (int32_t)1;
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
// System.Boolean System.DateTimeParse::CheckNewValue(System.Int32&,System.Int32,System.Char,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247 (int32_t* ___currentValue0, int32_t ___newValue1, Il2CppChar ___patternChar2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t* L_0 = ___currentValue0;
		int32_t L_1 = *((int32_t*)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_000a;
		}
	}
	{
		int32_t* L_2 = ___currentValue0;
		int32_t L_3 = ___newValue1;
		*((int32_t*)L_2) = (int32_t)L_3;
		return (bool)1;
	}

IL_000a:
	{
		int32_t L_4 = ___newValue1;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = *((int32_t*)L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_0023;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_7 = ___result3;
		Il2CppChar L_8 = ___patternChar2;
		Il2CppChar L_9 = L_8;
		RuntimeObject* L_10 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_9);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_7, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_10, NULL);
		return (bool)0;
	}

IL_0023:
	{
		return (bool)1;
	}
}
// System.DateTime System.DateTimeParse::GetDateTimeNow(System.DateTimeResult&,System.Globalization.DateTimeStyles&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeParse_GetDateTimeNow_m3ACC9E28E9EF3C9DD0C39F3856B25AC87F79D785 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, int32_t* ___styles1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)2048))))
		{
			goto IL_0049;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		int32_t L_3 = L_2->___flags_8;
		if (!((int32_t)((int32_t)L_3&((int32_t)256))))
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
		V_0 = L_4;
		int64_t L_5;
		L_5 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_7 = (&L_6->___timeZoneOffset_9);
		int64_t L_8;
		L_8 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(L_7, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		memset((&L_9), 0, sizeof(L_9));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_9), ((int64_t)il2cpp_codegen_add(L_5, L_8)), 0, /*hidden argument*/NULL);
		return L_9;
	}

IL_003c:
	{
		int32_t* L_10 = ___styles1;
		int32_t L_11 = *((int32_t*)L_10);
		if (!((int32_t)(L_11&((int32_t)64))))
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_get_UtcNow_m5D776FFEBC81592B361E4C7AF373297C5DFB46FD(NULL);
		return L_12;
	}

IL_0049:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13;
		L_13 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		return L_13;
	}
}
// System.Boolean System.DateTimeParse::CheckDefaultDateTime(System.DateTimeResult&,System.Globalization.Calendar&,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_CheckDefaultDateTime_m034340E5F9C42CEB315E7A5F13A5E983C2B6883E (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** ___cal1, int32_t ___styles2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18B4C3FF17ADD49C3A5FCB657614AF5293A47A25);
		s_Il2CppMethodInitialized = true;
	}
DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___flags_8;
		if (!((int32_t)((int32_t)L_1&((int32_t)2048))))
		{
			goto IL_0053;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_2 = ___result0;
		int32_t L_3 = L_2->___Month_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0020;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_4 = ___result0;
		int32_t L_5 = L_4->___Day_2;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0053;
		}
	}

IL_0020:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_6 = ___result0;
		int32_t L_7 = L_6->___Year_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0037;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_8 = ___result0;
		int32_t L_9 = L_8->___flags_8;
		if (!((int32_t)((int32_t)L_9&((int32_t)4096))))
		{
			goto IL_0053;
		}
	}

IL_0037:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_10 = ___result0;
		int32_t L_11 = L_10->___flags_8;
		if (!((int32_t)((int32_t)L_11&((int32_t)256))))
		{
			goto IL_0053;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result0;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_12, 4, _stringLiteral18B4C3FF17ADD49C3A5FCB657614AF5293A47A25, NULL);
		return (bool)0;
	}

IL_0053:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		int32_t L_14 = L_13->___Year_0;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0071;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result0;
		int32_t L_16 = L_15->___Month_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0071;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result0;
		int32_t L_18 = L_17->___Day_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_012f;
		}
	}

IL_0071:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_19 = ___result0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20;
		L_20 = DateTimeParse_GetDateTimeNow_m3ACC9E28E9EF3C9DD0C39F3856B25AC87F79D785(L_19, (&___styles2), NULL);
		V_0 = L_20;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_21 = ___result0;
		int32_t L_22 = L_21->___Month_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_00f8;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		int32_t L_24 = L_23->___Day_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_00f8;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_25 = ___result0;
		int32_t L_26 = L_25->___Year_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_27 = ___styles2;
		if (!((int32_t)((int32_t)L_27&8)))
		{
			goto IL_00bc;
		}
	}
	{
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_28 = ___cal1;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_29;
		L_29 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		*((RuntimeObject**)L_28) = (RuntimeObject*)L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)(RuntimeObject*)L_29);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_32 = ___result0;
		int32_t L_33 = 1;
		V_1 = L_33;
		L_32->___Day_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = L_35;
		L_31->___Month_1 = L_35;
		int32_t L_36 = V_1;
		L_30->___Year_0 = L_36;
		goto IL_012f;
	}

IL_00bc:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_37 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_38 = ___cal1;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_39 = *((Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B**)L_38);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(19 /* System.Int32 System.Globalization.Calendar::GetYear(System.DateTime) */, L_39, L_40);
		L_37->___Year_0 = L_41;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_42 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_43 = ___cal1;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_44 = *((Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B**)L_43);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46;
		L_46 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(17 /* System.Int32 System.Globalization.Calendar::GetMonth(System.DateTime) */, L_44, L_45);
		L_42->___Month_1 = L_46;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_47 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_48 = ___cal1;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_49 = *((Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B**)L_48);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_50 = V_0;
		NullCheck(L_49);
		int32_t L_51;
		L_51 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(11 /* System.Int32 System.Globalization.Calendar::GetDayOfMonth(System.DateTime) */, L_49, L_50);
		L_47->___Day_2 = L_51;
		goto IL_012f;
	}

IL_00e8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_52 = ___result0;
		L_52->___Month_1 = 1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result0;
		L_53->___Day_2 = 1;
		goto IL_012f;
	}

IL_00f8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_54 = ___result0;
		int32_t L_55 = L_54->___Year_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)(-1)))))
		{
			goto IL_010f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_56 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_57 = ___cal1;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_58 = *((Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B**)L_57);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_59 = V_0;
		NullCheck(L_58);
		int32_t L_60;
		L_60 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(19 /* System.Int32 System.Globalization.Calendar::GetYear(System.DateTime) */, L_58, L_59);
		L_56->___Year_0 = L_60;
	}

IL_010f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_61 = ___result0;
		int32_t L_62 = L_61->___Month_1;
		if ((!(((uint32_t)L_62) == ((uint32_t)(-1)))))
		{
			goto IL_011f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_63 = ___result0;
		L_63->___Month_1 = 1;
	}

IL_011f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_64 = ___result0;
		int32_t L_65 = L_64->___Day_2;
		if ((!(((uint32_t)L_65) == ((uint32_t)(-1)))))
		{
			goto IL_012f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_66 = ___result0;
		L_66->___Day_2 = 1;
	}

IL_012f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_67 = ___result0;
		int32_t L_68 = L_67->___Hour_3;
		if ((!(((uint32_t)L_68) == ((uint32_t)(-1)))))
		{
			goto IL_013f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_69 = ___result0;
		L_69->___Hour_3 = 0;
	}

IL_013f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_70 = ___result0;
		int32_t L_71 = L_70->___Minute_4;
		if ((!(((uint32_t)L_71) == ((uint32_t)(-1)))))
		{
			goto IL_014f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_72 = ___result0;
		L_72->___Minute_4 = 0;
	}

IL_014f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_73 = ___result0;
		int32_t L_74 = L_73->___Second_5;
		if ((!(((uint32_t)L_74) == ((uint32_t)(-1)))))
		{
			goto IL_015f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_75 = ___result0;
		L_75->___Second_5 = 0;
	}

IL_015f:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_76 = ___result0;
		int32_t L_77 = L_76->___era_7;
		if ((!(((uint32_t)L_77) == ((uint32_t)(-1)))))
		{
			goto IL_016f;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_78 = ___result0;
		L_78->___era_7 = 0;
	}

IL_016f:
	{
		return (bool)1;
	}
}
// System.String System.DateTimeParse::ExpandPredefinedFormat(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo&,System.ParsingInfo&,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeParse_ExpandPredefinedFormat_m319F6300D5E4F8F88D74F14D594B80349B69193D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** ___dtfi1, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* ___parseInfo2, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormat_tE5F9F8059A3910CA0E37935312AAEDC297D907A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Il2CppChar V_0 = 0x0;
	{
		Il2CppChar* L_0;
		L_0 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___format0), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_1 = *((uint16_t*)L_0);
		V_0 = L_1;
		Il2CppChar L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)82)))))
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)79))))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)82))))
		{
			goto IL_0067;
		}
	}
	{
		goto IL_0153;
	}

IL_001e:
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)85))))
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)111))))
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0153;
			}
			case 2:
			{
				goto IL_0153;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_0153;
			}
			case 6:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_0153;
	}

IL_0050:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_7 = ___parseInfo2;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_8;
		L_8 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		L_7->___calendar_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___calendar_0), (void*)L_8);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_9 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_10;
		L_10 = DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B(NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_10);
		goto IL_0153;
	}

IL_0067:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_11 = ___parseInfo2;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_12;
		L_12 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		L_11->___calendar_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___calendar_0), (void*)L_12);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_13 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_14;
		L_14 = DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B(NULL);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_14);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result3;
		int32_t L_16 = L_15->___flags_8;
		if (!((int32_t)((int32_t)L_16&((int32_t)2048))))
		{
			goto IL_0153;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_17 = ___result3;
		int32_t* L_18 = (&L_17->___flags_8);
		int32_t* L_19 = L_18;
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)(L_20|((int32_t)8192)));
		goto IL_0153;
	}

IL_009e:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_21 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_22;
		L_22 = DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B(NULL);
		*((RuntimeObject**)L_21) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_22);
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_23 = ___parseInfo2;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_24;
		L_24 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		L_23->___calendar_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___calendar_0), (void*)L_24);
		goto IL_0153;
	}

IL_00b5:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_25 = ___parseInfo2;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_26;
		L_26 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		L_25->___calendar_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___calendar_0), (void*)L_26);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_27 = ___dtfi1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_28;
		L_28 = DateTimeFormatInfo_get_InvariantInfo_m38B65CBFD59AB5EB343F15AEF9A6B7DB3683625B(NULL);
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_28;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_28);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_29 = ___result3;
		int32_t L_30 = L_29->___flags_8;
		if (!((int32_t)((int32_t)L_30&((int32_t)2048))))
		{
			goto IL_0153;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result3;
		int32_t* L_32 = (&L_31->___flags_8);
		int32_t* L_33 = L_32;
		int32_t L_34 = *((int32_t*)L_33);
		*((int32_t*)L_33) = (int32_t)((int32_t)(L_34|((int32_t)16384)));
		goto IL_0153;
	}

IL_00e6:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_35 = ___parseInfo2;
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_36;
		L_36 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		L_35->___calendar_0 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___calendar_0), (void*)L_36);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_37 = ___result3;
		int32_t* L_38 = (&L_37->___flags_8);
		int32_t* L_39 = L_38;
		int32_t L_40 = *((int32_t*)L_39);
		*((int32_t*)L_39) = (int32_t)((int32_t)(L_40|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_42;
		memset((&L_42), 0, sizeof(L_42));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_42), ((int64_t)0), /*hidden argument*/NULL);
		L_41->___timeZoneOffset_9 = L_42;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_43 = ___result3;
		int32_t* L_44 = (&L_43->___flags_8);
		int32_t* L_45 = L_44;
		int32_t L_46 = *((int32_t*)L_45);
		*((int32_t*)L_45) = (int32_t)((int32_t)(L_46|((int32_t)512)));
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_47 = ___dtfi1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_48 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_47);
		NullCheck(L_48);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_49;
		L_49 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_48, NULL);
		NullCheck(L_49);
		Type_t* L_50;
		L_50 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_0153;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_54 = ___dtfi1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_55 = ___dtfi1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_56 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_55);
		NullCheck(L_56);
		RuntimeObject* L_57;
		L_57 = DateTimeFormatInfo_Clone_mCBA61859E15A29FC79AC3CDAA616D063901540E8(L_56, NULL);
		*((RuntimeObject**)L_54) = (RuntimeObject*)((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A*)CastclassSealed((RuntimeObject*)L_57, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_54, (void*)(RuntimeObject*)((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A*)CastclassSealed((RuntimeObject*)L_57, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A_il2cpp_TypeInfo_var)));
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_58 = ___dtfi1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_59 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_58);
		il2cpp_codegen_runtime_class_init_inline(GregorianCalendar_t6CC2956C5298E69CE93FE53A9DF5AE4F33621815_il2cpp_TypeInfo_var);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_60;
		L_60 = GregorianCalendar_GetDefaultInstance_m2D7EA4DAA4A8E0BDADBA59E2DE2E780E0F47BEA6(NULL);
		NullCheck(L_59);
		DateTimeFormatInfo_set_Calendar_m46840C102CBE9D5BF30C44F0910426969A543564(L_59, L_60, NULL);
	}

IL_0153:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_61 = ___format0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A** L_62 = ___dtfi1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_63 = *((DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A**)L_62);
		il2cpp_codegen_runtime_class_init_inline(DateTimeFormat_tE5F9F8059A3910CA0E37935312AAEDC297D907A2_il2cpp_TypeInfo_var);
		String_t* L_64;
		L_64 = DateTimeFormat_GetRealFormat_mF7CAEDA2701F1D8B57C7BBB5F10C2912D98E0834(L_61, L_63, NULL);
		return L_64;
	}
}
// System.Boolean System.DateTimeParse::ParseJapaneseEraStart(System.__DTString&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseJapaneseEraStart_mA92A09D4BAD4A6FD450C0AACFB3EFEC4DBEEE0D6 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0 = ((AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_StaticFields*)il2cpp_codegen_static_fields_for(AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_il2cpp_TypeInfo_var))->___EnforceLegacyJapaneseDateParsing_3;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_1 = ___dtfi1;
		NullCheck(L_1);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2;
		L_2 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Globalization.Calendar::get_ID() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_4 = ___str0;
		bool L_5;
		L_5 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_4, NULL);
		if (L_5)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str0;
		Il2CppChar L_7 = L_6->___m_current_2;
		NullCheck(_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480, 0, NULL);
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		int32_t* L_10 = (&L_9->___Index_1);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1));
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::ParseByFormat(System.__DTString&,System.__DTString&,System.ParsingInfo&,System.Globalization.DateTimeFormatInfo,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_ParseByFormat_m864D2112CA5AB13BBE1E21DD2B950FEDD9B04381 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___format1, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* ___parseInfo2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEDC38B460FBB683110DEB27588A680B6A5D27D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	double V_8 = 0.0;
	int32_t V_9 = 0;
	Il2CppChar V_10 = 0x0;
	bool V_11 = false;
	StringBuilder_t* V_12 = NULL;
	String_t* V_13 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_14;
	memset((&V_14), 0, sizeof(V_14));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B78_0 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B77_0 = NULL;
	int32_t G_B79_0 = 0;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B79_1 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B85_0 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B86_1 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B92_0 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B91_0 = NULL;
	int32_t G_B93_0 = 0;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B93_1 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B99_0 = NULL;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B98_0 = NULL;
	int32_t G_B100_0 = 0;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* G_B100_1 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = (0.0);
		V_9 = 0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_0 = ___format1;
		Il2CppChar L_1;
		L_1 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_0, NULL);
		V_10 = L_1;
		Il2CppChar L_2 = V_10;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)75)))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_3 = V_10;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)46)))))
		{
			goto IL_006a;
		}
	}
	{
		Il2CppChar L_4 = V_10;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)37)))))
		{
			goto IL_0053;
		}
	}
	{
		Il2CppChar L_5 = V_10;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0763;
		}
	}
	{
		Il2CppChar L_6 = V_10;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)37))))
		{
			goto IL_0897;
		}
	}
	{
		goto IL_093b;
	}

IL_0053:
	{
		Il2CppChar L_7 = V_10;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)39))))
		{
			goto IL_0763;
		}
	}
	{
		Il2CppChar L_8 = V_10;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)46))))
		{
			goto IL_0907;
		}
	}
	{
		goto IL_093b;
	}

IL_006a:
	{
		Il2CppChar L_9 = V_10;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0087;
		}
	}
	{
		Il2CppChar L_10 = V_10;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_071e;
		}
	}
	{
		Il2CppChar L_11 = V_10;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_06d9;
		}
	}
	{
		goto IL_093b;
	}

IL_0087:
	{
		Il2CppChar L_12 = V_10;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)70))))
		{
			goto IL_03eb;
		}
	}
	{
		Il2CppChar L_13 = V_10;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)72))))
		{
			goto IL_033a;
		}
	}
	{
		Il2CppChar L_14 = V_10;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)75))))
		{
			goto IL_05d2;
		}
	}
	{
		goto IL_093b;
	}

IL_00a7:
	{
		Il2CppChar L_15 = V_10;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)104)))))
		{
			goto IL_00f6;
		}
	}
	{
		Il2CppChar L_16 = V_10;
		if ((!(((uint32_t)L_16) <= ((uint32_t)((int32_t)90)))))
		{
			goto IL_00ca;
		}
	}
	{
		Il2CppChar L_17 = V_10;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)77))))
		{
			goto IL_01b5;
		}
	}
	{
		Il2CppChar L_18 = V_10;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)90))))
		{
			goto IL_0540;
		}
	}
	{
		goto IL_093b;
	}

IL_00ca:
	{
		Il2CppChar L_19 = V_10;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)92))))
		{
			goto IL_08d6;
		}
	}
	{
		Il2CppChar L_20 = V_10;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, ((int32_t)100))))
		{
			case 0:
			{
				goto IL_0241;
			}
			case 1:
			{
				goto IL_093b;
			}
			case 2:
			{
				goto IL_03eb;
			}
			case 3:
			{
				goto IL_02d5;
			}
			case 4:
			{
				goto IL_02f8;
			}
		}
	}
	{
		goto IL_093b;
	}

IL_00f6:
	{
		Il2CppChar L_21 = V_10;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)115)))))
		{
			goto IL_0113;
		}
	}
	{
		Il2CppChar L_22 = V_10;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)109))))
		{
			goto IL_0375;
		}
	}
	{
		Il2CppChar L_23 = V_10;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)115))))
		{
			goto IL_03b0;
		}
	}
	{
		goto IL_093b;
	}

IL_0113:
	{
		Il2CppChar L_24 = V_10;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)116))))
		{
			goto IL_045d;
		}
	}
	{
		Il2CppChar L_25 = V_10;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)121))))
		{
			goto IL_0130;
		}
	}
	{
		Il2CppChar L_26 = V_10;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)122))))
		{
			goto IL_04c9;
		}
	}
	{
		goto IL_093b;
	}

IL_0130:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_27 = ___format1;
		int32_t L_28;
		L_28 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_27, NULL);
		V_0 = L_28;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_29 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_30 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = DateTimeParse_ParseJapaneseEraStart_mA92A09D4BAD4A6FD450C0AACFB3EFEC4DBEEE0D6_inline(L_29, L_30, NULL);
		if (!L_31)
		{
			goto IL_0147;
		}
	}
	{
		V_1 = 1;
		V_11 = (bool)1;
		goto IL_0173;
	}

IL_0147:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_32 = ___dtfi3;
		NullCheck(L_32);
		bool L_33;
		L_33 = DateTimeFormatInfo_get_HasForceTwoDigitYears_m25CFF727E1A830DF26A757917BAD564C99DE3899(L_32, NULL);
		if (!L_33)
		{
			goto IL_015d;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_34 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = DateTimeParse_ParseDigits_m3DD067E6F62657C12B0B284D864E66F4137C097B(L_34, 1, 4, (&V_1), NULL);
		V_11 = L_35;
		goto IL_0173;
	}

IL_015d:
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) > ((int32_t)2)))
		{
			goto IL_0168;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_37 = ___parseInfo2;
		L_37->___fUseTwoDigitYear_4 = (bool)1;
	}

IL_0168:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_38 = ___str0;
		int32_t L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_38, L_39, (&V_1), NULL);
		V_11 = L_40;
	}

IL_0173:
	{
		bool L_41 = V_11;
		if (L_41)
		{
			goto IL_0190;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_42 = ___parseInfo2;
		bool L_43 = L_42->___fCustomNumberParser_7;
		if (!L_43)
		{
			goto IL_0190;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_44 = ___parseInfo2;
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_45 = L_44->___parseNumberDelegate_8;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_46 = ___str0;
		int32_t L_47 = V_0;
		NullCheck(L_45);
		bool L_48;
		L_48 = MatchNumberDelegate_Invoke_m5B60C560B1348302810E1020E7A9356E5506A83D(L_45, L_46, L_47, (&V_1), NULL);
		V_11 = L_48;
	}

IL_0190:
	{
		bool L_49 = V_11;
		if (L_49)
		{
			goto IL_019d;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_50 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_50, NULL);
		return (bool)0;
	}

IL_019d:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_51 = ___result4;
		int32_t* L_52 = (&L_51->___Year_0);
		int32_t L_53 = V_1;
		Il2CppChar L_54 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_55 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_52, L_53, L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_01b5:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_57 = ___format1;
		int32_t L_58;
		L_58 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_57, NULL);
		V_0 = L_58;
		int32_t L_59 = V_0;
		if ((((int32_t)L_59) > ((int32_t)2)))
		{
			goto IL_01ed;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_60 = ___str0;
		int32_t L_61 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_60, L_61, (&V_2), NULL);
		if (L_62)
		{
			goto IL_0229;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_63 = ___parseInfo2;
		bool L_64 = L_63->___fCustomNumberParser_7;
		if (!L_64)
		{
			goto IL_01e4;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_65 = ___parseInfo2;
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_66 = L_65->___parseNumberDelegate_8;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_67 = ___str0;
		int32_t L_68 = V_0;
		NullCheck(L_66);
		bool L_69;
		L_69 = MatchNumberDelegate_Invoke_m5B60C560B1348302810E1020E7A9356E5506A83D(L_66, L_67, L_68, (&V_2), NULL);
		if (L_69)
		{
			goto IL_0229;
		}
	}

IL_01e4:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_70 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_70, NULL);
		return (bool)0;
	}

IL_01ed:
	{
		int32_t L_71 = V_0;
		if ((!(((uint32_t)L_71) == ((uint32_t)3))))
		{
			goto IL_0205;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_72 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_73 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = DateTimeParse_MatchAbbreviatedMonthName_m805D9B328FB1263F1BF46ECA9838664F8843108A(L_72, L_73, (&V_2), NULL);
		if (L_74)
		{
			goto IL_0219;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_75 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_75, NULL);
		return (bool)0;
	}

IL_0205:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_76 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_77 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = DateTimeParse_MatchMonthName_mE7D367082924EBA06BC8DF210B4B352F01FD0A4E(L_76, L_77, (&V_2), NULL);
		if (L_78)
		{
			goto IL_0219;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_79 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_79, NULL);
		return (bool)0;
	}

IL_0219:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_80 = ___result4;
		int32_t* L_81 = (&L_80->___flags_8);
		int32_t* L_82 = L_81;
		int32_t L_83 = *((int32_t*)L_82);
		*((int32_t*)L_82) = (int32_t)((int32_t)(L_83|((int32_t)1024)));
	}

IL_0229:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_84 = ___result4;
		int32_t* L_85 = (&L_84->___Month_1);
		int32_t L_86 = V_2;
		Il2CppChar L_87 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_88 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_89;
		L_89 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_85, L_86, L_87, L_88, NULL);
		if (L_89)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_0241:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_90 = ___format1;
		int32_t L_91;
		L_91 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_90, NULL);
		V_0 = L_91;
		int32_t L_92 = V_0;
		if ((((int32_t)L_92) > ((int32_t)2)))
		{
			goto IL_0291;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_93 = ___str0;
		int32_t L_94 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(L_93, L_94, (&V_3), NULL);
		if (L_95)
		{
			goto IL_0279;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_96 = ___parseInfo2;
		bool L_97 = L_96->___fCustomNumberParser_7;
		if (!L_97)
		{
			goto IL_0270;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_98 = ___parseInfo2;
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_99 = L_98->___parseNumberDelegate_8;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_100 = ___str0;
		int32_t L_101 = V_0;
		NullCheck(L_99);
		bool L_102;
		L_102 = MatchNumberDelegate_Invoke_m5B60C560B1348302810E1020E7A9356E5506A83D(L_99, L_100, L_101, (&V_3), NULL);
		if (L_102)
		{
			goto IL_0279;
		}
	}

IL_0270:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_103 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_103, NULL);
		return (bool)0;
	}

IL_0279:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_104 = ___result4;
		int32_t* L_105 = (&L_104->___Day_2);
		int32_t L_106 = V_3;
		Il2CppChar L_107 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_108 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_105, L_106, L_107, L_108, NULL);
		if (L_109)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_0291:
	{
		int32_t L_110 = V_0;
		if ((!(((uint32_t)L_110) == ((uint32_t)3))))
		{
			goto IL_02a9;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_111 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_112 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_113;
		L_113 = DateTimeParse_MatchAbbreviatedDayName_mF643640119B5703882D13747F619E2D83185EBD3(L_111, L_112, (&V_4), NULL);
		if (L_113)
		{
			goto IL_02bd;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_114 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_114, NULL);
		return (bool)0;
	}

IL_02a9:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_115 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_116 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_117;
		L_117 = DateTimeParse_MatchDayName_m7F4A56E577849BFDB5052849F36956A5D3D0B091(L_115, L_116, (&V_4), NULL);
		if (L_117)
		{
			goto IL_02bd;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_118 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_118, NULL);
		return (bool)0;
	}

IL_02bd:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_119 = ___parseInfo2;
		int32_t* L_120 = (&L_119->___dayOfWeek_1);
		int32_t L_121 = V_4;
		Il2CppChar L_122 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_123 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_120, L_121, L_122, L_123, NULL);
		if (L_124)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_02d5:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_125 = ___format1;
		int32_t L_126;
		L_126 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_125, NULL);
		V_0 = L_126;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_127 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_128 = ___dtfi3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_129 = ___result4;
		int32_t* L_130 = (&L_129->___era_7);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_131;
		L_131 = DateTimeParse_MatchEraName_mC7797A9D26B3AA12B009E9AAE108D5303D73AB60(L_127, L_128, L_130, NULL);
		if (L_131)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_132 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_132, NULL);
		return (bool)0;
	}

IL_02f8:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_133 = ___parseInfo2;
		L_133->___fUseHour12_3 = (bool)1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_134 = ___format1;
		int32_t L_135;
		L_135 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_134, NULL);
		V_0 = L_135;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_136 = ___str0;
		int32_t L_137 = V_0;
		G_B77_0 = L_136;
		if ((((int32_t)L_137) < ((int32_t)2)))
		{
			G_B78_0 = L_136;
			goto IL_030e;
		}
	}
	{
		G_B79_0 = 2;
		G_B79_1 = G_B77_0;
		goto IL_030f;
	}

IL_030e:
	{
		G_B79_0 = 1;
		G_B79_1 = G_B78_0;
	}

IL_030f:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_138;
		L_138 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(G_B79_1, G_B79_0, (&V_5), NULL);
		if (L_138)
		{
			goto IL_0321;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_139 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_139, NULL);
		return (bool)0;
	}

IL_0321:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_140 = ___result4;
		int32_t* L_141 = (&L_140->___Hour_3);
		int32_t L_142 = V_5;
		Il2CppChar L_143 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_144 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_141, L_142, L_143, L_144, NULL);
		if (L_145)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_033a:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_146 = ___format1;
		int32_t L_147;
		L_147 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_146, NULL);
		V_0 = L_147;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_148 = ___str0;
		int32_t L_149 = V_0;
		G_B84_0 = L_148;
		if ((((int32_t)L_149) < ((int32_t)2)))
		{
			G_B85_0 = L_148;
			goto IL_0349;
		}
	}
	{
		G_B86_0 = 2;
		G_B86_1 = G_B84_0;
		goto IL_034a;
	}

IL_0349:
	{
		G_B86_0 = 1;
		G_B86_1 = G_B85_0;
	}

IL_034a:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_150;
		L_150 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(G_B86_1, G_B86_0, (&V_5), NULL);
		if (L_150)
		{
			goto IL_035c;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_151 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_151, NULL);
		return (bool)0;
	}

IL_035c:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_152 = ___result4;
		int32_t* L_153 = (&L_152->___Hour_3);
		int32_t L_154 = V_5;
		Il2CppChar L_155 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_156 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_153, L_154, L_155, L_156, NULL);
		if (L_157)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_0375:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_158 = ___format1;
		int32_t L_159;
		L_159 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_158, NULL);
		V_0 = L_159;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_160 = ___str0;
		int32_t L_161 = V_0;
		G_B91_0 = L_160;
		if ((((int32_t)L_161) < ((int32_t)2)))
		{
			G_B92_0 = L_160;
			goto IL_0384;
		}
	}
	{
		G_B93_0 = 2;
		G_B93_1 = G_B91_0;
		goto IL_0385;
	}

IL_0384:
	{
		G_B93_0 = 1;
		G_B93_1 = G_B92_0;
	}

IL_0385:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_162;
		L_162 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(G_B93_1, G_B93_0, (&V_6), NULL);
		if (L_162)
		{
			goto IL_0397;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_163 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_163, NULL);
		return (bool)0;
	}

IL_0397:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_164 = ___result4;
		int32_t* L_165 = (&L_164->___Minute_4);
		int32_t L_166 = V_6;
		Il2CppChar L_167 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_168 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_169;
		L_169 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_165, L_166, L_167, L_168, NULL);
		if (L_169)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_03b0:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_170 = ___format1;
		int32_t L_171;
		L_171 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_170, NULL);
		V_0 = L_171;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_172 = ___str0;
		int32_t L_173 = V_0;
		G_B98_0 = L_172;
		if ((((int32_t)L_173) < ((int32_t)2)))
		{
			G_B99_0 = L_172;
			goto IL_03bf;
		}
	}
	{
		G_B100_0 = 2;
		G_B100_1 = G_B98_0;
		goto IL_03c0;
	}

IL_03bf:
	{
		G_B100_0 = 1;
		G_B100_1 = G_B99_0;
	}

IL_03c0:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_174;
		L_174 = DateTimeParse_ParseDigits_m03142915A08ED7064B266D5C50163C260CA34A5C(G_B100_1, G_B100_0, (&V_7), NULL);
		if (L_174)
		{
			goto IL_03d2;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_175 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_175, NULL);
		return (bool)0;
	}

IL_03d2:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_176 = ___result4;
		int32_t* L_177 = (&L_176->___Second_5);
		int32_t L_178 = V_7;
		Il2CppChar L_179 = V_10;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_180 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = DateTimeParse_CheckNewValue_mB4C07624DD356070C9F337A8951CB88609F4B247(L_177, L_178, L_179, L_180, NULL);
		if (L_181)
		{
			goto IL_09e9;
		}
	}
	{
		return (bool)0;
	}

IL_03eb:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_182 = ___format1;
		int32_t L_183;
		L_183 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_182, NULL);
		V_0 = L_183;
		int32_t L_184 = V_0;
		if ((((int32_t)L_184) > ((int32_t)7)))
		{
			goto IL_0454;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_185 = ___str0;
		int32_t L_186 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_187;
		L_187 = DateTimeParse_ParseFractionExact_m8D05591EC51611279D35A0AEF1CF18340DD24EC1(L_185, L_186, (&V_8), NULL);
		if (L_187)
		{
			goto IL_0410;
		}
	}
	{
		Il2CppChar L_188 = V_10;
		if ((!(((uint32_t)L_188) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0410;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_189 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_189, NULL);
		return (bool)0;
	}

IL_0410:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_190 = ___result4;
		double L_191 = L_190->___fraction_6;
		if ((!(((double)L_191) < ((double)(0.0)))))
		{
			goto IL_0430;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_192 = ___result4;
		double L_193 = V_8;
		L_192->___fraction_6 = L_193;
		goto IL_09e9;
	}

IL_0430:
	{
		double L_194 = V_8;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_195 = ___result4;
		double L_196 = L_195->___fraction_6;
		if ((((double)L_194) == ((double)L_196)))
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_197 = ___result4;
		Il2CppChar L_198 = V_10;
		Il2CppChar L_199 = L_198;
		RuntimeObject* L_200 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_199);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_197, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_200, NULL);
		return (bool)0;
	}

IL_0454:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_201 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_201, NULL);
		return (bool)0;
	}

IL_045d:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_202 = ___format1;
		int32_t L_203;
		L_203 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_202, NULL);
		V_0 = L_203;
		int32_t L_204 = V_0;
		if ((!(((uint32_t)L_204) == ((uint32_t)1))))
		{
			goto IL_047c;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_205 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_206 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_207;
		L_207 = DateTimeParse_MatchAbbreviatedTimeMark_m948220A2738E1BE22F2704A0BF673100EA420174(L_205, L_206, (&V_9), NULL);
		if (L_207)
		{
			goto IL_0490;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_208 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_208, NULL);
		return (bool)0;
	}

IL_047c:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_209 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_210 = ___dtfi3;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_211;
		L_211 = DateTimeParse_MatchTimeMark_mA275F7CC9F7894A06E7E6D8A5E43D59224C340E7(L_209, L_210, (&V_9), NULL);
		if (L_211)
		{
			goto IL_0490;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_212 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_212, NULL);
		return (bool)0;
	}

IL_0490:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_213 = ___parseInfo2;
		int32_t L_214 = L_213->___timeMark_2;
		if ((!(((uint32_t)L_214) == ((uint32_t)(-1)))))
		{
			goto IL_04a6;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_215 = ___parseInfo2;
		int32_t L_216 = V_9;
		L_215->___timeMark_2 = L_216;
		goto IL_09e9;
	}

IL_04a6:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_217 = ___parseInfo2;
		int32_t L_218 = L_217->___timeMark_2;
		int32_t L_219 = V_9;
		if ((((int32_t)L_218) == ((int32_t)L_219)))
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_220 = ___result4;
		Il2CppChar L_221 = V_10;
		Il2CppChar L_222 = L_221;
		RuntimeObject* L_223 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_222);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_220, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_223, NULL);
		return (bool)0;
	}

IL_04c9:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_224 = ___format1;
		int32_t L_225;
		L_225 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_224, NULL);
		V_0 = L_225;
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&V_14), ((int64_t)0), NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_226 = ___str0;
		int32_t L_227 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_228;
		L_228 = DateTimeParse_ParseTimeZoneOffset_mF5FAD2F2CF2EA5F8C2D3344F322372028C56E3BC(L_226, L_227, (&V_14), NULL);
		if (L_228)
		{
			goto IL_04ed;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_229 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_229, NULL);
		return (bool)0;
	}

IL_04ed:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_230 = ___result4;
		int32_t L_231 = L_230->___flags_8;
		if (!((int32_t)((int32_t)L_231&((int32_t)256))))
		{
			goto IL_0522;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_232 = V_14;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_233 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_234 = L_233->___timeZoneOffset_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_235;
		L_235 = TimeSpan_op_Inequality_m702FEB395C90D5B23E2F7CD61B44846CD9B2C808(L_232, L_234, NULL);
		if (!L_235)
		{
			goto IL_0522;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_236 = ___result4;
		Il2CppChar L_237 = ((Il2CppChar)((int32_t)122));
		RuntimeObject* L_238 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_237);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_236, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_238, NULL);
		return (bool)0;
	}

IL_0522:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_239 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_240 = V_14;
		L_239->___timeZoneOffset_9 = L_240;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_241 = ___result4;
		int32_t* L_242 = (&L_241->___flags_8);
		int32_t* L_243 = L_242;
		int32_t L_244 = *((int32_t*)L_243);
		*((int32_t*)L_243) = (int32_t)((int32_t)(L_244|((int32_t)256)));
		goto IL_09e9;
	}

IL_0540:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_245 = ___result4;
		int32_t L_246 = L_245->___flags_8;
		if (!((int32_t)((int32_t)L_246&((int32_t)256))))
		{
			goto IL_0578;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_247 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_248 = L_247->___timeZoneOffset_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_249 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		bool L_250;
		L_250 = TimeSpan_op_Inequality_m702FEB395C90D5B23E2F7CD61B44846CD9B2C808(L_248, L_249, NULL);
		if (!L_250)
		{
			goto IL_0578;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_251 = ___result4;
		Il2CppChar L_252 = ((Il2CppChar)((int32_t)90));
		RuntimeObject* L_253 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_252);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_251, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_253, NULL);
		return (bool)0;
	}

IL_0578:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_254 = ___result4;
		int32_t* L_255 = (&L_254->___flags_8);
		int32_t* L_256 = L_255;
		int32_t L_257 = *((int32_t*)L_256);
		*((int32_t*)L_256) = (int32_t)((int32_t)(L_257|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_258 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_259;
		memset((&L_259), 0, sizeof(L_259));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_259), ((int64_t)0), /*hidden argument*/NULL);
		L_258->___timeZoneOffset_9 = L_259;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_260 = ___result4;
		int32_t* L_261 = (&L_260->___flags_8);
		int32_t* L_262 = L_261;
		int32_t L_263 = *((int32_t*)L_262);
		*((int32_t*)L_262) = (int32_t)((int32_t)(L_263|((int32_t)512)));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_264 = ___str0;
		int32_t* L_265 = (&L_264->___Index_1);
		int32_t* L_266 = L_265;
		int32_t L_267 = *((int32_t*)L_266);
		*((int32_t*)L_266) = (int32_t)((int32_t)il2cpp_codegen_add(L_267, 1));
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_268 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_269;
		L_269 = DateTimeParse_GetTimeZoneName_mE95CAA2AEEC0A0D1B66F23DAAFF4A440B517343F(L_268, NULL);
		if (L_269)
		{
			goto IL_05c2;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_270 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_270, NULL);
		return (bool)0;
	}

IL_05c2:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_271 = ___str0;
		int32_t* L_272 = (&L_271->___Index_1);
		int32_t* L_273 = L_272;
		int32_t L_274 = *((int32_t*)L_273);
		*((int32_t*)L_273) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_274, 1));
		goto IL_09e9;
	}

IL_05d2:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_275 = ___str0;
		bool L_276;
		L_276 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_275, ((int32_t)90), NULL);
		if (!L_276)
		{
			goto IL_0647;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_277 = ___result4;
		int32_t L_278 = L_277->___flags_8;
		if (!((int32_t)((int32_t)L_278&((int32_t)256))))
		{
			goto IL_0614;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_279 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_280 = L_279->___timeZoneOffset_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_281 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		bool L_282;
		L_282 = TimeSpan_op_Inequality_m702FEB395C90D5B23E2F7CD61B44846CD9B2C808(L_280, L_281, NULL);
		if (!L_282)
		{
			goto IL_0614;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_283 = ___result4;
		Il2CppChar L_284 = ((Il2CppChar)((int32_t)75));
		RuntimeObject* L_285 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_284);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_283, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_285, NULL);
		return (bool)0;
	}

IL_0614:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_286 = ___result4;
		int32_t* L_287 = (&L_286->___flags_8);
		int32_t* L_288 = L_287;
		int32_t L_289 = *((int32_t*)L_288);
		*((int32_t*)L_288) = (int32_t)((int32_t)(L_289|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_290 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_291;
		memset((&L_291), 0, sizeof(L_291));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_291), ((int64_t)0), /*hidden argument*/NULL);
		L_290->___timeZoneOffset_9 = L_291;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_292 = ___result4;
		int32_t* L_293 = (&L_292->___flags_8);
		int32_t* L_294 = L_293;
		int32_t L_295 = *((int32_t*)L_294);
		*((int32_t*)L_294) = (int32_t)((int32_t)(L_295|((int32_t)512)));
		goto IL_09e9;
	}

IL_0647:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_296 = ___str0;
		bool L_297;
		L_297 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_296, ((int32_t)43), NULL);
		if (L_297)
		{
			goto IL_065e;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_298 = ___str0;
		bool L_299;
		L_299 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_298, ((int32_t)45), NULL);
		if (!L_299)
		{
			goto IL_09e9;
		}
	}

IL_065e:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_300 = ___str0;
		int32_t* L_301 = (&L_300->___Index_1);
		int32_t* L_302 = L_301;
		int32_t L_303 = *((int32_t*)L_302);
		*((int32_t*)L_302) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_303, 1));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&V_15), ((int64_t)0), NULL);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_304 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_305;
		L_305 = DateTimeParse_ParseTimeZoneOffset_mF5FAD2F2CF2EA5F8C2D3344F322372028C56E3BC(L_304, 3, (&V_15), NULL);
		if (L_305)
		{
			goto IL_0686;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_306 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_306, NULL);
		return (bool)0;
	}

IL_0686:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_307 = ___result4;
		int32_t L_308 = L_307->___flags_8;
		if (!((int32_t)((int32_t)L_308&((int32_t)256))))
		{
			goto IL_06bb;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_309 = V_15;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_310 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_311 = L_310->___timeZoneOffset_9;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_312;
		L_312 = TimeSpan_op_Inequality_m702FEB395C90D5B23E2F7CD61B44846CD9B2C808(L_309, L_311, NULL);
		if (!L_312)
		{
			goto IL_06bb;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_313 = ___result4;
		Il2CppChar L_314 = ((Il2CppChar)((int32_t)75));
		RuntimeObject* L_315 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_314);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_313, 3, _stringLiteralCE6FC8AC15D22DBA81816FC458DD91A3972DC2CE, L_315, NULL);
		return (bool)0;
	}

IL_06bb:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_316 = ___result4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_317 = V_15;
		L_316->___timeZoneOffset_9 = L_317;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_318 = ___result4;
		int32_t* L_319 = (&L_318->___flags_8);
		int32_t* L_320 = L_319;
		int32_t L_321 = *((int32_t*)L_320);
		*((int32_t*)L_320) = (int32_t)((int32_t)(L_321|((int32_t)256)));
		goto IL_09e9;
	}

IL_06d9:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_322 = ___dtfi3;
		NullCheck(L_322);
		String_t* L_323;
		L_323 = DateTimeFormatInfo_get_TimeSeparator_m708070A0307E7FB6D0FB9C5FF3E371EBF8800791(L_322, NULL);
		NullCheck(L_323);
		int32_t L_324;
		L_324 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_323, NULL);
		if ((((int32_t)L_324) <= ((int32_t)1)))
		{
			goto IL_06f7;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_325 = ___dtfi3;
		NullCheck(L_325);
		String_t* L_326;
		L_326 = DateTimeFormatInfo_get_TimeSeparator_m708070A0307E7FB6D0FB9C5FF3E371EBF8800791(L_325, NULL);
		NullCheck(L_326);
		Il2CppChar L_327;
		L_327 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_326, 0, NULL);
		if ((((int32_t)L_327) == ((int32_t)((int32_t)58))))
		{
			goto IL_0704;
		}
	}

IL_06f7:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_328 = ___str0;
		bool L_329;
		L_329 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_328, ((int32_t)58), NULL);
		if (L_329)
		{
			goto IL_09e9;
		}
	}

IL_0704:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_330 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_331 = ___dtfi3;
		NullCheck(L_331);
		String_t* L_332;
		L_332 = DateTimeFormatInfo_get_TimeSeparator_m708070A0307E7FB6D0FB9C5FF3E371EBF8800791(L_331, NULL);
		bool L_333;
		L_333 = __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3(L_330, L_332, NULL);
		if (L_333)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_334 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_334, NULL);
		return (bool)0;
	}

IL_071e:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_335 = ___dtfi3;
		NullCheck(L_335);
		String_t* L_336;
		L_336 = DateTimeFormatInfo_get_DateSeparator_mBD2B8F51FE1491BC6695B10CB1973754BBF54CDD(L_335, NULL);
		NullCheck(L_336);
		int32_t L_337;
		L_337 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_336, NULL);
		if ((((int32_t)L_337) <= ((int32_t)1)))
		{
			goto IL_073c;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_338 = ___dtfi3;
		NullCheck(L_338);
		String_t* L_339;
		L_339 = DateTimeFormatInfo_get_DateSeparator_mBD2B8F51FE1491BC6695B10CB1973754BBF54CDD(L_338, NULL);
		NullCheck(L_339);
		Il2CppChar L_340;
		L_340 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_339, 0, NULL);
		if ((((int32_t)L_340) == ((int32_t)((int32_t)47))))
		{
			goto IL_0749;
		}
	}

IL_073c:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_341 = ___str0;
		bool L_342;
		L_342 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_341, ((int32_t)47), NULL);
		if (L_342)
		{
			goto IL_09e9;
		}
	}

IL_0749:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_343 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_344 = ___dtfi3;
		NullCheck(L_344);
		String_t* L_345;
		L_345 = DateTimeFormatInfo_get_DateSeparator_mBD2B8F51FE1491BC6695B10CB1973754BBF54CDD(L_344, NULL);
		bool L_346;
		L_346 = __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3(L_343, L_345, NULL);
		if (L_346)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_347 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_347, NULL);
		return (bool)0;
	}

IL_0763:
	{
		StringBuilder_t* L_348;
		L_348 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_12 = L_348;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_349 = ___format1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_350 = L_349->___Value_0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_351 = ___format1;
		int32_t L_352 = L_351->___Index_1;
		StringBuilder_t* L_353 = V_12;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_354;
		L_354 = DateTimeParse_TryParseQuoteString_mDC8CE63E2A3C64389F240D0CF9FCB5643CB8CD44(L_350, L_352, L_353, (&V_0), NULL);
		if (L_354)
		{
			goto IL_07a0;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_355 = ___result4;
		Il2CppChar L_356 = V_10;
		Il2CppChar L_357 = L_356;
		RuntimeObject* L_358 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_357);
		DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953(L_355, 3, _stringLiteralAEDC38B460FBB683110DEB27588A680B6A5D27D8, L_358, NULL);
		StringBuilder_t* L_359 = V_12;
		StringBuilderCache_Release_mE49F645AD4CCFE33D4C66C584E805FA0227ED3B2(L_359, NULL);
		return (bool)0;
	}

IL_07a0:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_360 = ___format1;
		int32_t* L_361 = (&L_360->___Index_1);
		int32_t* L_362 = L_361;
		int32_t L_363 = *((int32_t*)L_362);
		int32_t L_364 = V_0;
		*((int32_t*)L_362) = (int32_t)((int32_t)il2cpp_codegen_add(L_363, ((int32_t)il2cpp_codegen_subtract(L_364, 1))));
		StringBuilder_t* L_365 = V_12;
		String_t* L_366;
		L_366 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_365, NULL);
		V_13 = L_366;
		V_16 = 0;
		goto IL_07f8;
	}

IL_07bb:
	{
		String_t* L_367 = V_13;
		int32_t L_368 = V_16;
		NullCheck(L_367);
		Il2CppChar L_369;
		L_369 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_367, L_368, NULL);
		if ((!(((uint32_t)L_369) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_07d8;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_370 = ___parseInfo2;
		bool L_371 = L_370->___fAllowInnerWhite_5;
		if (!L_371)
		{
			goto IL_07d8;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_372 = ___str0;
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33(L_372, NULL);
		goto IL_07f2;
	}

IL_07d8:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_373 = ___str0;
		String_t* L_374 = V_13;
		int32_t L_375 = V_16;
		NullCheck(L_374);
		Il2CppChar L_376;
		L_376 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_374, L_375, NULL);
		bool L_377;
		L_377 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_373, L_376, NULL);
		if (L_377)
		{
			goto IL_07f2;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_378 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_378, NULL);
		return (bool)0;
	}

IL_07f2:
	{
		int32_t L_379 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_379, 1));
	}

IL_07f8:
	{
		int32_t L_380 = V_16;
		String_t* L_381 = V_13;
		NullCheck(L_381);
		int32_t L_382;
		L_382 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_381, NULL);
		if ((((int32_t)L_380) < ((int32_t)L_382)))
		{
			goto IL_07bb;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_383 = ___result4;
		int32_t L_384 = L_383->___flags_8;
		if (!((int32_t)((int32_t)L_384&((int32_t)2048))))
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_385 = ___result4;
		int32_t L_386 = L_385->___flags_8;
		if (!((int32_t)((int32_t)L_386&((int32_t)8192))))
		{
			goto IL_0853;
		}
	}
	{
		String_t* L_387 = V_13;
		bool L_388;
		L_388 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_387, _stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735, NULL);
		if (!L_388)
		{
			goto IL_0853;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_389 = ___result4;
		int32_t* L_390 = (&L_389->___flags_8);
		int32_t* L_391 = L_390;
		int32_t L_392 = *((int32_t*)L_391);
		*((int32_t*)L_391) = (int32_t)((int32_t)(L_392|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_393 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_394 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_393->___timeZoneOffset_9 = L_394;
		goto IL_09e9;
	}

IL_0853:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_395 = ___result4;
		int32_t L_396 = L_395->___flags_8;
		if (!((int32_t)((int32_t)L_396&((int32_t)16384))))
		{
			goto IL_09e9;
		}
	}
	{
		String_t* L_397 = V_13;
		bool L_398;
		L_398 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_397, _stringLiteral234D19ACC97DBDDB4C2351D9B583DDC8AD958380, NULL);
		if (!L_398)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_399 = ___result4;
		int32_t* L_400 = (&L_399->___flags_8);
		int32_t* L_401 = L_400;
		int32_t L_402 = *((int32_t*)L_401);
		*((int32_t*)L_401) = (int32_t)((int32_t)(L_402|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_403 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_404 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_403->___timeZoneOffset_9 = L_404;
		goto IL_09e9;
	}

IL_0897:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_405 = ___format1;
		int32_t L_406 = L_405->___Index_1;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_407 = ___format1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_408 = (&L_407->___Value_0);
		int32_t L_409;
		L_409 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_408, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_406) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_409, 1)))))
		{
			goto IL_08c7;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_410 = ___format1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_411 = (&L_410->___Value_0);
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_412 = ___format1;
		int32_t L_413 = L_412->___Index_1;
		Il2CppChar* L_414;
		L_414 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_411, ((int32_t)il2cpp_codegen_add(L_413, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_415 = *((uint16_t*)L_414);
		if ((!(((uint32_t)L_415) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_09e9;
		}
	}

IL_08c7:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_416 = ___result4;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_417 = ___format1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_418 = L_417->___Value_0;
		DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A(L_416, L_418, NULL);
		return (bool)0;
	}

IL_08d6:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_419 = ___format1;
		bool L_420;
		L_420 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_419, NULL);
		if (!L_420)
		{
			goto IL_08f8;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_421 = ___str0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_422 = ___format1;
		Il2CppChar L_423;
		L_423 = __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A(L_422, NULL);
		bool L_424;
		L_424 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_421, L_423, NULL);
		if (L_424)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_425 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_425, NULL);
		return (bool)0;
	}

IL_08f8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_426 = ___result4;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_427 = ___format1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_428 = L_427->___Value_0;
		DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A(L_426, L_428, NULL);
		return (bool)0;
	}

IL_0907:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_429 = ___str0;
		Il2CppChar L_430 = V_10;
		bool L_431;
		L_431 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_429, L_430, NULL);
		if (L_431)
		{
			goto IL_09e9;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_432 = ___format1;
		bool L_433;
		L_433 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_432, NULL);
		if (!L_433)
		{
			goto IL_0932;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_434 = ___format1;
		bool L_435;
		L_435 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_434, ((int32_t)70), NULL);
		if (!L_435)
		{
			goto IL_0932;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_436 = ___format1;
		int32_t L_437;
		L_437 = __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC(L_436, NULL);
		goto IL_09e9;
	}

IL_0932:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_438 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_438, NULL);
		return (bool)0;
	}

IL_093b:
	{
		Il2CppChar L_439 = V_10;
		if ((!(((uint32_t)L_439) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0981;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_440 = ___parseInfo2;
		bool L_441 = L_440->___fAllowInnerWhite_5;
		if (L_441)
		{
			goto IL_09e9;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_442 = ___str0;
		Il2CppChar L_443 = V_10;
		bool L_444;
		L_444 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_442, L_443, NULL);
		if (L_444)
		{
			goto IL_09e9;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_445 = ___parseInfo2;
		bool L_446 = L_445->___fAllowTrailingWhite_6;
		if (!L_446)
		{
			goto IL_0978;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_447 = ___format1;
		bool L_448;
		L_448 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_447, NULL);
		if (!L_448)
		{
			goto IL_0978;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_449 = ___str0;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_450 = ___format1;
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* L_451 = ___parseInfo2;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_452 = ___dtfi3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_453 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_454;
		L_454 = DateTimeParse_ParseByFormat_m864D2112CA5AB13BBE1E21DD2B950FEDD9B04381(L_449, L_450, L_451, L_452, L_453, NULL);
		if (!L_454)
		{
			goto IL_0978;
		}
	}
	{
		return (bool)1;
	}

IL_0978:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_455 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_455, NULL);
		return (bool)0;
	}

IL_0981:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_456 = ___format1;
		bool L_457;
		L_457 = __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline(L_456, _stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735, NULL);
		if (!L_457)
		{
			goto IL_09d6;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_458 = ___format1;
		int32_t* L_459 = (&L_458->___Index_1);
		int32_t* L_460 = L_459;
		int32_t L_461 = *((int32_t*)L_460);
		NullCheck(_stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735);
		int32_t L_462;
		L_462 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735, NULL);
		*((int32_t*)L_460) = (int32_t)((int32_t)il2cpp_codegen_add(L_461, ((int32_t)il2cpp_codegen_subtract(L_462, 1))));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_463 = ___result4;
		int32_t* L_464 = (&L_463->___flags_8);
		int32_t* L_465 = L_464;
		int32_t L_466 = *((int32_t*)L_465);
		*((int32_t*)L_465) = (int32_t)((int32_t)(L_466|((int32_t)256)));
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_467 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_468 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		L_467->___timeZoneOffset_9 = L_468;
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_469 = ___str0;
		bool L_470;
		L_470 = __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3(L_469, _stringLiteral9297966E005774564E6D7239DF43F90E6C2C4735, NULL);
		if (L_470)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_471 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_471, NULL);
		return (bool)0;
	}

IL_09d6:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_472 = ___str0;
		Il2CppChar L_473 = V_10;
		bool L_474;
		L_474 = __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A(L_472, L_473, NULL);
		if (L_474)
		{
			goto IL_09e9;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_475 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_475, NULL);
		return (bool)0;
	}

IL_09e9:
	{
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::TryParseQuoteString(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Text.StringBuilder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_TryParseQuoteString_mDC8CE63E2A3C64389F240D0CF9FCB5643CB8CD44 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format0, int32_t ___pos1, StringBuilder_t* ___result2, int32_t* ___returnValue3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	{
		int32_t* L_0 = ___returnValue3;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___format0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___pos1;
		V_1 = L_2;
		int32_t L_3 = ___pos1;
		int32_t L_4 = L_3;
		___pos1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		Il2CppChar* L_5;
		L_5 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___format0), L_4, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_6 = *((uint16_t*)L_5);
		V_2 = L_6;
		V_3 = (bool)0;
		goto IL_0065;
	}

IL_0020:
	{
		int32_t L_7 = ___pos1;
		int32_t L_8 = L_7;
		___pos1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		Il2CppChar* L_9;
		L_9 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___format0), L_8, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_10 = *((uint16_t*)L_9);
		V_4 = L_10;
		Il2CppChar L_11 = V_4;
		Il2CppChar L_12 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0039;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0069;
	}

IL_0039:
	{
		Il2CppChar L_13 = V_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = ___pos1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005a;
		}
	}
	{
		StringBuilder_t* L_16 = ___result2;
		int32_t L_17 = ___pos1;
		int32_t L_18 = L_17;
		___pos1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		Il2CppChar* L_19;
		L_19 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___format0), L_18, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_20 = *((uint16_t*)L_19);
		NullCheck(L_16);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, L_20, NULL);
		goto IL_0065;
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		StringBuilder_t* L_22 = ___result2;
		Il2CppChar L_23 = V_4;
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, L_23, NULL);
	}

IL_0065:
	{
		int32_t L_25 = ___pos1;
		int32_t L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0020;
		}
	}

IL_0069:
	{
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_006e;
		}
	}
	{
		return (bool)0;
	}

IL_006e:
	{
		int32_t* L_28 = ___returnValue3;
		int32_t L_29 = ___pos1;
		int32_t L_30 = V_1;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		return (bool)1;
	}
}
// System.Boolean System.DateTimeParse::DoStrictParse(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeStyles,System.Globalization.DateTimeFormatInfo,System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeParse_DoStrictParse_mC03205AA52B2A37EE27088FEA9ED7DD4E7F20F9F (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___s0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___formatParam1, int32_t ___styles2, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi3, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_mCF3E5EA78F58EDA223E913A1F22CE65E3FBEF864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyInitializer_EnsureInitialized_TisMatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_m387D9AC7A4D34344F13BE2F282207626389032C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDoStrictParseU3Eb__98_0_mF26A33BFA38CE8BD4EA470D27BE5C6EB131C37C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BFFD325D0E9B8DB1041A8F32A1F7B2DBB2042C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162);
		s_Il2CppMethodInitialized = true;
	}
ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637 V_2;
	memset((&V_2), 0, sizeof(V_2));
	__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* G_B9_0 = NULL;
	MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23** G_B9_1 = NULL;
	Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* G_B8_0 = NULL;
	MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23** G_B8_1 = NULL;
	DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* G_B38_0 = NULL;
	DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* G_B37_0 = NULL;
	int32_t G_B39_0 = 0;
	DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* G_B39_1 = NULL;
	int32_t G_B49_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89));
		ParsingInfo_Init_m9A009DDE21A06FC19AE6FA3068AD1A8D31985E0F((&V_0), NULL);
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_0 = ___dtfi3;
		NullCheck(L_0);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_1;
		L_1 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_0, NULL);
		(&V_0)->___calendar_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___calendar_0), (void*)L_1);
		int32_t L_2 = ___styles2;
		(&V_0)->___fAllowInnerWhite_5 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_2&4))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_3 = ___styles2;
		(&V_0)->___fAllowTrailingWhite_6 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_3&2))) <= ((uint32_t)0)))? 1 : 0);
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___formatParam1), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result4;
		int32_t L_6 = L_5->___flags_8;
		if (!((int32_t)((int32_t)L_6&((int32_t)2048))))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar* L_7;
		L_7 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___formatParam1), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_8 = *((uint16_t*)L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)85)))))
		{
			goto IL_0066;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result4;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10 = ___formatParam1;
		DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A(L_9, L_10, NULL);
		return (bool)0;
	}

IL_0066:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_11 = ___formatParam1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_12 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = DateTimeParse_ExpandPredefinedFormat_m319F6300D5E4F8F88D74F14D594B80349B69193D(L_11, (&___dtfi3), (&V_0), L_12, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14;
		L_14 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(L_13, NULL);
		___formatParam1 = L_14;
	}

IL_0079:
	{
		V_1 = (bool)0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_15 = ___result4;
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_16 = V_0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_17 = L_16.___calendar_0;
		L_15->___calendar_10 = L_17;
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline(NULL);
		if (L_18)
		{
			goto IL_00dc;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_19 = V_0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_20 = L_19.___calendar_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Globalization.Calendar::get_ID() */, L_20);
		if ((!(((uint32_t)((int32_t)(uint16_t)L_21)) == ((uint32_t)8))))
		{
			goto IL_00dc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var);
		Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* L_22 = ((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9__98_0_1;
		Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* L_23 = L_22;
		G_B8_0 = L_23;
		G_B8_1 = (&((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___m_hebrewNumberParser_0);
		if (L_23)
		{
			G_B9_0 = L_23;
			G_B9_1 = (&((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___m_hebrewNumberParser_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var);
		U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* L_24 = ((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* L_25 = (Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C*)il2cpp_codegen_object_new(Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C_il2cpp_TypeInfo_var);
		Func_1__ctor_mCF3E5EA78F58EDA223E913A1F22CE65E3FBEF864(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3CDoStrictParseU3Eb__98_0_mF26A33BFA38CE8BD4EA470D27BE5C6EB131C37C6_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mCF3E5EA78F58EDA223E913A1F22CE65E3FBEF864_RuntimeMethod_var);
		Func_1_tD3BAAA914BE2AFD64735F23C13992306EDD4454C* L_26 = L_25;
		((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9__98_0_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9__98_0_1), (void*)L_26);
		G_B9_0 = L_26;
		G_B9_1 = G_B8_1;
	}

IL_00c2:
	{
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_27;
		L_27 = LazyInitializer_EnsureInitialized_TisMatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_m387D9AC7A4D34344F13BE2F282207626389032C3(G_B9_1, G_B9_0, LazyInitializer_EnsureInitialized_TisMatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_m387D9AC7A4D34344F13BE2F282207626389032C3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_28 = ((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___m_hebrewNumberParser_0;
		(&V_0)->___parseNumberDelegate_8 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___parseNumberDelegate_8), (void*)L_28);
		(&V_0)->___fCustomNumberParser_7 = (bool)1;
	}

IL_00dc:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_29 = ___result4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_31 = ___result4;
		int32_t L_32 = (-1);
		V_4 = L_32;
		L_31->___Second_5 = L_32;
		int32_t L_33 = V_4;
		int32_t L_34 = L_33;
		V_4 = L_34;
		L_30->___Minute_4 = L_34;
		int32_t L_35 = V_4;
		L_29->___Hour_3 = L_35;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_36 = ___formatParam1;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_37 = ___dtfi3;
		__DTString__ctor_m6CC4A0D6F0C02640CACC04DD665EFA24307D8478((&V_2), L_36, L_37, (bool)0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_38 = ___s0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_39 = ___dtfi3;
		__DTString__ctor_m6CC4A0D6F0C02640CACC04DD665EFA24307D8478((&V_3), L_38, L_39, (bool)0, NULL);
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_40 = V_0;
		bool L_41 = L_40.___fAllowTrailingWhite_6;
		if (!L_41)
		{
			goto IL_012d;
		}
	}
	{
		__DTString_TrimTail_mCFE6DEF7DDA912AF107D97086C6E0FE416C0CD60((&V_2), NULL);
		__DTString_RemoveTrailingInQuoteSpaces_mDF1784B60E93E485C47ED45D379E5FDA0BFE7840((&V_2), NULL);
		__DTString_TrimTail_mCFE6DEF7DDA912AF107D97086C6E0FE416C0CD60((&V_3), NULL);
	}

IL_012d:
	{
		int32_t L_42 = ___styles2;
		if (!((int32_t)((int32_t)L_42&1)))
		{
			goto IL_016a;
		}
	}
	{
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33((&V_2), NULL);
		__DTString_RemoveLeadingInQuoteSpaces_m1CA6C255525A3C0FE23F0BBCF2B72FCDED9D9B4C((&V_2), NULL);
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33((&V_3), NULL);
		goto IL_016a;
	}

IL_0149:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_43 = V_0;
		bool L_44 = L_43.___fAllowInnerWhite_5;
		if (!L_44)
		{
			goto IL_0158;
		}
	}
	{
		__DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33((&V_3), NULL);
	}

IL_0158:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_45 = ___dtfi3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_46 = ___result4;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = DateTimeParse_ParseByFormat_m864D2112CA5AB13BBE1E21DD2B950FEDD9B04381((&V_3), (&V_2), (&V_0), L_45, L_46, NULL);
		if (L_47)
		{
			goto IL_016a;
		}
	}
	{
		return (bool)0;
	}

IL_016a:
	{
		bool L_48;
		L_48 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F((&V_2), NULL);
		if (L_48)
		{
			goto IL_0149;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637 L_49 = V_3;
		int32_t L_50 = L_49.___Index_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_51 = (&(&V_3)->___Value_0);
		int32_t L_52;
		L_52 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_51, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_50) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_52, 1)))))
		{
			goto IL_0192;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_53 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_53, NULL);
		return (bool)0;
	}

IL_0192:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_54 = V_0;
		bool L_55 = L_54.___fUseTwoDigitYear_4;
		if (!L_55)
		{
			goto IL_01e4;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_56 = ___dtfi3;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_56, NULL);
		if (((int32_t)((int32_t)L_57&8)))
		{
			goto IL_01e4;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_58 = ___result4;
		int32_t L_59 = L_58->___Year_0;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)100))))
		{
			goto IL_01b8;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_60 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_60, NULL);
		return (bool)0;
	}

IL_01b8:
	{
	}

IL_01b9:
	try
	{// begin try (depth: 1)
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_61 = ___result4;
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_62 = V_0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_63 = L_62.___calendar_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_64 = ___result4;
		int32_t L_65 = L_64->___Year_0;
		NullCheck(L_63);
		int32_t L_66;
		L_66 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(29 /* System.Int32 System.Globalization.Calendar::ToFourDigitYear(System.Int32) */, L_63, L_65);
		L_61->___Year_0 = L_66;
		goto IL_01e4;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d4;
		}
		throw e;
	}

CATCH_01d4:
	{// begin catch(System.ArgumentOutOfRangeException)
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_67 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_67, NULL);
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03c9;
	}// end catch (depth: 1)

IL_01e4:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_68 = V_0;
		bool L_69 = L_68.___fUseHour12_3;
		if (!L_69)
		{
			goto IL_0250;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_70 = V_0;
		int32_t L_71 = L_70.___timeMark_2;
		if ((!(((uint32_t)L_71) == ((uint32_t)(-1)))))
		{
			goto IL_01fd;
		}
	}
	{
		(&V_0)->___timeMark_2 = 0;
	}

IL_01fd:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_72 = ___result4;
		int32_t L_73 = L_72->___Hour_3;
		if ((((int32_t)L_73) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0211;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_74 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_74, NULL);
		return (bool)0;
	}

IL_0211:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_75 = V_0;
		int32_t L_76 = L_75.___timeMark_2;
		if (L_76)
		{
			goto IL_022e;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_77 = ___result4;
		int32_t L_78 = L_77->___Hour_3;
		if ((!(((uint32_t)L_78) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0280;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_79 = ___result4;
		L_79->___Hour_3 = 0;
		goto IL_0280;
	}

IL_022e:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_80 = ___result4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_81 = ___result4;
		int32_t L_82 = L_81->___Hour_3;
		G_B37_0 = L_80;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)12))))
		{
			G_B38_0 = L_80;
			goto IL_0247;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_83 = ___result4;
		int32_t L_84 = L_83->___Hour_3;
		G_B39_0 = ((int32_t)il2cpp_codegen_add(L_84, ((int32_t)12)));
		G_B39_1 = G_B37_0;
		goto IL_0249;
	}

IL_0247:
	{
		G_B39_0 = ((int32_t)12);
		G_B39_1 = G_B38_0;
	}

IL_0249:
	{
		G_B39_1->___Hour_3 = G_B39_0;
		goto IL_0280;
	}

IL_0250:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_85 = V_0;
		int32_t L_86 = L_85.___timeMark_2;
		if (L_86)
		{
			goto IL_0263;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_87 = ___result4;
		int32_t L_88 = L_87->___Hour_3;
		if ((((int32_t)L_88) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0277;
		}
	}

IL_0263:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_89 = V_0;
		int32_t L_90 = L_89.___timeMark_2;
		if ((!(((uint32_t)L_90) == ((uint32_t)1))))
		{
			goto IL_0280;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_91 = ___result4;
		int32_t L_92 = L_91->___Hour_3;
		if ((((int32_t)L_92) >= ((int32_t)((int32_t)12))))
		{
			goto IL_0280;
		}
	}

IL_0277:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_93 = ___result4;
		DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0(L_93, NULL);
		return (bool)0;
	}

IL_0280:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_94 = ___result4;
		int32_t L_95 = L_94->___Year_0;
		if ((!(((uint32_t)L_95) == ((uint32_t)(-1)))))
		{
			goto IL_02a0;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_96 = ___result4;
		int32_t L_97 = L_96->___Month_1;
		if ((!(((uint32_t)L_97) == ((uint32_t)(-1)))))
		{
			goto IL_02a0;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_98 = ___result4;
		int32_t L_99 = L_98->___Day_2;
		G_B49_0 = ((((int32_t)L_99) == ((int32_t)(-1)))? 1 : 0);
		goto IL_02a1;
	}

IL_02a0:
	{
		G_B49_0 = 0;
	}

IL_02a1:
	{
		V_1 = (bool)G_B49_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_100 = ___result4;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B** L_101 = (&(&V_0)->___calendar_0);
		int32_t L_102 = ___styles2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = DateTimeParse_CheckDefaultDateTime_m034340E5F9C42CEB315E7A5F13A5E983C2B6883E(L_100, L_101, L_102, NULL);
		if (L_103)
		{
			goto IL_02b5;
		}
	}
	{
		return (bool)0;
	}

IL_02b5:
	{
		bool L_104 = V_1;
		if (L_104)
		{
			goto IL_02f5;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_105 = ___dtfi3;
		NullCheck(L_105);
		bool L_106;
		L_106 = DateTimeFormatInfo_get_HasYearMonthAdjustment_m24FE49DE75A8D1487AB0635B55AF815BC1BE139D(L_105, NULL);
		if (!L_106)
		{
			goto IL_02f5;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_107 = ___dtfi3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_108 = ___result4;
		int32_t* L_109 = (&L_108->___Year_0);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_110 = ___result4;
		int32_t* L_111 = (&L_110->___Month_1);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_112 = ___result4;
		int32_t L_113 = L_112->___flags_8;
		NullCheck(L_107);
		bool L_114;
		L_114 = DateTimeFormatInfo_YearMonthAdjustment_m92A876ED6E935255CFFBFA4BD022D293181436EF(L_107, L_109, L_111, (bool)((!(((uint32_t)((int32_t)((int32_t)L_113&((int32_t)1024)))) <= ((uint32_t)0)))? 1 : 0), NULL);
		if (L_114)
		{
			goto IL_02f5;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_115 = ___result4;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_115, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_02f5:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_116 = V_0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_117 = L_116.___calendar_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_118 = ___result4;
		int32_t L_119 = L_118->___Year_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_120 = ___result4;
		int32_t L_121 = L_120->___Month_1;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_122 = ___result4;
		int32_t L_123 = L_122->___Day_2;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_124 = ___result4;
		int32_t L_125 = L_124->___Hour_3;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_126 = ___result4;
		int32_t L_127 = L_126->___Minute_4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_128 = ___result4;
		int32_t L_129 = L_128->___Second_5;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_130 = ___result4;
		int32_t L_131 = L_130->___era_7;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_132 = ___result4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_133 = (&L_132->___parsedDate_11);
		NullCheck(L_117);
		bool L_134;
		L_134 = VirtualFuncInvoker9< bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* >::Invoke(23 /* System.Boolean System.Globalization.Calendar::TryToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTime&) */, L_117, L_119, L_121, L_123, L_125, L_127, L_129, 0, L_131, L_133);
		if (L_134)
		{
			goto IL_034a;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_135 = ___result4;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_135, 7, _stringLiteral3EE55018ADF7DD670653986FF76F19BB86A91162, NULL);
		return (bool)0;
	}

IL_034a:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_136 = ___result4;
		double L_137 = L_136->___fraction_6;
		if ((!(((double)L_137) > ((double)(0.0)))))
		{
			goto IL_0386;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_138 = ___result4;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_139 = ___result4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_140 = (&L_139->___parsedDate_11);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_141 = ___result4;
		double L_142 = L_141->___fraction_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_143;
		L_143 = bankers_round(((double)il2cpp_codegen_multiply(L_142, (10000000.0))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_144;
		L_144 = DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D(L_140, il2cpp_codegen_cast_double_to_int<int64_t>(L_143), NULL);
		L_138->___parsedDate_11 = L_144;
	}

IL_0386:
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_145 = V_0;
		int32_t L_146 = L_145.___dayOfWeek_1;
		if ((((int32_t)L_146) == ((int32_t)(-1))))
		{
			goto IL_03b8;
		}
	}
	{
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_147 = V_0;
		int32_t L_148 = L_147.___dayOfWeek_1;
		ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89 L_149 = V_0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_150 = L_149.___calendar_0;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_151 = ___result4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_152 = L_151->___parsedDate_11;
		NullCheck(L_150);
		int32_t L_153;
		L_153 = VirtualFuncInvoker1< int32_t, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(12 /* System.DayOfWeek System.Globalization.Calendar::GetDayOfWeek(System.DateTime) */, L_150, L_152);
		if ((((int32_t)L_148) == ((int32_t)L_153)))
		{
			goto IL_03b8;
		}
	}
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_154 = ___result4;
		DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A(L_154, 4, _stringLiteral3BFFD325D0E9B8DB1041A8F32A1F7B2DBB2042C8, NULL);
		return (bool)0;
	}

IL_03b8:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_155 = ___result4;
		int32_t L_156 = ___styles2;
		bool L_157 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_158;
		L_158 = DateTimeParse_DetermineTimeZoneAdjustments_mCC9DAEFF572D2B894A28E593F0873FE6C0305395((&V_3), L_155, L_156, L_157, NULL);
		if (L_158)
		{
			goto IL_03c7;
		}
	}
	{
		return (bool)0;
	}

IL_03c7:
	{
		return (bool)1;
	}

IL_03c9:
	{
		bool L_159 = V_5;
		return L_159;
	}
}
// System.Exception System.DateTimeParse::GetDateTimeParseException(System.DateTimeResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* DateTimeParse_GetDateTimeParseException_m7775A148A55B3FF70DDFCD608E55B11E7A84ECC8 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* ___result0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_0 = ___result0;
		int32_t L_1 = L_0->___failure_12;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_009b;
			}
			case 4:
			{
				goto IL_00bc;
			}
			case 5:
			{
				goto IL_00dd;
			}
			case 6:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_0104;
	}

IL_0030:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_3 = ___result0;
		String_t* L_4 = L_3->___failureArgumentName_15;
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_5 = ___result0;
		String_t* L_6 = L_5->___failureMessageID_13;
		String_t* L_7;
		L_7 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_6, NULL);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_8, L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0047:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_9 = ___result0;
		String_t* L_10 = L_9->___failureMessageID_13;
		String_t* L_11;
		L_11 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_10, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_12 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0058:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_13 = ___result0;
		String_t* L_14 = L_13->___failureMessageID_13;
		String_t* L_15;
		L_15 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_14, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_16 = ___result0;
		RuntimeObject* L_17 = L_16->___failureMessageFormatArgument_14;
		String_t* L_18;
		L_18 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(L_15, L_17, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_19 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_19, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0074:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_20 = ___result0;
		String_t* L_21 = L_20->___failureMessageID_13;
		String_t* L_22;
		L_22 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_21, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_23 = ___result0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = L_23->___originalDateTimeString_16;
		String_t* L_25;
		L_25 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_24, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_26 = ___result0;
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_27 = L_26->___calendar_10;
		String_t* L_28;
		L_28 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(L_22, L_25, L_27, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_29 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_29, L_28, /*hidden argument*/NULL);
		return L_29;
	}

IL_009b:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_30 = ___result0;
		String_t* L_31 = L_30->___failureMessageID_13;
		String_t* L_32;
		L_32 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_31, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_33 = ___result0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_34 = L_33->___originalDateTimeString_16;
		String_t* L_35;
		L_35 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_34, NULL);
		String_t* L_36;
		L_36 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(L_32, L_35, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_37 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_37, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00bc:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_38 = ___result0;
		String_t* L_39 = L_38->___failureMessageID_13;
		String_t* L_40;
		L_40 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_39, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_41 = ___result0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_42 = L_41->___failedFormatSpecifier_17;
		String_t* L_43;
		L_43 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_42, NULL);
		String_t* L_44;
		L_44 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(L_40, L_43, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_45 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_45, L_44, /*hidden argument*/NULL);
		return L_45;
	}

IL_00dd:
	{
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_46 = ___result0;
		String_t* L_47 = L_46->___failureMessageID_13;
		String_t* L_48;
		L_48 = SR_GetResourceString_m347394628FA1F8F1FF26D228EC918F62FDE31624(L_47, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_49 = ___result0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_50 = L_49->___originalDateTimeString_16;
		String_t* L_51;
		L_51 = String_CreateString_m1618CF9F1145C9832FC830A4BD6DD96A540012F8(NULL, L_50, NULL);
		DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* L_52 = ___result0;
		RuntimeObject* L_53 = L_52->___failureMessageFormatArgument_14;
		String_t* L_54;
		L_54 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(L_48, L_51, L_53, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_55 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_55, L_54, /*hidden argument*/NULL);
		return L_55;
	}

IL_0104:
	{
		return (Exception_t*)NULL;
	}
}
// System.Void System.DateTimeParse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeParse__cctor_mA058A50CA36093BC92C4F370073AC62780671883 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_20_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_21_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_23_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_40_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_47_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_54_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_57_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_59_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_71_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_74_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_76_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_84_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_88_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_91_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_93_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_97_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_98_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_101_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_115_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_0 = (DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A*)(DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A*)SZArrayNew(DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_1 = L_0;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_2 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_57_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_3, L_4, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_3);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_5 = L_1;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_6 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_54_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_7);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_9 = L_5;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_10 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_74_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_11, L_12, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_11);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_13 = L_9;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_14 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_88_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_15, L_16, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_15);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_17 = L_13;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_18 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_97_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_19, L_20, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_19);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_21 = L_17;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_22 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_23 = L_22;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_23_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_23, L_24, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_23);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_25 = L_21;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_26 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_98_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_27, L_28, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_27);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_29 = L_25;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_30 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_31 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_71_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_31, L_32, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_31);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_33 = L_29;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_34 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_93_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_35, L_36, NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(8), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_35);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_37 = L_33;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_38 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_39 = L_38;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_20_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_39, L_40, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_39);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_41 = L_37;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_42 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_43 = L_42;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_44 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_21_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_43, L_44, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_43);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_45 = L_41;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_46 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_47_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_47, L_48, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_47);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_49 = L_45;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_50 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_51 = L_50;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_52 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_51, L_52, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_51);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_51);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_53 = L_49;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_54 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_55 = L_54;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_56 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_59_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_55, L_56, NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_55);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_57 = L_53;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_58 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_59 = L_58;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_76_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_59, L_60, NULL);
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_59);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_61 = L_57;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_62 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_63 = L_62;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_64 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_40_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_63, L_64, NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_63);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_65 = L_61;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_66 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_67 = L_66;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_84_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_67, L_68, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_67);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_69 = L_65;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_70 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_71 = L_70;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_72 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_101_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_71, L_72, NULL);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_71);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_73 = L_69;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_74 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_75 = L_74;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_76 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_115_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_75, L_76, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_75);
		DSU5BU5DU5BU5D_tB103BA15B839EEFCBA5FA2FF2234903A177E854A* L_77 = L_73;
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_78 = (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)SZArrayNew(DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970* L_79 = L_78;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_80 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_91_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_79, L_80, NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_79);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (DSU5BU5D_tA2725FE50E2AC3781DDB1EBE98D99AF307BAA970*)L_79);
		((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&((DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var))->___dateParsingStates_1), (void*)L_77);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.DateTimeParse/MatchNumberDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchNumberDelegate__ctor_m7469C81CA13108B615B04E0FCB04F283C27AEDA6 (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
}
// System.Boolean System.DateTimeParse/MatchNumberDelegate::Invoke(System.__DTString&,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchNumberDelegate_Invoke_m5B60C560B1348302810E1020E7A9356E5506A83D (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* __this, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, int32_t ___digitLen1, int32_t* ___result2, const RuntimeMethod* method) 
{
bool result = false;
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* delegateArrayToInvoke = __this->___delegates_13;
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->___method_ptr_0;
		RuntimeObject* targetThis = currentDelegate->___m_target_2;
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->___method_3);
		if (!currentDelegate->___method_is_virtual_12)
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef bool (*FunctionPointerType) (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637*, int32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___str0, ___digitLen1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637*, int32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___str0, ___digitLen1, ___result2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			typedef bool (*FunctionPointerType) (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637*, int32_t, int32_t*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___str0, ___digitLen1, ___result2, targetMethod);
		}
		else
		{
			// closed
			typedef bool (*FunctionPointerType) (void*, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637*, int32_t, int32_t*, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___str0, ___digitLen1, ___result2, targetMethod);
		}
	}
	return result;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.DateTimeParse/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8A34CC17F758EF156191C52DFDA600F8C8A7B032 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* L_0 = (U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9*)il2cpp_codegen_object_new(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0050EAB7763433D525E9E9DDCA2FC7340FA4A280(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.DateTimeParse/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0050EAB7763433D525E9E9DDCA2FC7340FA4A280 (U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse/<>c::<DoStrictParse>b__98_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* U3CU3Ec_U3CDoStrictParseU3Eb__98_0_mF26A33BFA38CE8BD4EA470D27BE5C6EB131C37C6 (U3CU3Ec_tB0A34C258E2060CAC08DEAD81BC8AC722F2C11C9* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_MatchHebrewDigits_m03CAD73DA2FCCC7F09F07BEA555193162E56F589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23* L_0 = (MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23*)il2cpp_codegen_object_new(MatchNumberDelegate_t099FBFD09058FE2C73C1CBA7A89A3A70EB294E23_il2cpp_TypeInfo_var);
		MatchNumberDelegate__ctor_m7469C81CA13108B615B04E0FCB04F283C27AEDA6(L_0, NULL, (intptr_t)((void*)DateTimeParse_MatchHebrewDigits_m03CAD73DA2FCCC7F09F07BEA555193162E56F589_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke(const __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637& unmarshaled, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_info_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_3Exception, NULL);
}
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_back(const __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_pinvoke& marshaled, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637& unmarshaled)
{
	Exception_t* ___m_info_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_pinvoke_cleanup(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_com(const __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637& unmarshaled, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_com& marshaled)
{
	Exception_t* ___m_info_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_3Exception, NULL);
}
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_com_back(const __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_com& marshaled, __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637& unmarshaled)
{
	Exception_t* ___m_info_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_info' of type '__DTString': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_info_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.__DTString
IL2CPP_EXTERN_C void __DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshal_com_cleanup(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_marshaled_com& marshaled)
{
}
// System.Int32 System.__DTString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_0, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void System.__DTString::.ctor(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_m6CC4A0D6F0C02640CACC04DD665EFA24307D8478 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, bool ___checkDigitToken2, const RuntimeMethod* method) 
{
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___str0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_1 = ___dtfi1;
		__DTString__ctor_mA373A18F43531434E2B5644E88171623C86416F6(__this, L_0, L_1, NULL);
		bool L_2 = ___checkDigitToken2;
		__this->___m_checkDigitToken_4 = L_2;
		return;
	}
}
// System.Void System.__DTString::.ctor(System.ReadOnlySpan`1<System.Char>,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__ctor_mA373A18F43531434E2B5644E88171623C86416F6 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		__this->___Index_1 = (-1);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___str0;
		__this->___Value_0 = L_0;
		__this->___m_current_2 = 0;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_1 = ___dtfi1;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_2 = ___dtfi1;
		NullCheck(L_2);
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_3;
		L_3 = DateTimeFormatInfo_get_CompareInfo_m5EE0D2D859788948D1A235DD8166A25B30908426(L_2, NULL);
		__this->___m_info_3 = L_3;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_4 = ___dtfi1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = DateTimeFormatInfo_get_FormatFlags_m02C18CB504B5F1547635C20439FF6E468D08A669(L_4, NULL);
		__this->___m_checkDigitToken_4 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_5&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		return;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		NullCheck(L_6);
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_7;
		L_7 = VirtualFuncInvoker0< CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* >::Invoke(12 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_6);
		__this->___m_info_3 = L_7;
		__this->___m_checkDigitToken_4 = (bool)0;
		return;
	}
}
// System.Globalization.CompareInfo System.__DTString::get_CompareInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* __DTString_get_CompareInfo_m60B598A103E1AD8C7A84D1294398713BB72EC372 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_0 = __this->___m_info_3;
		return L_0;
	}
}
// System.Boolean System.__DTString::GetNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = __this->___Index_1;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___Index_1;
		int32_t L_2;
		L_2 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_3 = (&__this->___Value_0);
		int32_t L_4 = __this->___Index_1;
		Il2CppChar* L_5;
		L_5 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_3, L_4, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_6 = *((uint16_t*)L_5);
		__this->___m_current_2 = L_6;
		return (bool)1;
	}

IL_0036:
	{
		return (bool)0;
	}
}
// System.Boolean System.__DTString::AtEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_AtEnd_m842272A109A260E9175838B489D9A8582400E59A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___Index_1;
		int32_t L_1;
		L_1 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)1;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Boolean System.__DTString::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Advance_m81BD906CCFA3F0C557BB61A2E8D24698979420B8 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, int32_t ___count0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = __this->___Index_1;
		int32_t L_1 = ___count0;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = __this->___Index_1;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_4 = (&__this->___Value_0);
		int32_t L_5 = __this->___Index_1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_4, L_5, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		__this->___m_current_2 = L_7;
		return (bool)1;
	}

IL_0036:
	{
		return (bool)0;
	}
}
// System.Void System.__DTString::GetRegularToken(System.TokenType&,System.Int32&,System.Globalization.DateTimeFormatInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_GetRegularToken_mF7E4F8A3FDA483D70D31E919BD247BE18834842A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, int32_t* ___tokenType0, int32_t* ___tokenValue1, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t* L_0 = ___tokenValue1;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t L_1 = __this->___Index_1;
		int32_t L_2;
		L_2 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t* L_3 = ___tokenType0;
		*((int32_t*)L_3) = (int32_t)6;
		return;
	}

IL_0015:
	{
		int32_t* L_4 = ___tokenType0;
		*((int32_t*)L_4) = (int32_t)((int32_t)11);
	}

IL_0019:
	{
		Il2CppChar L_5 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557(L_5, NULL);
		if (!L_6)
		{
			goto IL_0114;
		}
	}
	{
		int32_t* L_7 = ___tokenValue1;
		Il2CppChar L_8 = __this->___m_current_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48)));
		int32_t L_9 = __this->___Index_1;
		V_1 = L_9;
		goto IL_0071;
	}

IL_003d:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_10 = (&__this->___Value_0);
		int32_t L_11 = __this->___Index_1;
		Il2CppChar* L_12;
		L_12 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_10, L_11, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_13 = *((uint16_t*)L_12);
		__this->___m_current_2 = L_13;
		Il2CppChar L_14 = __this->___m_current_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)48)));
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)9))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t* L_17 = ___tokenValue1;
		int32_t* L_18 = ___tokenValue1;
		int32_t L_19 = *((int32_t*)L_18);
		int32_t L_20 = V_0;
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)10))), L_20));
	}

IL_0071:
	{
		int32_t L_21 = __this->___Index_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int32_t L_22 = V_2;
		__this->___Index_1 = L_22;
		int32_t L_23 = V_2;
		int32_t L_24;
		L_24 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_003d;
		}
	}

IL_008a:
	{
		int32_t L_25 = __this->___Index_1;
		int32_t L_26 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_25, L_26))) <= ((int32_t)8)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t* L_27 = ___tokenType0;
		*((int32_t*)L_27) = (int32_t)1;
		int32_t* L_28 = ___tokenValue1;
		*((int32_t*)L_28) = (int32_t)(-1);
		goto IL_00b0;
	}

IL_009d:
	{
		int32_t L_29 = __this->___Index_1;
		int32_t L_30 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_29, L_30))) >= ((int32_t)3)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t* L_31 = ___tokenType0;
		*((int32_t*)L_31) = (int32_t)1;
		goto IL_00b0;
	}

IL_00ad:
	{
		int32_t* L_32 = ___tokenType0;
		*((int32_t*)L_32) = (int32_t)2;
	}

IL_00b0:
	{
		bool L_33 = __this->___m_checkDigitToken_4;
		if (!L_33)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_34 = __this->___Index_1;
		V_3 = L_34;
		Il2CppChar L_35 = __this->___m_current_2;
		V_4 = L_35;
		int32_t L_36 = V_1;
		__this->___Index_1 = L_36;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_37 = (&__this->___Value_0);
		int32_t L_38 = __this->___Index_1;
		Il2CppChar* L_39;
		L_39 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_37, L_38, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_40 = *((uint16_t*)L_39);
		__this->___m_current_2 = L_40;
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_41 = ___dtfi2;
		NullCheck(L_41);
		bool L_42;
		L_42 = DateTimeFormatInfo_Tokenize_mF3AFCE9FF7A9E916C1FD45D74259144A5F9B773F(L_41, ((int32_t)255), (&V_5), (&V_6), __this, NULL);
		if (!L_42)
		{
			goto IL_0104;
		}
	}
	{
		int32_t* L_43 = ___tokenType0;
		int32_t L_44 = V_5;
		*((int32_t*)L_43) = (int32_t)L_44;
		int32_t* L_45 = ___tokenValue1;
		int32_t L_46 = V_6;
		*((int32_t*)L_45) = (int32_t)L_46;
		return;
	}

IL_0104:
	{
		int32_t L_47 = V_3;
		__this->___Index_1 = L_47;
		Il2CppChar L_48 = V_4;
		__this->___m_current_2 = L_48;
		return;
	}

IL_0114:
	{
		Il2CppChar L_49 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_49, NULL);
		if (!L_50)
		{
			goto IL_0168;
		}
	}
	{
		goto IL_014b;
	}

IL_0123:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_51 = (&__this->___Value_0);
		int32_t L_52 = __this->___Index_1;
		Il2CppChar* L_53;
		L_53 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_51, L_52, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_54 = *((uint16_t*)L_53);
		__this->___m_current_2 = L_54;
		Il2CppChar L_55 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_55, NULL);
		if (!L_56)
		{
			goto IL_0019;
		}
	}

IL_014b:
	{
		int32_t L_57 = __this->___Index_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		int32_t L_58 = V_2;
		__this->___Index_1 = L_58;
		int32_t L_59 = V_2;
		int32_t L_60;
		L_60 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t* L_61 = ___tokenType0;
		*((int32_t*)L_61) = (int32_t)6;
		return;
	}

IL_0168:
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_62 = ___dtfi2;
		int32_t* L_63 = ___tokenType0;
		int32_t* L_64 = ___tokenValue1;
		NullCheck(L_62);
		bool L_65;
		L_65 = DateTimeFormatInfo_Tokenize_mF3AFCE9FF7A9E916C1FD45D74259144A5F9B773F(L_62, ((int32_t)255), L_63, L_64, __this, NULL);
	}

IL_0177:
	{
		return;
	}
}
// System.TokenType System.__DTString::GetSeparatorToken(System.Globalization.DateTimeFormatInfo,System.Int32&,System.Char&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetSeparatorToken_m9ADF41C54B30D0AE706F3CB6E1433B1E51B6CA84 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi0, int32_t* ___indexBeforeSeparator1, Il2CppChar* ___charBeforeSeparator2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t* L_0 = ___indexBeforeSeparator1;
		int32_t L_1 = __this->___Index_1;
		*((int32_t*)L_0) = (int32_t)L_1;
		Il2CppChar* L_2 = ___charBeforeSeparator2;
		Il2CppChar L_3 = __this->___m_current_2;
		*((int16_t*)L_2) = (int16_t)L_3;
		bool L_4;
		L_4 = __DTString_SkipWhiteSpaceCurrent_mEFCC8DCABD43754458F9DB4C371AE9BBE9961D91(__this, NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(((int32_t)512));
	}

IL_001e:
	{
		Il2CppChar L_5 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557(L_5, NULL);
		if (L_6)
		{
			goto IL_0045;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_7 = ___dtfi0;
		NullCheck(L_7);
		bool L_8;
		L_8 = DateTimeFormatInfo_Tokenize_mF3AFCE9FF7A9E916C1FD45D74259144A5F9B773F(L_7, ((int32_t)65280), (&V_0), (&V_1), __this, NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = ((int32_t)768);
		goto IL_004b;
	}

IL_0045:
	{
		V_0 = ((int32_t)768);
	}

IL_004b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean System.__DTString::MatchSpecifiedWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___target0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = __this->___Index_1;
		String_t* L_1 = ___target0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_2))) > ((int32_t)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_4 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_5 = (&__this->___Value_0);
		int32_t L_6 = __this->___Index_1;
		String_t* L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_5, L_6, L_8, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_10 = ___target0;
		NullCheck(L_4);
		int32_t L_11;
		L_11 = CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6(L_4, L_9, L_10, 1, NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003d:
	{
		return (bool)0;
	}
}
// System.Boolean System.__DTString::MatchSpecifiedWords(System.String,System.Boolean,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___target0, bool ___checkWordBoundary1, int32_t* ___matchLength2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_0, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_2 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		int32_t* L_3 = ___matchLength2;
		String_t* L_4 = ___target0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		*((int32_t*)L_3) = (int32_t)L_5;
		int32_t* L_6 = ___matchLength2;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0045;
		}
	}
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_9 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_10 = (&__this->___Value_0);
		int32_t L_11 = __this->___Index_1;
		int32_t* L_12 = ___matchLength2;
		int32_t L_13 = *((int32_t*)L_12);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14;
		L_14 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_10, L_11, L_13, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_15 = ___target0;
		NullCheck(L_9);
		int32_t L_16;
		L_16 = CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6(L_9, L_14, L_15, 1, NULL);
		if (!L_16)
		{
			goto IL_015d;
		}
	}

IL_0045:
	{
		V_1 = 0;
		int32_t L_17 = __this->___Index_1;
		V_2 = L_17;
		String_t* L_18 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = ((__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var))->___WhiteSpaceChecks_5;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = String_IndexOfAny_m1AE18DB3B14A0D05EF4A2D3403D4DC1930A199F3(L_18, L_19, L_20, NULL);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0061:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		int32_t L_25 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_26 = (&__this->___Value_0);
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_26, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_28 = V_4;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, L_28)))))
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0079:
	{
		int32_t L_29 = V_4;
		if (L_29)
		{
			goto IL_0085;
		}
	}
	{
		int32_t* L_30 = ___matchLength2;
		int32_t* L_31 = ___matchLength2;
		int32_t L_32 = *((int32_t*)L_31);
		*((int32_t*)L_30) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_00cb;
	}

IL_0085:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_33 = (&__this->___Value_0);
		int32_t L_34 = V_2;
		int32_t L_35 = V_4;
		Il2CppChar* L_36;
		L_36 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_33, ((int32_t)il2cpp_codegen_add(L_34, L_35)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_37 = *((uint16_t*)L_36);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_37, NULL);
		if (L_38)
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_009e:
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_39 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_40 = (&__this->___Value_0);
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_43;
		L_43 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_40, L_41, L_42, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_44 = ___target0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_4;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_47;
		L_47 = MemoryExtensions_AsSpan_m5164781404FE3D882902D92409C003B29659A049_inline(L_44, L_45, L_46, NULL);
		NullCheck(L_39);
		int32_t L_48;
		L_48 = CompareInfo_CompareOptionIgnoreCase_m707A09DA84BE513742B5F7A05138A6E96809EEBE(L_39, L_43, L_47, NULL);
		if (!L_48)
		{
			goto IL_00c4;
		}
	}
	{
		return (bool)0;
	}

IL_00c4:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, L_50)), 1));
	}

IL_00cb:
	{
		int32_t L_51 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		goto IL_00db;
	}

IL_00d1:
	{
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t* L_53 = ___matchLength2;
		int32_t* L_54 = ___matchLength2;
		int32_t L_55 = *((int32_t*)L_54);
		*((int32_t*)L_53) = (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00db:
	{
		int32_t L_56 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_57 = (&__this->___Value_0);
		int32_t L_58;
		L_58 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_57, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_56) >= ((int32_t)L_58)))
		{
			goto IL_00fd;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_59 = (&__this->___Value_0);
		int32_t L_60 = V_2;
		Il2CppChar* L_61;
		L_61 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_59, L_60, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_62 = *((uint16_t*)L_61);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_62, NULL);
		if (L_63)
		{
			goto IL_00d1;
		}
	}

IL_00fd:
	{
		String_t* L_64 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_65 = ((__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var))->___WhiteSpaceChecks_5;
		int32_t L_66 = V_1;
		NullCheck(L_64);
		int32_t L_67;
		L_67 = String_IndexOfAny_m1AE18DB3B14A0D05EF4A2D3403D4DC1930A199F3(L_64, L_65, L_66, NULL);
		int32_t L_68 = L_67;
		V_3 = L_68;
		if ((((int32_t)L_68) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_69 = V_1;
		String_t* L_70 = ___target0;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_70, NULL);
		if ((((int32_t)L_69) >= ((int32_t)L_71)))
		{
			goto IL_015d;
		}
	}
	{
		String_t* L_72 = ___target0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_72, NULL);
		int32_t L_74 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_73, L_74));
		int32_t L_75 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_76 = (&__this->___Value_0);
		int32_t L_77;
		L_77 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_76, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_78 = V_5;
		if ((((int32_t)L_75) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_77, L_78)))))
		{
			goto IL_0137;
		}
	}
	{
		return (bool)0;
	}

IL_0137:
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_79 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_80 = (&__this->___Value_0);
		int32_t L_81 = V_2;
		int32_t L_82 = V_5;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_83;
		L_83 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_80, L_81, L_82, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_84 = ___target0;
		int32_t L_85 = V_1;
		int32_t L_86 = V_5;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_87;
		L_87 = MemoryExtensions_AsSpan_m5164781404FE3D882902D92409C003B29659A049_inline(L_84, L_85, L_86, NULL);
		NullCheck(L_79);
		int32_t L_88;
		L_88 = CompareInfo_CompareOptionIgnoreCase_m707A09DA84BE513742B5F7A05138A6E96809EEBE(L_79, L_83, L_87, NULL);
		if (!L_88)
		{
			goto IL_015d;
		}
	}
	{
		return (bool)0;
	}

IL_015d:
	{
		bool L_89 = ___checkWordBoundary1;
		if (!L_89)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_90 = __this->___Index_1;
		int32_t* L_91 = ___matchLength2;
		int32_t L_92 = *((int32_t*)L_91);
		V_6 = ((int32_t)il2cpp_codegen_add(L_90, L_92));
		int32_t L_93 = V_6;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_94 = (&__this->___Value_0);
		int32_t L_95;
		L_95 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_94, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_93) >= ((int32_t)L_95)))
		{
			goto IL_0191;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_96 = (&__this->___Value_0);
		int32_t L_97 = V_6;
		Il2CppChar* L_98;
		L_98 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_96, L_97, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_99 = *((uint16_t*)L_98);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_100;
		L_100 = Char_IsLetter_m8AA5C1E0E24784F5B681E5A7DB6A28D11DC7E678(L_99, NULL);
		if (!L_100)
		{
			goto IL_0191;
		}
	}
	{
		return (bool)0;
	}

IL_0191:
	{
		return (bool)1;
	}
}
// System.Boolean System.__DTString::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_m2C4D1A7EEF2CAC9164093C891B36B05C717987D3 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___Index_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		String_t* L_4 = ___str0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_6 = (&__this->___Value_0);
		int32_t L_7;
		L_7 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_6, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_8 = __this->___Index_1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8)))))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_9 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_10 = (&__this->___Value_0);
		int32_t L_11 = __this->___Index_1;
		String_t* L_12 = ___str0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14;
		L_14 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_10, L_11, L_13, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_15 = ___str0;
		NullCheck(L_9);
		int32_t L_16;
		L_16 = CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6(L_9, L_14, L_15, ((int32_t)1073741824), NULL);
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_17 = __this->___Index_1;
		String_t* L_18 = ___str0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		__this->___Index_1 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_subtract(L_19, 1))));
		return (bool)1;
	}

IL_0078:
	{
		return (bool)0;
	}
}
// System.Boolean System.__DTString::Match(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_Match_m480E53CC8F4EF31DF728891F4D0A5C476C0A6B6A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, Il2CppChar ___ch0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___Index_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_4 = (&__this->___Value_0);
		int32_t L_5 = __this->___Index_1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_4, L_5, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		Il2CppChar L_8 = ___ch0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0039;
		}
	}
	{
		Il2CppChar L_9 = ___ch0;
		__this->___m_current_2 = L_9;
		return (bool)1;
	}

IL_0039:
	{
		int32_t L_10 = __this->___Index_1;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		return (bool)0;
	}
}
// System.Int32 System.__DTString::MatchLongestWords(System.String[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_MatchLongestWords_m18DECB9B44ED3656943F375BBB8474CBD7FEA5A1 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___words0, int32_t* ___maxMatchStrLen1, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002b;
	}

IL_0006:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___words0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		String_t* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_3 = L_5;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = __DTString_MatchSpecifiedWords_m04927913B3403CAF82463E212A333E2D2F3568E4(__this, L_6, (bool)0, (&V_3), NULL);
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t* L_9 = ___maxMatchStrLen1;
		int32_t L_10 = *((int32_t*)L_9);
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_11 = ___maxMatchStrLen1;
		int32_t L_12 = V_3;
		*((int32_t*)L_11) = (int32_t)L_12;
		int32_t L_13 = V_1;
		V_0 = L_13;
	}

IL_0027:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002b:
	{
		int32_t L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = ___words0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 System.__DTString::GetRepeatCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetRepeatCount_m4A551DDB5DBB46048E6D402CDC74DDB803B1CEAC (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1 = __this->___Index_1;
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_0, L_1, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_3 = *((uint16_t*)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->___Index_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		goto IL_0022;
	}

IL_001e:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0022:
	{
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_8 = (&__this->___Value_0);
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_8, L_9, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_11 = *((uint16_t*)L_10);
		Il2CppChar L_12 = V_0;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_001e;
		}
	}

IL_003b:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = __this->___Index_1;
		int32_t L_15 = V_1;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
	}
}
// System.Boolean System.__DTString::GetNextDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___Index_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_4 = (&__this->___Value_0);
		int32_t L_5 = __this->___Index_1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_4, L_5, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557(L_7, NULL);
		return L_8;
	}

IL_0031:
	{
		return (bool)0;
	}
}
// System.Char System.__DTString::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar __DTString_GetChar_m30E31D23B3403023076FE096F5BD09824F4FA92A (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1 = __this->___Index_1;
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_0, L_1, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_3 = *((uint16_t*)L_2);
		return L_3;
	}
}
// System.Int32 System.__DTString::GetDigit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __DTString_GetDigit_m2C1710445781E19205ECECC147287B2A1E325A4B (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1 = __this->___Index_1;
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_0, L_1, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_3 = *((uint16_t*)L_2);
		return ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)48)));
	}
}
// System.Void System.__DTString::SkipWhiteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_SkipWhiteSpaces_mC7F076DEEEECFB3F54E2C516C8F662FDFB86FA33 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		goto IL_002c;
	}

IL_0002:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___Value_0);
		int32_t L_1 = __this->___Index_1;
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_3 = *((uint16_t*)L_2);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_3, NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_5 = __this->___Index_1;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002c:
	{
		int32_t L_6 = __this->___Index_1;
		int32_t L_7;
		L_7 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) < ((int32_t)L_7)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Boolean System.__DTString::SkipWhiteSpaceCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __DTString_SkipWhiteSpaceCurrent_mEFCC8DCABD43754458F9DB4C371AE9BBE9961D91 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Index_1;
		int32_t L_1;
		L_1 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Il2CppChar L_2 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_2, NULL);
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_4 = (&__this->___Value_0);
		int32_t L_5 = __this->___Index_1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_4, L_5, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		__this->___m_current_2 = L_7;
		Il2CppChar L_8 = __this->___m_current_2;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_8, NULL);
		if (L_9)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_0046:
	{
		int32_t L_10 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		__this->___Index_1 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.__DTString::TrimTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_TrimTail_mCFE6DEF7DDA912AF107D97086C6E0FE416C0CD60 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_000f;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_3 = (&__this->___Value_0);
		int32_t L_4 = V_0;
		Il2CppChar* L_5;
		L_5 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_3, L_4, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_6 = *((uint16_t*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_6, NULL);
		if (L_7)
		{
			goto IL_000b;
		}
	}

IL_0027:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_8 = (&__this->___Value_0);
		int32_t L_9 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		L_10 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_8, 0, ((int32_t)il2cpp_codegen_add(L_9, 1)), ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		__this->___Value_0 = L_10;
		return;
	}
}
// System.Void System.__DTString::RemoveTrailingInQuoteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_RemoveTrailingInQuoteSpaces_mDF1784B60E93E485C47ED45D379E5FDA0BFE7840 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_2 = (&__this->___Value_0);
		int32_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_2, L_3, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_5 = *((uint16_t*)L_4);
		V_1 = L_5;
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009a;
		}
	}

IL_0026:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_8 = (&__this->___Value_0);
		int32_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_11 = *((uint16_t*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_11, NULL);
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0046;
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0046:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0060;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_16 = (&__this->___Value_0);
		int32_t L_17 = V_0;
		Il2CppChar* L_18;
		L_18 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_19 = *((uint16_t*)L_18);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_19, NULL);
		if (L_20)
		{
			goto IL_0042;
		}
	}

IL_0060:
	{
		int32_t L_21 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_21, 1)));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1(L_22, Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		V_2 = L_23;
		int32_t L_24 = V_0;
		Il2CppChar* L_25;
		L_25 = Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_inline((&V_2), L_24, Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_RuntimeMethod_var);
		Il2CppChar L_26 = V_1;
		*((int16_t*)L_25) = (int16_t)L_26;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_27 = (&__this->___Value_0);
		int32_t L_28 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_29;
		L_29 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_27, 0, L_28, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_3 = L_29;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_30 = V_2;
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_3), L_30, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_31 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_32;
		L_32 = Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486(L_31, Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_RuntimeMethod_var);
		__this->___Value_0 = L_32;
	}

IL_009a:
	{
		return;
	}
}
// System.Void System.__DTString::RemoveLeadingInQuoteSpaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_RemoveLeadingInQuoteSpaces_m1CA6C255525A3C0FE23F0BBCF2B72FCDED9D9B4C (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0;
		L_0 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_0) > ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		V_0 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_1 = (&__this->___Value_0);
		int32_t L_2 = V_0;
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_1, L_2, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009a;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, 1))) >= ((int32_t)L_9)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_10 = (&__this->___Value_0);
		int32_t L_11 = V_0;
		Il2CppChar* L_12;
		L_12 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_13 = *((uint16_t*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_16 = (&__this->___Value_0);
		int32_t L_17;
		L_17 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline(L_16, ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_18 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18)));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_20;
		L_20 = Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1(L_19, Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		V_2 = L_20;
		Il2CppChar* L_21;
		L_21 = Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_inline((&V_2), 0, Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_RuntimeMethod_var);
		Il2CppChar L_22 = V_1;
		*((int16_t*)L_21) = (int16_t)L_22;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_23 = (&__this->___Value_0);
		int32_t L_24 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_25;
		L_25 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		V_3 = L_25;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_26;
		L_26 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&V_2), 1, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_3), L_26, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_27 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28;
		L_28 = Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486(L_27, Span_1_op_Implicit_mD65020B112814C67FED9F2C3DE2B0B78D4E2A486_RuntimeMethod_var);
		__this->___Value_0 = L_28;
	}

IL_009a:
	{
		return;
	}
}
// System.DTSubString System.__DTString::GetSubString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 __DTString_GetSubString_mCAA1E40658D9C121F7F93E9FD9471BA32ADE5E27 (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70));
		int32_t L_0 = __this->___Index_1;
		(&V_0)->___index_1 = L_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = __this->___Value_0;
		(&V_0)->___s_0 = L_1;
		goto IL_00a3;
	}

IL_0024:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_2 = (&__this->___Value_0);
		int32_t L_3 = __this->___Index_1;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_4 = V_0;
		int32_t L_5 = L_4.___length_2;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_5)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)48))))
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) > ((int32_t)((int32_t)57))))
		{
			goto IL_004c;
		}
	}
	{
		V_1 = 2;
		goto IL_004e;
	}

IL_004c:
	{
		V_1 = 4;
	}

IL_004e:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_10 = V_0;
		int32_t L_11 = L_10.___length_2;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_12 = V_1;
		(&V_0)->___type_3 = L_12;
		goto IL_0069;
	}

IL_0060:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_13 = V_0;
		int32_t L_14 = L_13.___type_3;
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_00bb;
		}
	}

IL_0069:
	{
		int32_t* L_16 = (&(&V_0)->___length_2);
		int32_t* L_17 = L_16;
		int32_t L_18 = *((int32_t*)L_17);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)2))))
		{
			goto IL_00bb;
		}
	}
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_20 = V_0;
		int32_t L_21 = L_20.___length_2;
		if ((((int32_t)L_21) <= ((int32_t)8)))
		{
			goto IL_008c;
		}
	}
	{
		(&V_0)->___type_3 = 1;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_22 = V_0;
		return L_22;
	}

IL_008c:
	{
		Il2CppChar L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, ((int32_t)48)));
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_24 = V_0;
		int32_t L_25 = L_24.___value_4;
		int32_t L_26 = V_3;
		(&V_0)->___value_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)10))), L_26));
	}

IL_00a3:
	{
		int32_t L_27 = __this->___Index_1;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_28 = V_0;
		int32_t L_29 = L_28.___length_2;
		int32_t L_30;
		L_30 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_27, L_29))) < ((int32_t)L_30)))
		{
			goto IL_0024;
		}
	}

IL_00bb:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_31 = V_0;
		int32_t L_32 = L_31.___length_2;
		if (L_32)
		{
			goto IL_00cd;
		}
	}
	{
		(&V_0)->___type_3 = 3;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_33 = V_0;
		return L_33;
	}

IL_00cd:
	{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_34 = V_0;
		return L_34;
	}
}
// System.Void System.__DTString::ConsumeSubString(System.DTSubString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString_ConsumeSubString_m5EA5ACB00CE8435A7710E7A41EB2378293F4177F (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 ___sub0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_0 = ___sub0;
		int32_t L_1 = L_0.___index_1;
		DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70 L_2 = ___sub0;
		int32_t L_3 = L_2.___length_2;
		__this->___Index_1 = ((int32_t)il2cpp_codegen_add(L_1, L_3));
		int32_t L_4 = __this->___Index_1;
		int32_t L_5;
		L_5 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_6 = (&__this->___Value_0);
		int32_t L_7 = __this->___Index_1;
		Il2CppChar* L_8;
		L_8 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_6, L_7, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_9 = *((uint16_t*)L_8);
		__this->___m_current_2 = L_9;
	}

IL_0039:
	{
		return;
	}
}
// System.Void System.__DTString::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __DTString__cctor_m52B17C22E7A8E2409658F430A2DD82A138B8DF13 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)160));
		((__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_StaticFields*)il2cpp_codegen_static_fields_for(__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637_il2cpp_TypeInfo_var))->___WhiteSpaceChecks_5 = L_2;
		return;
	}
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char System.DTSubString::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DTSubString_get_Item_m1F52F78057FA33F0CB350659CF94DC678C4725B6 (DTSubString_tE3D3286EE2D813E13B011BBE80C26010CFBCFE70* __this, int32_t ___relativeIndex0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_0 = (&__this->___s_0);
		int32_t L_1 = __this->___index_1;
		int32_t L_2 = ___relativeIndex0;
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_0, ((int32_t)il2cpp_codegen_add(L_1, L_2)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		return L_4;
	}
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.DateTimeRawInfo
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke(const DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03& unmarshaled, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_pinvoke& marshaled)
{
marshaled.___num_0 = unmarshaled.___num_0;
	marshaled.___numCount_1 = unmarshaled.___numCount_1;
	marshaled.___month_2 = unmarshaled.___month_2;
	marshaled.___year_3 = unmarshaled.___year_3;
	marshaled.___dayOfWeek_4 = unmarshaled.___dayOfWeek_4;
	marshaled.___era_5 = unmarshaled.___era_5;
	marshaled.___timeMark_6 = unmarshaled.___timeMark_6;
	marshaled.___fraction_7 = unmarshaled.___fraction_7;
	marshaled.___hasSameDateAndTimeSeparators_8 = static_cast<int32_t>(unmarshaled.___hasSameDateAndTimeSeparators_8);
}
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_back(const DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_pinvoke& marshaled, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03& unmarshaled)
{
unmarshaled.___num_0 = marshaled.___num_0;
	int32_t unmarshaled_numCount_temp_1 = 0;
	unmarshaled_numCount_temp_1 = marshaled.___numCount_1;
	unmarshaled.___numCount_1 = unmarshaled_numCount_temp_1;
	int32_t unmarshaled_month_temp_2 = 0;
	unmarshaled_month_temp_2 = marshaled.___month_2;
	unmarshaled.___month_2 = unmarshaled_month_temp_2;
	int32_t unmarshaled_year_temp_3 = 0;
	unmarshaled_year_temp_3 = marshaled.___year_3;
	unmarshaled.___year_3 = unmarshaled_year_temp_3;
	int32_t unmarshaled_dayOfWeek_temp_4 = 0;
	unmarshaled_dayOfWeek_temp_4 = marshaled.___dayOfWeek_4;
	unmarshaled.___dayOfWeek_4 = unmarshaled_dayOfWeek_temp_4;
	int32_t unmarshaled_era_temp_5 = 0;
	unmarshaled_era_temp_5 = marshaled.___era_5;
	unmarshaled.___era_5 = unmarshaled_era_temp_5;
	int32_t unmarshaled_timeMark_temp_6 = 0;
	unmarshaled_timeMark_temp_6 = marshaled.___timeMark_6;
	unmarshaled.___timeMark_6 = unmarshaled_timeMark_temp_6;
	double unmarshaled_fraction_temp_7 = 0.0;
	unmarshaled_fraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.___fraction_7 = unmarshaled_fraction_temp_7;
	bool unmarshaled_hasSameDateAndTimeSeparators_temp_8 = false;
	unmarshaled_hasSameDateAndTimeSeparators_temp_8 = static_cast<bool>(marshaled.___hasSameDateAndTimeSeparators_8);
	unmarshaled.___hasSameDateAndTimeSeparators_8 = unmarshaled_hasSameDateAndTimeSeparators_temp_8;
}
// Conversion method for clean up from marshalling of: System.DateTimeRawInfo
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_pinvoke_cleanup(DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.DateTimeRawInfo
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_com(const DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03& unmarshaled, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_com& marshaled)
{
marshaled.___num_0 = unmarshaled.___num_0;
	marshaled.___numCount_1 = unmarshaled.___numCount_1;
	marshaled.___month_2 = unmarshaled.___month_2;
	marshaled.___year_3 = unmarshaled.___year_3;
	marshaled.___dayOfWeek_4 = unmarshaled.___dayOfWeek_4;
	marshaled.___era_5 = unmarshaled.___era_5;
	marshaled.___timeMark_6 = unmarshaled.___timeMark_6;
	marshaled.___fraction_7 = unmarshaled.___fraction_7;
	marshaled.___hasSameDateAndTimeSeparators_8 = static_cast<int32_t>(unmarshaled.___hasSameDateAndTimeSeparators_8);
}
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_com_back(const DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_com& marshaled, DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03& unmarshaled)
{
unmarshaled.___num_0 = marshaled.___num_0;
	int32_t unmarshaled_numCount_temp_1 = 0;
	unmarshaled_numCount_temp_1 = marshaled.___numCount_1;
	unmarshaled.___numCount_1 = unmarshaled_numCount_temp_1;
	int32_t unmarshaled_month_temp_2 = 0;
	unmarshaled_month_temp_2 = marshaled.___month_2;
	unmarshaled.___month_2 = unmarshaled_month_temp_2;
	int32_t unmarshaled_year_temp_3 = 0;
	unmarshaled_year_temp_3 = marshaled.___year_3;
	unmarshaled.___year_3 = unmarshaled_year_temp_3;
	int32_t unmarshaled_dayOfWeek_temp_4 = 0;
	unmarshaled_dayOfWeek_temp_4 = marshaled.___dayOfWeek_4;
	unmarshaled.___dayOfWeek_4 = unmarshaled_dayOfWeek_temp_4;
	int32_t unmarshaled_era_temp_5 = 0;
	unmarshaled_era_temp_5 = marshaled.___era_5;
	unmarshaled.___era_5 = unmarshaled_era_temp_5;
	int32_t unmarshaled_timeMark_temp_6 = 0;
	unmarshaled_timeMark_temp_6 = marshaled.___timeMark_6;
	unmarshaled.___timeMark_6 = unmarshaled_timeMark_temp_6;
	double unmarshaled_fraction_temp_7 = 0.0;
	unmarshaled_fraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.___fraction_7 = unmarshaled_fraction_temp_7;
	bool unmarshaled_hasSameDateAndTimeSeparators_temp_8 = false;
	unmarshaled_hasSameDateAndTimeSeparators_temp_8 = static_cast<bool>(marshaled.___hasSameDateAndTimeSeparators_8);
	unmarshaled.___hasSameDateAndTimeSeparators_8 = unmarshaled_hasSameDateAndTimeSeparators_temp_8;
}
// Conversion method for clean up from marshalling of: System.DateTimeRawInfo
IL2CPP_EXTERN_C void DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshal_com_cleanup(DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03_marshaled_com& marshaled)
{
}
// System.Void System.DateTimeRawInfo::Init(System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeRawInfo_Init_m58939922AA569BAE7260CFD425D079C654D0731B (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t* ___numberBuffer0, const RuntimeMethod* method) 
{
{
		__this->___month_2 = (-1);
		__this->___year_3 = (-1);
		__this->___dayOfWeek_4 = (-1);
		__this->___era_5 = (-1);
		__this->___timeMark_6 = (-1);
		__this->___fraction_7 = (-1.0);
		int32_t* L_0 = ___numberBuffer0;
		__this->___num_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void DateTimeRawInfo_Init_m58939922AA569BAE7260CFD425D079C654D0731B_AdjustorThunk (RuntimeObject* __this, int32_t* ___numberBuffer0, const RuntimeMethod* method)
{
DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03*>(__this + _offset);
	DateTimeRawInfo_Init_m58939922AA569BAE7260CFD425D079C654D0731B(_thisAdjusted, ___numberBuffer0, method);
}
// System.Void System.DateTimeRawInfo::AddNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t ___value0, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		int32_t* L_0 = __this->___num_0;
		int32_t L_1 = __this->___numCount_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->___numCount_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		int32_t L_4 = ___value0;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_3), 4))))) = (int32_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C  void DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03*>(__this + _offset);
	DateTimeRawInfo_AddNumber_m2DA05B04979A1CE5D6022B4926B4837CDD9AC9BA(_thisAdjusted, ___value0, method);
}
// System.Int32 System.DateTimeRawInfo::GetNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1 (DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* __this, int32_t ___index0, const RuntimeMethod* method) 
{
{
		int32_t* L_0 = __this->___num_0;
		int32_t L_1 = ___index0;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DateTimeRawInfo_tEAC42047935006C924842337850170E9AEA0AB03*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DateTimeRawInfo_GetNumber_mD3A995185B82D464237FF9B32561AD8FE9DA9BA1(_thisAdjusted, ___index0, method);
	return _returnValue;
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
// Conversion methods for marshalling of: System.DateTimeResult
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke(const DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722& unmarshaled, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_pinvoke& marshaled)
{
	Exception_t* ___calendar_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'DateTimeResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_10Exception, NULL);
}
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_back(const DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_pinvoke& marshaled, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722& unmarshaled)
{
	Exception_t* ___calendar_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'DateTimeResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_10Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.DateTimeResult
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_pinvoke_cleanup(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.DateTimeResult
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_com(const DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722& unmarshaled, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_com& marshaled)
{
	Exception_t* ___calendar_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'DateTimeResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_10Exception, NULL);
}
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_com_back(const DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_com& marshaled, DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722& unmarshaled)
{
	Exception_t* ___calendar_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'DateTimeResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_10Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.DateTimeResult
IL2CPP_EXTERN_C void DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshal_com_cleanup(DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722_marshaled_com& marshaled)
{
}
// System.Void System.DateTimeResult::Init(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_Init_mA6717EEF433A842BEAB6C2DD78D1139C2B4BB63D (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___originalDateTimeString0, const RuntimeMethod* method) 
{
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___originalDateTimeString0;
		__this->___originalDateTimeString_16 = L_0;
		__this->___Year_0 = (-1);
		__this->___Month_1 = (-1);
		__this->___Day_2 = (-1);
		__this->___fraction_6 = (-1.0);
		__this->___era_7 = (-1);
		return;
	}
}
// System.Void System.DateTimeResult::SetDate(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetDate_m5277FA9E5EB765F95AC12AAE43C9FB5AE93D9CEE (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___year0;
		__this->___Year_0 = L_0;
		int32_t L_1 = ___month1;
		__this->___Month_1 = L_1;
		int32_t L_2 = ___day2;
		__this->___Day_2 = L_2;
		return;
	}
}
// System.Void System.DateTimeResult::SetBadFormatSpecifierFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadFormatSpecifierFailure_m9FC4392236DE50A674F50361A1BB06F6944BD214 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0;
		L_0 = ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850(ReadOnlySpan_1_get_Empty_mDEA1A6258923B65DE5AF569A0D6518CEDEEF4850_RuntimeMethod_var);
		DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A(__this, L_0, NULL);
		return;
	}
}
// System.Void System.DateTimeResult::SetBadFormatSpecifierFailure(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadFormatSpecifierFailure_m9179D9FFFB4CEC9F71969242D9750CBD85C7274A (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___failedFormatSpecifier0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA04D202AC5F9C676BB75B6E26B16EE1F062729C);
		s_Il2CppMethodInitialized = true;
	}
{
		__this->___failure_12 = 5;
		__this->___failureMessageID_13 = _stringLiteralCA04D202AC5F9C676BB75B6E26B16EE1F062729C;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___failedFormatSpecifier0;
		__this->___failedFormatSpecifier_17 = L_0;
		return;
	}
}
// System.Void System.DateTimeResult::SetBadDateTimeFailure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetBadDateTimeFailure_mA46C1437130D90AC59061DCC5F0C5BA4D82257D0 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880);
		s_Il2CppMethodInitialized = true;
	}
{
		__this->___failure_12 = 4;
		__this->___failureMessageID_13 = _stringLiteral05ABA3CF47C1FCAEF66432D85D6B44E99603F880;
		__this->___failureMessageFormatArgument_14 = NULL;
		return;
	}
}
// System.Void System.DateTimeResult::SetFailure(System.ParseFailureKind,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetFailure_m84403A0901C5114A46BB7F56E0208072C95AFB2A (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___failure0, String_t* ___failureMessageID1, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___failure0;
		__this->___failure_12 = L_0;
		String_t* L_1 = ___failureMessageID1;
		__this->___failureMessageID_13 = L_1;
		__this->___failureMessageFormatArgument_14 = NULL;
		return;
	}
}
// System.Void System.DateTimeResult::SetFailure(System.ParseFailureKind,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeResult_SetFailure_m24BEDE43DC1A95BE46B6A6F9F37F74383FF01953 (DateTimeResult_t88A2CAF7FB72DB24CD634B742B58043128BB9722* __this, int32_t ___failure0, String_t* ___failureMessageID1, RuntimeObject* ___failureMessageFormatArgument2, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___failure0;
		__this->___failure_12 = L_0;
		String_t* L_1 = ___failureMessageID1;
		__this->___failureMessageID_13 = L_1;
		RuntimeObject* L_2 = ___failureMessageFormatArgument2;
		__this->___failureMessageFormatArgument_14 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.ParsingInfo
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke(const ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89& unmarshaled, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_pinvoke& marshaled)
{
	Exception_t* ___calendar_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'ParsingInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_0Exception, NULL);
}
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_back(const ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_pinvoke& marshaled, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89& unmarshaled)
{
	Exception_t* ___calendar_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'ParsingInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ParsingInfo
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_pinvoke_cleanup(ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ParsingInfo
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_com(const ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89& unmarshaled, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_com& marshaled)
{
	Exception_t* ___calendar_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'ParsingInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_0Exception, NULL);
}
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_com_back(const ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_com& marshaled, ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89& unmarshaled)
{
	Exception_t* ___calendar_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'calendar' of type 'ParsingInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___calendar_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.ParsingInfo
IL2CPP_EXTERN_C void ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshal_com_cleanup(ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89_marshaled_com& marshaled)
{
}
// System.Void System.ParsingInfo::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsingInfo_Init_m9A009DDE21A06FC19AE6FA3068AD1A8D31985E0F (ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* __this, const RuntimeMethod* method) 
{
{
		__this->___dayOfWeek_1 = (-1);
		__this->___timeMark_2 = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void ParsingInfo_Init_m9A009DDE21A06FC19AE6FA3068AD1A8D31985E0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParsingInfo_t1717753431089DD2385D3739360CF85BDB410F89*>(__this + _offset);
	ParsingInfo_Init_m9A009DDE21A06FC19AE6FA3068AD1A8D31985E0F(_thisAdjusted, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) 
{
Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint32_t L_0 = sizeof(Guid_t);
		Interop_GetRandomBytes_m2DEA3C88AAD51EEDCAF09A1855A07149EB945BFC((uint8_t*)((uintptr_t)(&V_0)), L_0, NULL);
		Guid_t L_1 = V_0;
		int16_t L_2 = L_1.____c_3;
		(&V_0)->____c_3 = ((int16_t)((int32_t)(((int32_t)((int32_t)L_2&((int32_t)-61441)))|((int32_t)16384))));
		Guid_t L_3 = V_0;
		uint8_t L_4 = L_3.____d_4;
		(&V_0)->____d_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_4&((int32_t)-193)))|((int32_t)128))));
		Guid_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	Guid_t* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	Guid_t* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_3), G_B2_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D(G_B2_1, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C(_thisAdjusted, ___b0, method);
}
// System.Void System.Guid::.ctor(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D (Guid_t* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___b0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___b0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E73F441AA920D49C2AE389F5A0431D2B7955821)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D_RuntimeMethod_var)));
	}

IL_0025:
	{
		uint8_t* L_3;
		L_3 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 3, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_4 = *((uint8_t*)L_3);
		uint8_t* L_5;
		L_5 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 2, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_6 = *((uint8_t*)L_5);
		uint8_t* L_7;
		L_7 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 1, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_8 = *((uint8_t*)L_7);
		uint8_t* L_9;
		L_9 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 0, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_10 = *((uint8_t*)L_9);
		__this->____a_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_4<<((int32_t)24)))|((int32_t)(L_6<<((int32_t)16)))))|((int32_t)(L_8<<8))))|L_10));
		uint8_t* L_11;
		L_11 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 5, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_12 = *((uint8_t*)L_11);
		uint8_t* L_13;
		L_13 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 4, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_14 = *((uint8_t*)L_13);
		__this->____b_2 = ((int16_t)((int32_t)(((int32_t)(L_12<<8))|L_14)));
		uint8_t* L_15;
		L_15 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 7, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_16 = *((uint8_t*)L_15);
		uint8_t* L_17;
		L_17 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 6, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_18 = *((uint8_t*)L_17);
		__this->____c_3 = ((int16_t)((int32_t)(((int32_t)(L_16<<8))|L_18)));
		uint8_t* L_19;
		L_19 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), 8, ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_20 = *((uint8_t*)L_19);
		__this->____d_4 = (uint8_t)L_20;
		uint8_t* L_21;
		L_21 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)9), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_22 = *((uint8_t*)L_21);
		__this->____e_5 = (uint8_t)L_22;
		uint8_t* L_23;
		L_23 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)10), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_24 = *((uint8_t*)L_23);
		__this->____f_6 = (uint8_t)L_24;
		uint8_t* L_25;
		L_25 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)11), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_26 = *((uint8_t*)L_25);
		__this->____g_7 = (uint8_t)L_26;
		uint8_t* L_27;
		L_27 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)12), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_28 = *((uint8_t*)L_27);
		__this->____h_8 = (uint8_t)L_28;
		uint8_t* L_29;
		L_29 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)13), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_30 = *((uint8_t*)L_29);
		__this->____i_9 = (uint8_t)L_30;
		uint8_t* L_31;
		L_31 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)14), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_32 = *((uint8_t*)L_31);
		__this->____j_10 = (uint8_t)L_32;
		uint8_t* L_33;
		L_33 = ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_inline((&___b0), ((int32_t)15), ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_RuntimeMethod_var);
		int32_t L_34 = *((uint8_t*)L_33);
		__this->____k_11 = (uint8_t)L_34;
		return;
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D_AdjustorThunk (RuntimeObject* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___b0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_m6533072DFD3E81582E8949EB2D5BFABEFC7C403D(_thisAdjusted, ___b0, method);
}
// System.Void System.Guid::.ctor(System.UInt32,System.UInt16,System.UInt16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m124D0C0C7E661194DA48CA77B878BF15F6D83871 (Guid_t* __this, uint32_t ___a0, uint16_t ___b1, uint16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method) 
{
{
		uint32_t L_0 = ___a0;
		__this->____a_1 = L_0;
		uint16_t L_1 = ___b1;
		__this->____b_2 = ((int16_t)L_1);
		uint16_t L_2 = ___c2;
		__this->____c_3 = ((int16_t)L_2);
		uint8_t L_3 = ___d3;
		__this->____d_4 = L_3;
		uint8_t L_4 = ___e4;
		__this->____e_5 = L_4;
		uint8_t L_5 = ___f5;
		__this->____f_6 = L_5;
		uint8_t L_6 = ___g6;
		__this->____g_7 = L_6;
		uint8_t L_7 = ___h7;
		__this->____h_8 = L_7;
		uint8_t L_8 = ___i8;
		__this->____i_9 = L_8;
		uint8_t L_9 = ___j9;
		__this->____j_10 = L_9;
		uint8_t L_10 = ___k10;
		__this->____k_11 = L_10;
		return;
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_m124D0C0C7E661194DA48CA77B878BF15F6D83871_AdjustorThunk (RuntimeObject* __this, uint32_t ___a0, uint16_t ___b1, uint16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_m124D0C0C7E661194DA48CA77B878BF15F6D83871(_thisAdjusted, ___a0, ___b1, ___c2, ___d3, ___e4, ___f5, ___g6, ___h7, ___i8, ___j9, ___k10, method);
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d3, const RuntimeMethod* method) 
{
{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___d3;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB_RuntimeMethod_var)));
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___d3;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)8)))
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_3;
		L_3 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E73F441AA920D49C2AE389F5A0431D2B7955821)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB16CF3324CA15FF0851B0F99DD86AC638C3E0CAE)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB_RuntimeMethod_var)));
	}

IL_0030:
	{
		int32_t L_5 = ___a0;
		__this->____a_1 = L_5;
		int16_t L_6 = ___b1;
		__this->____b_2 = L_6;
		int16_t L_7 = ___c2;
		__this->____c_3 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___d3;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->____d_4 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___d3;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->____e_5 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___d3;
		NullCheck(L_14);
		int32_t L_15 = 2;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		__this->____f_6 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___d3;
		NullCheck(L_17);
		int32_t L_18 = 3;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->____g_7 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___d3;
		NullCheck(L_20);
		int32_t L_21 = 4;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		__this->____h_8 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___d3;
		NullCheck(L_23);
		int32_t L_24 = 5;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		__this->____i_9 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___d3;
		NullCheck(L_26);
		int32_t L_27 = 6;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		__this->____j_10 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___d3;
		NullCheck(L_29);
		int32_t L_30 = 7;
		uint8_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		__this->____k_11 = L_31;
		return;
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB_AdjustorThunk (RuntimeObject* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___d3, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_m9C03A78803E0696A0A446B0CAC0AA55CB8E326EB(_thisAdjusted, ___a0, ___b1, ___c2, ___d3, method);
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___a0;
		__this->____a_1 = L_0;
		int16_t L_1 = ___b1;
		__this->____b_2 = L_1;
		int16_t L_2 = ___c2;
		__this->____c_3 = L_2;
		uint8_t L_3 = ___d3;
		__this->____d_4 = L_3;
		uint8_t L_4 = ___e4;
		__this->____e_5 = L_4;
		uint8_t L_5 = ___f5;
		__this->____f_6 = L_5;
		uint8_t L_6 = ___g6;
		__this->____g_7 = L_6;
		uint8_t L_7 = ___h7;
		__this->____h_8 = L_7;
		uint8_t L_8 = ___i8;
		__this->____i_9 = L_8;
		uint8_t L_9 = ___j9;
		__this->____j_10 = L_9;
		uint8_t L_10 = ___k10;
		__this->____k_11 = L_10;
		return;
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130_AdjustorThunk (RuntimeObject* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130(_thisAdjusted, ___a0, ___b1, ___c2, ___d3, ___e4, ___f5, ___g6, ___h7, ___i8, ___j9, ___k10, method);
}
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830 (Guid_t* __this, String_t* ___g0, const RuntimeMethod* method) 
{
GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___g0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79));
		GuidResult_Init_mA6B695110665C265D17C97D0AB8AA25D25D874AB_inline((&V_0), 1, NULL);
		String_t* L_2 = ___g0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(L_2, NULL);
		bool L_4;
		L_4 = Guid_TryParseGuid_mCB8E7DF84B31E7F4C8A638E45F7A57C34DB29AEE(L_3, ((int32_t)15), (&V_0), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 L_5 = V_0;
		Guid_t L_6 = L_5.____parsedGuid_0;
		*(Guid_t*)__this = L_6;
		return;
	}

IL_003c:
	{
		Exception_t* L_7;
		L_7 = GuidResult_GetGuidParseException_m64B716090AACED88AAA921D1B6EE7BC3AB7F606B((&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830_AdjustorThunk (RuntimeObject* __this, String_t* ___g0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid__ctor_mAE66BA1C43B4194F4F7991E2E30370E36CBBF830(_thisAdjusted, ___g0, method);
}
// System.Guid System.Guid::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_Parse_m27437873A5D6028EC14C9F03EC8B1E3D1B94474D (String_t* ___input0, const RuntimeMethod* method) 
{
ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_Parse_m27437873A5D6028EC14C9F03EC8B1E3D1B94474D_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___input0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(L_2, NULL);
		Guid_t L_4;
		L_4 = Guid_Parse_mB77635A06E746DF3C9C954225B44573E44FB40A9(L_3, NULL);
		return L_4;
	}
}
// System.Guid System.Guid::Parse(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_Parse_mB77635A06E746DF3C9C954225B44573E44FB40A9 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___input0, const RuntimeMethod* method) 
{
GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79));
		GuidResult_Init_mA6B695110665C265D17C97D0AB8AA25D25D874AB_inline((&V_0), 2, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___input0;
		bool L_1;
		L_1 = Guid_TryParseGuid_mCB8E7DF84B31E7F4C8A638E45F7A57C34DB29AEE(L_0, ((int32_t)15), (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 L_2 = V_0;
		Guid_t L_3 = L_2.____parsedGuid_0;
		return L_3;
	}

IL_0023:
	{
		Exception_t* L_4;
		L_4 = GuidResult_GetGuidParseException_m64B716090AACED88AAA921D1B6EE7BC3AB7F606B((&V_0), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_Parse_mB77635A06E746DF3C9C954225B44573E44FB40A9_RuntimeMethod_var)));
	}
}
// System.Boolean System.Guid::TryParse(System.String,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParse_m46FD3E8A425836C68964B0A72C89922A31B5EB0D (String_t* ___input0, Guid_t* ___result1, const RuntimeMethod* method) 
{
{
		String_t* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		Guid_t* L_1 = ___result1;
		il2cpp_codegen_initobj(L_1, sizeof(Guid_t));
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_2 = ___input0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(L_2, NULL);
		Guid_t* L_4 = ___result1;
		bool L_5;
		L_5 = Guid_TryParse_mB19C7BFAD87082A0ABA099F6734DB90C77971C41(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean System.Guid::TryParse(System.ReadOnlySpan`1<System.Char>,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParse_mB19C7BFAD87082A0ABA099F6734DB90C77971C41 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___input0, Guid_t* ___result1, const RuntimeMethod* method) 
{
GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79));
		GuidResult_Init_mA6B695110665C265D17C97D0AB8AA25D25D874AB_inline((&V_0), 0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___input0;
		bool L_1;
		L_1 = Guid_TryParseGuid_mCB8E7DF84B31E7F4C8A638E45F7A57C34DB29AEE(L_0, ((int32_t)15), (&V_0), NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Guid_t* L_2 = ___result1;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79 L_3 = V_0;
		Guid_t L_4 = L_3.____parsedGuid_0;
		*(Guid_t*)L_2 = L_4;
		return (bool)1;
	}

IL_002a:
	{
		Guid_t* L_5 = ___result1;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		return (bool)0;
	}
}
// System.Boolean System.Guid::TryParseGuid(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidStyles,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuid_mCB8E7DF84B31E7F4C8A638E45F7A57C34DB29AEE (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, int32_t ___flags1, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* V_3 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___guidString0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1;
		L_1 = MemoryExtensions_Trim_mC32111CFD6C9DA051BE42AC049FE2F6C68A31BB0(L_0, NULL);
		___guidString0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_3 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_3, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_001f:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___guidString0;
		int32_t L_5;
		L_5 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_4, ((int32_t)45), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = ___flags1;
		if (((int32_t)((int32_t)L_7&((int32_t)68))))
		{
			goto IL_0059;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_8 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_8, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_0045:
	{
		int32_t L_9 = ___flags1;
		if (!((int32_t)((int32_t)L_9&((int32_t)64))))
		{
			goto IL_0059;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_10 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_10, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_0059:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_11 = ___guidString0;
		int32_t L_12;
		L_12 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_11, ((int32_t)123), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_14 = ___flags1;
		if (((int32_t)((int32_t)L_14&((int32_t)34))))
		{
			goto IL_0093;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_15 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_15, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_007f:
	{
		int32_t L_16 = ___flags1;
		if (!((int32_t)((int32_t)L_16&((int32_t)32))))
		{
			goto IL_0093;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_17 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_17, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_0093:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___guidString0;
		int32_t L_19;
		L_19 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_18, ((int32_t)40), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		if (!((((int32_t)((((int32_t)L_19) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_20 = ___flags1;
		if (((int32_t)((int32_t)L_20&((int32_t)17))))
		{
			goto IL_00cb;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_21 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_21, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_00b7:
	{
		int32_t L_22 = ___flags1;
		if (!((int32_t)((int32_t)L_22&((int32_t)16))))
		{
			goto IL_00cb;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_23 = ___result2;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_23, 2, _stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D, NULL);
		return (bool)0;
	}

IL_00cb:
	{
	}

IL_00cc:
	try
	{// begin try (depth: 1)
		{
			bool L_24 = V_0;
			if (!L_24)
			{
				goto IL_00d9;
			}
		}

IL_00cf:
		{
			ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_25 = ___guidString0;
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_26 = ___result2;
			bool L_27;
			L_27 = Guid_TryParseGuidWithDashes_mFD211756C6B22DA5D11B078B9095D71812EEFA03(L_25, L_26, NULL);
			V_2 = L_27;
			goto IL_011a;
		}

IL_00d9:
		{
			bool L_28 = V_1;
			if (!L_28)
			{
				goto IL_00e6;
			}
		}

IL_00dc:
		{
			ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_29 = ___guidString0;
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_30 = ___result2;
			bool L_31;
			L_31 = Guid_TryParseGuidWithHexPrefix_m331094BD74A21994E5C107DB0C2FF85E9CEAC396(L_29, L_30, NULL);
			V_2 = L_31;
			goto IL_011a;
		}

IL_00e6:
		{
			ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_32 = ___guidString0;
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_33 = ___result2;
			bool L_34;
			L_34 = Guid_TryParseGuidWithNoStyle_m917E01A7C80B6757DBC13B919F93EB4B30BACF06(L_32, L_33, NULL);
			V_2 = L_34;
			goto IL_011a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f0;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_00f0:
	{// begin catch(System.IndexOutOfRangeException)
		V_3 = ((IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)IL2CPP_GET_ACTIVE_EXCEPTION(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_35 = ___result2;
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_36 = V_3;
		GuidResult_SetFailure_m0F74454921C3AAAC764BC7144BF33D95CF131AE8(L_35, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D)), NULL, (String_t*)NULL, L_36, NULL);
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011a;
	}// end catch (depth: 1)

CATCH_0104:
	{// begin catch(System.ArgumentException)
		V_4 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_37 = ___result2;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_38 = V_4;
		GuidResult_SetFailure_m0F74454921C3AAAC764BC7144BF33D95CF131AE8(L_37, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D)), NULL, (String_t*)NULL, L_38, NULL);
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011a;
	}// end catch (depth: 1)

IL_011a:
	{
		bool L_39 = V_2;
		return L_39;
	}
}
// System.Boolean System.Guid::TryParseGuidWithHexPrefix(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithHexPrefix_m331094BD74A21994E5C107DB0C2FF85E9CEAC396 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral061124E28B93E647C6AA75774A91732587C06ECF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5942706348DC624AD1C57CB5A1B99A73876BDDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632A16D967E0C773F8BD6CC0C1BC0757266B098C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83EBD43501C62D49B91CCC44587BCA88778AD230);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FE21686ED85979C6721683C1AE7814B97848718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA665F32B703053351F7E870B8F846853A461A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF58B0212B060B5C1E0C49A01A669F6E85E98C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCA17A4DF49FD0CA7B9C262B02F93841AF666D1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA21AE346609B8F4B72E20E1720DE0FA22D72B0F);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___guidString0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1;
		L_1 = Guid_EatAllWhitespace_m1093C9CD65CE0CA00C47709D941152C9606D1B42(L_0, NULL);
		___guidString0 = L_1;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)123))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_5 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_5, 2, _stringLiteralAF58B0212B060B5C1E0C49A01A669F6E85E98C07, NULL);
		return (bool)0;
	}

IL_0030:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6 = ___guidString0;
		bool L_7;
		L_7 = Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A(L_6, 1, NULL);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_8 = ___result1;
		GuidResult_SetFailure_m15EA2A1141E6D694F88A1B01982D8FD25B77635A(L_8, 2, _stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4, _stringLiteral632A16D967E0C773F8BD6CC0C1BC0757266B098C, NULL);
		return (bool)0;
	}

IL_004c:
	{
		V_0 = 3;
		int32_t L_9 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		L_10 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___guidString0), L_9, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_11;
		L_11 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_10, ((int32_t)44), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_13 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_13, 2, _stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7, NULL);
		return (bool)0;
	}

IL_0070:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		L_16 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_14, L_15, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_17 = ___result1;
		Guid_t* L_18 = (&L_17->____parsedGuid_0);
		int32_t* L_19 = (&L_18->____a_1);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_20 = ___result1;
		bool L_21;
		L_21 = Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2(L_16, (-1), ((int32_t)4096), L_19, L_20, NULL);
		if (L_21)
		{
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0094:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_22 = ___guidString0;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		bool L_25;
		L_25 = Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A(L_22, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_23, L_24)), 1)), NULL);
		if (L_25)
		{
			goto IL_00b4;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_26 = ___result1;
		GuidResult_SetFailure_m15EA2A1141E6D694F88A1B01982D8FD25B77635A(L_26, 2, _stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4, _stringLiteral9FE21686ED85979C6721683C1AE7814B97848718, NULL);
		return (bool)0;
	}

IL_00b4:
	{
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_27, L_28)), 3));
		int32_t L_29 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_30;
		L_30 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___guidString0), L_29, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_31;
		L_31 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_30, ((int32_t)44), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = L_31;
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_33 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_33, 2, _stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7, NULL);
		return (bool)0;
	}

IL_00dc:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_36;
		L_36 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_34, L_35, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_37 = ___result1;
		Guid_t* L_38 = (&L_37->____parsedGuid_0);
		int16_t* L_39 = (&L_38->____b_2);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_40 = ___result1;
		bool L_41;
		L_41 = Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B(L_36, (-1), ((int32_t)4096), L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_0100;
		}
	}
	{
		return (bool)0;
	}

IL_0100:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_42 = ___guidString0;
		int32_t L_43 = V_0;
		int32_t L_44 = V_1;
		bool L_45;
		L_45 = Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A(L_42, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_43, L_44)), 1)), NULL);
		if (L_45)
		{
			goto IL_0120;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_46 = ___result1;
		GuidResult_SetFailure_m15EA2A1141E6D694F88A1B01982D8FD25B77635A(L_46, 2, _stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4, _stringLiteral83EBD43501C62D49B91CCC44587BCA88778AD230, NULL);
		return (bool)0;
	}

IL_0120:
	{
		int32_t L_47 = V_0;
		int32_t L_48 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_47, L_48)), 3));
		int32_t L_49 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_50;
		L_50 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___guidString0), L_49, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_51;
		L_51 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_50, ((int32_t)44), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = L_51;
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0148;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_53 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_53, 2, _stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7, NULL);
		return (bool)0;
	}

IL_0148:
	{
		int32_t L_54 = V_0;
		int32_t L_55 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_56;
		L_56 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_54, L_55, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_57 = ___result1;
		Guid_t* L_58 = (&L_57->____parsedGuid_0);
		int16_t* L_59 = (&L_58->____c_3);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_60 = ___result1;
		bool L_61;
		L_61 = Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B(L_56, (-1), ((int32_t)4096), L_59, L_60, NULL);
		if (L_61)
		{
			goto IL_016c;
		}
	}
	{
		return (bool)0;
	}

IL_016c:
	{
		int32_t L_62;
		L_62 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_63 = V_0;
		int32_t L_64 = V_1;
		if ((((int32_t)L_62) <= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, L_64)), 1)))))
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_65 = V_0;
		int32_t L_66 = V_1;
		Il2CppChar* L_67;
		L_67 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_65, L_66)), 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_68 = *((uint16_t*)L_67);
		if ((((int32_t)L_68) == ((int32_t)((int32_t)123))))
		{
			goto IL_0199;
		}
	}

IL_018b:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_69 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_69, 2, _stringLiteralAF58B0212B060B5C1E0C49A01A669F6E85E98C07, NULL);
		return (bool)0;
	}

IL_0199:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		int8_t* L_71 = (int8_t*) alloca(((uintptr_t)8));
		memset(L_71, 0, ((uintptr_t)8));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_72), (void*)(L_71), 8, /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_2 = L_72;
		V_3 = 0;
		goto IL_0263;
	}

IL_01af:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_73 = ___guidString0;
		int32_t L_74 = V_0;
		int32_t L_75 = V_1;
		bool L_76;
		L_76 = Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A(L_73, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_74, L_75)), 1)), NULL);
		if (L_76)
		{
			goto IL_01cf;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_77 = ___result1;
		GuidResult_SetFailure_m15EA2A1141E6D694F88A1B01982D8FD25B77635A(L_77, 2, _stringLiteral9DC029E8A2AE7210A6E64E6548ACE71AB0EAC1C4, _stringLiteral5942706348DC624AD1C57CB5A1B99A73876BDDE6, NULL);
		return (bool)0;
	}

IL_01cf:
	{
		int32_t L_78 = V_0;
		int32_t L_79 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_78, L_79)), 3));
		int32_t L_80 = V_3;
		if ((((int32_t)L_80) >= ((int32_t)7)))
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_81 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_82;
		L_82 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___guidString0), L_81, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_83;
		L_83 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_82, ((int32_t)44), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = L_83;
		int32_t L_84 = V_1;
		if ((((int32_t)L_84) > ((int32_t)0)))
		{
			goto IL_021d;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_85 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_85, 2, _stringLiteral29B3810DD5248A58C29574BDA4100443A74E1DD7, NULL);
		return (bool)0;
	}

IL_01fb:
	{
		int32_t L_86 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_87;
		L_87 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___guidString0), L_86, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		int32_t L_88;
		L_88 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_inline(L_87, ((int32_t)125), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_RuntimeMethod_var);
		V_1 = L_88;
		int32_t L_89 = V_1;
		if ((((int32_t)L_89) > ((int32_t)0)))
		{
			goto IL_021d;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_90 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_90, 2, _stringLiteralAA665F32B703053351F7E870B8F846853A461A04, NULL);
		return (bool)0;
	}

IL_021d:
	{
		int32_t L_91 = V_0;
		int32_t L_92 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_93;
		L_93 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_91, L_92, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_94 = ___result1;
		bool L_95;
		L_95 = Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2(L_93, (-1), ((int32_t)4096), (&V_4), L_94, NULL);
		if (L_95)
		{
			goto IL_0238;
		}
	}
	{
		return (bool)0;
	}

IL_0238:
	{
		int32_t L_96 = V_4;
		V_5 = L_96;
		uint32_t L_97 = V_5;
		if ((!(((uint32_t)L_97) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0253;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_98 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_98, 2, _stringLiteralFA21AE346609B8F4B72E20E1720DE0FA22D72B0F, NULL);
		return (bool)0;
	}

IL_0253:
	{
		int32_t L_99 = V_3;
		uint8_t* L_100;
		L_100 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), L_99, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint32_t L_101 = V_5;
		*((int8_t*)L_100) = (int8_t)((int32_t)(uint8_t)L_101);
		int32_t L_102 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0263:
	{
		int32_t L_103 = V_3;
		int32_t L_104;
		L_104 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&V_2), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_01af;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_105 = ___result1;
		Guid_t* L_106 = (&L_105->____parsedGuid_0);
		uint8_t* L_107;
		L_107 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 0, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_108 = *((uint8_t*)L_107);
		L_106->____d_4 = (uint8_t)L_108;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_109 = ___result1;
		Guid_t* L_110 = (&L_109->____parsedGuid_0);
		uint8_t* L_111;
		L_111 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 1, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_112 = *((uint8_t*)L_111);
		L_110->____e_5 = (uint8_t)L_112;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_113 = ___result1;
		Guid_t* L_114 = (&L_113->____parsedGuid_0);
		uint8_t* L_115;
		L_115 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 2, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_116 = *((uint8_t*)L_115);
		L_114->____f_6 = (uint8_t)L_116;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_117 = ___result1;
		Guid_t* L_118 = (&L_117->____parsedGuid_0);
		uint8_t* L_119;
		L_119 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 3, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_120 = *((uint8_t*)L_119);
		L_118->____g_7 = (uint8_t)L_120;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_121 = ___result1;
		Guid_t* L_122 = (&L_121->____parsedGuid_0);
		uint8_t* L_123;
		L_123 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 4, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_124 = *((uint8_t*)L_123);
		L_122->____h_8 = (uint8_t)L_124;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_125 = ___result1;
		Guid_t* L_126 = (&L_125->____parsedGuid_0);
		uint8_t* L_127;
		L_127 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 5, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_128 = *((uint8_t*)L_127);
		L_126->____i_9 = (uint8_t)L_128;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_129 = ___result1;
		Guid_t* L_130 = (&L_129->____parsedGuid_0);
		uint8_t* L_131;
		L_131 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 6, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_132 = *((uint8_t*)L_131);
		L_130->____j_10 = (uint8_t)L_132;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_133 = ___result1;
		Guid_t* L_134 = (&L_133->____parsedGuid_0);
		uint8_t* L_135;
		L_135 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&V_2), 7, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_136 = *((uint8_t*)L_135);
		L_134->____k_11 = (uint8_t)L_136;
		int32_t L_137 = V_0;
		int32_t L_138 = V_1;
		int32_t L_139;
		L_139 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_137, L_138)), 1))) >= ((int32_t)L_139)))
		{
			goto IL_032f;
		}
	}
	{
		int32_t L_140 = V_0;
		int32_t L_141 = V_1;
		Il2CppChar* L_142;
		L_142 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_140, L_141)), 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_143 = *((uint16_t*)L_142);
		if ((((int32_t)L_143) == ((int32_t)((int32_t)125))))
		{
			goto IL_033d;
		}
	}

IL_032f:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_144 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_144, 2, _stringLiteral061124E28B93E647C6AA75774A91732587C06ECF, NULL);
		return (bool)0;
	}

IL_033d:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = V_1;
		int32_t L_147;
		L_147 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_145, L_146)), 1))) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_147, 1)))))
		{
			goto IL_035b;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_148 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_148, 2, _stringLiteralDCA17A4DF49FD0CA7B9C262B02F93841AF666D1D, NULL);
		return (bool)0;
	}

IL_035b:
	{
		return (bool)1;
	}
}
// System.Boolean System.Guid::TryParseGuidWithNoStyle(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithNoStyle_m917E01A7C80B6757DBC13B919F93EB4B30BACF06 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F3659E8021DAE64079570DFC3041787F1C824D);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	{
		V_0 = 0;
		V_3 = 0;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)32))))
		{
			goto IL_001d;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_1 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_1, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_001d:
	{
		V_4 = 0;
		goto IL_0063;
	}

IL_0022:
	{
		int32_t L_2 = V_4;
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), L_2, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		V_5 = L_4;
		Il2CppChar L_5 = V_5;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppChar L_6 = V_5;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_005d;
		}
	}

IL_003a:
	{
		Il2CppChar L_7 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_8;
		L_8 = Char_ToUpperInvariant_m4A8EEECCB38A511AC2EE02680ED999CC48601D06(L_7, NULL);
		V_6 = L_8;
		Il2CppChar L_9 = V_6;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_10 = V_6;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)70))))
		{
			goto IL_005d;
		}
	}

IL_004f:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_11 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_11, 2, _stringLiteralF7F3659E8021DAE64079570DFC3041787F1C824D, NULL);
		return (bool)0;
	}

IL_005d:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0063:
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_15 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		L_16 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_15, 8, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_17 = ___result1;
		Guid_t* L_18 = (&L_17->____parsedGuid_0);
		int32_t* L_19 = (&L_18->____a_1);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_20 = ___result1;
		bool L_21;
		L_21 = Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2(L_16, (-1), ((int32_t)4096), L_19, L_20, NULL);
		if (L_21)
		{
			goto IL_0092;
		}
	}
	{
		return (bool)0;
	}

IL_0092:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 8));
		int32_t L_23 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_23, 4, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_25 = ___result1;
		Guid_t* L_26 = (&L_25->____parsedGuid_0);
		int16_t* L_27 = (&L_26->____b_2);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_28 = ___result1;
		bool L_29;
		L_29 = Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B(L_24, (-1), ((int32_t)4096), L_27, L_28, NULL);
		if (L_29)
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_00ba:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 4));
		int32_t L_31 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_32;
		L_32 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_31, 4, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_33 = ___result1;
		Guid_t* L_34 = (&L_33->____parsedGuid_0);
		int16_t* L_35 = (&L_34->____c_3);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_36 = ___result1;
		bool L_37;
		L_37 = Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B(L_32, (-1), ((int32_t)4096), L_35, L_36, NULL);
		if (L_37)
		{
			goto IL_00e2;
		}
	}
	{
		return (bool)0;
	}

IL_00e2:
	{
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 4));
		int32_t L_39 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_40;
		L_40 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___guidString0), L_39, 4, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_41 = ___result1;
		bool L_42;
		L_42 = Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2(L_40, (-1), ((int32_t)4096), (&V_1), L_41, NULL);
		if (L_42)
		{
			goto IL_0101;
		}
	}
	{
		return (bool)0;
	}

IL_0101:
	{
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 4));
		int32_t L_44 = V_0;
		V_3 = L_44;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_45 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_46 = ___result1;
		bool L_47;
		L_47 = Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA(L_45, (&V_3), ((int32_t)8192), (&V_2), L_46, NULL);
		if (L_47)
		{
			goto IL_011b;
		}
	}
	{
		return (bool)0;
	}

IL_011b:
	{
		int32_t L_48 = V_3;
		int32_t L_49 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_48, L_49))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0130;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_50 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_50, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_0130:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_51 = ___result1;
		Guid_t* L_52 = (&L_51->____parsedGuid_0);
		int32_t L_53 = V_1;
		L_52->____d_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_53>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_54 = ___result1;
		Guid_t* L_55 = (&L_54->____parsedGuid_0);
		int32_t L_56 = V_1;
		L_55->____e_5 = (uint8_t)((int32_t)(uint8_t)L_56);
		int64_t L_57 = V_2;
		V_1 = ((int32_t)((int64_t)(L_57>>((int32_t)32))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_58 = ___result1;
		Guid_t* L_59 = (&L_58->____parsedGuid_0);
		int32_t L_60 = V_1;
		L_59->____f_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_60>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_61 = ___result1;
		Guid_t* L_62 = (&L_61->____parsedGuid_0);
		int32_t L_63 = V_1;
		L_62->____g_7 = (uint8_t)((int32_t)(uint8_t)L_63);
		int64_t L_64 = V_2;
		V_1 = ((int32_t)L_64);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_65 = ___result1;
		Guid_t* L_66 = (&L_65->____parsedGuid_0);
		int32_t L_67 = V_1;
		L_66->____h_8 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_67>>((int32_t)24))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_68 = ___result1;
		Guid_t* L_69 = (&L_68->____parsedGuid_0);
		int32_t L_70 = V_1;
		L_69->____i_9 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_70>>((int32_t)16))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_71 = ___result1;
		Guid_t* L_72 = (&L_71->____parsedGuid_0);
		int32_t L_73 = V_1;
		L_72->____j_10 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_73>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_74 = ___result1;
		Guid_t* L_75 = (&L_74->____parsedGuid_0);
		int32_t L_76 = V_1;
		L_75->____k_11 = (uint8_t)((int32_t)(uint8_t)L_76);
		return (bool)1;
	}
}
// System.Boolean System.Guid::TryParseGuidWithDashes(System.ReadOnlySpan`1<System.Char>,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryParseGuidWithDashes_mFD211756C6B22DA5D11B078B9095D71812EEFA03 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___guidString0, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___result1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11911B3D4C1551AA9AE78EADF7852BAE78025BB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_3 = 0;
		Il2CppChar* L_0;
		L_0 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_1 = *((uint16_t*)L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)37), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)125))))
		{
			goto IL_0038;
		}
	}

IL_002a:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_5 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_5, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_0038:
	{
		V_0 = 1;
		goto IL_008d;
	}

IL_003c:
	{
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)38)))))
		{
			goto IL_0062;
		}
	}
	{
		Il2CppChar* L_9;
		L_9 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)37), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_10 = *((uint16_t*)L_9);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)41))))
		{
			goto IL_0070;
		}
	}

IL_0062:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_11 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_11, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_0070:
	{
		V_0 = 1;
		goto IL_008d;
	}

IL_0074:
	{
		int32_t L_12;
		L_12 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___guidString0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)36))))
		{
			goto IL_008d;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_13 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_13, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_008d:
	{
		int32_t L_14 = V_0;
		Il2CppChar* L_15;
		L_15 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(8, L_14)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_16 = *((uint16_t*)L_15);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_17 = V_0;
		Il2CppChar* L_18;
		L_18 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(((int32_t)13), L_17)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_19 = *((uint16_t*)L_18);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_20 = V_0;
		Il2CppChar* L_21;
		L_21 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(((int32_t)18), L_20)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_22 = *((uint16_t*)L_21);
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_23 = V_0;
		Il2CppChar* L_24;
		L_24 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___guidString0), ((int32_t)il2cpp_codegen_add(((int32_t)23), L_23)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_25 = *((uint16_t*)L_24);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)45))))
		{
			goto IL_00da;
		}
	}

IL_00cc:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_26 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_26, 2, _stringLiteral11911B3D4C1551AA9AE78EADF7852BAE78025BB1, NULL);
		return (bool)0;
	}

IL_00da:
	{
		int32_t L_27 = V_0;
		V_3 = L_27;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_29 = ___result1;
		bool L_30;
		L_30 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_28, (&V_3), 8, ((int32_t)8192), (&V_1), L_29, NULL);
		if (L_30)
		{
			goto IL_00f1;
		}
	}
	{
		return (bool)0;
	}

IL_00f1:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_31 = ___result1;
		Guid_t* L_32 = (&L_31->____parsedGuid_0);
		int32_t L_33 = V_1;
		L_32->____a_1 = L_33;
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_35 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_36 = ___result1;
		bool L_37;
		L_37 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_35, (&V_3), 4, ((int32_t)8192), (&V_1), L_36, NULL);
		if (L_37)
		{
			goto IL_0116;
		}
	}
	{
		return (bool)0;
	}

IL_0116:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_38 = ___result1;
		Guid_t* L_39 = (&L_38->____parsedGuid_0);
		int32_t L_40 = V_1;
		L_39->____b_2 = ((int16_t)L_40);
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_42 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_43 = ___result1;
		bool L_44;
		L_44 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_42, (&V_3), 4, ((int32_t)8192), (&V_1), L_43, NULL);
		if (L_44)
		{
			goto IL_013c;
		}
	}
	{
		return (bool)0;
	}

IL_013c:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_45 = ___result1;
		Guid_t* L_46 = (&L_45->____parsedGuid_0);
		int32_t L_47 = V_1;
		L_46->____c_3 = ((int16_t)L_47);
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_49 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_50 = ___result1;
		bool L_51;
		L_51 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_49, (&V_3), 4, ((int32_t)8192), (&V_1), L_50, NULL);
		if (L_51)
		{
			goto IL_0162;
		}
	}
	{
		return (bool)0;
	}

IL_0162:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = V_3;
		V_0 = L_53;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_54 = ___guidString0;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_55 = ___result1;
		bool L_56;
		L_56 = Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA(L_54, (&V_3), ((int32_t)8192), (&V_2), L_55, NULL);
		if (L_56)
		{
			goto IL_017c;
		}
	}
	{
		return (bool)0;
	}

IL_017c:
	{
		int32_t L_57 = V_3;
		int32_t L_58 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_57, L_58))) == ((int32_t)((int32_t)12))))
		{
			goto IL_0191;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_59 = ___result1;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_59, 2, _stringLiteralBC6164A18588D32CF33FC986D4DFD4EC4CDCAD9D, NULL);
		return (bool)0;
	}

IL_0191:
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_60 = ___result1;
		Guid_t* L_61 = (&L_60->____parsedGuid_0);
		int32_t L_62 = V_1;
		L_61->____d_4 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_62>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_63 = ___result1;
		Guid_t* L_64 = (&L_63->____parsedGuid_0);
		int32_t L_65 = V_1;
		L_64->____e_5 = (uint8_t)((int32_t)(uint8_t)L_65);
		int64_t L_66 = V_2;
		V_1 = ((int32_t)((int64_t)(L_66>>((int32_t)32))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_67 = ___result1;
		Guid_t* L_68 = (&L_67->____parsedGuid_0);
		int32_t L_69 = V_1;
		L_68->____f_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_69>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_70 = ___result1;
		Guid_t* L_71 = (&L_70->____parsedGuid_0);
		int32_t L_72 = V_1;
		L_71->____g_7 = (uint8_t)((int32_t)(uint8_t)L_72);
		int64_t L_73 = V_2;
		V_1 = ((int32_t)L_73);
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_74 = ___result1;
		Guid_t* L_75 = (&L_74->____parsedGuid_0);
		int32_t L_76 = V_1;
		L_75->____h_8 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_76>>((int32_t)24))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_77 = ___result1;
		Guid_t* L_78 = (&L_77->____parsedGuid_0);
		int32_t L_79 = V_1;
		L_78->____i_9 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_79>>((int32_t)16))));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_80 = ___result1;
		Guid_t* L_81 = (&L_80->____parsedGuid_0);
		int32_t L_82 = V_1;
		L_81->____j_10 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_82>>8)));
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_83 = ___result1;
		Guid_t* L_84 = (&L_83->____parsedGuid_0);
		int32_t L_85 = V_1;
		L_84->____k_11 = (uint8_t)((int32_t)(uint8_t)L_85);
		return (bool)1;
	}
}
// System.Boolean System.Guid::StringToShort(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int16&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToShort_mA3AAE59512DF08F9D458C0B409C5303FB489F61B (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___requiredLength1, int32_t ___flags2, int16_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		V_0 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___str0;
		int32_t L_1 = ___requiredLength1;
		int32_t L_2 = ___flags2;
		int16_t* L_3 = ___result3;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_4 = ___parseResult4;
		bool L_5;
		L_5 = Guid_StringToShort_m81CA6AE106ECEDB75FD2BA5F96B9F316ABE10987(L_0, (&V_0), L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean System.Guid::StringToShort(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int32,System.Int16&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToShort_m81CA6AE106ECEDB75FD2BA5F96B9F316ABE10987 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___requiredLength2, int32_t ___flags3, int16_t* ___result4, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult5, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		int16_t* L_0 = ___result4;
		*((int16_t*)L_0) = (int16_t)0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___str0;
		int32_t* L_2 = ___parsePos1;
		int32_t L_3 = ___requiredLength2;
		int32_t L_4 = ___flags3;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_5 = ___parseResult5;
		bool L_6;
		L_6 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_1, L_2, L_3, L_4, (&V_0), L_5, NULL);
		int16_t* L_7 = ___result4;
		int32_t L_8 = V_0;
		*((int16_t*)L_7) = (int16_t)((int16_t)L_8);
		return L_6;
	}
}
// System.Boolean System.Guid::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToInt_m777B1D5D44E18240EB440A463B76A01D2EC628A2 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___requiredLength1, int32_t ___flags2, int32_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		V_0 = 0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___str0;
		int32_t L_1 = ___requiredLength1;
		int32_t L_2 = ___flags2;
		int32_t* L_3 = ___result3;
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_4 = ___parseResult4;
		bool L_5;
		L_5 = Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205(L_0, (&V_0), L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean System.Guid::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int32,System.Int32&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___requiredLength2, int32_t ___flags3, int32_t* ___result4, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult5, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7F3659E8021DAE64079570DFC3041787F1C824D);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_1 = NULL;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t* L_0 = ___result4;
		*((int32_t*)L_0) = (int32_t)0;
		int32_t* L_1 = ___parsePos1;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
	}

IL_0007:
	try
	{// begin try (depth: 1)
		int32_t* L_3 = ___result4;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___str0;
		int32_t L_5 = ___flags3;
		int32_t* L_6 = ___parsePos1;
		int32_t L_7;
		L_7 = ParseNumbers_StringToInt_mFA272AA5E18321305FCBA935AA610A039B7A7636(L_4, ((int32_t)16), L_5, L_6, NULL);
		*((int32_t*)L_3) = (int32_t)L_7;
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.OverflowException)
		{
			V_1 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_8 = ___parseResult5;
			int32_t L_9 = L_8->____throwStyle_1;
			if ((!(((uint32_t)L_9) == ((uint32_t)1))))
			{
				goto IL_0023;
			}
		}

IL_0021:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205_RuntimeMethod_var)));
		}

IL_0023:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_10 = ___parseResult5;
			int32_t L_11 = L_10->____throwStyle_1;
			if ((!(((uint32_t)L_11) == ((uint32_t)2))))
			{
				goto IL_0039;
			}
		}

IL_002d:
		{
			OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_12 = V_1;
			FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_13 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
			FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D)), L_12, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205_RuntimeMethod_var)));
		}

IL_0039:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_14 = ___parseResult5;
			OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_15 = V_1;
			GuidResult_SetFailure_mA88DCBD6280AA9823F2A2810AD3B0BDF50EAD239(L_14, L_15, NULL);
			V_2 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0079;
		}
	}// end catch (depth: 1)

CATCH_0045:
	{// begin catch(System.Exception)
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_16 = ___parseResult5;
			int32_t L_17 = L_16->____throwStyle_1;
			if (L_17)
			{
				goto IL_005b;
			}
		}

IL_004f:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_18 = ___parseResult5;
			Exception_t* L_19 = V_3;
			GuidResult_SetFailure_mA88DCBD6280AA9823F2A2810AD3B0BDF50EAD239(L_18, L_19, NULL);
			V_2 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0079;
		}

IL_005b:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToInt_m0A2545D452EBD712E3AEF95469C69BDFADFB6205_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_005d:
	{
		int32_t L_20 = ___requiredLength2;
		if ((((int32_t)L_20) == ((int32_t)(-1))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t* L_21 = ___parsePos1;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_0;
		int32_t L_24 = ___requiredLength2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, L_23))) == ((int32_t)L_24)))
		{
			goto IL_0077;
		}
	}
	{
		GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_25 = ___parseResult5;
		GuidResult_SetFailure_mAD082AA9068B9208F6D872480AD041716484A1CA(L_25, 2, _stringLiteralF7F3659E8021DAE64079570DFC3041787F1C824D, NULL);
		return (bool)0;
	}

IL_0077:
	{
		return (bool)1;
	}

IL_0079:
	{
		bool L_26 = V_2;
		return L_26;
	}
}
// System.Boolean System.Guid::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32&,System.Int32,System.Int64&,System.Guid/GuidResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t* ___parsePos1, int32_t ___flags2, int64_t* ___result3, GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* ___parseResult4, const RuntimeMethod* method) 
{
OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int64_t* L_0 = ___result3;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
	}

IL_0004:
	try
	{// begin try (depth: 1)
		int64_t* L_1 = ___result3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___str0;
		int32_t L_3 = ___flags2;
		int32_t* L_4 = ___parsePos1;
		int64_t L_5;
		L_5 = ParseNumbers_StringToLong_m08F9FD5BE462015BCE7DF43ADB709A2C639D561A(L_2, ((int32_t)16), L_3, L_4, NULL);
		*((int64_t*)L_1) = (int64_t)L_5;
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0012:
	{// begin catch(System.OverflowException)
		{
			V_0 = ((OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)IL2CPP_GET_ACTIVE_EXCEPTION(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*));
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_6 = ___parseResult4;
			int32_t L_7 = L_6->____throwStyle_1;
			if ((!(((uint32_t)L_7) == ((uint32_t)1))))
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA_RuntimeMethod_var)));
		}

IL_001f:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_8 = ___parseResult4;
			int32_t L_9 = L_8->____throwStyle_1;
			if ((!(((uint32_t)L_9) == ((uint32_t)2))))
			{
				goto IL_0035;
			}
		}

IL_0029:
		{
			OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_10 = V_0;
			FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_11 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
			FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC88717BD32A7FD98D754192338108D9C58269D)), L_10, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA_RuntimeMethod_var)));
		}

IL_0035:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_12 = ___parseResult4;
			OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_13 = V_0;
			GuidResult_SetFailure_mA88DCBD6280AA9823F2A2810AD3B0BDF50EAD239(L_12, L_13, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005b;
		}
	}// end catch (depth: 1)

CATCH_0041:
	{// begin catch(System.Exception)
		{
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_14 = ___parseResult4;
			int32_t L_15 = L_14->____throwStyle_1;
			if (L_15)
			{
				goto IL_0057;
			}
		}

IL_004b:
		{
			GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* L_16 = ___parseResult4;
			Exception_t* L_17 = V_2;
			GuidResult_SetFailure_mA88DCBD6280AA9823F2A2810AD3B0BDF50EAD239(L_16, L_17, NULL);
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005b;
		}

IL_0057:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_StringToLong_mCBB9FC448AA58EE62812518F0887F29713CF35FA_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_0059:
	{
		return (bool)1;
	}

IL_005b:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.ReadOnlySpan`1<System.Char> System.Guid::EatAllWhitespace(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Guid_EatAllWhitespace_m1093C9CD65CE0CA00C47709D941152C9606D1B42 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Il2CppChar V_4 = 0x0;
	{
		V_0 = 0;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___str0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___str0), L_3, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_5 = *((uint16_t*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_5, NULL);
		if (!L_6)
		{
			goto IL_0004;
		}
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___str0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002e;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9 = ___str0;
		return L_9;
	}

IL_002e:
	{
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___str0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_1 = L_11;
		V_2 = 0;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_13 = V_0;
		V_2 = L_13;
		int32_t L_14 = V_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_15;
		L_15 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___str0), 0, L_14, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_3 = L_15;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_17;
		L_17 = Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1(L_16, Span_1_op_Implicit_m3D84585FDA9DFB99F289B480D9F19B79E41F92D1_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_3), L_17, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		goto IL_007d;
	}

IL_005c:
	{
		int32_t L_18 = V_0;
		Il2CppChar* L_19;
		L_19 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___str0), L_18, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_20 = *((uint16_t*)L_19);
		V_4 = L_20;
		Il2CppChar L_21 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_21, NULL);
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = V_1;
		int32_t L_24 = V_2;
		int32_t L_25 = L_24;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		Il2CppChar L_26 = V_4;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)L_26);
	}

IL_0079:
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_007d:
	{
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___str0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_005c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = V_1;
		int32_t L_31 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_32;
		memset((&L_32), 0, sizeof(L_32));
		ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_inline((&L_32), L_30, 0, L_31, /*hidden argument*/ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_RuntimeMethod_var);
		return L_32;
	}
}
// System.Boolean System.Guid::IsHexPrefix(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_IsHexPrefix_m1BCF63763EDA6B7762AE22166AB8C11F14F5A97A (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___str0, int32_t ___i1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ___i1;
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___str0), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)L_1)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_2 = ___i1;
		Il2CppChar* L_3;
		L_3 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___str0), L_2, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_4 = *((uint16_t*)L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5 = ___i1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___str0), ((int32_t)il2cpp_codegen_add(L_5, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)120))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = ___i1;
		Il2CppChar* L_9;
		L_9 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___str0), ((int32_t)il2cpp_codegen_add(L_8, 1)), ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_10 = *((uint16_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_11;
		L_11 = Char_ToLowerInvariant_mDC9BA9523EA82DE91CD6F814206EB3C9F15BFA2C(L_10, NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)((int32_t)120)))? 1 : 0);
	}

IL_003d:
	{
		return (bool)1;
	}

IL_003f:
	{
		return (bool)0;
	}
}
// System.Void System.Guid::WriteByteHelper(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E (Guid_t* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		uint8_t* L_0;
		L_0 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 0, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_1 = __this->____a_1;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)L_1);
		uint8_t* L_2;
		L_2 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 1, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_3 = __this->____a_1;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3>>8)));
		uint8_t* L_4;
		L_4 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 2, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_5 = __this->____a_1;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16))));
		uint8_t* L_6;
		L_6 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 3, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_7 = __this->____a_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7>>((int32_t)24))));
		uint8_t* L_8;
		L_8 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 4, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_9 = __this->____b_2;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)L_9);
		uint8_t* L_10;
		L_10 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 5, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_11 = __this->____b_2;
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11>>8)));
		uint8_t* L_12;
		L_12 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 6, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_13 = __this->____c_3;
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)L_13);
		uint8_t* L_14;
		L_14 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 7, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_15 = __this->____c_3;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15>>8)));
		uint8_t* L_16;
		L_16 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 8, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_17 = __this->____d_4;
		*((int8_t*)L_16) = (int8_t)L_17;
		uint8_t* L_18;
		L_18 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)9), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_19 = __this->____e_5;
		*((int8_t*)L_18) = (int8_t)L_19;
		uint8_t* L_20;
		L_20 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)10), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_21 = __this->____f_6;
		*((int8_t*)L_20) = (int8_t)L_21;
		uint8_t* L_22;
		L_22 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)11), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_23 = __this->____g_7;
		*((int8_t*)L_22) = (int8_t)L_23;
		uint8_t* L_24;
		L_24 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)12), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_25 = __this->____h_8;
		*((int8_t*)L_24) = (int8_t)L_25;
		uint8_t* L_26;
		L_26 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)13), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_27 = __this->____i_9;
		*((int8_t*)L_26) = (int8_t)L_27;
		uint8_t* L_28;
		L_28 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)14), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_29 = __this->____j_10;
		*((int8_t*)L_28) = (int8_t)L_29;
		uint8_t* L_30;
		L_30 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)15), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_31 = __this->____k_11;
		*((int8_t*)L_30) = (int8_t)L_31;
		return;
	}
}
IL2CPP_EXTERN_C  void Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E_AdjustorThunk (RuntimeObject* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E_inline(_thisAdjusted, ___destination0, method);
}
// System.Byte[] System.Guid::ToByteArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357(L_1, Span_1_op_Implicit_mDC0AC5B50ABB4FDDA74ADE064641DB22D560B357_RuntimeMethod_var);
		Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E_inline(__this, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
{
		String_t* L_0;
		L_0 = Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130(__this, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Guid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408 (Guid_t* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = __this->____a_1;
		int32_t* L_1 = (&__this->____a_1);
		int32_t* L_2;
		L_2 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_1, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_3 = *((int32_t*)L_2);
		int32_t* L_4 = (&__this->____a_1);
		int32_t* L_5;
		L_5 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_4, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_6 = *((int32_t*)L_5);
		int32_t* L_7 = (&__this->____a_1);
		int32_t* L_8;
		L_8 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_7, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_9 = *((int32_t*)L_8);
		return ((int32_t)(((int32_t)(((int32_t)(L_0^L_3))^L_6))^L_9));
	}
}
IL2CPP_EXTERN_C  int32_t Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Guid_GetHashCode_m239B7679BB9ED5A207B3D2F858B5F30FFC455408(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Guid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B (Guid_t* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___o0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___o0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___o0;
		V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_2, Guid_t_il2cpp_TypeInfo_var))));
		Guid_t L_3 = V_0;
		int32_t L_4 = L_3.____a_1;
		int32_t L_5 = __this->____a_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_6 = (&(&V_0)->____a_1);
		int32_t* L_7;
		L_7 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_6, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_8 = *((int32_t*)L_7);
		int32_t* L_9 = (&__this->____a_1);
		int32_t* L_10;
		L_10 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_9, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_11 = *((int32_t*)L_10);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_11))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_12 = (&(&V_0)->____a_1);
		int32_t* L_13;
		L_13 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_12, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_14 = *((int32_t*)L_13);
		int32_t* L_15 = (&__this->____a_1);
		int32_t* L_16;
		L_16 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_15, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_17 = *((int32_t*)L_16);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_17))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_18 = (&(&V_0)->____a_1);
		int32_t* L_19;
		L_19 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_18, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_20 = *((int32_t*)L_19);
		int32_t* L_21 = (&__this->____a_1);
		int32_t* L_22;
		L_22 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_21, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_23 = *((int32_t*)L_22);
		return (bool)((((int32_t)L_20) == ((int32_t)L_23))? 1 : 0);
	}

IL_007a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	bool _returnValue;
	_returnValue = Guid_Equals_mC7349E47BF1CBCBFB4C9032C050DE54AAC10000B(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Boolean System.Guid::Equals(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C (Guid_t* __this, Guid_t ___g0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		Guid_t L_0 = ___g0;
		int32_t L_1 = L_0.____a_1;
		int32_t L_2 = __this->____a_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_3 = (&(&___g0)->____a_1);
		int32_t* L_4;
		L_4 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_3, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_5 = *((int32_t*)L_4);
		int32_t* L_6 = (&__this->____a_1);
		int32_t* L_7;
		L_7 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_6, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_8 = *((int32_t*)L_7);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_9 = (&(&___g0)->____a_1);
		int32_t* L_10;
		L_10 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_9, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_11 = *((int32_t*)L_10);
		int32_t* L_12 = (&__this->____a_1);
		int32_t* L_13;
		L_13 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_12, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_14 = *((int32_t*)L_13);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_14))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_15 = (&(&___g0)->____a_1);
		int32_t* L_16;
		L_16 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_15, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_17 = *((int32_t*)L_16);
		int32_t* L_18 = (&__this->____a_1);
		int32_t* L_19;
		L_19 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_18, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_20 = *((int32_t*)L_19);
		return (bool)((((int32_t)L_17) == ((int32_t)L_20))? 1 : 0);
	}

IL_0066:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C_AdjustorThunk (RuntimeObject* __this, Guid_t ___g0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	bool _returnValue;
	_returnValue = Guid_Equals_m1839AD036DD7C056E8439A64D5D82490C1F08E0C(_thisAdjusted, ___g0, method);
	return _returnValue;
}
// System.Int32 System.Guid::GetResult(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C (Guid_t* __this, uint32_t ___me0, uint32_t ___them1, const RuntimeMethod* method) 
{
{
		uint32_t L_0 = ___me0;
		uint32_t L_1 = ___them1;
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  int32_t Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C_AdjustorThunk (RuntimeObject* __this, uint32_t ___me0, uint32_t ___them1, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(_thisAdjusted, ___me0, ___them1, method);
	return _returnValue;
}
// System.Int32 System.Guid::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB (Guid_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___value0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC933E93DDFB39592649EC75ECA0E66F2D71BCEF3)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB_RuntimeMethod_var)));
	}

IL_001d:
	{
		RuntimeObject* L_3 = ___value0;
		V_0 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_3, Guid_t_il2cpp_TypeInfo_var))));
		Guid_t L_4 = V_0;
		int32_t L_5 = L_4.____a_1;
		int32_t L_6 = __this->____a_1;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = __this->____a_1;
		Guid_t L_8 = V_0;
		int32_t L_9 = L_8.____a_1;
		int32_t L_10;
		L_10 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_7, L_9, NULL);
		return L_10;
	}

IL_0045:
	{
		Guid_t L_11 = V_0;
		int16_t L_12 = L_11.____b_2;
		int16_t L_13 = __this->____b_2;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0066;
		}
	}
	{
		int16_t L_14 = __this->____b_2;
		Guid_t L_15 = V_0;
		int16_t L_16 = L_15.____b_2;
		int32_t L_17;
		L_17 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_14, L_16, NULL);
		return L_17;
	}

IL_0066:
	{
		Guid_t L_18 = V_0;
		int16_t L_19 = L_18.____c_3;
		int16_t L_20 = __this->____c_3;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0087;
		}
	}
	{
		int16_t L_21 = __this->____c_3;
		Guid_t L_22 = V_0;
		int16_t L_23 = L_22.____c_3;
		int32_t L_24;
		L_24 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_21, L_23, NULL);
		return L_24;
	}

IL_0087:
	{
		Guid_t L_25 = V_0;
		uint8_t L_26 = L_25.____d_4;
		uint8_t L_27 = __this->____d_4;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_00a8;
		}
	}
	{
		uint8_t L_28 = __this->____d_4;
		Guid_t L_29 = V_0;
		uint8_t L_30 = L_29.____d_4;
		int32_t L_31;
		L_31 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_28, L_30, NULL);
		return L_31;
	}

IL_00a8:
	{
		Guid_t L_32 = V_0;
		uint8_t L_33 = L_32.____e_5;
		uint8_t L_34 = __this->____e_5;
		if ((((int32_t)L_33) == ((int32_t)L_34)))
		{
			goto IL_00c9;
		}
	}
	{
		uint8_t L_35 = __this->____e_5;
		Guid_t L_36 = V_0;
		uint8_t L_37 = L_36.____e_5;
		int32_t L_38;
		L_38 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_35, L_37, NULL);
		return L_38;
	}

IL_00c9:
	{
		Guid_t L_39 = V_0;
		uint8_t L_40 = L_39.____f_6;
		uint8_t L_41 = __this->____f_6;
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_42 = __this->____f_6;
		Guid_t L_43 = V_0;
		uint8_t L_44 = L_43.____f_6;
		int32_t L_45;
		L_45 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_42, L_44, NULL);
		return L_45;
	}

IL_00ea:
	{
		Guid_t L_46 = V_0;
		uint8_t L_47 = L_46.____g_7;
		uint8_t L_48 = __this->____g_7;
		if ((((int32_t)L_47) == ((int32_t)L_48)))
		{
			goto IL_010b;
		}
	}
	{
		uint8_t L_49 = __this->____g_7;
		Guid_t L_50 = V_0;
		uint8_t L_51 = L_50.____g_7;
		int32_t L_52;
		L_52 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_49, L_51, NULL);
		return L_52;
	}

IL_010b:
	{
		Guid_t L_53 = V_0;
		uint8_t L_54 = L_53.____h_8;
		uint8_t L_55 = __this->____h_8;
		if ((((int32_t)L_54) == ((int32_t)L_55)))
		{
			goto IL_012c;
		}
	}
	{
		uint8_t L_56 = __this->____h_8;
		Guid_t L_57 = V_0;
		uint8_t L_58 = L_57.____h_8;
		int32_t L_59;
		L_59 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_56, L_58, NULL);
		return L_59;
	}

IL_012c:
	{
		Guid_t L_60 = V_0;
		uint8_t L_61 = L_60.____i_9;
		uint8_t L_62 = __this->____i_9;
		if ((((int32_t)L_61) == ((int32_t)L_62)))
		{
			goto IL_014d;
		}
	}
	{
		uint8_t L_63 = __this->____i_9;
		Guid_t L_64 = V_0;
		uint8_t L_65 = L_64.____i_9;
		int32_t L_66;
		L_66 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_63, L_65, NULL);
		return L_66;
	}

IL_014d:
	{
		Guid_t L_67 = V_0;
		uint8_t L_68 = L_67.____j_10;
		uint8_t L_69 = __this->____j_10;
		if ((((int32_t)L_68) == ((int32_t)L_69)))
		{
			goto IL_016e;
		}
	}
	{
		uint8_t L_70 = __this->____j_10;
		Guid_t L_71 = V_0;
		uint8_t L_72 = L_71.____j_10;
		int32_t L_73;
		L_73 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_70, L_72, NULL);
		return L_73;
	}

IL_016e:
	{
		Guid_t L_74 = V_0;
		uint8_t L_75 = L_74.____k_11;
		uint8_t L_76 = __this->____k_11;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_018f;
		}
	}
	{
		uint8_t L_77 = __this->____k_11;
		Guid_t L_78 = V_0;
		uint8_t L_79 = L_78.____k_11;
		int32_t L_80;
		L_80 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_77, L_79, NULL);
		return L_80;
	}

IL_018f:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Guid_CompareTo_m25940E81E692D335CFDE59D11862C99D99D044BB(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Guid::CompareTo(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586 (Guid_t* __this, Guid_t ___value0, const RuntimeMethod* method) 
{
{
		Guid_t L_0 = ___value0;
		int32_t L_1 = L_0.____a_1;
		int32_t L_2 = __this->____a_1;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = __this->____a_1;
		Guid_t L_4 = ___value0;
		int32_t L_5 = L_4.____a_1;
		int32_t L_6;
		L_6 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_3, L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		Guid_t L_7 = ___value0;
		int16_t L_8 = L_7.____b_2;
		int16_t L_9 = __this->____b_2;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0042;
		}
	}
	{
		int16_t L_10 = __this->____b_2;
		Guid_t L_11 = ___value0;
		int16_t L_12 = L_11.____b_2;
		int32_t L_13;
		L_13 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_10, L_12, NULL);
		return L_13;
	}

IL_0042:
	{
		Guid_t L_14 = ___value0;
		int16_t L_15 = L_14.____c_3;
		int16_t L_16 = __this->____c_3;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0063;
		}
	}
	{
		int16_t L_17 = __this->____c_3;
		Guid_t L_18 = ___value0;
		int16_t L_19 = L_18.____c_3;
		int32_t L_20;
		L_20 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_17, L_19, NULL);
		return L_20;
	}

IL_0063:
	{
		Guid_t L_21 = ___value0;
		uint8_t L_22 = L_21.____d_4;
		uint8_t L_23 = __this->____d_4;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_0084;
		}
	}
	{
		uint8_t L_24 = __this->____d_4;
		Guid_t L_25 = ___value0;
		uint8_t L_26 = L_25.____d_4;
		int32_t L_27;
		L_27 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_24, L_26, NULL);
		return L_27;
	}

IL_0084:
	{
		Guid_t L_28 = ___value0;
		uint8_t L_29 = L_28.____e_5;
		uint8_t L_30 = __this->____e_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a5;
		}
	}
	{
		uint8_t L_31 = __this->____e_5;
		Guid_t L_32 = ___value0;
		uint8_t L_33 = L_32.____e_5;
		int32_t L_34;
		L_34 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_31, L_33, NULL);
		return L_34;
	}

IL_00a5:
	{
		Guid_t L_35 = ___value0;
		uint8_t L_36 = L_35.____f_6;
		uint8_t L_37 = __this->____f_6;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_00c6;
		}
	}
	{
		uint8_t L_38 = __this->____f_6;
		Guid_t L_39 = ___value0;
		uint8_t L_40 = L_39.____f_6;
		int32_t L_41;
		L_41 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_38, L_40, NULL);
		return L_41;
	}

IL_00c6:
	{
		Guid_t L_42 = ___value0;
		uint8_t L_43 = L_42.____g_7;
		uint8_t L_44 = __this->____g_7;
		if ((((int32_t)L_43) == ((int32_t)L_44)))
		{
			goto IL_00e7;
		}
	}
	{
		uint8_t L_45 = __this->____g_7;
		Guid_t L_46 = ___value0;
		uint8_t L_47 = L_46.____g_7;
		int32_t L_48;
		L_48 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_45, L_47, NULL);
		return L_48;
	}

IL_00e7:
	{
		Guid_t L_49 = ___value0;
		uint8_t L_50 = L_49.____h_8;
		uint8_t L_51 = __this->____h_8;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_0108;
		}
	}
	{
		uint8_t L_52 = __this->____h_8;
		Guid_t L_53 = ___value0;
		uint8_t L_54 = L_53.____h_8;
		int32_t L_55;
		L_55 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_52, L_54, NULL);
		return L_55;
	}

IL_0108:
	{
		Guid_t L_56 = ___value0;
		uint8_t L_57 = L_56.____i_9;
		uint8_t L_58 = __this->____i_9;
		if ((((int32_t)L_57) == ((int32_t)L_58)))
		{
			goto IL_0129;
		}
	}
	{
		uint8_t L_59 = __this->____i_9;
		Guid_t L_60 = ___value0;
		uint8_t L_61 = L_60.____i_9;
		int32_t L_62;
		L_62 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_59, L_61, NULL);
		return L_62;
	}

IL_0129:
	{
		Guid_t L_63 = ___value0;
		uint8_t L_64 = L_63.____j_10;
		uint8_t L_65 = __this->____j_10;
		if ((((int32_t)L_64) == ((int32_t)L_65)))
		{
			goto IL_014a;
		}
	}
	{
		uint8_t L_66 = __this->____j_10;
		Guid_t L_67 = ___value0;
		uint8_t L_68 = L_67.____j_10;
		int32_t L_69;
		L_69 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_66, L_68, NULL);
		return L_69;
	}

IL_014a:
	{
		Guid_t L_70 = ___value0;
		uint8_t L_71 = L_70.____k_11;
		uint8_t L_72 = __this->____k_11;
		if ((((int32_t)L_71) == ((int32_t)L_72)))
		{
			goto IL_016b;
		}
	}
	{
		uint8_t L_73 = __this->____k_11;
		Guid_t L_74 = ___value0;
		uint8_t L_75 = L_74.____k_11;
		int32_t L_76;
		L_76 = Guid_GetResult_m75C7C69F0565A5E2197E193EC5793DD0AC42EA6C(__this, L_73, L_75, NULL);
		return L_76;
	}

IL_016b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586_AdjustorThunk (RuntimeObject* __this, Guid_t ___value0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Guid_CompareTo_mC22A00A14BBCCBF55F303C89A567FCA43925B586(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_mC6FCB577D004C231106A3A9EDEE2DC3FACA63A27 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		Guid_t L_0 = ___a0;
		int32_t L_1 = L_0.____a_1;
		Guid_t L_2 = ___b1;
		int32_t L_3 = L_2.____a_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_4 = (&(&___a0)->____a_1);
		int32_t* L_5;
		L_5 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_4, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_6 = *((int32_t*)L_5);
		int32_t* L_7 = (&(&___b1)->____a_1);
		int32_t* L_8;
		L_8 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_7, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_9 = *((int32_t*)L_8);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_10 = (&(&___a0)->____a_1);
		int32_t* L_11;
		L_11 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_10, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_12 = *((int32_t*)L_11);
		int32_t* L_13 = (&(&___b1)->____a_1);
		int32_t* L_14;
		L_14 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_13, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_15 = *((int32_t*)L_14);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_15))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_16 = (&(&___a0)->____a_1);
		int32_t* L_17;
		L_17 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_16, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_18 = *((int32_t*)L_17);
		int32_t* L_19 = (&(&___b1)->____a_1);
		int32_t* L_20;
		L_20 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_19, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_21 = *((int32_t*)L_20);
		return (bool)((((int32_t)L_18) == ((int32_t)L_21))? 1 : 0);
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Boolean System.Guid::op_Inequality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Inequality_mC58D6A865ACA29539AB8D911150E2F0B246595E7 (Guid_t ___a0, Guid_t ___b1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		Guid_t L_0 = ___a0;
		int32_t L_1 = L_0.____a_1;
		Guid_t L_2 = ___b1;
		int32_t L_3 = L_2.____a_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_4 = (&(&___a0)->____a_1);
		int32_t* L_5;
		L_5 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_4, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_6 = *((int32_t*)L_5);
		int32_t* L_7 = (&(&___b1)->____a_1);
		int32_t* L_8;
		L_8 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_7, 1, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_9 = *((int32_t*)L_8);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_10 = (&(&___a0)->____a_1);
		int32_t* L_11;
		L_11 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_10, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_12 = *((int32_t*)L_11);
		int32_t* L_13 = (&(&___b1)->____a_1);
		int32_t* L_14;
		L_14 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_13, 2, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_15 = *((int32_t*)L_14);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_15))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t* L_16 = (&(&___a0)->____a_1);
		int32_t* L_17;
		L_17 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_16, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_18 = *((int32_t*)L_17);
		int32_t* L_19 = (&(&___b1)->____a_1);
		int32_t* L_20;
		L_20 = Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F(L_19, 3, Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_RuntimeMethod_var);
		int32_t L_21 = *((int32_t*)L_20);
		return (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006c:
	{
		return (bool)1;
	}
}
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) 
{
{
		String_t* L_0 = ___format0;
		String_t* L_1;
		L_1 = Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130(__this, L_0, (RuntimeObject*)NULL, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.Char System.Guid::HexToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455 (int32_t ___a0, const RuntimeMethod* method) 
{
int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		___a0 = ((int32_t)(L_0&((int32_t)15)));
		int32_t L_1 = ___a0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)9))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___a0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)48)));
		goto IL_0018;
	}

IL_0011:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)10))), ((int32_t)97)));
	}

IL_0018:
	{
		return ((int32_t)(uint16_t)G_B3_0);
	}
}
// System.Int32 System.Guid::HexsToChars(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70 (Il2CppChar* ___guidChars0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) 
{
{
		Il2CppChar* L_0 = ___guidChars0;
		int32_t L_1 = ___a1;
		Il2CppChar L_2;
		L_2 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(((int32_t)(L_1>>4)), NULL);
		*((int16_t*)L_0) = (int16_t)L_2;
		Il2CppChar* L_3 = ___guidChars0;
		int32_t L_4 = ___a1;
		Il2CppChar L_5;
		L_5 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(L_4, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, 2))) = (int16_t)L_5;
		Il2CppChar* L_6 = ___guidChars0;
		int32_t L_7 = ___b2;
		Il2CppChar L_8;
		L_8 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(((int32_t)(L_7>>4)), NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))))) = (int16_t)L_8;
		Il2CppChar* L_9 = ___guidChars0;
		int32_t L_10 = ___b2;
		Il2CppChar L_11;
		L_11 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(L_10, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2))))) = (int16_t)L_11;
		return 4;
	}
}
// System.Int32 System.Guid::HexsToCharsHexOutput(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851 (Il2CppChar* ___guidChars0, int32_t ___a1, int32_t ___b2, const RuntimeMethod* method) 
{
{
		Il2CppChar* L_0 = ___guidChars0;
		*((int16_t*)L_0) = (int16_t)((int32_t)48);
		Il2CppChar* L_1 = ___guidChars0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_1, 2))) = (int16_t)((int32_t)120);
		Il2CppChar* L_2 = ___guidChars0;
		int32_t L_3 = ___a1;
		Il2CppChar L_4;
		L_4 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(((int32_t)(L_3>>4)), NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))))) = (int16_t)L_4;
		Il2CppChar* L_5 = ___guidChars0;
		int32_t L_6 = ___a1;
		Il2CppChar L_7;
		L_7 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(L_6, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 2))))) = (int16_t)L_7;
		Il2CppChar* L_8 = ___guidChars0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 2))))) = (int16_t)((int32_t)44);
		Il2CppChar* L_9 = ___guidChars0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 2))))) = (int16_t)((int32_t)48);
		Il2CppChar* L_10 = ___guidChars0;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 2))))) = (int16_t)((int32_t)120);
		Il2CppChar* L_11 = ___guidChars0;
		int32_t L_12 = ___b2;
		Il2CppChar L_13;
		L_13 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(((int32_t)(L_12>>4)), NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 2))))) = (int16_t)L_13;
		Il2CppChar* L_14 = ___guidChars0;
		int32_t L_15 = ___b2;
		Il2CppChar L_16;
		L_16 = Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline(L_15, NULL);
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 2))))) = (int16_t)L_16;
		return ((int32_t)9);
	}
}
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130 (Guid_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___format0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___format0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}

IL_000b:
	{
		___format0 = _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
	}

IL_0012:
	{
		String_t* L_3 = ___format0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_5 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8198C3D4DD21FBED5685EAF69C1087FA1961F2F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130_RuntimeMethod_var)));
	}

IL_0026:
	{
		String_t* L_6 = ___format0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 0, NULL);
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_9 = V_3;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_10 = V_3;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)66))))
		{
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_11 = V_3;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)68))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_008b;
	}

IL_0044:
	{
		Il2CppChar L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)78))))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar L_13 = V_3;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)80))))
		{
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_14 = V_3;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)88))))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0055:
	{
		Il2CppChar L_15 = V_3;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_0066;
		}
	}
	{
		Il2CppChar L_16 = V_3;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_17 = V_3;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)100))))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_008b;
	}

IL_0066:
	{
		Il2CppChar L_18 = V_3;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)110))))
		{
			goto IL_007c;
		}
	}
	{
		Il2CppChar L_19 = V_3;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)112))))
		{
			goto IL_0081;
		}
	}
	{
		Il2CppChar L_20 = V_3;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)120))))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_008b;
	}

IL_0077:
	{
		V_0 = ((int32_t)36);
		goto IL_0096;
	}

IL_007c:
	{
		V_0 = ((int32_t)32);
		goto IL_0096;
	}

IL_0081:
	{
		V_0 = ((int32_t)38);
		goto IL_0096;
	}

IL_0086:
	{
		V_0 = ((int32_t)68);
		goto IL_0096;
	}

IL_008b:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_21 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8198C3D4DD21FBED5685EAF69C1087FA1961F2F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130_RuntimeMethod_var)));
	}

IL_0096:
	{
		int32_t L_22 = V_0;
		String_t* L_23;
		L_23 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_22, NULL);
		V_1 = L_23;
		String_t* L_24 = V_1;
		V_5 = L_24;
		String_t* L_25 = V_5;
		V_4 = (Il2CppChar*)((uintptr_t)L_25);
		Il2CppChar* L_26 = V_4;
		if (!L_26)
		{
			goto IL_00b3;
		}
	}
	{
		Il2CppChar* L_27 = V_4;
		int32_t L_28;
		L_28 = RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460(NULL);
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_27, L_28));
	}

IL_00b3:
	{
		Il2CppChar* L_29 = V_4;
		String_t* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_32;
		memset((&L_32), 0, sizeof(L_32));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_32), (void*)L_29, L_31, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		String_t* L_33 = ___format0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_34;
		L_34 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(L_33, NULL);
		bool L_35;
		L_35 = Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79(__this, L_32, (&V_2), L_34, NULL);
		V_5 = (String_t*)NULL;
		String_t* L_36 = V_1;
		return L_36;
	}
}
IL2CPP_EXTERN_C  String_t* Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean System.Guid::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79 (Guid_t* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar* V_5 = NULL;
	Il2CppChar* V_6 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___format2), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1;
		L_1 = String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline(_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, NULL);
		___format2 = L_1;
	}

IL_0015:
	{
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___format2), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_3 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8198C3D4DD21FBED5685EAF69C1087FA1961F2F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_0 = (bool)1;
		V_1 = (bool)0;
		V_2 = 0;
		Il2CppChar* L_4;
		L_4 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline((&___format2), 0, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_5 = *((uint16_t*)L_4);
		V_4 = L_5;
		Il2CppChar L_6 = V_4;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)88)))))
		{
			goto IL_0069;
		}
	}
	{
		Il2CppChar L_7 = V_4;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)68)))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)66))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)68))))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00c2;
	}

IL_0055:
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)78))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_11 = V_4;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)80))))
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppChar L_12 = V_4;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)88))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00c2;
	}

IL_0069:
	{
		Il2CppChar L_13 = V_4;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)100)))))
		{
			goto IL_007d;
		}
	}
	{
		Il2CppChar L_14 = V_4;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_15 = V_4;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)100))))
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00c2;
	}

IL_007d:
	{
		Il2CppChar L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)112))))
		{
			goto IL_00a8;
		}
	}
	{
		Il2CppChar L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)120))))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00c2;
	}

IL_0091:
	{
		V_3 = ((int32_t)36);
		goto IL_00cd;
	}

IL_0096:
	{
		V_0 = (bool)0;
		V_3 = ((int32_t)32);
		goto IL_00cd;
	}

IL_009d:
	{
		V_2 = ((int32_t)8192123);
		V_3 = ((int32_t)38);
		goto IL_00cd;
	}

IL_00a8:
	{
		V_2 = ((int32_t)2687016);
		V_3 = ((int32_t)38);
		goto IL_00cd;
	}

IL_00b3:
	{
		V_2 = ((int32_t)8192123);
		V_0 = (bool)0;
		V_1 = (bool)1;
		V_3 = ((int32_t)68);
		goto IL_00cd;
	}

IL_00c2:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_19 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8198C3D4DD21FBED5685EAF69C1087FA1961F2F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79_RuntimeMethod_var)));
	}

IL_00cd:
	{
		int32_t L_20;
		L_20 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___destination0), Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_RuntimeMethod_var);
		int32_t L_21 = V_3;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t* L_22 = ___charsWritten1;
		*((int32_t*)L_22) = (int32_t)0;
		return (bool)0;
	}

IL_00dc:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23 = ___destination0;
		Il2CppChar* L_24;
		L_24 = MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71(L_23, MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_RuntimeMethod_var);
		V_5 = L_24;
		Il2CppChar* L_25 = V_5;
		V_6 = (Il2CppChar*)((uintptr_t)L_25);
		int32_t L_26 = V_2;
		if (!L_26)
		{
			goto IL_00f6;
		}
	}
	{
		Il2CppChar* L_27 = V_6;
		Il2CppChar* L_28 = L_27;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_28, 2));
		int32_t L_29 = V_2;
		*((int16_t*)L_28) = (int16_t)((int32_t)(uint16_t)L_29);
	}

IL_00f6:
	{
		bool L_30 = V_1;
		if (!L_30)
		{
			goto IL_0271;
		}
	}
	{
		Il2CppChar* L_31 = V_6;
		Il2CppChar* L_32 = L_31;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_32, 2));
		*((int16_t*)L_32) = (int16_t)((int32_t)48);
		Il2CppChar* L_33 = V_6;
		Il2CppChar* L_34 = L_33;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, 2));
		*((int16_t*)L_34) = (int16_t)((int32_t)120);
		Il2CppChar* L_35 = V_6;
		Il2CppChar* L_36 = V_6;
		int32_t L_37 = __this->____a_1;
		int32_t L_38 = __this->____a_1;
		int32_t L_39;
		L_39 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_36, ((int32_t)(L_37>>((int32_t)24))), ((int32_t)(L_38>>((int32_t)16))), NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), 2))));
		Il2CppChar* L_40 = V_6;
		Il2CppChar* L_41 = V_6;
		int32_t L_42 = __this->____a_1;
		int32_t L_43 = __this->____a_1;
		int32_t L_44;
		L_44 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_41, ((int32_t)(L_42>>8)), L_43, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_44), 2))));
		Il2CppChar* L_45 = V_6;
		Il2CppChar* L_46 = L_45;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_46, 2));
		*((int16_t*)L_46) = (int16_t)((int32_t)44);
		Il2CppChar* L_47 = V_6;
		Il2CppChar* L_48 = L_47;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, 2));
		*((int16_t*)L_48) = (int16_t)((int32_t)48);
		Il2CppChar* L_49 = V_6;
		Il2CppChar* L_50 = L_49;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_50, 2));
		*((int16_t*)L_50) = (int16_t)((int32_t)120);
		Il2CppChar* L_51 = V_6;
		Il2CppChar* L_52 = V_6;
		int16_t L_53 = __this->____b_2;
		int16_t L_54 = __this->____b_2;
		int32_t L_55;
		L_55 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_52, ((int32_t)((int32_t)L_53>>8)), L_54, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 2))));
		Il2CppChar* L_56 = V_6;
		Il2CppChar* L_57 = L_56;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_57, 2));
		*((int16_t*)L_57) = (int16_t)((int32_t)44);
		Il2CppChar* L_58 = V_6;
		Il2CppChar* L_59 = L_58;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_59, 2));
		*((int16_t*)L_59) = (int16_t)((int32_t)48);
		Il2CppChar* L_60 = V_6;
		Il2CppChar* L_61 = L_60;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_61, 2));
		*((int16_t*)L_61) = (int16_t)((int32_t)120);
		Il2CppChar* L_62 = V_6;
		Il2CppChar* L_63 = V_6;
		int16_t L_64 = __this->____c_3;
		int16_t L_65 = __this->____c_3;
		int32_t L_66;
		L_66 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_63, ((int32_t)((int32_t)L_64>>8)), L_65, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_62, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_66), 2))));
		Il2CppChar* L_67 = V_6;
		Il2CppChar* L_68 = L_67;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_68, 2));
		*((int16_t*)L_68) = (int16_t)((int32_t)44);
		Il2CppChar* L_69 = V_6;
		Il2CppChar* L_70 = L_69;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_70, 2));
		*((int16_t*)L_70) = (int16_t)((int32_t)123);
		Il2CppChar* L_71 = V_6;
		Il2CppChar* L_72 = V_6;
		uint8_t L_73 = __this->____d_4;
		uint8_t L_74 = __this->____e_5;
		int32_t L_75;
		L_75 = Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851(L_72, L_73, L_74, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 2))));
		Il2CppChar* L_76 = V_6;
		Il2CppChar* L_77 = L_76;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_77, 2));
		*((int16_t*)L_77) = (int16_t)((int32_t)44);
		Il2CppChar* L_78 = V_6;
		Il2CppChar* L_79 = V_6;
		uint8_t L_80 = __this->____f_6;
		uint8_t L_81 = __this->____g_7;
		int32_t L_82;
		L_82 = Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851(L_79, L_80, L_81, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_78, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_82), 2))));
		Il2CppChar* L_83 = V_6;
		Il2CppChar* L_84 = L_83;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_84, 2));
		*((int16_t*)L_84) = (int16_t)((int32_t)44);
		Il2CppChar* L_85 = V_6;
		Il2CppChar* L_86 = V_6;
		uint8_t L_87 = __this->____h_8;
		uint8_t L_88 = __this->____i_9;
		int32_t L_89;
		L_89 = Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851(L_86, L_87, L_88, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_89), 2))));
		Il2CppChar* L_90 = V_6;
		Il2CppChar* L_91 = L_90;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_91, 2));
		*((int16_t*)L_91) = (int16_t)((int32_t)44);
		Il2CppChar* L_92 = V_6;
		Il2CppChar* L_93 = V_6;
		uint8_t L_94 = __this->____j_10;
		uint8_t L_95 = __this->____k_11;
		int32_t L_96;
		L_96 = Guid_HexsToCharsHexOutput_m04BCEE497FAEF1DBA19BD8D48DA5EAE06AD22851(L_93, L_94, L_95, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_92, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_96), 2))));
		Il2CppChar* L_97 = V_6;
		Il2CppChar* L_98 = L_97;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_98, 2));
		*((int16_t*)L_98) = (int16_t)((int32_t)125);
		goto IL_0389;
	}

IL_0271:
	{
		Il2CppChar* L_99 = V_6;
		Il2CppChar* L_100 = V_6;
		int32_t L_101 = __this->____a_1;
		int32_t L_102 = __this->____a_1;
		int32_t L_103;
		L_103 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_100, ((int32_t)(L_101>>((int32_t)24))), ((int32_t)(L_102>>((int32_t)16))), NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_103), 2))));
		Il2CppChar* L_104 = V_6;
		Il2CppChar* L_105 = V_6;
		int32_t L_106 = __this->____a_1;
		int32_t L_107 = __this->____a_1;
		int32_t L_108;
		L_108 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_105, ((int32_t)(L_106>>8)), L_107, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_104, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_108), 2))));
		bool L_109 = V_0;
		if (!L_109)
		{
			goto IL_02bc;
		}
	}
	{
		Il2CppChar* L_110 = V_6;
		Il2CppChar* L_111 = L_110;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_111, 2));
		*((int16_t*)L_111) = (int16_t)((int32_t)45);
	}

IL_02bc:
	{
		Il2CppChar* L_112 = V_6;
		Il2CppChar* L_113 = V_6;
		int16_t L_114 = __this->____b_2;
		int16_t L_115 = __this->____b_2;
		int32_t L_116;
		L_116 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_113, ((int32_t)((int32_t)L_114>>8)), L_115, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_112, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_116), 2))));
		bool L_117 = V_0;
		if (!L_117)
		{
			goto IL_02e6;
		}
	}
	{
		Il2CppChar* L_118 = V_6;
		Il2CppChar* L_119 = L_118;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_119, 2));
		*((int16_t*)L_119) = (int16_t)((int32_t)45);
	}

IL_02e6:
	{
		Il2CppChar* L_120 = V_6;
		Il2CppChar* L_121 = V_6;
		int16_t L_122 = __this->____c_3;
		int16_t L_123 = __this->____c_3;
		int32_t L_124;
		L_124 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_121, ((int32_t)((int32_t)L_122>>8)), L_123, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_120, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_124), 2))));
		bool L_125 = V_0;
		if (!L_125)
		{
			goto IL_0310;
		}
	}
	{
		Il2CppChar* L_126 = V_6;
		Il2CppChar* L_127 = L_126;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_127, 2));
		*((int16_t*)L_127) = (int16_t)((int32_t)45);
	}

IL_0310:
	{
		Il2CppChar* L_128 = V_6;
		Il2CppChar* L_129 = V_6;
		uint8_t L_130 = __this->____d_4;
		uint8_t L_131 = __this->____e_5;
		int32_t L_132;
		L_132 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_129, L_130, L_131, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_128, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_132), 2))));
		bool L_133 = V_0;
		if (!L_133)
		{
			goto IL_0338;
		}
	}
	{
		Il2CppChar* L_134 = V_6;
		Il2CppChar* L_135 = L_134;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_135, 2));
		*((int16_t*)L_135) = (int16_t)((int32_t)45);
	}

IL_0338:
	{
		Il2CppChar* L_136 = V_6;
		Il2CppChar* L_137 = V_6;
		uint8_t L_138 = __this->____f_6;
		uint8_t L_139 = __this->____g_7;
		int32_t L_140;
		L_140 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_137, L_138, L_139, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_136, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_140), 2))));
		Il2CppChar* L_141 = V_6;
		Il2CppChar* L_142 = V_6;
		uint8_t L_143 = __this->____h_8;
		uint8_t L_144 = __this->____i_9;
		int32_t L_145;
		L_145 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_142, L_143, L_144, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_141, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 2))));
		Il2CppChar* L_146 = V_6;
		Il2CppChar* L_147 = V_6;
		uint8_t L_148 = __this->____j_10;
		uint8_t L_149 = __this->____k_11;
		int32_t L_150;
		L_150 = Guid_HexsToChars_m44FAEF7DC73970C3A9B51F70A69709E9AFBB4E70(L_147, L_148, L_149, NULL);
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_146, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_150), 2))));
	}

IL_0389:
	{
		int32_t L_151 = V_2;
		if (!L_151)
		{
			goto IL_0399;
		}
	}
	{
		Il2CppChar* L_152 = V_6;
		Il2CppChar* L_153 = L_152;
		V_6 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_153, 2));
		int32_t L_154 = V_2;
		*((int16_t*)L_153) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_154>>((int32_t)16))));
	}

IL_0399:
	{
		V_5 = (Il2CppChar*)((uintptr_t)0);
		int32_t* L_155 = ___charsWritten1;
		int32_t L_156 = V_3;
		*((int32_t*)L_155) = (int32_t)L_156;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	bool _returnValue;
	_returnValue = Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79(_thisAdjusted, ___destination0, ___charsWritten1, ___format2, method);
	return _returnValue;
}
// System.Boolean System.Guid::System.ISpanFormattable.TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_System_ISpanFormattable_TryFormat_mAA4B1A160D805A87D08267AA47C933CE1480404D (Guid_t* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, RuntimeObject* ___provider3, const RuntimeMethod* method) 
{
{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___destination0;
		int32_t* L_1 = ___charsWritten1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___format2;
		bool L_3;
		L_3 = Guid_TryFormat_m9D48F66E2448F329A3DD1234B0A8F3EAF6757E79(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool Guid_System_ISpanFormattable_TryFormat_mAA4B1A160D805A87D08267AA47C933CE1480404D_AdjustorThunk (RuntimeObject* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___destination0, int32_t* ___charsWritten1, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___format2, RuntimeObject* ___provider3, const RuntimeMethod* method)
{
Guid_t* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Guid_t*>(__this + _offset);
	bool _returnValue;
	_returnValue = Guid_System_ISpanFormattable_TryFormat_mAA4B1A160D805A87D08267AA47C933CE1480404D(_thisAdjusted, ___destination0, ___charsWritten1, ___format2, ___provider3, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* __DTString_get_CompareInfo_m60B598A103E1AD8C7A84D1294398713BB72EC372_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_0 = __this->___m_info_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline (DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* __this, const RuntimeMethod* method) 
{
{
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_0 = __this->___calendar_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlobalizationMode_get_Invariant_mFD12277F7A8C2CC834FAD342F17B1D7C045D898F_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var);
		bool L_0 = ((GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_StaticFields*)il2cpp_codegen_static_fields_for(GlobalizationMode_t8C0DD244B8C6347DE7AB7AE83B10911D2EB7582A_il2cpp_TypeInfo_var))->___U3CInvariantU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) 
{
{
		int64_t L_0 = ___ticks0;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool __DTString_GetNextDigit_m078932668F40B02FE142720C8BB0C1A43F2B81A4_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___Index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___Index_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0031;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_4 = (&__this->___Value_0);
		int32_t L_5 = __this->___Index_1;
		Il2CppChar* L_6;
		L_6 = ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_inline(L_4, L_5, ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_RuntimeMethod_var);
		int32_t L_7 = *((uint16_t*)L_6);
		il2cpp_codegen_runtime_class_init_inline(DateTimeParse_t4FB3E2A513F1775F6B2EC5C0762DC7CA2E647045_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DateTimeParse_IsDigit_mA6B84307C5FF718A15BA19E4EB31EB78AD7DD557(L_7, NULL);
		return L_8;
	}

IL_0031:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool __DTString_MatchSpecifiedWord_m0B22ABC9575133F23A0015996B8C65BA8F88B0CB_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* __this, String_t* ___target0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = __this->___Index_1;
		String_t* L_1 = ___target0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		int32_t L_3;
		L_3 = __DTString_get_Length_m558FC036D103ABBEC417E7DDB0C6E303B6F30DA7(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_2))) > ((int32_t)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_4 = __this->___m_info_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* L_5 = (&__this->___Value_0);
		int32_t L_6 = __this->___Index_1;
		String_t* L_7 = ___target0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline(L_5, L_6, L_8, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		String_t* L_10 = ___target0;
		NullCheck(L_4);
		int32_t L_11;
		L_11 = CompareInfo_Compare_mFD591987EB505C7B67AFF638293F718976A215C6(L_4, L_9, L_10, 1, NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}

IL_003d:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DateTimeParse_ParseJapaneseEraStart_mA92A09D4BAD4A6FD450C0AACFB3EFEC4DBEEE0D6_inline (__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* ___str0, DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dtfi1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0 = ((AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_StaticFields*)il2cpp_codegen_static_fields_for(AppContextSwitches_t542F10E9BE2333B7BE24C8858C8A24EFA6C06D38_il2cpp_TypeInfo_var))->___EnforceLegacyJapaneseDateParsing_3;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* L_1 = ___dtfi1;
		NullCheck(L_1);
		Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* L_2;
		L_2 = DateTimeFormatInfo_get_Calendar_m1280AC2F196ECBE7B664394CC3821062015DEF99_inline(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Globalization.Calendar::get_ID() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_4 = ___str0;
		bool L_5;
		L_5 = __DTString_GetNext_m2DAFC0E1EB763649B66110695BDB206B71B1407F(L_4, NULL);
		if (L_5)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_6 = ___str0;
		Il2CppChar L_7 = L_6->___m_current_2;
		NullCheck(_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(_stringLiteralC2F9A94ED8684F4AE51F264CC8E83B9731EAE480, 0, NULL);
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		__DTString_t732683AF9A8EEC82B66C136920240C4033EF0637* L_9 = ___str0;
		int32_t* L_10 = (&L_9->___Index_1);
		int32_t* L_11 = L_10;
		int32_t L_12 = *((int32_t*)L_11);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_12, 1));
		return (bool)0;
	}

IL_003f:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 String_op_Implicit_m43FB5A30521770D4C28C1307CF89F80BA3535CAC_inline (String_t* ___value0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___value0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m5164781404FE3D882902D92409C003B29659A049_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E(((int32_t)24), NULL);
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0035;
		}
	}

IL_002e:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4657A9146F3788E9A174B3E47105BCFC5551149E(((int32_t)24), NULL);
	}

IL_0035:
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		Il2CppChar* L_12;
		L_12 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_11, NULL);
		int32_t L_13 = ___start1;
		Il2CppChar* L_14;
		L_14 = Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5(L_12, L_13, Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_RuntimeMethod_var);
		int32_t L_15 = ___length2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_16), L_14, L_15, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GuidResult_Init_mA6B695110665C265D17C97D0AB8AA25D25D874AB_inline (GuidResult_t5B70D46D3C631BD00631FF6D700371C1E9C7AC79* __this, int32_t ___canThrow0, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___canThrow0;
		__this->____throwStyle_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Guid_WriteByteHelper_m01C68A14A0E960E3D2FC97C2178166CA0898481E_inline (Guid_t* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		uint8_t* L_0;
		L_0 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 0, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_1 = __this->____a_1;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)L_1);
		uint8_t* L_2;
		L_2 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 1, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_3 = __this->____a_1;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3>>8)));
		uint8_t* L_4;
		L_4 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 2, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_5 = __this->____a_1;
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16))));
		uint8_t* L_6;
		L_6 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 3, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int32_t L_7 = __this->____a_1;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7>>((int32_t)24))));
		uint8_t* L_8;
		L_8 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 4, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_9 = __this->____b_2;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)L_9);
		uint8_t* L_10;
		L_10 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 5, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_11 = __this->____b_2;
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11>>8)));
		uint8_t* L_12;
		L_12 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 6, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_13 = __this->____c_3;
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)L_13);
		uint8_t* L_14;
		L_14 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 7, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		int16_t L_15 = __this->____c_3;
		*((int8_t*)L_14) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15>>8)));
		uint8_t* L_16;
		L_16 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), 8, Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_17 = __this->____d_4;
		*((int8_t*)L_16) = (int8_t)L_17;
		uint8_t* L_18;
		L_18 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)9), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_19 = __this->____e_5;
		*((int8_t*)L_18) = (int8_t)L_19;
		uint8_t* L_20;
		L_20 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)10), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_21 = __this->____f_6;
		*((int8_t*)L_20) = (int8_t)L_21;
		uint8_t* L_22;
		L_22 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)11), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_23 = __this->____g_7;
		*((int8_t*)L_22) = (int8_t)L_23;
		uint8_t* L_24;
		L_24 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)12), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_25 = __this->____h_8;
		*((int8_t*)L_24) = (int8_t)L_25;
		uint8_t* L_26;
		L_26 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)13), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_27 = __this->____i_9;
		*((int8_t*)L_26) = (int8_t)L_27;
		uint8_t* L_28;
		L_28 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)14), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_29 = __this->____j_10;
		*((int8_t*)L_28) = (int8_t)L_29;
		uint8_t* L_30;
		L_30 = Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_inline((&___destination0), ((int32_t)15), Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_RuntimeMethod_var);
		uint8_t L_31 = __this->____k_11;
		*((int8_t*)L_30) = (int8_t)L_31;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar Guid_HexToChar_m88EA1C4B98080A4BA102C1F917B9484A632C7455_inline (int32_t ___a0, const RuntimeMethod* method) 
{
int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		___a0 = ((int32_t)(L_0&((int32_t)15)));
		int32_t L_1 = ___a0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)9))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___a0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)48)));
		goto IL_0018;
	}

IL_0011:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)10))), ((int32_t)97)));
	}

IL_0018:
	{
		return ((int32_t)(uint16_t)G_B3_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_get_Item_mBDFB7BA59BFDB72611F8286970AFA25C5D9A2284_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_mF34F12100A9B32CC6EC10AE7582D7177F2289C06(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___index0;
		Il2CppChar* L_5;
		L_5 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_mF34F12100A9B32CC6EC10AE7582D7177F2289C06(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___index0;
		Il2CppChar* L_5;
		L_5 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, const RuntimeMethod* method) 
{
ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___start0, const RuntimeMethod* method) 
{
ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		Il2CppChar* L_5;
		L_5 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* ReadOnlySpan_1_get_Item_m878CB30FDAE11537A0DCBE9738B0104EF2C798CC_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_mF34F12100A9B32CC6EC10AE7582D7177F2289C06(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___index0;
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = ((  uint8_t* (*) (Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_8;
		L_8 = ((  uint8_t* (*) (Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&___value1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___span0;
		Il2CppChar* L_18;
		L_18 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppChar* L_20;
		L_20 = ((  Il2CppChar* (*) (Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___value1), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = ___span0;
		Il2CppChar* L_25;
		L_25 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar L_26 = ___value1;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_28;
		L_28 = ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = ((  uint8_t* (*) (uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))((uint8_t*)L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___index0, const RuntimeMethod* method) 
{
ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_mF34F12100A9B32CC6EC10AE7582D7177F2289C06(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___index0;
		uint8_t* L_5;
		L_5 = ((  uint8_t* (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_3, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDADE08E6B4594775C6675B389078E5FE98C745D5_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0029:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___array0;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppChar* L_10;
		L_10 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0)))(L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_11 = ___start1;
		Il2CppChar* L_12;
		L_12 = ((  Il2CppChar* (*) (Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_10, L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___length2;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		Il2CppChar* L_4;
		L_4 = ((  Il2CppChar* (*) (uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))((uint8_t*)L_3, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unsafe_As_TisRawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_m44DAFBC67DEF3D913BD3478467D12FACF8E786F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = Unsafe_As_TisRawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_m44DAFBC67DEF3D913BD3478467D12FACF8E786F7(__this, Unsafe_As_TisRawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_m44DAFBC67DEF3D913BD3478467D12FACF8E786F7_RuntimeMethod_var);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
