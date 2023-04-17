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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<Rewired.BridgedController>
struct Action_1_t9CD8F2B591781864AD5E94CBBBD3F20C4EE0A8CE;
// System.Action`1<Rewired.ControllerDisconnectedEventArgs>
struct Action_1_tB1AAD54C2BE20C99D284C4B2ADB0FAA0FBA9E9E7;
// System.Action`1<UnityEngine.FullScreenMode>
struct Action_1_t329A050FC7346A8E8F6E91FE9C9D3F99F35609E6;
// System.Action`1<Rewired.UpdateControllerInfoEventArgs>
struct Action_1_tAC42970D12A5FD24DB34573E21645518E36F210D;
// System.Action`1<Rewired.UpdateLoopType>
struct Action_1_t60FB4C2B07126A34E8B4816D36F7A2065E957637;
// System.Comparison`1<Rewired.InputAction>
struct Comparison_1_t7DAA9CA371682F7CC7DD3829A755C755F248EFA8;
// System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.ConfigVars/cDbmxJFXWVduXCjwppwkvgZNqeHu>
struct Dictionary_2_tEA566EE4F7F044784DCA00DA5477CFA792068B8C;
// System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.ConfigVars/dwkgBlGxqjjCFmiEzxmVruJOuxuP>
struct Dictionary_2_tF06E3E42A9CAE3A7EA4814D3F7EB70038D0F03EF;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877;
// System.Collections.Generic.IList`1<Rewired.Data.ControllerMapEnabler_RuleSet_Editor>
struct IList_1_t852C8E8B082B71E1808E5B1A8AF4FD03492CE49B;
// System.Collections.Generic.IList`1<Rewired.Data.ControllerMapLayoutManager_RuleSet_Editor>
struct IList_1_t65CFD964A3C4A4F84912CDF2BDB1998A0B9BAAA0;
// System.Collections.Generic.IList`1<Rewired.Data.Mapping.ControllerMap_Editor>
struct IList_1_tCEF1354EF379C8F4735CFA605901303300B6CEAA;
// System.Collections.Generic.IList`1<Rewired.InputAction>
struct IList_1_t805CCDBF08E9CEE53DEAAC1C2434EC31AD58B5AF;
// System.Collections.Generic.IList`1<Rewired.InputBehavior>
struct IList_1_t6C1CCD494AB8E57E3BD684EED273EB315ECD0891;
// System.Collections.Generic.IList`1<Rewired.InputCategory>
struct IList_1_tEB5FD461D63D209F6E20E91B4835D64227A21496;
// System.Collections.Generic.IList`1<Rewired.InputLayout>
struct IList_1_t2E2AF563A150855DC051ABEB92D084967B5EFB6F;
// System.Collections.Generic.IList`1<Rewired.InputMapCategory>
struct IList_1_tDDA429F2FA55A05A693583DA57882A80061D1789;
// System.Collections.Generic.IList`1<Rewired.Data.Player_Editor>
struct IList_1_tC34F0BB3D2847322EDE24EBC2DEA231B01E18C02;
// Rewired.Utils.Classes.Data.KeyedGetSetValueStore`1<System.String>
struct KeyedGetSetValueStore_1_t42FBB8435F6E1317064A12E5096EAC021DF80045;
// System.Collections.Generic.List`1<Rewired.Data.ControllerMapEnabler_RuleSet_Editor>
struct List_1_t7E826C67B1BA58F7BFCE21818A9B0A107929DB07;
// System.Collections.Generic.List`1<Rewired.Data.ControllerMapLayoutManager_RuleSet_Editor>
struct List_1_t281DCD605717CC20BA4414EF72CE15A618ED26F3;
// System.Collections.Generic.List`1<Rewired.Data.Mapping.ControllerMap_Editor>
struct List_1_tA916C2279F858D3EA04B9218EC111035AE85A2E0;
// System.Collections.Generic.List`1<Rewired.Data.CustomController_Editor>
struct List_1_t05857A753B9E8F452AA6CAA66227A3254929C6A0;
// System.Collections.Generic.List`1<Rewired.InputAction>
struct List_1_t204B2E7FFEC229A46F18A836B2285A6D3BC63D6B;
// System.Collections.Generic.List`1<Rewired.InputBehavior>
struct List_1_t5E8F25B0CA70DA04584E4DAF70C92DF55C14F831;
// System.Collections.Generic.List`1<Rewired.InputCategory>
struct List_1_tE142BB954856979498038D83D3FB660FCF0E8AA3;
// System.Collections.Generic.List`1<Rewired.InputLayout>
struct List_1_t0FA9635DE2B30B9A38118A56A4E4CC3E6AAA915D;
// System.Collections.Generic.List`1<Rewired.InputMapCategory>
struct List_1_t8C5671EEA189CC2DFCE6DDD3F927FD3599ACE933;
// System.Collections.Generic.List`1<Rewired.Data.Player_Editor>
struct List_1_t5E2FCE5D99A00F93A974B87191F6EF7F70CAA11F;
// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs>
struct SafeAction_1_t6295D5E01D7944A8AEE5D1336EA31C2C3721C004;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Rewired.Data.Mapping.ActionCategoryMap
struct ActionCategoryMap_t17113A8C321F9860B54636F9D5D833D9A0555BAD;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Rewired.Data.ConfigVars
struct ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3;
// Rewired.Data.ControllerDataFiles
struct ControllerDataFiles_t599A8EBC3214904D6DEEFD99921E121F8CA6C2A7;
// Rewired.Dev.Tools.DirectInputJoystickElementIdentifier
struct DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// Rewired.Internal.GUIText
struct GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Rewired.Interfaces.IControllerAssigner
struct IControllerAssigner_tF97525A09D83868487800AB365691D873BACD69B;
// Rewired.Interfaces.IElementIdentifierTool
struct IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B;
// Rewired.Utils.Interfaces.IExternalTools
struct IExternalTools_t233FD6F1D63F40E6D7197A0674751E3BD02610B1;
// Rewired.InputAction
struct InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081;
// Rewired.InputCategory
struct InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C;
// Rewired.InputManager_Base
struct InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0;
// JfVkiPqxuvjpxOenWaPbtdnpqNrC
struct JfVkiPqxuvjpxOenWaPbtdnpqNrC_tAD3EC599BD987C8364327BCCAE0346D20C00C8F9;
// Rewired.Dev.Tools.JoystickElementIdentifier
struct JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Rewired.Dev.Tools.OSXJoystickElementIdentifier
struct OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Rewired.PlatformInputManager
struct PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786;
// Rewired.Dev.Tools.RawInputJoystickElementIdentifier
struct RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// Rewired.Utils.SafeAction
struct SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31;
// System.String
struct String_t;
// TAqjagBhKGcWECRbpfkHPNKbpxLsA
struct TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// Rewired.Utils.Classes.Utility.TimerAbs
struct TimerAbs_t49C1588F0A9377F7A54285F7C44A6591FBA42E36;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Rewired.Dev.Tools.UnityJoystickElementIdentifier
struct UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E;
// Rewired.Data.UserData
struct UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154;
// Rewired.Data.UserDataStore
struct UserDataStore_t7FFC8F030F5FF0B24856473F6CDBD9CC62CBBEF2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// oRzHnFZUZWhymZfQjayJtJujzGt
struct oRzHnFZUZWhymZfQjayJtJujzGt_t387519A4B76739FFC49C8E3D119FA67A0FA7CBC0;
// rlfXkJTrHZdpPrmFzvJfeOpwdxFF
struct rlfXkJTrHZdpPrmFzvJfeOpwdxFF_t92D577FF2385AF1C7F87003759294BE9754F3ABD;
// xOiQkoWIhAqWIndPaCalnRkiGbJC
struct xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB;
// Rewired.Data.ConfigVars/EditorVars
struct EditorVars_t5AE2ADF7F0F42E42D3D477925DB1FE133ADAD682;
// Rewired.Data.ConfigVars/PlatformVars
struct PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87;
// Rewired.Data.ConfigVars/PlatformVars_GameCoreScarlett
struct PlatformVars_GameCoreScarlett_tAB9E09C9718FF0AA9DEA705CEDD000FE72593B7F;
// Rewired.Data.ConfigVars/PlatformVars_GameCoreXboxOne
struct PlatformVars_GameCoreXboxOne_tCF651D8D1CCC76DFF542B0B5104C52697A459640;
// Rewired.Data.ConfigVars/PlatformVars_OSXStandalone
struct PlatformVars_OSXStandalone_t4A4F8397B2B479DA2FF2C79CF7971FD29FC61B04;
// Rewired.Data.ConfigVars/PlatformVars_PS5
struct PlatformVars_PS5_t610DDC3CB70D06A2423ADB4F9E5D2664E0D7AADF;
// Rewired.Data.ConfigVars/PlatformVars_Stadia
struct PlatformVars_Stadia_t266E646AE50B1DB8A9B9208BDA8CFFE68E7D2ED2;
// Rewired.Data.ConfigVars/PlatformVars_WindowsStandalone
struct PlatformVars_WindowsStandalone_t8800F0E9900A23B8CDDD65BC291F3A7955FFEA3A;
// Rewired.Data.ConfigVars/PlatformVars_WindowsUWP
struct PlatformVars_WindowsUWP_tCB23AF028BD504F84F9FBDDD4E6EDF89C942BD34;
// Rewired.Dev.Tools.DebugInformation/WcXKlHfBgbvFFEGLSHvedVGNHLqS
struct WcXKlHfBgbvFFEGLSHvedVGNHLqS_tA19FB5B528F1179B1BA93C51DAA543DB308822E7;
// Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM
struct kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781;
// Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc
struct tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906;
// Rewired.ReInput/ConfigHelper
struct ConfigHelper_t04A7167E7755E054F63F8B27CB10FE618D85F8BD;
// Rewired.ReInput/ControllerHelper
struct ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E;
// Rewired.ReInput/MappingHelper
struct MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662;
// Rewired.ReInput/PlayerHelper
struct PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C;
// Rewired.ReInput/TimeHelper
struct TimeHelper_t69098AFC84A038B0FE6C972CB520EA302C841355;
// Rewired.ReInput/UnityTouch
struct UnityTouch_t2075B37418F4CC7F686589B5EA9722FE1E0606FF;
// Rewired.ReInput/VGGFRlKCiDzJEBFzELCBbDLbrdNsb
struct VGGFRlKCiDzJEBFzELCBbDLbrdNsb_t5447C7DA708D817444C5DB41FA444E0A819CEB0F;
// Rewired.ReInput/yRMIEBZWdRbQqWIebbpueNjshnqb
struct yRMIEBZWdRbQqWIebbpueNjshnqb_tA22AE88E0F0DE7D24F950F81D54AA2EEA22B039B;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExternalTools_t233FD6F1D63F40E6D7197A0674751E3BD02610B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityInputHelper_t959292317C3649D3C04AD35D7787EE7FE410A247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral03969F83154B488FA3A798FA664550F1A33996CE;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13F5CC8C83BB6BC2997C6E830ECDCDF5913FC10E;
IL2CPP_EXTERN_C String_t* _stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD;
IL2CPP_EXTERN_C String_t* _stringLiteral27B652AE39F0AE74AD50D5C2040AC9C2BBDAEBAE;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA346E3C106BF0D8607F3D8E566CA7070808E44;
IL2CPP_EXTERN_C String_t* _stringLiteral40E1D0A66812FA0948B7C8131C7D5D5737A3CCDD;
IL2CPP_EXTERN_C String_t* _stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F;
IL2CPP_EXTERN_C String_t* _stringLiteral548805B0FDC9A0CB7AB0F6B7AC13F5043C7B1F42;
IL2CPP_EXTERN_C String_t* _stringLiteral5A1F57E65AC00CD6E53EDDFCEEF627E63E45C58D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0AD0FB9E41C1CE1213BD4E556D70444FEA8032;
IL2CPP_EXTERN_C String_t* _stringLiteral600A8B8F543C3D1BB63823DE7A375907E2625672;
IL2CPP_EXTERN_C String_t* _stringLiteral63782A242F395C6C620CDF0025BBD66B1BE4E20B;
IL2CPP_EXTERN_C String_t* _stringLiteral6ADF453CCEAF8E674E834BB81097F5BC03BF9247;
IL2CPP_EXTERN_C String_t* _stringLiteral7008BD3428A766E890BE2E1F4C0F4E26E797D8D3;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral77B8D59D766321835142B3F880D4222FD2BDEAD0;
IL2CPP_EXTERN_C String_t* _stringLiteral7A40B78CF4011DEE07243DD42B66D11747582EAE;
IL2CPP_EXTERN_C String_t* _stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3;
IL2CPP_EXTERN_C String_t* _stringLiteral94E3A27666ABF8B8E1921A58EFF96764A295B411;
IL2CPP_EXTERN_C String_t* _stringLiteral98640301199A1D7C9AE6CBFAC5E6D60D65750B91;
IL2CPP_EXTERN_C String_t* _stringLiteral9BAFB2F9E75CBEA30E4187889DB82B62E1365E67;
IL2CPP_EXTERN_C String_t* _stringLiteral9E2E714465BB3B0FDD97A93398FA4A83D46650E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB2105B13C9D7F35217FFA0957233B25CBBF2CC2B;
IL2CPP_EXTERN_C String_t* _stringLiteralB324281D4A5B48535CFD0901F0A8CA3E373301E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB9207916909892478747D50EF98A5247A2790F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBD639200F77424060FDFD7BD607E6B0FA81F61DD;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC9367551CC05AED35C84D25A0C8E937BF80E8371;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAECD05BD6089FC3C8277C3E7EAD8CCF2D1A6267;
IL2CPP_EXTERN_C String_t* _stringLiteralE0BF0DC38B5BFE13A19D4C539A0E2EE502B7FD82;
IL2CPP_EXTERN_C String_t* _stringLiteralEB5FE69F3D2EFF0F03278C48F3858A6FB7A1D271;
IL2CPP_EXTERN_C String_t* _stringLiteralEC09211A1C4A0E460BD8050A2A8A23D6367357FA;
IL2CPP_EXTERN_C String_t* _stringLiteralF748A5A4C122F1116474B0671EEF38401C66BAED;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7F76E6A228EE7C181A1EFACEB2CB48884B4510;
IL2CPP_EXTERN_C String_t* _stringLiteralFBF2CBE3113B4FE6AB9A4B85ACF672DCBAE3B8E3;
IL2CPP_EXTERN_C const RuntimeType* InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2;
struct InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// Rewired.InputCategory
struct InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C  : public RuntimeObject
{
	// System.String Rewired.InputCategory::_name
	String_t* ____name_0;
	// System.String Rewired.InputCategory::_descriptiveName
	String_t* ____descriptiveName_1;
	// System.String Rewired.InputCategory::_tag
	String_t* ____tag_2;
	// System.Int32 Rewired.InputCategory::_id
	int32_t ____id_3;
	// System.Boolean Rewired.InputCategory::_userAssignable
	bool ____userAssignable_4;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Rewired.PlatformInputManager
struct PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786  : public RuntimeObject
{
	// System.Action`1<Rewired.BridgedController> Rewired.PlatformInputManager::_DeviceConnectedEvent
	Action_1_t9CD8F2B591781864AD5E94CBBBD3F20C4EE0A8CE* ____DeviceConnectedEvent_0;
	// System.Action`1<Rewired.ControllerDisconnectedEventArgs> Rewired.PlatformInputManager::_DeviceDisconnectedEvent
	Action_1_tB1AAD54C2BE20C99D284C4B2ADB0FAA0FBA9E9E7* ____DeviceDisconnectedEvent_1;
	// System.Action`1<Rewired.UpdateControllerInfoEventArgs> Rewired.PlatformInputManager::_UpdateControllerInfoEvent
	Action_1_tAC42970D12A5FD24DB34573E21645518E36F210D* ____UpdateControllerInfoEvent_2;
	// System.Action Rewired.PlatformInputManager::_SystemDeviceConnectedEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____SystemDeviceConnectedEvent_3;
	// System.Action Rewired.PlatformInputManager::_SystemDeviceDisconnectedEvent
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____SystemDeviceDisconnectedEvent_4;
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

// Rewired.Data.UserData
struct UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154  : public RuntimeObject
{
	// Rewired.Data.ConfigVars Rewired.Data.UserData::configVars
	ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* ___configVars_0;
	// System.Collections.Generic.List`1<Rewired.Data.Player_Editor> Rewired.Data.UserData::players
	List_1_t5E2FCE5D99A00F93A974B87191F6EF7F70CAA11F* ___players_1;
	// System.Collections.Generic.List`1<Rewired.InputAction> Rewired.Data.UserData::actions
	List_1_t204B2E7FFEC229A46F18A836B2285A6D3BC63D6B* ___actions_2;
	// System.Collections.Generic.List`1<Rewired.InputCategory> Rewired.Data.UserData::actionCategories
	List_1_tE142BB954856979498038D83D3FB660FCF0E8AA3* ___actionCategories_3;
	// Rewired.Data.Mapping.ActionCategoryMap Rewired.Data.UserData::actionCategoryMap
	ActionCategoryMap_t17113A8C321F9860B54636F9D5D833D9A0555BAD* ___actionCategoryMap_4;
	// System.Collections.Generic.List`1<Rewired.InputBehavior> Rewired.Data.UserData::inputBehaviors
	List_1_t5E8F25B0CA70DA04584E4DAF70C92DF55C14F831* ___inputBehaviors_5;
	// System.Collections.Generic.List`1<Rewired.InputMapCategory> Rewired.Data.UserData::mapCategories
	List_1_t8C5671EEA189CC2DFCE6DDD3F927FD3599ACE933* ___mapCategories_6;
	// System.Collections.Generic.List`1<Rewired.InputLayout> Rewired.Data.UserData::joystickLayouts
	List_1_t0FA9635DE2B30B9A38118A56A4E4CC3E6AAA915D* ___joystickLayouts_7;
	// System.Collections.Generic.List`1<Rewired.InputLayout> Rewired.Data.UserData::keyboardLayouts
	List_1_t0FA9635DE2B30B9A38118A56A4E4CC3E6AAA915D* ___keyboardLayouts_8;
	// System.Collections.Generic.List`1<Rewired.InputLayout> Rewired.Data.UserData::mouseLayouts
	List_1_t0FA9635DE2B30B9A38118A56A4E4CC3E6AAA915D* ___mouseLayouts_9;
	// System.Collections.Generic.List`1<Rewired.InputLayout> Rewired.Data.UserData::customControllerLayouts
	List_1_t0FA9635DE2B30B9A38118A56A4E4CC3E6AAA915D* ___customControllerLayouts_10;
	// System.Collections.Generic.List`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::joystickMaps
	List_1_tA916C2279F858D3EA04B9218EC111035AE85A2E0* ___joystickMaps_11;
	// System.Collections.Generic.List`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::keyboardMaps
	List_1_tA916C2279F858D3EA04B9218EC111035AE85A2E0* ___keyboardMaps_12;
	// System.Collections.Generic.List`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::mouseMaps
	List_1_tA916C2279F858D3EA04B9218EC111035AE85A2E0* ___mouseMaps_13;
	// System.Collections.Generic.List`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::customControllerMaps
	List_1_tA916C2279F858D3EA04B9218EC111035AE85A2E0* ___customControllerMaps_14;
	// System.Collections.Generic.List`1<Rewired.Data.CustomController_Editor> Rewired.Data.UserData::customControllers
	List_1_t05857A753B9E8F452AA6CAA66227A3254929C6A0* ___customControllers_15;
	// System.Collections.Generic.List`1<Rewired.Data.ControllerMapLayoutManager_RuleSet_Editor> Rewired.Data.UserData::controllerMapLayoutManagerRuleSets
	List_1_t281DCD605717CC20BA4414EF72CE15A618ED26F3* ___controllerMapLayoutManagerRuleSets_16;
	// System.Collections.Generic.List`1<Rewired.Data.ControllerMapEnabler_RuleSet_Editor> Rewired.Data.UserData::controllerMapEnablerRuleSets
	List_1_t7E826C67B1BA58F7BFCE21818A9B0A107929DB07* ___controllerMapEnablerRuleSets_17;
	// System.Collections.Generic.IList`1<Rewired.Data.Player_Editor> Rewired.Data.UserData::<Players_readOnly>k__BackingField
	RuntimeObject* ___U3CPlayers_readOnlyU3Ek__BackingField_18;
	// System.Collections.Generic.IList`1<Rewired.InputAction> Rewired.Data.UserData::<Actions_readOnly>k__BackingField
	RuntimeObject* ___U3CActions_readOnlyU3Ek__BackingField_19;
	// System.Collections.Generic.IList`1<Rewired.InputCategory> Rewired.Data.UserData::<ActionCategories_readOnly>k__BackingField
	RuntimeObject* ___U3CActionCategories_readOnlyU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<Rewired.InputBehavior> Rewired.Data.UserData::<InputBehaviors_readOnly>k__BackingField
	RuntimeObject* ___U3CInputBehaviors_readOnlyU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<Rewired.InputMapCategory> Rewired.Data.UserData::<MapCategories_readOnly>k__BackingField
	RuntimeObject* ___U3CMapCategories_readOnlyU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<Rewired.InputLayout> Rewired.Data.UserData::<JoystickLayouts_readOnly>k__BackingField
	RuntimeObject* ___U3CJoystickLayouts_readOnlyU3Ek__BackingField_23;
	// System.Collections.Generic.IList`1<Rewired.InputLayout> Rewired.Data.UserData::<KeyboardLayouts_readOnly>k__BackingField
	RuntimeObject* ___U3CKeyboardLayouts_readOnlyU3Ek__BackingField_24;
	// System.Collections.Generic.IList`1<Rewired.InputLayout> Rewired.Data.UserData::<MouseLayouts_readOnly>k__BackingField
	RuntimeObject* ___U3CMouseLayouts_readOnlyU3Ek__BackingField_25;
	// System.Collections.Generic.IList`1<Rewired.InputLayout> Rewired.Data.UserData::<CustomControllerLayouts_readOnly>k__BackingField
	RuntimeObject* ___U3CCustomControllerLayouts_readOnlyU3Ek__BackingField_26;
	// System.Collections.Generic.IList`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::<JoystickMaps_readOnly>k__BackingField
	RuntimeObject* ___U3CJoystickMaps_readOnlyU3Ek__BackingField_27;
	// System.Collections.Generic.IList`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::<KeyboardMaps_readOnly>k__BackingField
	RuntimeObject* ___U3CKeyboardMaps_readOnlyU3Ek__BackingField_28;
	// System.Collections.Generic.IList`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::<MouseMaps_readOnly>k__BackingField
	RuntimeObject* ___U3CMouseMaps_readOnlyU3Ek__BackingField_29;
	// System.Collections.Generic.IList`1<Rewired.Data.Mapping.ControllerMap_Editor> Rewired.Data.UserData::<CustomControllerMaps_readOnly>k__BackingField
	RuntimeObject* ___U3CCustomControllerMaps_readOnlyU3Ek__BackingField_30;
	// System.Collections.Generic.IList`1<Rewired.Data.ControllerMapLayoutManager_RuleSet_Editor> Rewired.Data.UserData::<ControllerMapLayoutManagerRuleSets_readOnly>k__BackingField
	RuntimeObject* ___U3CControllerMapLayoutManagerRuleSets_readOnlyU3Ek__BackingField_31;
	// System.Collections.Generic.IList`1<Rewired.Data.ControllerMapEnabler_RuleSet_Editor> Rewired.Data.UserData::<ControllerMapEnablerRuleSets_readOnly>k__BackingField
	RuntimeObject* ___U3CControllerMapEnablerRuleSets_readOnlyU3Ek__BackingField_32;
	// System.Int32 Rewired.Data.UserData::playerIdCounter
	int32_t ___playerIdCounter_33;
	// System.Int32 Rewired.Data.UserData::actionIdCounter
	int32_t ___actionIdCounter_34;
	// System.Int32 Rewired.Data.UserData::actionCategoryIdCounter
	int32_t ___actionCategoryIdCounter_35;
	// System.Int32 Rewired.Data.UserData::inputBehaviorIdCounter
	int32_t ___inputBehaviorIdCounter_36;
	// System.Int32 Rewired.Data.UserData::mapCategoryIdCounter
	int32_t ___mapCategoryIdCounter_37;
	// System.Int32 Rewired.Data.UserData::joystickLayoutIdCounter
	int32_t ___joystickLayoutIdCounter_38;
	// System.Int32 Rewired.Data.UserData::keyboardLayoutIdCounter
	int32_t ___keyboardLayoutIdCounter_39;
	// System.Int32 Rewired.Data.UserData::mouseLayoutIdCounter
	int32_t ___mouseLayoutIdCounter_40;
	// System.Int32 Rewired.Data.UserData::customControllerLayoutIdCounter
	int32_t ___customControllerLayoutIdCounter_41;
	// System.Int32 Rewired.Data.UserData::joystickMapIdCounter
	int32_t ___joystickMapIdCounter_42;
	// System.Int32 Rewired.Data.UserData::keyboardMapIdCounter
	int32_t ___keyboardMapIdCounter_43;
	// System.Int32 Rewired.Data.UserData::mouseMapIdCounter
	int32_t ___mouseMapIdCounter_44;
	// System.Int32 Rewired.Data.UserData::customControllerMapIdCounter
	int32_t ___customControllerMapIdCounter_45;
	// System.Int32 Rewired.Data.UserData::customControllerIdCounter
	int32_t ___customControllerIdCounter_46;
	// System.Int32 Rewired.Data.UserData::controllerMapLayoutManagerSetIdCounter
	int32_t ___controllerMapLayoutManagerSetIdCounter_47;
	// System.Int32 Rewired.Data.UserData::controllerMapEnablerSetIdCounter
	int32_t ___controllerMapEnablerSetIdCounter_48;
	// System.Func`2<System.Int32,System.Boolean> Rewired.Data.UserData::containsActionDelegate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___containsActionDelegate_49;
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

// xOiQkoWIhAqWIndPaCalnRkiGbJC
struct xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB  : public RuntimeObject
{
	// Rewired.Internal.GUIText xOiQkoWIhAqWIndPaCalnRkiGbJC::swsbLteqHAcshwrwNZfnjUOxlegDA
	GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* ___swsbLteqHAcshwrwNZfnjUOxlegDA_0;
	// System.String xOiQkoWIhAqWIndPaCalnRkiGbJC::IZyldefURioyzisqAsdrPFzmGZLl
	String_t* ___IZyldefURioyzisqAsdrPFzmGZLl_1;
	// System.Int32 xOiQkoWIhAqWIndPaCalnRkiGbJC::CCnAxqRszEWtcrZyuAcoJcpeqjwN
	int32_t ___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
};

// Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA
struct MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA  : public RuntimeObject
{
};

struct MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_StaticFields
{
	// System.Single Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::PjnCEYDcazMUoMWGJCCevuCvPshKA
	float ___PjnCEYDcazMUoMWGJCCevuCvPshKA_0;
	// System.Single Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::TrBwxcobNJeVfVCeqchtpIHIllrw
	float ___TrBwxcobNJeVfVCeqchtpIHIllrw_1;
};

// Rewired.Dev.Tools.DebugInformation/WcXKlHfBgbvFFEGLSHvedVGNHLqS
struct WcXKlHfBgbvFFEGLSHvedVGNHLqS_tA19FB5B528F1179B1BA93C51DAA543DB308822E7  : public RuntimeObject
{
	// Rewired.InputCategory Rewired.Dev.Tools.DebugInformation/WcXKlHfBgbvFFEGLSHvedVGNHLqS::tFhtozNSjLSTyqOZtOTNHCBPredL
	InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* ___tFhtozNSjLSTyqOZtOTNHCBPredL_0;
};

// Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn
struct hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2  : public RuntimeObject
{
};

struct hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_StaticFields
{
	// System.Int32 Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn::AGrFPoqsCWMYAKSUkHQIJDkDnRgQ
	int32_t ___AGrFPoqsCWMYAKSUkHQIJDkDnRgQ_0;
};

// Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM
struct kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781  : public RuntimeObject
{
};

struct kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_StaticFields
{
	// Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::<>9
	kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781* ___U3CU3E9_0;
	// System.Comparison`1<Rewired.InputAction> Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::<>9__16_0
	Comparison_1_t7DAA9CA371682F7CC7DD3829A755C755F248EFA8* ___U3CU3E9__16_0_1;
};

// Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT
struct qpRWyjmbAJZCwAJjRprZYqgeNAcT_tB2B9808F9F9BAEC28F08C3236467A59FFA512C6E  : public RuntimeObject
{
};

// Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc
struct tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906  : public RuntimeObject
{
	// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::wqwFeCKnhBkllTzfZEvdHzoaXHlg
	bool ___wqwFeCKnhBkllTzfZEvdHzoaXHlg_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_t5E3019368D25CF5070091F90F4D5CD6F9CFE724D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_t5E3019368D25CF5070091F90F4D5CD6F9CFE724D__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13688
struct __StaticArrayInitTypeSizeU3D13688_t865BE828A5D91B2C24E8C2E9B415E46581305277 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D13688_t865BE828A5D91B2C24E8C2E9B415E46581305277__padding[13688];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16688
struct __StaticArrayInitTypeSizeU3D16688_t3EB2D6CD60EDFC38DACA58296D649025A167B60E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16688_t3EB2D6CD60EDFC38DACA58296D649025A167B60E__padding[16688];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t2CD07312610F71E8C248365AA0505C2E3B41D6B8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t2CD07312610F71E8C248365AA0505C2E3B41D6B8__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30352
struct __StaticArrayInitTypeSizeU3D30352_t52146219732A010F2E2911260D787685214EE34D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D30352_t52146219732A010F2E2911260D787685214EE34D__padding[30352];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=528
struct __StaticArrayInitTypeSizeU3D528_t274E3683927ED620B77974C61E4ED08EC708B656 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D528_t274E3683927ED620B77974C61E4ED08EC708B656__padding[528];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD9C1690ABCA2AE21ACC66C83EEA015D19727C747  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tD9C1690ABCA2AE21ACC66C83EEA015D19727C747_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=30352 <PrivateImplementationDetails>::3D81570F62DF347E1C5258C8177FEB1B3318D84871BF789DD2A9446D57947604
	__StaticArrayInitTypeSizeU3D30352_t52146219732A010F2E2911260D787685214EE34D ___3D81570F62DF347E1C5258C8177FEB1B3318D84871BF789DD2A9446D57947604_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=13688 <PrivateImplementationDetails>::5BBBDF4BAF16C2FF947F86FE4EABE872040F6FFB7501FA48FA14D67BAFCFAF1A
	__StaticArrayInitTypeSizeU3D13688_t865BE828A5D91B2C24E8C2E9B415E46581305277 ___5BBBDF4BAF16C2FF947F86FE4EABE872040F6FFB7501FA48FA14D67BAFCFAF1A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t2CD07312610F71E8C248365AA0505C2E3B41D6B8 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=528 <PrivateImplementationDetails>::CF7DB8670B1DBAAB952E42D8DBF85D112DD82E1158ED1A4038B2DD71EDD0ACDA
	__StaticArrayInitTypeSizeU3D528_t274E3683927ED620B77974C61E4ED08EC708B656 ___CF7DB8670B1DBAAB952E42D8DBF85D112DD82E1158ED1A4038B2DD71EDD0ACDA_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::D8FC129383BFF513C55131253FB9B0EC0A8206F473F932CF0006871A8007B4CD
	__StaticArrayInitTypeSizeU3D1024_t5E3019368D25CF5070091F90F4D5CD6F9CFE724D ___D8FC129383BFF513C55131253FB9B0EC0A8206F473F932CF0006871A8007B4CD_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16688 <PrivateImplementationDetails>::F381B0143773191EE069E703BE085604D913BC08C17AD8E76556B6D477CFD241
	__StaticArrayInitTypeSizeU3D16688_t3EB2D6CD60EDFC38DACA58296D649025A167B60E ___F381B0143773191EE069E703BE085604D913BC08C17AD8E76556B6D477CFD241_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Rewired.AxisSensitivity2DType
struct AxisSensitivity2DType_t84BDEFCDD1F0B24B189ACA4D759E6AD3937051DC 
{
	// System.Int32 Rewired.AxisSensitivity2DType::value__
	int32_t ___value___2;
};

// Rewired.AxisSensitivityType
struct AxisSensitivityType_t79FA6719569C2723AB13073F29ED729184BF47A1 
{
	// System.Int32 Rewired.AxisSensitivityType::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// Rewired.DeadZone2DType
struct DeadZone2DType_tDE420FD9519C42B331FFE95EC0DE142ACA92B803 
{
	// System.Int32 Rewired.DeadZone2DType::value__
	int32_t ___value___2;
};

// Rewired.Platforms.EditorPlatform
struct EditorPlatform_t33D187BE0BD636E5EF23116C33501D22BA6F407F 
{
	// System.Int32 Rewired.Platforms.EditorPlatform::value__
	int32_t ___value___2;
};

// UnityEngine.FontStyle
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;
};

// Rewired.Platforms.GameCoreScarlettPrimaryInputSource
struct GameCoreScarlettPrimaryInputSource_tE0834CB2342BEEB48AE323B88DEAB8B64AF2B3AE 
{
	// System.Int32 Rewired.Platforms.GameCoreScarlettPrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.GameCoreXboxOnePrimaryInputSource
struct GameCoreXboxOnePrimaryInputSource_t340092C768B833F9D5F159BC9969106907382303 
{
	// System.Int32 Rewired.Platforms.GameCoreXboxOnePrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.InputActionType
struct InputActionType_tF0D48369F4706DCE1CA9B47070A231CBDCCFD875 
{
	// System.Int32 Rewired.InputActionType::value__
	int32_t ___value___2;
};

// Rewired.InputSource
struct InputSource_t7E04F49CA0BC82466AE697DC6675F1FBEC328B2A 
{
	// System.Int32 Rewired.InputSource::value__
	int32_t ___value___2;
};

// UnityEngine.KeyCode
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;
};

// Rewired.Platforms.LinuxStandalonePrimaryInputSource
struct LinuxStandalonePrimaryInputSource_tC7DD22229B3C0CA4B3E44A50B0F6A50FC6670E2E 
{
	// System.Int32 Rewired.Platforms.LinuxStandalonePrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Config.LogLevelFlags
struct LogLevelFlags_t38350E1D196D37CF9B7599733EB41488D04EA6B5 
{
	// System.Int32 Rewired.Config.LogLevelFlags::value__
	int32_t ___value___2;
};

// Rewired.Platforms.OSXStandalonePrimaryInputSource
struct OSXStandalonePrimaryInputSource_t07F71B7DAE41135B3A2B5BC6D162689EDAD47D39 
{
	// System.Int32 Rewired.Platforms.OSXStandalonePrimaryInputSource::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Rewired.Platforms.PS4PrimaryInputSource
struct PS4PrimaryInputSource_t139990C73F83DF5110B7B7825CE3BB762C56E991 
{
	// System.Int32 Rewired.Platforms.PS4PrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.PS5PrimaryInputSource
struct PS5PrimaryInputSource_t8AB79773EA5B656EBD1EF4D4BE6D6C683B66E658 
{
	// System.Int32 Rewired.Platforms.PS5PrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.Platform
struct Platform_tE434287D5FAAE49534374FB4EE07A9A7EEC84B60 
{
	// System.Int32 Rewired.Platforms.Platform::value__
	int32_t ___value___2;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Rewired.Platforms.ScriptingAPILevel
struct ScriptingAPILevel_t81C08925F5D176C67A3439E90DE1550360E4111A 
{
	// System.Int32 Rewired.Platforms.ScriptingAPILevel::value__
	int32_t ___value___2;
};

// Rewired.Platforms.ScriptingBackend
struct ScriptingBackend_t607B76BA77CEDDDEE78731070C4C1E56893E25CC 
{
	// System.Int32 Rewired.Platforms.ScriptingBackend::value__
	int32_t ___value___2;
};

// Rewired.Platforms.StadiaPrimaryInputSource
struct StadiaPrimaryInputSource_t17B16F3D121111B85DEC048D260A79BF69D5D48A 
{
	// System.Int32 Rewired.Platforms.StadiaPrimaryInputSource::value__
	int32_t ___value___2;
};

// UnityEngine.TextAlignment
struct TextAlignment_t0280CA8FF36D0B0FDCDB321B0E06F7B08BA62524 
{
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___2;
};

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// Rewired.Config.ThrottleCalibrationMode
struct ThrottleCalibrationMode_tD6E17F9D5067F268C81435F6CB1F6AA205CB4DAF 
{
	// System.Int32 Rewired.Config.ThrottleCalibrationMode::value__
	int32_t ___value___2;
};

// Rewired.Config.UpdateLoopSetting
struct UpdateLoopSetting_tA69EEF3F43D9CED577AF7DD8D7C7D0FE81268B28 
{
	// System.Int32 Rewired.Config.UpdateLoopSetting::value__
	int32_t ___value___2;
};

// Rewired.UpdateLoopType
struct UpdateLoopType_t54D15B6C8AD3EE8D49B68462CDC608A42F0359FB 
{
	// System.Int32 Rewired.UpdateLoopType::value__
	int32_t ___value___2;
};

// Rewired.Platforms.WebGLPrimaryInputSource
struct WebGLPrimaryInputSource_tFD9020E22F4DE8234FAB77030D52FA6741BE6BE0 
{
	// System.Int32 Rewired.Platforms.WebGLPrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.WebplayerPlatform
struct WebplayerPlatform_t4B3EEFC074B54E11E5F2D8034768A84C9B1192F3 
{
	// System.Int32 Rewired.Platforms.WebplayerPlatform::value__
	int32_t ___value___2;
};

// Rewired.Platforms.WindowsStandalonePrimaryInputSource
struct WindowsStandalonePrimaryInputSource_t0DD0C817417905511F803B64C9890462C6E6E561 
{
	// System.Int32 Rewired.Platforms.WindowsStandalonePrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.WindowsUWPPrimaryInputSource
struct WindowsUWPPrimaryInputSource_t61EF0956F532C6672A3D673CADAF4850B187B0AD 
{
	// System.Int32 Rewired.Platforms.WindowsUWPPrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Platforms.XboxOnePrimaryInputSource
struct XboxOnePrimaryInputSource_tF668A2B698F621DBBB2BA9D66DEDFA1C87CDC5AD 
{
	// System.Int32 Rewired.Platforms.XboxOnePrimaryInputSource::value__
	int32_t ___value___2;
};

// Rewired.Dev.Tools.DebugInformation/iizJVUrWQePckVnlBDGUdIyrIGSY
struct iizJVUrWQePckVnlBDGUdIyrIGSY_tD8317159787733C48ECDE9F7ED50A1C978EDEF76 
{
	// System.Int32 Rewired.Dev.Tools.DebugInformation/iizJVUrWQePckVnlBDGUdIyrIGSY::value__
	int32_t ___value___2;
};

// UnityEngine.GUILayoutOption/Type
struct Type_t94B090894A3B9A5C5AEBD91800DB10688CC00F4A 
{
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Rewired.Data.ConfigVars
struct ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3  : public RuntimeObject
{
	// Rewired.Config.UpdateLoopSetting Rewired.Data.ConfigVars::updateLoop
	int32_t ___updateLoop_0;
	// System.Boolean Rewired.Data.ConfigVars::alwaysUseUnityInput
	bool ___alwaysUseUnityInput_1;
	// Rewired.Platforms.WindowsStandalonePrimaryInputSource Rewired.Data.ConfigVars::windowsStandalonePrimaryInputSource
	int32_t ___windowsStandalonePrimaryInputSource_2;
	// Rewired.Platforms.OSXStandalonePrimaryInputSource Rewired.Data.ConfigVars::osx_primaryInputSource
	int32_t ___osx_primaryInputSource_3;
	// Rewired.Platforms.LinuxStandalonePrimaryInputSource Rewired.Data.ConfigVars::linux_primaryInputSource
	int32_t ___linux_primaryInputSource_4;
	// Rewired.Platforms.WindowsUWPPrimaryInputSource Rewired.Data.ConfigVars::windowsUWP_primaryInputSource
	int32_t ___windowsUWP_primaryInputSource_5;
	// Rewired.Platforms.XboxOnePrimaryInputSource Rewired.Data.ConfigVars::xboxOne_primaryInputSource
	int32_t ___xboxOne_primaryInputSource_6;
	// Rewired.Platforms.GameCoreXboxOnePrimaryInputSource Rewired.Data.ConfigVars::gameCoreXboxOne_primaryInputSource
	int32_t ___gameCoreXboxOne_primaryInputSource_7;
	// Rewired.Platforms.GameCoreScarlettPrimaryInputSource Rewired.Data.ConfigVars::gameCoreScarlett_primaryInputSource
	int32_t ___gameCoreScarlett_primaryInputSource_8;
	// Rewired.Platforms.PS4PrimaryInputSource Rewired.Data.ConfigVars::ps4_primaryInputSource
	int32_t ___ps4_primaryInputSource_9;
	// Rewired.Platforms.PS5PrimaryInputSource Rewired.Data.ConfigVars::ps5_primaryInputSource
	int32_t ___ps5_primaryInputSource_10;
	// Rewired.Platforms.WebGLPrimaryInputSource Rewired.Data.ConfigVars::webGL_primaryInputSource
	int32_t ___webGL_primaryInputSource_11;
	// Rewired.Platforms.StadiaPrimaryInputSource Rewired.Data.ConfigVars::stadia_primaryInputSource
	int32_t ___stadia_primaryInputSource_12;
	// System.Boolean Rewired.Data.ConfigVars::useXInput
	bool ___useXInput_13;
	// System.Boolean Rewired.Data.ConfigVars::useNativeMouse
	bool ___useNativeMouse_14;
	// System.Boolean Rewired.Data.ConfigVars::useEnhancedDeviceSupport
	bool ___useEnhancedDeviceSupport_15;
	// System.Boolean Rewired.Data.ConfigVars::windowsStandalone_useSteamRawInputControllerWorkaround
	bool ___windowsStandalone_useSteamRawInputControllerWorkaround_16;
	// System.Boolean Rewired.Data.ConfigVars::osxStandalone_useEnhancedDeviceSupport
	bool ___osxStandalone_useEnhancedDeviceSupport_17;
	// System.Boolean Rewired.Data.ConfigVars::android_supportUnknownGamepads
	bool ___android_supportUnknownGamepads_18;
	// System.Boolean Rewired.Data.ConfigVars::ps4_assignJoysticksByPS4JoyId
	bool ___ps4_assignJoysticksByPS4JoyId_19;
	// System.Boolean Rewired.Data.ConfigVars::useSteamControllerSupport
	bool ___useSteamControllerSupport_20;
	// System.Boolean Rewired.Data.ConfigVars::logToScreen
	bool ___logToScreen_21;
	// System.Boolean Rewired.Data.ConfigVars::runInEditMode
	bool ___runInEditMode_22;
	// System.Boolean Rewired.Data.ConfigVars::allowInputInEditorSceneView
	bool ___allowInputInEditorSceneView_23;
	// Rewired.Data.ConfigVars/PlatformVars_WindowsStandalone Rewired.Data.ConfigVars::platformVars_windowsStandalone
	PlatformVars_WindowsStandalone_t8800F0E9900A23B8CDDD65BC291F3A7955FFEA3A* ___platformVars_windowsStandalone_24;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_linuxStandalone
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_linuxStandalone_25;
	// Rewired.Data.ConfigVars/PlatformVars_OSXStandalone Rewired.Data.ConfigVars::platformVars_osxStandalone
	PlatformVars_OSXStandalone_t4A4F8397B2B479DA2FF2C79CF7971FD29FC61B04* ___platformVars_osxStandalone_26;
	// Rewired.Data.ConfigVars/PlatformVars_WindowsUWP Rewired.Data.ConfigVars::platformVars_windowsUWP
	PlatformVars_WindowsUWP_tCB23AF028BD504F84F9FBDDD4E6EDF89C942BD34* ___platformVars_windowsUWP_27;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_iOS
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_iOS_28;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_tvOS
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_tvOS_29;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_android
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_android_30;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_ps4
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_ps4_31;
	// Rewired.Data.ConfigVars/PlatformVars_PS5 Rewired.Data.ConfigVars::platformVars_ps5
	PlatformVars_PS5_t610DDC3CB70D06A2423ADB4F9E5D2664E0D7AADF* ___platformVars_ps5_32;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_psVita
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_psVita_33;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_xboxOne
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_xboxOne_34;
	// Rewired.Data.ConfigVars/PlatformVars_GameCoreXboxOne Rewired.Data.ConfigVars::platformVars_gameCoreXboxOne
	PlatformVars_GameCoreXboxOne_tCF651D8D1CCC76DFF542B0B5104C52697A459640* ___platformVars_gameCoreXboxOne_35;
	// Rewired.Data.ConfigVars/PlatformVars_GameCoreScarlett Rewired.Data.ConfigVars::platformVars_gameCoreScarlett
	PlatformVars_GameCoreScarlett_tAB9E09C9718FF0AA9DEA705CEDD000FE72593B7F* ___platformVars_gameCoreScarlett_36;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_switch
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_switch_37;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_webGL
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_webGL_38;
	// Rewired.Data.ConfigVars/PlatformVars_Stadia Rewired.Data.ConfigVars::platformVars_stadia
	PlatformVars_Stadia_t266E646AE50B1DB8A9B9208BDA8CFFE68E7D2ED2* ___platformVars_stadia_39;
	// Rewired.Data.ConfigVars/PlatformVars Rewired.Data.ConfigVars::platformVars_unknown
	PlatformVars_tF737B3A64AA3FC58BCFC8EE59301811595B60D87* ___platformVars_unknown_40;
	// System.Int32 Rewired.Data.ConfigVars::maxJoysticksPerPlayer
	int32_t ___maxJoysticksPerPlayer_41;
	// System.Boolean Rewired.Data.ConfigVars::autoAssignJoysticks
	bool ___autoAssignJoysticks_42;
	// System.Boolean Rewired.Data.ConfigVars::assignJoysticksToPlayingPlayersOnly
	bool ___assignJoysticksToPlayingPlayersOnly_43;
	// System.Boolean Rewired.Data.ConfigVars::distributeJoysticksEvenly
	bool ___distributeJoysticksEvenly_44;
	// System.Boolean Rewired.Data.ConfigVars::reassignJoystickToPreviousOwnerOnReconnect
	bool ___reassignJoystickToPreviousOwnerOnReconnect_45;
	// Rewired.DeadZone2DType Rewired.Data.ConfigVars::defaultJoystickAxis2DDeadZoneType
	int32_t ___defaultJoystickAxis2DDeadZoneType_46;
	// Rewired.AxisSensitivity2DType Rewired.Data.ConfigVars::defaultJoystickAxis2DSensitivityType
	int32_t ___defaultJoystickAxis2DSensitivityType_47;
	// Rewired.AxisSensitivityType Rewired.Data.ConfigVars::defaultAxisSensitivityType
	int32_t ___defaultAxisSensitivityType_48;
	// System.Boolean Rewired.Data.ConfigVars::force4WayHats
	bool ___force4WayHats_49;
	// Rewired.Config.ThrottleCalibrationMode Rewired.Data.ConfigVars::throttleCalibrationMode
	int32_t ___throttleCalibrationMode_50;
	// System.Boolean Rewired.Data.ConfigVars::activateActionButtonsOnNegativeValue
	bool ___activateActionButtonsOnNegativeValue_51;
	// System.Boolean Rewired.Data.ConfigVars::deferControllerConnectedEventsOnStart
	bool ___deferControllerConnectedEventsOnStart_52;
	// Rewired.Config.LogLevelFlags Rewired.Data.ConfigVars::logLevel
	int32_t ___logLevel_53;
	// Rewired.Data.ConfigVars/EditorVars Rewired.Data.ConfigVars::editorSettings
	EditorVars_t5AE2ADF7F0F42E42D3D477925DB1FE133ADAD682* ___editorSettings_54;
	// System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.ConfigVars/cDbmxJFXWVduXCjwppwkvgZNqeHu> Rewired.Data.ConfigVars::__platformVarsDict
	Dictionary_2_tEA566EE4F7F044784DCA00DA5477CFA792068B8C* _____platformVarsDict_55;
	// System.Collections.Generic.Dictionary`2<System.Int32,Rewired.Data.ConfigVars/dwkgBlGxqjjCFmiEzxmVruJOuxuP> Rewired.Data.ConfigVars::__getSetPlatformVariableDict
	Dictionary_2_tF06E3E42A9CAE3A7EA4814D3F7EB70038D0F03EF* _____getSetPlatformVariableDict_56;
	// Rewired.Utils.Classes.Data.KeyedGetSetValueStore`1<System.String> Rewired.Data.ConfigVars::__configVarsValues
	KeyedGetSetValueStore_1_t42FBB8435F6E1317064A12E5096EAC021DF80045* _____configVarsValues_57;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Rewired.Data.ConfigVars::__valueDelegates
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _____valueDelegates_58;
};

// UnityEngine.GUILayoutOption
struct GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14  : public RuntimeObject
{
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject* ___value_1;
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Rewired.InputAction
struct InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081  : public RuntimeObject
{
	// System.Int32 Rewired.InputAction::_id
	int32_t ____id_0;
	// System.String Rewired.InputAction::_name
	String_t* ____name_1;
	// Rewired.InputActionType Rewired.InputAction::_type
	int32_t ____type_2;
	// System.String Rewired.InputAction::_descriptiveName
	String_t* ____descriptiveName_3;
	// System.String Rewired.InputAction::_positiveDescriptiveName
	String_t* ____positiveDescriptiveName_4;
	// System.String Rewired.InputAction::_negativeDescriptiveName
	String_t* ____negativeDescriptiveName_5;
	// System.Int32 Rewired.InputAction::_behaviorId
	int32_t ____behaviorId_6;
	// System.Boolean Rewired.InputAction::_userAssignable
	bool ____userAssignable_7;
	// System.Int32 Rewired.InputAction::_categoryId
	int32_t ____categoryId_8;
	// System.String Rewired.InputAction::KRkGKFiKbDsUREKwpXtRYxXtkMBd
	String_t* ___KRkGKFiKbDsUREKwpXtRYxXtkMBd_9;
	// System.String Rewired.InputAction::GNnRnmXusPRTudLYebMRCPlsrRaY
	String_t* ___GNnRnmXusPRTudLYebMRCPlsrRaY_10;
};

// Rewired.ReInput
struct ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0  : public RuntimeObject
{
};

struct ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields
{
	// Rewired.InputManager_Base Rewired.ReInput::jkoozXBewKZItYIwtQBriJXCWaDO
	InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* ___jkoozXBewKZItYIwtQBriJXCWaDO_7;
	// Rewired.PlatformInputManager Rewired.ReInput::kcuOIpNKBatckwJBgGRCgwSbHyPi
	PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786* ___kcuOIpNKBatckwJBgGRCgwSbHyPi_8;
	// JfVkiPqxuvjpxOenWaPbtdnpqNrC Rewired.ReInput::ksfehWcJeyrOvFtcfltlJWjYBpUz
	JfVkiPqxuvjpxOenWaPbtdnpqNrC_tAD3EC599BD987C8364327BCCAE0346D20C00C8F9* ___ksfehWcJeyrOvFtcfltlJWjYBpUz_9;
	// TAqjagBhKGcWECRbpfkHPNKbpxLsA Rewired.ReInput::pufaEMRhTHuKQfVnvkQxbbFTmmTc
	TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A* ___pufaEMRhTHuKQfVnvkQxbbFTmmTc_10;
	// rlfXkJTrHZdpPrmFzvJfeOpwdxFF Rewired.ReInput::RzBxphZmIoCHLXRoGvldiqxCEgwD
	rlfXkJTrHZdpPrmFzvJfeOpwdxFF_t92D577FF2385AF1C7F87003759294BE9754F3ABD* ___RzBxphZmIoCHLXRoGvldiqxCEgwD_11;
	// Rewired.Data.ControllerDataFiles Rewired.ReInput::LLqsRflfadBeGbIkqRikKTjJofTjA
	ControllerDataFiles_t599A8EBC3214904D6DEEFD99921E121F8CA6C2A7* ___LLqsRflfadBeGbIkqRikKTjJofTjA_12;
	// Rewired.Data.UserData Rewired.ReInput::APxYupdeVaIOAsHOzvIIrNRoEHuk
	UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* ___APxYupdeVaIOAsHOzvIIrNRoEHuk_13;
	// System.Boolean Rewired.ReInput::YkkXuoObeMHDnWDVivioeeRcGUPj
	bool ___YkkXuoObeMHDnWDVivioeeRcGUPj_14;
	// Rewired.Data.ConfigVars Rewired.ReInput::yKydsvixPcQdBIlgvxotXrJTbkcL
	ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* ___yKydsvixPcQdBIlgvxotXrJTbkcL_15;
	// Rewired.UpdateLoopType Rewired.ReInput::xLTAJyILitkXslAgOitHunIDBnsW
	int32_t ___xLTAJyILitkXslAgOitHunIDBnsW_16;
	// System.Boolean Rewired.ReInput::CPhHdGgouqFOShSRDZGWuqKXSAqcA
	bool ___CPhHdGgouqFOShSRDZGWuqKXSAqcA_17;
	// Rewired.Platforms.Platform Rewired.ReInput::CVmvJnFuxaglaEewBpcLpPIdHKGy
	int32_t ___CVmvJnFuxaglaEewBpcLpPIdHKGy_18;
	// Rewired.Platforms.WebplayerPlatform Rewired.ReInput::yfEeWNJEztkeSZLCedwYCIRUPgke
	int32_t ___yfEeWNJEztkeSZLCedwYCIRUPgke_19;
	// Rewired.Platforms.EditorPlatform Rewired.ReInput::EVRidQxdPrqOUltXSWFOQjCysaDc
	int32_t ___EVRidQxdPrqOUltXSWFOQjCysaDc_20;
	// System.Boolean Rewired.ReInput::AEdYNkqqTPEJRVDTimESRSMaOAbu
	bool ___AEdYNkqqTPEJRVDTimESRSMaOAbu_21;
	// Rewired.Utils.Classes.Utility.TimerAbs Rewired.ReInput::xVCLbFdTdLnVAbcGMXQAuRqgnmvi
	TimerAbs_t49C1588F0A9377F7A54285F7C44A6591FBA42E36* ___xVCLbFdTdLnVAbcGMXQAuRqgnmvi_22;
	// Rewired.ReInput/VGGFRlKCiDzJEBFzELCBbDLbrdNsb Rewired.ReInput::uQSKATTlkhPlVVKUIrtiTKmgJZXf
	VGGFRlKCiDzJEBFzELCBbDLbrdNsb_t5447C7DA708D817444C5DB41FA444E0A819CEB0F* ___uQSKATTlkhPlVVKUIrtiTKmgJZXf_23;
	// System.String Rewired.ReInput::ILDTdDYauZvhnQGLfXaeBqiEBJWbA
	String_t* ___ILDTdDYauZvhnQGLfXaeBqiEBJWbA_24;
	// System.Boolean Rewired.ReInput::VRbNLBhrJoMQXRoZDdNPGzoXYiUeA
	bool ___VRbNLBhrJoMQXRoZDdNPGzoXYiUeA_25;
	// System.Boolean Rewired.ReInput::oXnIjAacIaZfDDOuKficztONZJcU
	bool ___oXnIjAacIaZfDDOuKficztONZJcU_26;
	// System.Boolean Rewired.ReInput::KTzCNAMDVwddYjayrUIynSMAJXkU
	bool ___KTzCNAMDVwddYjayrUIynSMAJXkU_27;
	// System.Int32 Rewired.ReInput::gVSYLUDKgeyZgUFQITtxlwqocTGL
	int32_t ___gVSYLUDKgeyZgUFQITtxlwqocTGL_28;
	// System.Int32 Rewired.ReInput::_id
	int32_t ____id_29;
	// System.Int32 Rewired.ReInput::YPAejysmgoHSqqdlXexSNcdonGQF
	int32_t ___YPAejysmgoHSqqdlXexSNcdonGQF_30;
	// System.Int32 Rewired.ReInput::uRQjOtWBefPkoUHCLLkbMBMWFeucA
	int32_t ___uRQjOtWBefPkoUHCLLkbMBMWFeucA_31;
	// System.Boolean Rewired.ReInput::tOkZXKHYttsFNppBtdSKgRNmExzhA
	bool ___tOkZXKHYttsFNppBtdSKgRNmExzhA_32;
	// Rewired.ReInput/UnityTouch Rewired.ReInput::EBWCAQeGjBsUAJCdlwimiQBBaLQiA
	UnityTouch_t2075B37418F4CC7F686589B5EA9722FE1E0606FF* ___EBWCAQeGjBsUAJCdlwimiQBBaLQiA_33;
	// Rewired.ReInput/PlayerHelper Rewired.ReInput::sTrVDmgqeoKTZKLQWAnJfzMZHxzZ
	PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* ___sTrVDmgqeoKTZKLQWAnJfzMZHxzZ_34;
	// Rewired.ReInput/ControllerHelper Rewired.ReInput::eCiGKRaLTZZPnGLXtQIuxlbTsIZW
	ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E* ___eCiGKRaLTZZPnGLXtQIuxlbTsIZW_35;
	// Rewired.ReInput/MappingHelper Rewired.ReInput::AyeOHdSQapsGSyJUECHqHIJRgfVCA
	MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* ___AyeOHdSQapsGSyJUECHqHIJRgfVCA_36;
	// Rewired.ReInput/TimeHelper Rewired.ReInput::QTiWWnfoMljUSnmdGURNCSBlTtJl
	TimeHelper_t69098AFC84A038B0FE6C972CB520EA302C841355* ___QTiWWnfoMljUSnmdGURNCSBlTtJl_37;
	// Rewired.ReInput/ConfigHelper Rewired.ReInput::LUsLdalNampMTBgXenCrwdGwXRlw
	ConfigHelper_t04A7167E7755E054F63F8B27CB10FE618D85F8BD* ___LUsLdalNampMTBgXenCrwdGwXRlw_38;
	// oRzHnFZUZWhymZfQjayJtJujzGt Rewired.ReInput::SfXUYqoHcOdUgBrXkdpJfBNaTtNX
	oRzHnFZUZWhymZfQjayJtJujzGt_t387519A4B76739FFC49C8E3D119FA67A0FA7CBC0* ___SfXUYqoHcOdUgBrXkdpJfBNaTtNX_39;
	// Rewired.Data.UserDataStore Rewired.ReInput::hhayUvnqBsGXoWBUjCLliCLLPOajA
	UserDataStore_t7FFC8F030F5FF0B24856473F6CDBD9CC62CBBEF2* ___hhayUvnqBsGXoWBUjCLliCLLPOajA_40;
	// Rewired.Interfaces.IControllerAssigner Rewired.ReInput::ksthrVMePXNiGlIeRykuUGDOSCrU
	RuntimeObject* ___ksthrVMePXNiGlIeRykuUGDOSCrU_41;
	// Rewired.ReInput/yRMIEBZWdRbQqWIebbpueNjshnqb Rewired.ReInput::yNkbbgMbnbErnmCxlazUCYQkOwANA
	yRMIEBZWdRbQqWIebbpueNjshnqb_tA22AE88E0F0DE7D24F950F81D54AA2EEA22B039B* ___yNkbbgMbnbErnmCxlazUCYQkOwANA_42;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::SPBWBREKCtHGdzoCNOpcvEqGAzAt
	SafeAction_1_t6295D5E01D7944A8AEE5D1336EA31C2C3721C004* ___SPBWBREKCtHGdzoCNOpcvEqGAzAt_43;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::ffNDXtGVGSllVFwxOsKpILMvCGoj
	SafeAction_1_t6295D5E01D7944A8AEE5D1336EA31C2C3721C004* ___ffNDXtGVGSllVFwxOsKpILMvCGoj_44;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs> Rewired.ReInput::njEZXXdNqKTBaHjxRDBMJvJYJguw
	SafeAction_1_t6295D5E01D7944A8AEE5D1336EA31C2C3721C004* ___njEZXXdNqKTBaHjxRDBMJvJYJguw_45;
	// Rewired.Utils.SafeAction Rewired.ReInput::bTDaHvESdACEkdrUbjjZPXftulevb
	SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31* ___bTDaHvESdACEkdrUbjjZPXftulevb_46;
	// Rewired.Utils.SafeAction Rewired.ReInput::nbJgBkvEgnHdxjvTbiYQrkfmDHgFb
	SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31* ___nbJgBkvEgnHdxjvTbiYQrkfmDHgFb_47;
	// Rewired.Utils.SafeAction Rewired.ReInput::pGQsFuQGaGXFPOaycAwCOQIXSZg
	SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31* ___pGQsFuQGaGXFPOaycAwCOQIXSZg_48;
	// Rewired.Utils.SafeAction Rewired.ReInput::dKhxPhYhCBTmzciUOzePGyFbWyQB
	SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31* ___dKhxPhYhCBTmzciUOzePGyFbWyQB_49;
	// Rewired.Utils.SafeAction Rewired.ReInput::RbHPdAbxtniltkzTKarLSCOUOSHx
	SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31* ___RbHPdAbxtniltkzTKarLSCOUOSHx_50;
	// System.Action`1<System.Boolean> Rewired.ReInput::_ApplicationFocusChangedEvent
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ____ApplicationFocusChangedEvent_51;
	// System.Action Rewired.ReInput::aHGGizmAhSWZsuPsdohsJNLsmVkf
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___aHGGizmAhSWZsuPsdohsJNLsmVkf_52;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::pFTLpyxkkcLiZGKFZfHscWcjIljgA
	Action_1_t60FB4C2B07126A34E8B4816D36F7A2065E957637* ___pFTLpyxkkcLiZGKFZfHscWcjIljgA_53;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::psBWhCEjFnHkQDUmvnUbZRXCbOCH
	Action_1_t60FB4C2B07126A34E8B4816D36F7A2065E957637* ___psBWhCEjFnHkQDUmvnUbZRXCbOCH_54;
	// System.Action`1<Rewired.UpdateLoopType> Rewired.ReInput::xfZnkBJCaDbBVzlPFemHRiTCHUcF
	Action_1_t60FB4C2B07126A34E8B4816D36F7A2065E957637* ___xfZnkBJCaDbBVzlPFemHRiTCHUcF_55;
	// System.Action Rewired.ReInput::BrreqkghsSGwPIOcIQALsyJJIdSP
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___BrreqkghsSGwPIOcIQALsyJJIdSP_56;
	// System.Action`1<System.Boolean> Rewired.ReInput::YfmZatXiThjlAuDnqWNaiiDdEDQiA
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___YfmZatXiThjlAuDnqWNaiiDdEDQiA_57;
	// System.Action`1<System.Boolean> Rewired.ReInput::npMGOUtUKoWmuINMNBlWBOcRlARFb
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___npMGOUtUKoWmuINMNBlWBOcRlARFb_58;
	// System.Action`1<System.Boolean> Rewired.ReInput::oYMeHhKFZEmkroacrLNvLkIJDVLMA
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___oYMeHhKFZEmkroacrLNvLkIJDVLMA_59;
	// System.Action`1<UnityEngine.FullScreenMode> Rewired.ReInput::mhAwjjwnxuWqgFdGFKRTvqYcbdhaA
	Action_1_t329A050FC7346A8E8F6E91FE9C9D3F99F35609E6* ___mhAwjjwnxuWqgFdGFKRTvqYcbdhaA_60;
	// System.Action Rewired.ReInput::CjUSWpkmKHhAaRuniwTTsVABOJSJ
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CjUSWpkmKHhAaRuniwTTsVABOJSJ_61;
	// System.Action`1<System.Boolean> Rewired.ReInput::btuusiuwHCPEGntwcrePVuCJaAfk
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___btuusiuwHCPEGntwcrePVuCJaAfk_62;
	// System.Double Rewired.ReInput::unscaledDeltaTime
	double ___unscaledDeltaTime_63;
	// System.Double Rewired.ReInput::unscaledTime
	double ___unscaledTime_64;
	// System.Double Rewired.ReInput::unscaledTimePrev
	double ___unscaledTimePrev_65;
	// System.UInt32 Rewired.ReInput::currentFrame
	uint32_t ___currentFrame_66;
	// System.UInt32 Rewired.ReInput::previousFrame
	uint32_t ___previousFrame_67;
	// System.UInt32 Rewired.ReInput::absFrame
	uint32_t ___absFrame_68;
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

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Rewired.Dev.Tools.DirectInputJoystickElementIdentifier
struct DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rewired.Interfaces.IElementIdentifierTool Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::MAkWUpIyGLOPqrkISqoyvxoTrzdP
	RuntimeObject* ___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
};

// Rewired.Internal.GUIText
struct GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Rewired.Internal.GUIText::JuYFLfGTwipSatbwMNrnMTJnmmbD
	String_t* ___JuYFLfGTwipSatbwMNrnMTJnmmbD_4;
	// UnityEngine.GUIStyle Rewired.Internal.GUIText::obadxuhpRRNMfttlhIdcVuPZXLrl
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___obadxuhpRRNMfttlhIdcVuPZXLrl_5;
	// UnityEngine.TextAnchor Rewired.Internal.GUIText::EFpBNTDJZKFEPZHSaoyzmWjgyFDC
	int32_t ___EFpBNTDJZKFEPZHSaoyzmWjgyFDC_6;
	// UnityEngine.TextAlignment Rewired.Internal.GUIText::BOiSZVEgvHmUmUzZQGuwneudgnSAA
	int32_t ___BOiSZVEgvHmUmUzZQGuwneudgnSAA_7;
	// System.Single Rewired.Internal.GUIText::BAUoxCOSMzUpZMRlteTZuzmNDwfG
	float ___BAUoxCOSMzUpZMRlteTZuzmNDwfG_8;
	// UnityEngine.Font Rewired.Internal.GUIText::TFqGcNNLgpimxLVVzRkNYxMeMDAm
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___TFqGcNNLgpimxLVVzRkNYxMeMDAm_9;
	// System.Int32 Rewired.Internal.GUIText::rmhAZWwpHaQvgiZJUldOgYVqxBpg
	int32_t ___rmhAZWwpHaQvgiZJUldOgYVqxBpg_10;
	// UnityEngine.FontStyle Rewired.Internal.GUIText::lkTnCsTHNtngFoLBKyEUegrtwRCo
	int32_t ___lkTnCsTHNtngFoLBKyEUegrtwRCo_11;
	// UnityEngine.Color Rewired.Internal.GUIText::rxviuPHsxQozeeVWIfRVSbQFWiNd
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rxviuPHsxQozeeVWIfRVSbQFWiNd_12;
	// UnityEngine.Vector2 Rewired.Internal.GUIText::_pixelOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____pixelOffset_13;
	// System.Boolean Rewired.Internal.GUIText::_useUnityUI
	bool ____useUnityUI_14;
	// System.Boolean Rewired.Internal.GUIText::vEaYrtRCTmpCYCGtcJrNEWthjBbw
	bool ___vEaYrtRCTmpCYCGtcJrNEWthjBbw_15;
	// System.Boolean Rewired.Internal.GUIText::GrOCBugEACmkdsQiaVmRSbCinxWQ
	bool ___GrOCBugEACmkdsQiaVmRSbCinxWQ_16;
	// System.Boolean Rewired.Internal.GUIText::YGlVlLMwHuOMWNusFrQVlzuQWKcb
	bool ___YGlVlLMwHuOMWNusFrQVlzuQWKcb_17;
	// System.Boolean Rewired.Internal.GUIText::guRbvlIgSNAvuOzmfsBNDNwhfokAA
	bool ___guRbvlIgSNAvuOzmfsBNDNwhfokAA_18;
	// System.Boolean Rewired.Internal.GUIText::mTBLcVbPvwGLkhCJtxidOEEnmmdhA
	bool ___mTBLcVbPvwGLkhCJtxidOEEnmmdhA_19;
	// System.Boolean Rewired.Internal.GUIText::mWjNKEllOWRPWrOWicvbfJllcUJcA
	bool ___mWjNKEllOWRPWrOWicvbfJllcUJcA_20;
	// System.Boolean Rewired.Internal.GUIText::skDFHTJWnxdNmysPCRBhmPoTudtE
	bool ___skDFHTJWnxdNmysPCRBhmPoTudtE_21;
	// UnityEngine.UI.Text Rewired.Internal.GUIText::GRVuUOlEtbzCcLajfDZQOMKECcDjA
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___GRVuUOlEtbzCcLajfDZQOMKECcDjA_22;
	// System.Boolean Rewired.Internal.GUIText::IbCawayguXJTqIPaNDRpcMsjkPaF
	bool ___IbCawayguXJTqIPaNDRpcMsjkPaF_23;
	// System.Boolean Rewired.Internal.GUIText::tUaCmxAHjOLOnnKijITlqFQVeyNn
	bool ___tUaCmxAHjOLOnnKijITlqFQVeyNn_24;
};

// Rewired.InputManager_Base
struct InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Rewired.InputManager_Base::_dontDestroyOnLoad
	bool ____dontDestroyOnLoad_4;
	// Rewired.Data.UserData Rewired.InputManager_Base::_userData
	UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* ____userData_5;
	// Rewired.Data.ControllerDataFiles Rewired.InputManager_Base::_controllerDataFiles
	ControllerDataFiles_t599A8EBC3214904D6DEEFD99921E121F8CA6C2A7* ____controllerDataFiles_6;
	// System.Boolean Rewired.InputManager_Base::isCompiling
	bool ___isCompiling_7;
	// System.Boolean Rewired.InputManager_Base::VjGlYMJDGHWFvFFFHGfnWMcpxGGV
	bool ___VjGlYMJDGHWFvFFFHGfnWMcpxGGV_8;
	// System.Boolean Rewired.InputManager_Base::XLMoTwoFaZCyoVizceKpBdzkUwyL
	bool ___XLMoTwoFaZCyoVizceKpBdzkUwyL_9;
	// Rewired.Platforms.EditorPlatform Rewired.InputManager_Base::editorPlatform
	int32_t ___editorPlatform_10;
	// Rewired.Platforms.Platform Rewired.InputManager_Base::platform
	int32_t ___platform_11;
	// Rewired.Platforms.WebplayerPlatform Rewired.InputManager_Base::webplayerPlatform
	int32_t ___webplayerPlatform_12;
	// System.Boolean Rewired.InputManager_Base::isEditor
	bool ___isEditor_13;
	// System.Boolean Rewired.InputManager_Base::_detectedPlatformInEditor
	bool ____detectedPlatformInEditor_14;
	// Rewired.Platforms.ScriptingBackend Rewired.InputManager_Base::scriptingBackend
	int32_t ___scriptingBackend_15;
	// Rewired.Platforms.ScriptingAPILevel Rewired.InputManager_Base::scriptingAPILevel
	int32_t ___scriptingAPILevel_16;
	// System.Boolean Rewired.InputManager_Base::QuggIODrdxRZiJZgUUGTjtqhkdFvA
	bool ___QuggIODrdxRZiJZgUUGTjtqhkdFvA_17;
	// System.Boolean Rewired.InputManager_Base::tUaCmxAHjOLOnnKijITlqFQVeyNn
	bool ___tUaCmxAHjOLOnnKijITlqFQVeyNn_18;
};

// Rewired.Dev.Tools.JoystickElementIdentifier
struct JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rewired.Interfaces.IElementIdentifierTool Rewired.Dev.Tools.JoystickElementIdentifier::MAkWUpIyGLOPqrkISqoyvxoTrzdP
	RuntimeObject* ___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
};

// Rewired.Dev.Tools.OSXJoystickElementIdentifier
struct OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rewired.Interfaces.IElementIdentifierTool Rewired.Dev.Tools.OSXJoystickElementIdentifier::MAkWUpIyGLOPqrkISqoyvxoTrzdP
	RuntimeObject* ___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
};

// Rewired.Dev.Tools.RawInputJoystickElementIdentifier
struct RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rewired.Interfaces.IElementIdentifierTool Rewired.Dev.Tools.RawInputJoystickElementIdentifier::MAkWUpIyGLOPqrkISqoyvxoTrzdP
	RuntimeObject* ___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
};

// Rewired.Dev.Tools.UnityJoystickElementIdentifier
struct UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Rewired.Interfaces.IElementIdentifierTool Rewired.Dev.Tools.UnityJoystickElementIdentifier::MAkWUpIyGLOPqrkISqoyvxoTrzdP
	RuntimeObject* ___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* m_Items[1];

	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t8B0AA056521747053A3176FCC43E9C3608940A14* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Rewired.InputManager_Base[]
struct InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044  : public RuntimeArray
{
	ALIGN_FIELD (8) InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* m_Items[1];

	inline InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::lcIgqVkLHfIqBDGhoDyrIkfqYMBHA(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_lcIgqVkLHfIqBDGhoDyrIkfqYMBHA_mDF9E9285AA7B10F1C290A11AD496CA450E50C107 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, String_t* p1, RuntimeObject* p2, const RuntimeMethod* method) ;
// System.Int32 Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn::wicgzZnvItswuJqutHTpJWiXlHne()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t hHLFiwYHgduJsTWXQsYQeHNAOVUn_wicgzZnvItswuJqutHTpJWiXlHne_mAC0FE1E4D2470630CA53FB473C4FDE15D30BDC4E_inline (const RuntimeMethod* method) ;
// System.Void Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn::WaCWosRVELmQeIMYrEVCCZPrgJCgA(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hHLFiwYHgduJsTWXQsYQeHNAOVUn_WaCWosRVELmQeIMYrEVCCZPrgJCgA_mBAA466522EB0C14177ECD0BE63EE2B8B579C7FA3 (int32_t p0, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::ZxsuhrGGFCsYoQjePGTbSMobBYgb(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_ZxsuhrGGFCsYoQjePGTbSMobBYgb_m8D2A8102E3C58F04A0D85748D9C71AAFC20BC61C (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m68E7F8C12A7768D52689E89E1E687F86569A3E78 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, String_t* ___tooltip1, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle Rewired.Dev.Tools.DebugInformation::GetToggleStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* DebugInformation_GetToggleStyle_m7005E0B50B54B3ACA31BD4B429E9F8CCB68EBC1B (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m1C34CB0A8ABC379EB2A267260DAC2DB9CF292A0B (bool ___value0, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::bkDNefRKJwVzGejlQIUlbQkQQiOV(System.String,System.Boolean,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_bkDNefRKJwVzGejlQIUlbQkQQiOV_m5E43289C7966C80C60484F2D7541332DBF4C1F84 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, bool p1, RuntimeObject* p2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842 (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::EndVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle Rewired.Dev.Tools.DebugInformation::LshmrtKLatKeZckPhfrQAnHdCfdo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* DebugInformation_LshmrtKLatKeZckPhfrQAnHdCfdo_mDE79719A0B8EB2DD9DF88EB2CAC9A8087B14BB66 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mC48AB1E8E898CA98B948149B230E7B908CC085E6 (String_t* ___text0, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style1, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA (String_t* ___text0, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUILayout_Toggle_m39FC115AFD198A05392E0EC45D5CB135708AC2FF (bool ___value0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* ___options3, const RuntimeMethod* method) ;
// System.Void Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void kCEFgMyactrNRSQAsbOVuwfjmakM__ctor_mA9CFCFEC711AEF567B9962D88EDCB1380FDB7FA4 (kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781* __this, const RuntimeMethod* method) ;
// System.String Rewired.InputAction::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m27C317BA3C050C0D2E973C91E2D320E7100DD309_inline (InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Int32 Rewired.InputAction::get_categoryId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_categoryId_m8F97E7B403867EB3DDE8B6626C78CA1DBA3F16F1_inline (InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* __this, const RuntimeMethod* method) ;
// System.Int32 Rewired.InputCategory::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputCategory_get_id_mCEB914B689357BBA676C677B0D5EF54C016A23DF_inline (InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m081B15064E4598E47201B51A1C56BB06ADBEFE3C (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Object eakSBuTDrgLhbdBRHBCudkDJWIpd::XSjBYqgZfaVOtQgHbxiEmdntjJOZ(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453 (String_t* p0, String_t* p1, const RuntimeMethod* method) ;
// System.Void Rewired.Logger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Rewired.Internal.GUIText Rewired.Internal.GUIText::CreateLogger(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.JoystickElementIdentifier::IEcFYkGNXbhgIKhKYgpBlReCEmLrA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JoystickElementIdentifier_IEcFYkGNXbhgIKhKYgpBlReCEmLrA_m868AE12E5735D817CE4CA119B5C5BE325586839E (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) ;
// Rewired.Data.UserData Rewired.ReInput::get_UserData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* ReInput_get_UserData_m98F1858B28E800E67828E9F33D927BDBB1966EBF_inline (const RuntimeMethod* method) ;
// Rewired.Data.ConfigVars Rewired.Data.UserData::get_ConfigVars()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* UserData_get_ConfigVars_m73673CAC82D73A6B1A04FED829C5118456762009_inline (UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.ReInput::get_usingUnityInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReInput_get_usingUnityInput_m6FFF902CD9B1D7BB1D9916F2EDA80A325B23E2B7_inline (const RuntimeMethod* method) ;
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, const RuntimeMethod* method) ;
// Rewired.Platforms.Platform Rewired.Utils.UnityTools::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTools_get_platform_mDD15208F3F8E597A9C6DBB14825ED65C4B6E0FC6 (const RuntimeMethod* method) ;
// System.Boolean Rewired.Utils.UnityTools::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTools_get_isEditor_m91A0DDBD16DA60DE0B8346D374171D85BAB8D5A1 (const RuntimeMethod* method) ;
// Rewired.Platforms.EditorPlatform Rewired.Utils.UnityTools::get_editorPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTools_get_editorPlatform_mEC6169A623CB3DC1776E72BD75D21521E18367E7 (const RuntimeMethod* method) ;
// Rewired.PlatformInputManager Rewired.ReInput::get_primaryInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786* ReInput_get_primaryInputManager_mA3A10E521BC81D797C02B3371D42949AF2D461A1 (const RuntimeMethod* method) ;
// System.Void Rewired.Logger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mFE26A6907677385EDC17D3A35296C997A7650A05 (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Boolean Rewired.ReInput::get_isReady()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReInput_get_isReady_m6896009A47CBE031CC6AF989F98080306D9F01E9_inline (const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.OSXJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m22E6CFF42DA47E15F2889060AC4820BBC68911A9 (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.Dev.Tools.RawInputJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m89EAB97DD72EE93E18D6C6041BBCD9EB96286EF3 (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Rewired.Logger::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_m7AFB3DE7CB55B1AF479DD909EB1A71CEEC54672D (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// Rewired.Utils.Interfaces.IExternalTools Rewired.Utils.UnityTools::get_externalTools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityTools_get_externalTools_mE7A8C087AA2EE003A30904D9D38F90770756C23E (const RuntimeMethod* method) ;
// System.Single Rewired.UnityInputHelper::GetJoystickAxisValueByJoystickId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityInputHelper_GetJoystickAxisValueByJoystickId_m96D60B413860F4B219A9CC8A2297021905F3207C (int32_t ___joystickId0, int32_t ___axisIndex1, const RuntimeMethod* method) ;
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::BozewNWraRPxVbkQCDcdZQzFBjNF(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_BozewNWraRPxVbkQCDcdZQzFBjNF_m31B03857D375A27F0CB124C2FA309FB12A83A680 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) ;
// System.Boolean Rewired.UnityInputHelper::GetJoystickButtonValueByJoystickId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityInputHelper_GetJoystickButtonValueByJoystickId_m4D0C08B6A4CE0372E4F3B4DC2DE0914E3389028D (int32_t ___joystickId0, int32_t ___buttonIndex1, const RuntimeMethod* method) ;
// System.Void Rewired.Internal.GUIText::set_text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIText_set_text_m5F1AB57C5199940A0809446D854A05947C97DB54_inline (GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::.ctor(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tcAYcfnXmtYGzfGqFNgeIzSXaEbc__ctor_m4E3137F3A96B07BAC89586DE76D23915CE000E54 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, String_t* p1, RuntimeObject* p2, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = p0;
		String_t* L_1 = p1;
		RuntimeObject* L_2 = p2;
		bool L_3;
		L_3 = tcAYcfnXmtYGzfGqFNgeIzSXaEbc_lcIgqVkLHfIqBDGhoDyrIkfqYMBHA_mDF9E9285AA7B10F1C290A11AD496CA450E50C107(__this, L_0, L_1, L_2, NULL);
		__this->___wqwFeCKnhBkllTzfZEvdHzoaXHlg_0 = L_3;
		int32_t L_4;
		L_4 = hHLFiwYHgduJsTWXQsYQeHNAOVUn_wicgzZnvItswuJqutHTpJWiXlHne_mAC0FE1E4D2470630CA53FB473C4FDE15D30BDC4E_inline(NULL);
		hHLFiwYHgduJsTWXQsYQeHNAOVUn_WaCWosRVELmQeIMYrEVCCZPrgJCgA_mBAA466522EB0C14177ECD0BE63EE2B8B579C7FA3(((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::lcIgqVkLHfIqBDGhoDyrIkfqYMBHA(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_lcIgqVkLHfIqBDGhoDyrIkfqYMBHA_mDF9E9285AA7B10F1C290A11AD496CA450E50C107 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, String_t* p1, RuntimeObject* p2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		String_t* L_0 = p1;
		String_t* L_1 = p1;
		RuntimeObject* L_2 = p2;
		bool L_3;
		L_3 = tcAYcfnXmtYGzfGqFNgeIzSXaEbc_ZxsuhrGGFCsYoQjePGTbSMobBYgb_m8D2A8102E3C58F04A0D85748D9C71AAFC20BC61C(__this, L_1, L_2, NULL);
		String_t* L_4 = p0;
		String_t* L_5 = p0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_6 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		GUIContent__ctor_m68E7F8C12A7768D52689E89E1E687F86569A3E78(L_6, L_4, L_5, /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_7;
		L_7 = DebugInformation_GetToggleStyle_m7005E0B50B54B3ACA31BD4B429E9F8CCB68EBC1B(NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_8 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_9;
		L_9 = GUILayout_Toggle_m1C34CB0A8ABC379EB2A267260DAC2DB9CF292A0B(L_3, L_6, L_7, L_8, NULL);
		RuntimeObject* L_10 = p2;
		bool L_11;
		L_11 = tcAYcfnXmtYGzfGqFNgeIzSXaEbc_bkDNefRKJwVzGejlQIUlbQkQQiOV_m5E43289C7966C80C60484F2D7541332DBF4C1F84(__this, L_0, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::ZxsuhrGGFCsYoQjePGTbSMobBYgb(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_ZxsuhrGGFCsYoQjePGTbSMobBYgb_m8D2A8102E3C58F04A0D85748D9C71AAFC20BC61C (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = p1;
		String_t* L_1 = p0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_3 = p1;
		String_t* L_4 = p0;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Add(TKey,TValue) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_3, L_4, (bool)0);
	}

IL_0011:
	{
		RuntimeObject* L_5 = p1;
		String_t* L_6 = p0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Item(TKey) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_5, L_6);
		return L_7;
	}
}
// System.Boolean Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::bkDNefRKJwVzGejlQIUlbQkQQiOV(System.String,System.Boolean,System.Collections.Generic.IDictionary`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool tcAYcfnXmtYGzfGqFNgeIzSXaEbc_bkDNefRKJwVzGejlQIUlbQkQQiOV_m5E43289C7966C80C60484F2D7541332DBF4C1F84 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, String_t* p0, bool p1, RuntimeObject* p2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = p2;
		String_t* L_1 = p0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_3 = p2;
		String_t* L_4 = p0;
		bool L_5 = p1;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Add(TKey,TValue) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		goto IL_001b;
	}

IL_0013:
	{
		RuntimeObject* L_6 = p2;
		String_t* L_7 = p0;
		bool L_8 = p1;
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t95174019FBA8234476BF5D7AB67D8DE4EF9E6877_il2cpp_TypeInfo_var, L_6, L_7, L_8);
	}

IL_001b:
	{
		bool L_9 = p1;
		return L_9;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/tcAYcfnXmtYGzfGqFNgeIzSXaEbc::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tcAYcfnXmtYGzfGqFNgeIzSXaEbc_Dispose_mDABED4FAC91ECDF0BA5AA7CFB89B69EBDDDA7B70 (tcAYcfnXmtYGzfGqFNgeIzSXaEbc_tD7BAD7332D47C03D498F3F342ECCA0737AB7E906* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0;
		L_0 = hHLFiwYHgduJsTWXQsYQeHNAOVUn_wicgzZnvItswuJqutHTpJWiXlHne_mAC0FE1E4D2470630CA53FB473C4FDE15D30BDC4E_inline(NULL);
		hHLFiwYHgduJsTWXQsYQeHNAOVUn_WaCWosRVELmQeIMYrEVCCZPrgJCgA_mBAA466522EB0C14177ECD0BE63EE2B8B579C7FA3(((int32_t)il2cpp_codegen_subtract(L_0, 1)), NULL);
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
// System.Int32 Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn::wicgzZnvItswuJqutHTpJWiXlHne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t hHLFiwYHgduJsTWXQsYQeHNAOVUn_wicgzZnvItswuJqutHTpJWiXlHne_mAC0FE1E4D2470630CA53FB473C4FDE15D30BDC4E (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ((hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_StaticFields*)il2cpp_codegen_static_fields_for(hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var))->___AGrFPoqsCWMYAKSUkHQIJDkDnRgQ_0;
		return L_0;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/hHLFiwYHgduJsTWXQsYQeHNAOVUn::WaCWosRVELmQeIMYrEVCCZPrgJCgA(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hHLFiwYHgduJsTWXQsYQeHNAOVUn_WaCWosRVELmQeIMYrEVCCZPrgJCgA_mBAA466522EB0C14177ECD0BE63EE2B8B579C7FA3 (int32_t p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = p0;
		int32_t L_1;
		L_1 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(0, L_0, NULL);
		((hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_StaticFields*)il2cpp_codegen_static_fields_for(hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var))->___AGrFPoqsCWMYAKSUkHQIJDkDnRgQ_0 = L_1;
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
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::gvYbAKDVdSCXaVPWjVjrnjMkNuplA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_gvYbAKDVdSCXaVPWjVjrnjMkNuplA_mCA17A54E7D904E2755D39B9F7900EC7B4AAE2C5C (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_BeginHorizontal_mB753A68BD1357463FEA9F7273FED94085A79BA37(L_0, NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::tbbzsJiKlGSWZRCIZveaNbtVmieD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_tbbzsJiKlGSWZRCIZveaNbtVmieD_mE92F134A4814E3B86A205EDD6251AA9E15655898 (const RuntimeMethod* method) 
{
{
		GUILayout_EndHorizontal_mCB61DC8BE8359CAB9911BDD4F2AB6819AB75DBEC(NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::vZWxrXJLoOtOYzyeHdAQZSVmCAkO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_vZWxrXJLoOtOYzyeHdAQZSVmCAkO_mA3DBC3EF1AA8DFC3DF307718D1E2DF8A702AFC4F (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_0 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_BeginVertical_mEA80BF63631637EDAAD761D32BAFC49A404F0842(L_0, NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::JBLTwkUPlIvfBQgjmTNQUDMXTznU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_JBLTwkUPlIvfBQgjmTNQUDMXTznU_mA140ABF50FFFEF1C0435535D9B1C30F33C82065D (const RuntimeMethod* method) 
{
{
		GUILayout_EndVertical_mF2C806265D9B04E715EC1656FA9392332C59EEBC(NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::OONOIbdoACiWyWsFtzHAmdYMEiHF(System.String,Rewired.Dev.Tools.DebugInformation/iizJVUrWQePckVnlBDGUdIyrIGSY)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_OONOIbdoACiWyWsFtzHAmdYMEiHF_m2BB667CA7FECF504C803C9D6B21D48F5634D8B58 (String_t* p0, int32_t p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		String_t* L_0 = p0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1;
		L_1 = DebugInformation_LshmrtKLatKeZckPhfrQAnHdCfdo_mDE79719A0B8EB2DD9DF88EB2CAC9A8087B14BB66(NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_Label_mC48AB1E8E898CA98B948149B230E7B908CC085E6(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::UxERmzGviJSHpyGPycayzmQeNewB(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_UxERmzGviJSHpyGPycayzmQeNewB_mB4DA23ABCFA45301F52C69C16AEE06EC5EF56982 (String_t* p0, String_t* p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
{
		String_t* L_0 = p0;
		String_t* L_1 = p1;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3;
		L_3 = DebugInformation_LshmrtKLatKeZckPhfrQAnHdCfdo_mDE79719A0B8EB2DD9DF88EB2CAC9A8087B14BB66(NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_4 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_Label_mC48AB1E8E898CA98B948149B230E7B908CC085E6(L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::sLNgxEZHXoMGnnPkrMYaDLJVOQA(System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void qpRWyjmbAJZCwAJjRprZYqgeNAcT_sLNgxEZHXoMGnnPkrMYaDLJVOQA_m35D4693AF784B54D4EE46D7CF85BCBA82B48726A (String_t* p0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BAFB2F9E75CBEA30E4187889DB82B62E1365E67);
		s_Il2CppMethodInitialized = true;
	}
{
		String_t* L_0 = p0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral9BAFB2F9E75CBEA30E4187889DB82B62E1365E67, NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_2 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		GUILayout_Label_mCB93C0DE81ECE87DE34C8B959C5885E9B6E4FEBA(L_1, L_2, NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.DebugInformation/qpRWyjmbAJZCwAJjRprZYqgeNAcT::NVXEmHtHZjxYopCmHzfTDBFDEsIA(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool qpRWyjmbAJZCwAJjRprZYqgeNAcT_NVXEmHtHZjxYopCmHzfTDBFDEsIA_m34BFD6EC0BC80E6E221BC31C76479B9F6C950F21 (String_t* p0, bool p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0 = p1;
		String_t* L_1 = p0;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = DebugInformation_LshmrtKLatKeZckPhfrQAnHdCfdo_mDE79719A0B8EB2DD9DF88EB2CAC9A8087B14BB66(NULL);
		GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2* L_3 = (GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2*)SZArrayNew(GUILayoutOptionU5BU5D_t24AB80AB9355D784F2C65E12A4D0CC2E0C914CA2_il2cpp_TypeInfo_var, (uint32_t)0);
		bool L_4;
		L_4 = GUILayout_Toggle_m39FC115AFD198A05392E0EC45D5CB135708AC2FF(L_0, L_1, L_2, L_3, NULL);
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
// System.Single Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::fukqiRqsqPclbIMxSlQGdZqdJRXA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMdVtmgFjmXgcrpcrDtogtPWPefLA_fukqiRqsqPclbIMxSlQGdZqdJRXA_m87ABD0B2E78C62AA76090242C8AE772A636EC479 (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		float L_0 = ((MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_StaticFields*)il2cpp_codegen_static_fields_for(MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var))->___PjnCEYDcazMUoMWGJCCevuCvPshKA_0;
		return L_0;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::lKZqeKMRneOwjprqAIheYMrxxJV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMdVtmgFjmXgcrpcrDtogtPWPefLA_lKZqeKMRneOwjprqAIheYMrxxJV_mCF862EBD2C3A8559C0164A65B044B3D013F618E4 (float p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		float L_0 = p0;
		((MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_StaticFields*)il2cpp_codegen_static_fields_for(MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var))->___PjnCEYDcazMUoMWGJCCevuCvPshKA_0 = L_0;
		return;
	}
}
// System.Single Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::xKATsUezDEyrWhSYaDtJAdZZRnzH()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MMdVtmgFjmXgcrpcrDtogtPWPefLA_xKATsUezDEyrWhSYaDtJAdZZRnzH_mB1AF4D4150D6BF001C75F27FDC48B9A859E6220B (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		float L_0 = ((MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_StaticFields*)il2cpp_codegen_static_fields_for(MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var))->___TrBwxcobNJeVfVCeqchtpIHIllrw_1;
		return L_0;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/MMdVtmgFjmXgcrpcrDtogtPWPefLA::vBzhykLUfzBZdfMVYDHUSdockZCM(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MMdVtmgFjmXgcrpcrDtogtPWPefLA_vBzhykLUfzBZdfMVYDHUSdockZCM_mF649F6247E1EF8AF7736C07D1C2C391B2A6B44D2 (float p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		float L_0 = p0;
		((MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_StaticFields*)il2cpp_codegen_static_fields_for(MMdVtmgFjmXgcrpcrDtogtPWPefLA_tCB367C33579086DD91AD2EA4F0D11F8979F413EA_il2cpp_TypeInfo_var))->___TrBwxcobNJeVfVCeqchtpIHIllrw_1 = L_0;
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
// System.Void Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void kCEFgMyactrNRSQAsbOVuwfjmakM__cctor_m65A122ED53FD195A2878EE54527BDE359376F53E (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781* L_0 = (kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781*)il2cpp_codegen_object_new(kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_il2cpp_TypeInfo_var);
		kCEFgMyactrNRSQAsbOVuwfjmakM__ctor_mA9CFCFEC711AEF567B9962D88EDCB1380FDB7FA4(L_0, /*hidden argument*/NULL);
		((kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_StaticFields*)il2cpp_codegen_static_fields_for(kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_StaticFields*)il2cpp_codegen_static_fields_for(kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void kCEFgMyactrNRSQAsbOVuwfjmakM__ctor_mA9CFCFEC711AEF567B9962D88EDCB1380FDB7FA4 (kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Rewired.Dev.Tools.DebugInformation/kCEFgMyactrNRSQAsbOVuwfjmakM::RnZCWkifFRloDlAgARVBTtimmyEiA(Rewired.InputAction,Rewired.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t kCEFgMyactrNRSQAsbOVuwfjmakM_RnZCWkifFRloDlAgARVBTtimmyEiA_mD5FFD65BB2D0A5DD7122E6F46079A3C3153EE2F2 (kCEFgMyactrNRSQAsbOVuwfjmakM_t0BCEEDD776AE6A0EFCB7108241202851E26D0781* __this, InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* p0, InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* p1, const RuntimeMethod* method) 
{
{
		InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* L_0 = p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputAction_get_name_m27C317BA3C050C0D2E973C91E2D320E7100DD309_inline(L_0, NULL);
		InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* L_2 = p1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputAction_get_name_m27C317BA3C050C0D2E973C91E2D320E7100DD309_inline(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_1, L_3, NULL);
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
// System.Void Rewired.Dev.Tools.DebugInformation/WcXKlHfBgbvFFEGLSHvedVGNHLqS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WcXKlHfBgbvFFEGLSHvedVGNHLqS__ctor_mDED2ADE10EEE5D68379924C895424077E363E671 (WcXKlHfBgbvFFEGLSHvedVGNHLqS_tA19FB5B528F1179B1BA93C51DAA543DB308822E7* __this, const RuntimeMethod* method) 
{
{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.DebugInformation/WcXKlHfBgbvFFEGLSHvedVGNHLqS::JzutGIzbNkdVbuIOSzkiIjiOGICp(Rewired.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WcXKlHfBgbvFFEGLSHvedVGNHLqS_JzutGIzbNkdVbuIOSzkiIjiOGICp_m0AEDB2B90845ACEBCBCBFE4B0BB8415D93A273B9 (WcXKlHfBgbvFFEGLSHvedVGNHLqS_tA19FB5B528F1179B1BA93C51DAA543DB308822E7* __this, InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* p0, const RuntimeMethod* method) 
{
{
		InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* L_0 = p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputAction_get_categoryId_m8F97E7B403867EB3DDE8B6626C78CA1DBA3F16F1_inline(L_0, NULL);
		InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* L_2 = __this->___tFhtozNSjLSTyqOZtOTNHCBPredL_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputCategory_get_id_mCEB914B689357BBA676C677B0D5EF54C016A23DF_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.Void Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectInputJoystickElementIdentifier_Awake_m0C5BEEFFE888FBA8A3B2F0CA235577B3B661944E (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B652AE39F0AE74AD50D5C2040AC9C2BBDAEBAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A40B78CF4011DEE07243DD42B66D11747582EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0;
		L_0 = DirectInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m081B15064E4598E47201B51A1C56BB06ADBEFE3C(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD, _stringLiteral7A40B78CF4011DEE07243DD42B66D11747582EAE, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_8 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral27B652AE39F0AE74AD50D5C2040AC9C2BBDAEBAE, NULL);
		return;
	}

IL_005d:
	{
		RuntimeObject* L_9 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_11;
		L_11 = GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7(L_10, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* >::Invoke(0 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Initialize(Rewired.Internal.GUIText) */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_9, L_11);
		return;
	}
}
// System.Void Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectInputJoystickElementIdentifier_Start_mA87C6A92FED6B971F235E1F0BC84505BE093281C (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Start() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectInputJoystickElementIdentifier_Update_mB6542CC9678497A2B7B1737C420D788B2ACA2B90 (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Update() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectInputJoystickElementIdentifier_OnDestroy_mC550631FE4B5BFC0D9C928344BAA1A94055C17DA (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Rewired.Interfaces.IElementIdentifierTool::OnDestroy() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m081B15064E4598E47201B51A1C56BB06ADBEFE3C (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3);
		s_Il2CppMethodInitialized = true;
	}
InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F(L_1, NULL);
		V_0 = ((InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044*)Castclass((RuntimeObject*)L_2, InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var));
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0028;
		}
	}

IL_001c:
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3, NULL);
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}
}
// System.Void Rewired.Dev.Tools.DirectInputJoystickElementIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectInputJoystickElementIdentifier__ctor_mE54DD840E137EB9B5CE391DE76240047DA034D95 (DirectInputJoystickElementIdentifier_t0DF9C8244B328875A03C2687B77F2ADAF7B398D7* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rewired.Dev.Tools.JoystickElementIdentifier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickElementIdentifier_Awake_m7878F1E9862D37737E398D744B4062249508F86A (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03969F83154B488FA3A798FA664550F1A33996CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA346E3C106BF0D8607F3D8E566CA7070808E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548805B0FDC9A0CB7AB0F6B7AC13F5043C7B1F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A1F57E65AC00CD6E53EDDFCEEF627E63E45C58D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63782A242F395C6C620CDF0025BBD66B1BE4E20B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ADF453CCEAF8E674E834BB81097F5BC03BF9247);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A40B78CF4011DEE07243DD42B66D11747582EAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94E3A27666ABF8B8E1921A58EFF96764A295B411);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98640301199A1D7C9AE6CBFAC5E6D60D65750B91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9207916909892478747D50EF98A5247A2790F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9367551CC05AED35C84D25A0C8E937BF80E8371);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0BF0DC38B5BFE13A19D4C539A0E2EE502B7FD82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF748A5A4C122F1116474B0671EEF38401C66BAED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF2CBE3113B4FE6AB9A4B85ACF672DCBAE3B8E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0;
		L_0 = JoystickElementIdentifier_IEcFYkGNXbhgIKhKYgpBlReCEmLrA_m868AE12E5735D817CE4CA119B5C5BE325586839E(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* L_7;
		L_7 = ReInput_get_UserData_m98F1858B28E800E67828E9F33D927BDBB1966EBF_inline(NULL);
		NullCheck(L_7);
		ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* L_8;
		L_8 = UserData_get_ConfigVars_m73673CAC82D73A6B1A04FED829C5118456762009_inline(L_7, NULL);
		NullCheck(L_8);
		bool L_9 = L_8->___alwaysUseUnityInput_1;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = ReInput_get_usingUnityInput_m6FFF902CD9B1D7BB1D9916F2EDA80A325B23E2B7_inline(NULL);
		if (!L_10)
		{
			goto IL_0058;
		}
	}

IL_0048:
	{
		xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* L_11 = (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB*)il2cpp_codegen_object_new(xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942(L_11, /*hidden argument*/NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)L_11);
		goto IL_0211;
	}

IL_0058:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = UnityTools_get_platform_mDD15208F3F8E597A9C6DBB14825ED65C4B6E0FC6(NULL);
		V_0 = L_12;
		bool L_13;
		L_13 = UnityTools_get_isEditor_m91A0DDBD16DA60DE0B8346D374171D85BAB8D5A1(NULL);
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = UnityTools_get_editorPlatform_mEC6169A623CB3DC1776E72BD75D21521E18367E7(NULL);
		V_1 = L_14;
		int32_t L_15 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_15, 1)))
		{
			case 0:
			{
				goto IL_0085;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_0089;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0081:
	{
		V_0 = 1;
		goto IL_008b;
	}

IL_0085:
	{
		V_0 = 4;
		goto IL_008b;
	}

IL_0089:
	{
		V_0 = 6;
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786* L_16;
		L_16 = ReInput_get_primaryInputManager_mA3A10E521BC81D797C02B3371D42949AF2D461A1(NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Rewired.InputSource Rewired.PlatformInputManager::get_inputSourceType() */, L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)4)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)6))))
		{
			goto IL_00a9;
		}
	}

IL_009e:
	{
		xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* L_20 = (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB*)il2cpp_codegen_object_new(xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942(L_20, /*hidden argument*/NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)L_20);
	}

IL_00a9:
	{
		RuntimeObject* L_21 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (L_21)
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)19))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_23 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, 1)))
		{
			case 0:
			{
				goto IL_0102;
			}
			case 1:
			{
				goto IL_0158;
			}
			case 2:
			{
				goto IL_0211;
			}
			case 3:
			{
				goto IL_0187;
			}
			case 4:
			{
				goto IL_0211;
			}
			case 5:
			{
				goto IL_01a3;
			}
		}
	}
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)19))))
		{
			goto IL_01bf;
		}
	}
	{
		goto IL_0211;
	}

IL_00e6:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)29))))
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)103))))
		{
			goto IL_01db;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, ((int32_t)104)))) > ((uint32_t)1))))
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_0211;
	}

IL_0102:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786* L_28;
		L_28 = ReInput_get_primaryInputManager_mA3A10E521BC81D797C02B3371D42949AF2D461A1(NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Rewired.InputSource Rewired.PlatformInputManager::get_inputSourceType() */, L_28);
		V_2 = L_29;
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_31 = V_2;
		if ((((int32_t)L_31) == ((int32_t)5)))
		{
			goto IL_0139;
		}
	}
	{
		goto IL_0211;
	}

IL_011a:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD, _stringLiteral7A40B78CF4011DEE07243DD42B66D11747582EAE, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_32, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_0139:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_33;
		L_33 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD, _stringLiteral3BA346E3C106BF0D8607F3D8E566CA7070808E44, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_33, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_33, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_0158:
	{
		xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* L_34 = (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB*)il2cpp_codegen_object_new(xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942(L_34, /*hidden argument*/NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)L_34);
		goto IL_0211;
	}

IL_0168:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_35;
		L_35 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteral94E3A27666ABF8B8E1921A58EFF96764A295B411, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_35, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_0187:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_36;
		L_36 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteralFBF2CBE3113B4FE6AB9A4B85ACF672DCBAE3B8E3, _stringLiteralB9207916909892478747D50EF98A5247A2790F6D, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_36, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_01a3:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_37;
		L_37 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteralE0BF0DC38B5BFE13A19D4C539A0E2EE502B7FD82, _stringLiteral63782A242F395C6C620CDF0025BBD66B1BE4E20B, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_37, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_01bf:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral03969F83154B488FA3A798FA664550F1A33996CE, _stringLiteralF748A5A4C122F1116474B0671EEF38401C66BAED, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_38, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_38, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_01db:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_39;
		L_39 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral548805B0FDC9A0CB7AB0F6B7AC13F5043C7B1F42, _stringLiteral98640301199A1D7C9AE6CBFAC5E6D60D65750B91, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_39, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_39, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		goto IL_0211;
	}

IL_01f7:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_40;
		L_40 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral6ADF453CCEAF8E674E834BB81097F5BC03BF9247, _stringLiteralC9367551CC05AED35C84D25A0C8E937BF80E8371, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_40, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_40, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
	}

IL_0211:
	{
		RuntimeObject* L_41 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (L_41)
		{
			goto IL_022e;
		}
	}
	{
		Logger_LogWarning_mFE26A6907677385EDC17D3A35296C997A7650A05(_stringLiteral5A1F57E65AC00CD6E53EDDFCEEF627E63E45C58D, NULL);
		xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* L_42 = (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB*)il2cpp_codegen_object_new(xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942(L_42, /*hidden argument*/NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)L_42);
	}

IL_022e:
	{
		RuntimeObject* L_43 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_45;
		L_45 = GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7(L_44, NULL);
		NullCheck(L_43);
		InterfaceActionInvoker1< GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* >::Invoke(0 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Initialize(Rewired.Internal.GUIText) */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_43, L_45);
		return;
	}
}
// System.Void Rewired.Dev.Tools.JoystickElementIdentifier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickElementIdentifier_Start_mF3FDFB2953F5DBCA2B5FAEAE5C35FF3D8FC39072 (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Start() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.JoystickElementIdentifier::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickElementIdentifier_Update_m81EAE4F2AC79FD00DD1BF5AEE3AAAA12F3DCBD82 (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Update() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.JoystickElementIdentifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickElementIdentifier_OnDestroy_m37C82E66AD7822D14BC0648D5007FA48400D42AB (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Rewired.Interfaces.IElementIdentifierTool::OnDestroy() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.JoystickElementIdentifier::IEcFYkGNXbhgIKhKYgpBlReCEmLrA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JoystickElementIdentifier_IEcFYkGNXbhgIKhKYgpBlReCEmLrA_m868AE12E5735D817CE4CA119B5C5BE325586839E (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ReInput_get_isReady_m6896009A47CBE031CC6AF989F98080306D9F01E9_inline(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3, NULL);
		return (bool)0;
	}

IL_0013:
	{
		return (bool)1;
	}
}
// System.Void Rewired.Dev.Tools.JoystickElementIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickElementIdentifier__ctor_mF9BA524936D9BF4243143271A0BA1429FD637D0C (JoystickElementIdentifier_tE85824D2705EB1EF5F4CE6B979D2B14A23E440FE* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rewired.Dev.Tools.OSXJoystickElementIdentifier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXJoystickElementIdentifier_Awake_m36C04FCAD40FE1B8C638CD82EAC4B333AF8DF3E3 (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B8D59D766321835142B3F880D4222FD2BDEAD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9207916909892478747D50EF98A5247A2790F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBF2CBE3113B4FE6AB9A4B85ACF672DCBAE3B8E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0;
		L_0 = OSXJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m22E6CFF42DA47E15F2889060AC4820BBC68911A9(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteralFBF2CBE3113B4FE6AB9A4B85ACF672DCBAE3B8E3, _stringLiteralB9207916909892478747D50EF98A5247A2790F6D, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_8 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral77B8D59D766321835142B3F880D4222FD2BDEAD0, NULL);
		return;
	}

IL_005d:
	{
		RuntimeObject* L_9 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_11;
		L_11 = GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7(L_10, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* >::Invoke(0 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Initialize(Rewired.Internal.GUIText) */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_9, L_11);
		return;
	}
}
// System.Void Rewired.Dev.Tools.OSXJoystickElementIdentifier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXJoystickElementIdentifier_Start_mEFE39A054C377B686C0CE327C319B746070CA4D0 (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Start() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.OSXJoystickElementIdentifier::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXJoystickElementIdentifier_Update_mFC19E50884F0FF45F9C3C147D0711AAB748E17BA (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Update() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.OSXJoystickElementIdentifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXJoystickElementIdentifier_OnDestroy_m12F77E5839E2B145ACD37457C855E2FBF5B56E5E (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Rewired.Interfaces.IElementIdentifierTool::OnDestroy() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.OSXJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSXJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m22E6CFF42DA47E15F2889060AC4820BBC68911A9 (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3);
		s_Il2CppMethodInitialized = true;
	}
InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F(L_1, NULL);
		V_0 = ((InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044*)Castclass((RuntimeObject*)L_2, InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var));
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0028;
		}
	}

IL_001c:
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3, NULL);
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}
}
// System.Void Rewired.Dev.Tools.OSXJoystickElementIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSXJoystickElementIdentifier__ctor_mE443C8719E2E462AD2B4E272C484A48FC76B6C6A (OSXJoystickElementIdentifier_t86D7783DF37D3AEF69C481D0389910916A2882D0* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rewired.Dev.Tools.RawInputJoystickElementIdentifier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawInputJoystickElementIdentifier_Awake_mCA265F0D6B0E199564B5121F5B4A0CEA9A55DC2C (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA346E3C106BF0D8607F3D8E566CA7070808E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E2E714465BB3B0FDD97A93398FA4A83D46650E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		bool L_0;
		L_0 = RawInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m89EAB97DD72EE93E18D6C6041BBCD9EB96286EF3(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_4;
		L_4 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(eakSBuTDrgLhbdBRHBCudkDJWIpd_t49AEDF88370DDF045CFC24E916ADB4A154BF059E_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = eakSBuTDrgLhbdBRHBCudkDJWIpd_XSjBYqgZfaVOtQgHbxiEmdntjJOZ_mD6980C84D608C9C208ECE4D0AECC2F6C852AF453(_stringLiteral1BEBBDE5F4BF6783ABA0EA330560F42776AD1DAD, _stringLiteral3BA346E3C106BF0D8607F3D8E566CA7070808E44, NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_7, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var)));
		RuntimeObject* L_8 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (L_8)
		{
			goto IL_005d;
		}
	}
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral9E2E714465BB3B0FDD97A93398FA4A83D46650E9, NULL);
		return;
	}

IL_005d:
	{
		RuntimeObject* L_9 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_11;
		L_11 = GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7(L_10, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* >::Invoke(0 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Initialize(Rewired.Internal.GUIText) */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_9, L_11);
		return;
	}
}
// System.Void Rewired.Dev.Tools.RawInputJoystickElementIdentifier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawInputJoystickElementIdentifier_Start_m4D079D86BFDBF9045877412CC1C8FB89657AB821 (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Start() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.RawInputJoystickElementIdentifier::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawInputJoystickElementIdentifier_Update_m36C86F6322C54374AD96BD6EE799B4CEB6B8FB9B (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Update() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Rewired.Dev.Tools.RawInputJoystickElementIdentifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawInputJoystickElementIdentifier_OnDestroy_m121182FC5C737F4F8129273399D476E64DC0E524 (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Rewired.Interfaces.IElementIdentifierTool::OnDestroy() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Boolean Rewired.Dev.Tools.RawInputJoystickElementIdentifier::YTPzMSeeZPKyoeGirMwnDRvUNwmV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RawInputJoystickElementIdentifier_YTPzMSeeZPKyoeGirMwnDRvUNwmV_m89EAB97DD72EE93E18D6C6041BBCD9EB96286EF3 (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3);
		s_Il2CppMethodInitialized = true;
	}
InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F(L_1, NULL);
		V_0 = ((InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044*)Castclass((RuntimeObject*)L_2, InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044_il2cpp_TypeInfo_var));
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		InputManager_BaseU5BU5D_tAC6201CA0B0B612CBF4B1902079E613FA888F044* L_4 = V_0;
		NullCheck(L_4);
		if ((((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0028;
		}
	}

IL_001c:
	{
		Logger_LogError_m5955603F5342C4FA14F5A2993E9A2363999163FB(_stringLiteral802A908EFBC1392D18DC1330D3325F7B0A67CBC3, NULL);
		return (bool)0;
	}

IL_0028:
	{
		return (bool)1;
	}
}
// System.Void Rewired.Dev.Tools.RawInputJoystickElementIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawInputJoystickElementIdentifier__ctor_mC6D2328B2D7F50642D79EA0A5B13197CE35D8357 (RawInputJoystickElementIdentifier_t4CF54A7D88E90C7B9BF9D2932C7ACD569B1F90D8* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rewired.Dev.Tools.UnityJoystickElementIdentifier::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityJoystickElementIdentifier_Awake_m9C424C7ED02735439BCCEB088FEE8F5E5B2AA6E1 (UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* L_0 = (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB*)il2cpp_codegen_object_new(xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB_il2cpp_TypeInfo_var);
		xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942(L_0, /*hidden argument*/NULL);
		__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4), (void*)L_0);
		RuntimeObject* L_1 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_3;
		L_3 = GUIText_CreateLogger_m82461698DE2E9812FA5FE2DCCE489269A619C4A7(L_2, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* >::Invoke(0 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Initialize(Rewired.Internal.GUIText) */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_1, L_3);
		return;
	}
}
// System.Void Rewired.Dev.Tools.UnityJoystickElementIdentifier::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityJoystickElementIdentifier_Start_m2529D7793C267EBD58E1F1E5D3CE8DDC257FE5B8 (UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Start() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Rewired.Dev.Tools.UnityJoystickElementIdentifier::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityJoystickElementIdentifier_Update_m58C0C57C448EB9CE331F299467A5BDE4D9F046F5 (UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Rewired.Interfaces.IElementIdentifierTool::Update() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Rewired.Dev.Tools.UnityJoystickElementIdentifier::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityJoystickElementIdentifier_OnDestroy_m3B5F1B53E2484FC32AAB71BAB7B7A062C20ED071 (UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		RuntimeObject* L_0 = __this->___MAkWUpIyGLOPqrkISqoyvxoTrzdP_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Rewired.Interfaces.IElementIdentifierTool::OnDestroy() */, IElementIdentifierTool_tDFA908E0A98EC141D79FFE4B1FA8D1C371C2AA4B_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Rewired.Dev.Tools.UnityJoystickElementIdentifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityJoystickElementIdentifier__ctor_m7010087BDEA0ECFFE124C325FF7DEB4973E937DE (UnityJoystickElementIdentifier_t663CD32DB30E4CB472C897E8A83F74BB69D3E24E* __this, const RuntimeMethod* method) 
{
{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::Initialize(Rewired.Internal.GUIText)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_Initialize_mF987687547DF92052FEB5E681135474B802C83CD (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* ___text0, const RuntimeMethod* method) 
{
{
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_0 = ___text0;
		__this->___swsbLteqHAcshwrwNZfnjUOxlegDA_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swsbLteqHAcshwrwNZfnjUOxlegDA_0), (void*)L_0);
		return;
	}
}
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_Start_m47856ABFD4171B8910143D9B3630B0F8832A3B46 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2105B13C9D7F35217FFA0957233B25CBBF2CC2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAECD05BD6089FC3C8277C3E7EAD8CCF2D1A6267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB7F76E6A228EE7C181A1EFACEB2CB48884B4510);
		s_Il2CppMethodInitialized = true;
	}
StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		NullCheck(L_1);
		V_2 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral412D9656D96D1355055B873DFBFA96C54582B53F, L_2, _stringLiteralFB7F76E6A228EE7C181A1EFACEB2CB48884B4510, NULL);
		V_1 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_5 = V_1;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, _stringLiteralDAECD05BD6089FC3C8277C3E7EAD8CCF2D1A6267, NULL);
		V_1 = L_6;
	}

IL_0031:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		V_3 = L_7;
		V_2 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_3;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		String_t* L_12 = V_1;
		String_t* L_13 = V_4;
		String_t* L_14;
		L_14 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_12, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_13, _stringLiteralB2105B13C9D7F35217FFA0957233B25CBBF2CC2B, NULL);
		V_1 = L_14;
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0053:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_18 = V_1;
		Logger_Log_m7AFB3DE7CB55B1AF479DD909EB1A71CEEC54672D(L_18, NULL);
		return;
	}
}
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_Update_m62EF4AE220872C90F1A85FD3EA2C552AA5A308DA (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IExternalTools_t233FD6F1D63F40E6D7197A0674751E3BD02610B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityInputHelper_t959292317C3649D3C04AD35D7787EE7FE410A247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13F5CC8C83BB6BC2997C6E830ECDCDF5913FC10E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E1D0A66812FA0948B7C8131C7D5D5737A3CCDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0AD0FB9E41C1CE1213BD4E556D70444FEA8032);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600A8B8F543C3D1BB63823DE7A375907E2625672);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7008BD3428A766E890BE2E1F4C0F4E26E797D8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB324281D4A5B48535CFD0901F0A8CA3E373301E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD639200F77424060FDFD7BD607E6B0FA81F61DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB5FE69F3D2EFF0F03278C48F3858A6FB7A1D271);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC09211A1C4A0E460BD8050A2A8A23D6367357FA);
		s_Il2CppMethodInitialized = true;
	}
StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	{
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)61), NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)43), NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)270), NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}

IL_001e:
	{
		int32_t L_3 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_002c:
	{
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)269), NULL);
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)45), NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}

IL_0041:
	{
		int32_t L_6 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_004f:
	{
		int32_t L_7 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2 = ((int32_t)16);
		goto IL_0073;
	}

IL_0062:
	{
		int32_t L_8 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)16))))
		{
			goto IL_0073;
		}
	}
	{
		__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2 = 1;
	}

IL_0073:
	{
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = _stringLiteral600A8B8F543C3D1BB63823DE7A375907E2625672;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)_stringLiteral600A8B8F543C3D1BB63823DE7A375907E2625672);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		V_0 = L_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_11 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteralBD639200F77424060FDFD7BD607E6B0FA81F61DD, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_12);
		goto IL_00b6;
	}

IL_00a0:
	{
		String_t* L_13 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral13F5CC8C83BB6BC2997C6E830ECDCDF5913FC10E, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_14);
	}

IL_00b6:
	{
		V_1 = 0;
		goto IL_0146;
	}

IL_00bd:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		String_t* L_17 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralEC09211A1C4A0E460BD8050A2A8A23D6367357FA);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEC09211A1C4A0E460BD8050A2A8A23D6367357FA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		String_t* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_22;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_28;
		L_28 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_28);
		il2cpp_codegen_runtime_class_init_inline(UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = UnityTools_get_platform_mDD15208F3F8E597A9C6DBB14825ED65C4B6E0FC6(NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)6))))
		{
			goto IL_012c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTools_t7FBE7E23E35DE4507AEF20ECB36624FC0746F429_il2cpp_TypeInfo_var);
		RuntimeObject* L_30;
		L_30 = UnityTools_get_externalTools_mE7A8C087AA2EE003A30904D9D38F90770756C23E(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_30);
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean Rewired.Utils.Interfaces.IExternalTools::LinuxInput_IsJoystickPreconfigured(System.String) */, IExternalTools_t233FD6F1D63F40E6D7197A0674751E3BD02610B1_il2cpp_TypeInfo_var, L_30, L_34);
		if (!L_35)
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_36 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_37;
		L_37 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_36, _stringLiteral7008BD3428A766E890BE2E1F4C0F4E26E797D8D3, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_37);
	}

IL_012c:
	{
		String_t* L_38 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_39);
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0146:
	{
		int32_t L_41 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_00bd;
		}
	}
	{
		String_t* L_43 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_44;
		L_44 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_43, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_44);
		String_t* L_45 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		int32_t* L_46 = (&__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_46, NULL);
		String_t* L_48;
		L_48 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_45, _stringLiteral40E1D0A66812FA0948B7C8131C7D5D5737A3CCDD, L_47, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_48);
		String_t* L_49 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		String_t* L_50;
		L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_49, _stringLiteralB324281D4A5B48535CFD0901F0A8CA3E373301E6, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_50);
		V_2 = 0;
		goto IL_01d7;
	}

IL_01a5:
	{
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_52;
		L_52 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralEB5FE69F3D2EFF0F03278C48F3858A6FB7A1D271, L_51, NULL);
		V_3 = L_52;
		int32_t L_53 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		int32_t L_54 = V_2;
		il2cpp_codegen_runtime_class_init_inline(UnityInputHelper_t959292317C3649D3C04AD35D7787EE7FE410A247_il2cpp_TypeInfo_var);
		float L_55;
		L_55 = UnityInputHelper_GetJoystickAxisValueByJoystickId_m96D60B413860F4B219A9CC8A2297021905F3207C(L_53, L_54, NULL);
		V_4 = L_55;
		String_t* L_56 = V_3;
		float L_57 = V_4;
		float L_58 = L_57;
		RuntimeObject* L_59 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_58);
		xOiQkoWIhAqWIndPaCalnRkiGbJC_BozewNWraRPxVbkQCDcdZQzFBjNF_m31B03857D375A27F0CB124C2FA309FB12A83A680(__this, L_56, L_59, NULL);
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_01d7:
	{
		int32_t L_61 = V_2;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)29))))
		{
			goto IL_01a5;
		}
	}
	{
		V_5 = 0;
		goto IL_0218;
	}

IL_01e1:
	{
		String_t* L_62;
		L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_63;
		L_63 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5C0AD0FB9E41C1CE1213BD4E556D70444FEA8032, L_62, NULL);
		V_6 = L_63;
		int32_t L_64 = __this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2;
		int32_t L_65 = V_5;
		il2cpp_codegen_runtime_class_init_inline(UnityInputHelper_t959292317C3649D3C04AD35D7787EE7FE410A247_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = UnityInputHelper_GetJoystickButtonValueByJoystickId_m4D0C08B6A4CE0372E4F3B4DC2DE0914E3389028D(L_64, L_65, NULL);
		V_7 = L_66;
		String_t* L_67 = V_6;
		bool L_68 = V_7;
		bool L_69 = L_68;
		RuntimeObject* L_70 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_69);
		xOiQkoWIhAqWIndPaCalnRkiGbJC_BozewNWraRPxVbkQCDcdZQzFBjNF_m31B03857D375A27F0CB124C2FA309FB12A83A680(__this, L_67, L_70, NULL);
		int32_t L_71 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0218:
	{
		int32_t L_72 = V_5;
		if ((((int32_t)L_72) < ((int32_t)((int32_t)20))))
		{
			goto IL_01e1;
		}
	}
	{
		GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* L_73 = __this->___swsbLteqHAcshwrwNZfnjUOxlegDA_0;
		String_t* L_74 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		NullCheck(L_73);
		GUIText_set_text_m5F1AB57C5199940A0809446D854A05947C97DB54_inline(L_73, L_74, NULL);
		return;
	}
}
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_OnDestroy_mD691E3531D772EAED247F16A483CD98EF6E41927 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, const RuntimeMethod* method) 
{
{
		return;
	}
}
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::BozewNWraRPxVbkQCDcdZQzFBjNF(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC_BozewNWraRPxVbkQCDcdZQzFBjNF_m31B03857D375A27F0CB124C2FA309FB12A83A680 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		s_Il2CppMethodInitialized = true;
	}
{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2 = __this->___IZyldefURioyzisqAsdrPFzmGZLl_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		String_t* L_4 = p0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		RuntimeObject* L_7 = p1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_9, NULL);
		__this->___IZyldefURioyzisqAsdrPFzmGZLl_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IZyldefURioyzisqAsdrPFzmGZLl_1), (void*)L_10);
		return;
	}
}
// System.Void xOiQkoWIhAqWIndPaCalnRkiGbJC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xOiQkoWIhAqWIndPaCalnRkiGbJC__ctor_m0B91F87E6E40DADD8E2B8A4F5E8509212CBE9942 (xOiQkoWIhAqWIndPaCalnRkiGbJC_tEC5A855C6E39C1407E5C307C6A6C8332E07D30AB* __this, const RuntimeMethod* method) 
{
{
		__this->___CCnAxqRszEWtcrZyuAcoJcpeqjwN_2 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t hHLFiwYHgduJsTWXQsYQeHNAOVUn_wicgzZnvItswuJqutHTpJWiXlHne_mAC0FE1E4D2470630CA53FB473C4FDE15D30BDC4E_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		int32_t L_0 = ((hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_StaticFields*)il2cpp_codegen_static_fields_for(hHLFiwYHgduJsTWXQsYQeHNAOVUn_t08DD605711B6B06A2EB9EF0190A7B3986E10D6D2_il2cpp_TypeInfo_var))->___AGrFPoqsCWMYAKSUkHQIJDkDnRgQ_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m27C317BA3C050C0D2E973C91E2D320E7100DD309_inline (InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* __this, const RuntimeMethod* method) 
{
{
		String_t* L_0 = __this->____name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_categoryId_m8F97E7B403867EB3DDE8B6626C78CA1DBA3F16F1_inline (InputAction_t1B2AF1718E5F07DD49AA112079B02DE2F6F81081* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->____categoryId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputCategory_get_id_mCEB914B689357BBA676C677B0D5EF54C016A23DF_inline (InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->____id_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* ReInput_get_UserData_m98F1858B28E800E67828E9F33D927BDBB1966EBF_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->___APxYupdeVaIOAsHOzvIIrNRoEHuk_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* UserData_get_ConfigVars_m73673CAC82D73A6B1A04FED829C5118456762009_inline (UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154* __this, const RuntimeMethod* method) 
{
{
		ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* L_0 = __this->___configVars_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReInput_get_usingUnityInput_m6FFF902CD9B1D7BB1D9916F2EDA80A325B23E2B7_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->___CPhHdGgouqFOShSRDZGWuqKXSAqcA_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReInput_get_isReady_m6896009A47CBE031CC6AF989F98080306D9F01E9_inline (const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->___YkkXuoObeMHDnWDVivioeeRcGUPj_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GUIText_set_text_m5F1AB57C5199940A0809446D854A05947C97DB54_inline (GUIText_tF6BF9867013B7B918DC6B76368CC4D120EF3AF15* __this, String_t* ___value0, const RuntimeMethod* method) 
{
{
		String_t* L_0 = ___value0;
		__this->___JuYFLfGTwipSatbwMNrnMTJnmmbD_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JuYFLfGTwipSatbwMNrnMTJnmmbD_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
