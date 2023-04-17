#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Rewired.Utils.Classes.Data.ADictionary`2<System.Int32,TAqjagBhKGcWECRbpfkHPNKbpxLsA/rjYIYGThyzcIjjKJcsAtqiSHJmxp>
struct ADictionary_2_tE7D442DC62B8CFFF9D86A864353481277AAAE32F;
// Rewired.Utils.Classes.Data.ADictionary`2<System.Object,System.Object>
struct ADictionary_2_t95DEC58ADD1420C20E0CB2463868ED1353F2C657;
// Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>
struct ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90;
// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap>
struct AList_1_t26BA8BE4BEB503507B02BE892DA37BBBAA585997;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<Rewired.ControllerStatusChangedEventArgs>
struct Action_1_tBAD7548A2A88259FFDD9D2AF491DA79E19CB5D95;
// System.Action`1<UnityEngine.FullScreenMode>
struct Action_1_t329A050FC7346A8E8F6E91FE9C9D3F99F35609E6;
// System.Action`1<Rewired.UpdateLoopType>
struct Action_1_t60FB4C2B07126A34E8B4816D36F7A2065E957637;
// System.Action`2<Rewired.ControllerType,System.Int32>
struct Action_2_t803BE0EB18DDC66CA042F1CCF405EFB2D468146D;
// System.Action`2<System.Int32,Rewired.ControllerDataUpdater>
struct Action_2_t13979AF1641790E4111291C572345E665DD175C4;
// System.Action`3<System.Boolean,System.Int32,System.Int32>
struct Action_3_t142D1F73AF66CEBC85F52240EC1B6207B558A40B;
// System.Func`2<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>,System.Object>
struct Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
// System.Func`3<Rewired.Controller,System.Guid,System.Boolean>
struct Func_3_tF4129F872BD8CCCF0D22456285DD4191EE3A59E2;
// System.Func`3<Rewired.Controller,System.Type,System.Boolean>
struct Func_3_t25669F6E536690B24E25E22CBF39D17E60F1401A;
// System.Func`3<System.Object,System.Collections.Generic.IList`1<System.Object>,System.Int32>
struct Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E;
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo>
struct IEnumerable_1_t2F3A4DDE274CE61147DE565CD73B1EC320634667;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo>
struct IEnumerator_1_t06C290A1F7BB577F910141C06750DE2A683E9AFE;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.List`1<System.Object>>
struct IEqualityComparer_1_t65B7B3062BD74FA459F51FDEE83F4D89978B35E3;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<Rewired.ControllerMap>
struct IList_1_tE896830294079702FAF3FFFDC389B8B6DCA164E8;
// System.Collections.Generic.IList`1<Rewired.CustomController>
struct IList_1_t0E8029D42F0DEC35CD39DEC3272477AC5F817EF9;
// System.Collections.Generic.IList`1<Rewired.Joystick>
struct IList_1_t384DC26B697CDDF863348AB942D99FE38CFCECDB;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.IList`1<Rewired.Controller/CompoundElement>
struct IList_1_t73C58F137E7DFF14E7E9D82D08D5E8B0EFC2E310;
// System.Collections.Generic.IList`1<Rewired.Controller/Element>
struct IList_1_t2A0F8CC9ADAAA52DA77A468A9445282CF4646F9B;
// Rewired.Utils.Classes.Data.ADictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<System.Object>>
struct KeyCollection_t7D4171FCA647FC97B8FD8CB9CB6ADC57A5E43926;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1<System.Object>
struct LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA;
// System.Collections.Generic.List`1<Rewired.ActionElementMap>
struct List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6;
// System.Collections.Generic.List`1<Rewired.Controller>
struct List_1_t31024461DB8266F9EFEB0E1FB30FD6EACAAA348E;
// System.Collections.Generic.List`1<Rewired.ControllerMap>
struct List_1_t2F083EFD818F84CF4216467CD6432E17EA0EAFB4;
// System.Collections.Generic.List`1<Rewired.ControllerTemplateElementTarget>
struct List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A;
// System.Collections.Generic.List`1<Rewired.CustomController>
struct List_1_tB8E529F7236AFA0FD8A80663AB3DD1A80617C2E1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<Rewired.Joystick>
struct List_1_t2531299A66B4BDB8CF994888D67AA13DA020D3FE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>
struct List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1<System.Object>
struct NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>
struct Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap>
struct ReadOnlyCollection_1_t4422A6B0A0A793D51A319B9A8A073733A2FACF05;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller>
struct ReadOnlyCollection_1_t5E285B024BFC4ECA3450993DB52CC4261597335C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate>
struct ReadOnlyCollection_1_t18497760E4F1439D0468B3BAC863283807D8A1CA;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Button>
struct ReadOnlyCollection_1_t6632538F4C35EC35B77D58F6C62A8C0D52AED202;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/CompoundElement>
struct ReadOnlyCollection_1_tD98C9F15A7AA1561CBE4F44983375EEF67277B2C;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Element>
struct ReadOnlyCollection_1_tCB75F8E52C91C2CE68136F2CE66A099484F8D615;
// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs>
struct SafeAction_1_t187B602724412D6E71212275DB504DB2CA537DC0;
// Rewired.Utils.SafeAction`1<Rewired.ControllerStatusChangedEventArgs>
struct SafeAction_1_t6295D5E01D7944A8AEE5D1336EA31C2C3721C004;
// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<System.Object>
struct TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE;
// Rewired.Utils.TempListPool/TList`1<Rewired.ControllerTemplateElementTarget>
struct TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7;
// Rewired.Utils.TempListPool/TList`1<System.Int32Enum>
struct TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069;
// Rewired.Utils.TempListPool/TList`1<System.Object>
struct TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7;
// Rewired.Utils.Classes.Data.ADictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<System.Object>>
struct ValueCollection_t001A6551D863C7528911355B2D51046F93A23122;
// Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1<System.Object>
struct XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2;
// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1<System.Object>
struct aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA;
// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>
struct cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85;
// Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1<System.Object>
struct ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73;
// Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1<System.Object>
struct gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3;
// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.ActiveControllerChangedDelegate>
struct inUVqCQsuvBJxHwomlAniLxWfZitA_1_t67BD3968E2211A2E09B85A6376936EA713E90E04;
// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.PlayerActiveControllerChangedDelegate>
struct inUVqCQsuvBJxHwomlAniLxWfZitA_1_tD7B16D6D1359CB7B06E2A472A7687A5F7B51DE44;
// Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1<System.Object>
struct ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60;
// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1<System.Object>
struct sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1;
// Rewired.Utils.Classes.Data.ADictionary`2/Entry<System.Type,System.Collections.Generic.List`1<System.Object>>[]
struct EntryU5BU5D_tBEF1CF86AE6644142868E42CBD5F40FAE6CC8502;
// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.PlayerActiveControllerChangedDelegate>[]
struct inUVqCQsuvBJxHwomlAniLxWfZitA_1U5BU5D_tA661DCC17BBBCCABDACE0F73A4D969A777E291EB;
// Rewired.ActionElementMap[]
struct ActionElementMapU5BU5D_t695D4AC334ED6665D93DB89FAFA472C4F2CAADAE;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Rewired.ControllerTemplateElementTarget[]
struct ControllerTemplateElementTargetU5BU5D_t40239EE457C54F98C6E975C8E924AE4D95CFD2B9;
// Rewired.ControllerType[]
struct ControllerTypeU5BU5D_t24957BC60A9ED2806B85EDE1E8A60341D1871FD2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Rewired.IControllerTemplate[]
struct IControllerTemplateU5BU5D_tAD319B5FD030C9F0A993A85F2EB5B7A47390C3DB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// YBzrFNvcnwYplEAweaZfKoEYnJzM[]
struct YBzrFNvcnwYplEAweaZfKoEYnJzMU5BU5D_tFB4689A16323F9FDCBE75ACBD8F2CADD680D9256;
// slnZXWsjHVMgmJPfXBYLuaghszns[]
struct slnZXWsjHVMgmJPfXBYLuaghsznsU5BU5D_tE4357525683913188793B16409204CE1841C9509;
// Rewired.Controller/Button[]
struct ButtonU5BU5D_t72C5601523D894D77B2BDF77A056019A61C0AF62;
// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA[]
struct ftuHLSCvHbrPYKqmDICMGujVuqLSAU5BU5D_t1A5828768AE703001918C5473AA9B00044C7C36E;
// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK[]
struct kzedFdEdISaCJppRVzkSmhYBfiDKU5BU5D_t33F6EB465ABC6573F2555141720A5BCD57EBC4C6;
// slnZXWsjHVMgmJPfXBYLuaghszns[,]
struct slnZXWsjHVMgmJPfXBYLuaghsznsU5BU2CU5D_t0E2C0BE01220BC53ADE9E80AF7EC0BE6D677C75F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Rewired.ActionElementMap
struct ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Rewired.Data.ConfigVars
struct ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3;
// Rewired.Controller
struct Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911;
// Rewired.Data.ControllerDataFiles
struct ControllerDataFiles_t599A8EBC3214904D6DEEFD99921E121F8CA6C2A7;
// Rewired.ControllerDataUpdater
struct ControllerDataUpdater_tEA424134962ED8FCA977957E8CAE6B6521D67788;
// Rewired.ControllerMap
struct ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3;
// Rewired.ControllerMapEnabler
struct ControllerMapEnabler_tA0F9E3CA8F655F79B94FE9343DC7D543CCC0DE9B;
// Rewired.ControllerMapLayoutManager
struct ControllerMapLayoutManager_t630460EA47983879378D747091ED5C63493C23B3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EYzeMRMINmbDPjgLMbiDXTDcHYNs
struct EYzeMRMINmbDPjgLMbiDXTDcHYNs_tCDC7C8E6E50F029693E0ACB75DA0000C6F87E379;
// Rewired.HardwareControllerMap_Game
struct HardwareControllerMap_Game_t3C259C0FEB7E4318075A0A7CAECB7DF1D7AA950A;
// Rewired.Interfaces.IControllerAssigner
struct IControllerAssigner_tF97525A09D83868487800AB365691D873BACD69B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Rewired.Interfaces.IUnifiedKeyboardSource
struct IUnifiedKeyboardSource_tB4B79B93FBB7041B4F6F0E7F61D691B45FD63A2D;
// Rewired.Interfaces.IUnifiedMouseSource
struct IUnifiedMouseSource_t9C0CC69D66CD23154666A536623BC4E1943A02BC;
// Rewired.InputCategory
struct InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C;
// Rewired.InputManager_Base
struct InputManager_Base_t1C60AC2E6C7F7EE7CC5B91EE4149AD5BE14058D0;
// Rewired.InputMapCategory
struct InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111;
// JfVkiPqxuvjpxOenWaPbtdnpqNrC
struct JfVkiPqxuvjpxOenWaPbtdnpqNrC_tAD3EC599BD987C8364327BCCAE0346D20C00C8F9;
// Rewired.Keyboard
struct Keyboard_t3FD52938480ACCD23FDB0DAEC857F9A9D29CC6C3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Rewired.Mouse
struct Mouse_t5C8D9CB89A5C0F4EE87A70501CAF2A68E36DC019;
// PjzdStrqNkNQSljwEZWJWYcQhjVQ
struct PjzdStrqNkNQSljwEZWJWYcQhjVQ_tA22AE52C8C2CD0639BCE85B3BE860B096AFBC1EA;
// Rewired.PlatformInputManager
struct PlatformInputManager_t0589A7C9789B19DE7D2560BDE9C72EA3214B3786;
// Rewired.Player
struct Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B;
// Rewired.Utils.SafeAction
struct SafeAction_t32EA46BB214634A37414BF52941F55B8ABC9BD31;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TAqjagBhKGcWECRbpfkHPNKbpxLsA
struct TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A;
// Rewired.Utils.Classes.Utility.TimerAbs
struct TimerAbs_t49C1588F0A9377F7A54285F7C44A6591FBA42E36;
// System.Type
struct Type_t;
// Rewired.Data.UserData
struct UserData_tA3822AFC104037490B294D0A972ABFAF6DF9C154;
// Rewired.Data.UserDataStore
struct UserDataStore_t7FFC8F030F5FF0B24856473F6CDBD9CC62CBBEF2;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// YBzrFNvcnwYplEAweaZfKoEYnJzM
struct YBzrFNvcnwYplEAweaZfKoEYnJzM_t30C83160D593E4B3D56437AB7AE3D2507C9AC52E;
// hDTwQOONkmiSaaPHwqpfFkmXMCAbb
struct hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3;
// mFLEqKpnGpgOhoDYUApNBKpxUruFA
struct mFLEqKpnGpgOhoDYUApNBKpxUruFA_t3D2572948CEB7B57C2F37B59039EC83B1CB32408;
// oRzHnFZUZWhymZfQjayJtJujzGt
struct oRzHnFZUZWhymZfQjayJtJujzGt_t387519A4B76739FFC49C8E3D119FA67A0FA7CBC0;
// rlfXkJTrHZdpPrmFzvJfeOpwdxFF
struct rlfXkJTrHZdpPrmFzvJfeOpwdxFF_t92D577FF2385AF1C7F87003759294BE9754F3ABD;
// Rewired.Controller/Extension
struct Extension_t65CC6FDD7104DC3F9E55C8238302E9F8870162F9;
// Rewired.Player/ControllerHelper
struct ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6;
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
// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB;
// Rewired.Player/ControllerHelper/MapHelper
struct MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2;
// Rewired.Player/ControllerHelper/PollingHelper
struct PollingHelper_tB0445EF1EE1230F3EE703F3A0F09DEE0A64D8B97;
// Rewired.Player/ControllerHelper/eSDNQUnYcyDvQHrqJricxoWzTLr
struct eSDNQUnYcyDvQHrqJricxoWzTLr_t52BD0C4EC6573AD81BF763D7FADDE36ECEB3DA34;
// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA
struct ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187;
// Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA
struct vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D;
// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_tD50E0E01A2183F0F5290D4704CB790D45A7626C4;
// Rewired.ReInput/ControllerHelper/PollingHelper
struct PollingHelper_tDC5975DF531D46693230837C215974F5B59AECAB;
// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK
struct kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral18671CD5DECD4AF4B7DF2AA0F1A0C1E4DE25F8AB;
IL2CPP_EXTERN_C String_t* _stringLiteral22B1478CDF9C226208AE289896781AF22519D6CB;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB16B3999460DDC981865934D979087351A14F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m412DFD00E7077EF26A7689218DBB67CFEBBAA57D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapHelper_GetAllMapsInCategory_TisRuntimeObject_mDDC9515B6EDC86309D3538EC6D3337E30244542F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapHelper_GetAllMaps_TisRuntimeObject_m55A3C44AC237AE83A83C4653F89DA90562BB92D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapHelper_GetMapsInCategory_TisRuntimeObject_mD3FCC7B7E3E92BD67FBD312A75A0B08B972A7427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mC7ED0FD7569E0ACBA4AA0C7D8592AADCFA28A8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisControllerTemplateElementTarget_tDB0CB7A22A83FD188DBBB27A7D75DD3459D5542C_m73B7B7D8BE540D2410F77E3C5456F5C2F945B484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m367FAB5997343ECE6DE4E93FF624C27132D42877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisRuntimeObject_mC8479E090ED307F17BAE844DE2C29FE904E56C5B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>
struct ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90  : public RuntimeObject
{
	// System.Int32[] Rewired.Utils.Classes.Data.ADictionary`2::hBHnKjOKNyqOdsCnDDkvqkMDRLqO
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___hBHnKjOKNyqOdsCnDDkvqkMDRLqO_0;
	// Rewired.Utils.Classes.Data.ADictionary`2/Entry<TKey,TValue>[] Rewired.Utils.Classes.Data.ADictionary`2::_entries
	EntryU5BU5D_tBEF1CF86AE6644142868E42CBD5F40FAE6CC8502* ____entries_1;
	// System.Int32 Rewired.Utils.Classes.Data.ADictionary`2::_count
	int32_t ____count_2;
	// System.Int32 Rewired.Utils.Classes.Data.ADictionary`2::dDxvGzobXziVUJaHlaTpJsagIDXoA
	int32_t ___dDxvGzobXziVUJaHlaTpJsagIDXoA_3;
	// System.Int32 Rewired.Utils.Classes.Data.ADictionary`2::zQEnKkguAdJfEMbGmoKLtHFKpVmR
	int32_t ___zQEnKkguAdJfEMbGmoKLtHFKpVmR_4;
	// System.Int32 Rewired.Utils.Classes.Data.ADictionary`2::UwobTgBwsvhLyhvnLZRObzcCKouh
	int32_t ___UwobTgBwsvhLyhvnLZRObzcCKouh_5;
	// System.Int32 Rewired.Utils.Classes.Data.ADictionary`2::SZpArvgmtQsrColXZFMVispJeoLnA
	int32_t ___SZpArvgmtQsrColXZFMVispJeoLnA_6;
	// System.Collections.Generic.IEqualityComparer`1<TKey> Rewired.Utils.Classes.Data.ADictionary`2::VdYpdEZnSGVoyveNkTLTyGLNSpDu
	RuntimeObject* ___VdYpdEZnSGVoyveNkTLTyGLNSpDu_7;
	// System.Collections.Generic.IEqualityComparer`1<TValue> Rewired.Utils.Classes.Data.ADictionary`2::xILbHelkXEsoZTQWtsQKxMSseTvX
	RuntimeObject* ___xILbHelkXEsoZTQWtsQKxMSseTvX_8;
	// Rewired.Utils.Classes.Data.ADictionary`2/KeyCollection<TKey,TValue> Rewired.Utils.Classes.Data.ADictionary`2::YcKVNwmPgSHNlPIJFDeWgnMukprH
	KeyCollection_t7D4171FCA647FC97B8FD8CB9CB6ADC57A5E43926* ___YcKVNwmPgSHNlPIJFDeWgnMukprH_9;
	// Rewired.Utils.Classes.Data.ADictionary`2/ValueCollection<TKey,TValue> Rewired.Utils.Classes.Data.ADictionary`2::bNImUmJdzhwSQuMfxhmsgpssPPzj
	ValueCollection_t001A6551D863C7528911355B2D51046F93A23122* ___bNImUmJdzhwSQuMfxhmsgpssPPzj_10;
	// System.Object Rewired.Utils.Classes.Data.ADictionary`2::uXQCPPeDdkgzHLqUogIHISHifuKw
	RuntimeObject* ___uXQCPPeDdkgzHLqUogIHISHifuKw_11;
};

struct ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90_StaticFields
{
	// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2::HiPAjnVrrxHuzfXeSZrxRKlrmSgE
	bool ___HiPAjnVrrxHuzfXeSZrxRKlrmSgE_12;
	// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2::pDnjvaPOJnzZuPYdkVBOftVOcNOq
	bool ___pDnjvaPOJnzZuPYdkVBOftVOcNOq_13;
};

// System.Collections.Generic.List`1<Rewired.ActionElementMap>
struct List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionElementMapU5BU5D_t695D4AC334ED6665D93DB89FAFA472C4F2CAADAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionElementMapU5BU5D_t695D4AC334ED6665D93DB89FAFA472C4F2CAADAE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Rewired.ControllerTemplateElementTarget>
struct List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ControllerTemplateElementTargetU5BU5D_t40239EE457C54F98C6E975C8E924AE4D95CFD2B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ControllerTemplateElementTargetU5BU5D_t40239EE457C54F98C6E975C8E924AE4D95CFD2B9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>
struct List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	kzedFdEdISaCJppRVzkSmhYBfiDKU5BU5D_t33F6EB465ABC6573F2555141720A5BCD57EBC4C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	kzedFdEdISaCJppRVzkSmhYBfiDKU5BU5D_t33F6EB465ABC6573F2555141720A5BCD57EBC4C6* ___s_emptyArray_5;
};

// Rewired.Utils.TempListPool/TList`1<Rewired.ControllerTemplateElementTarget>
struct TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Rewired.Utils.TempListPool/TList`1::VNRjhxdkwzCQsQLRYBpUhOzPIPLcA
	List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* ___VNRjhxdkwzCQsQLRYBpUhOzPIPLcA_0;
	// System.Boolean Rewired.Utils.TempListPool/TList`1::smLxyjQFlClJKIZlhLSifPFFImqe
	bool ___smLxyjQFlClJKIZlhLSifPFFImqe_1;
};

// Rewired.Utils.TempListPool/TList`1<System.Int32Enum>
struct TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Rewired.Utils.TempListPool/TList`1::VNRjhxdkwzCQsQLRYBpUhOzPIPLcA
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___VNRjhxdkwzCQsQLRYBpUhOzPIPLcA_0;
	// System.Boolean Rewired.Utils.TempListPool/TList`1::smLxyjQFlClJKIZlhLSifPFFImqe
	bool ___smLxyjQFlClJKIZlhLSifPFFImqe_1;
};

// Rewired.Utils.TempListPool/TList`1<System.Object>
struct TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Rewired.Utils.TempListPool/TList`1::VNRjhxdkwzCQsQLRYBpUhOzPIPLcA
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___VNRjhxdkwzCQsQLRYBpUhOzPIPLcA_0;
	// System.Boolean Rewired.Utils.TempListPool/TList`1::smLxyjQFlClJKIZlhLSifPFFImqe
	bool ___smLxyjQFlClJKIZlhLSifPFFImqe_1;
};

// Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1<System.Object>
struct XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// ? Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	RuntimeObject* ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// Rewired.Player/ControllerHelper/MapHelper Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3;
	// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::RhoklXMlDeARBfOObjVUKakOXgdeA
	RuntimeObject* ___RhoklXMlDeARBfOObjVUKakOXgdeA_4;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::HOOpigeeRuyReWfgMQJxfXYvUNwH
	int32_t ___HOOpigeeRuyReWfgMQJxfXYvUNwH_5;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::fTTaoeLLVFUEgMJwbZIHjVZVmjnK
	int32_t ___fTTaoeLLVFUEgMJwbZIHjVZVmjnK_6;
	// hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::JsBfchTjctnPGyvjpuogNYRZHTKU
	RuntimeObject* ___JsBfchTjctnPGyvjpuogNYRZHTKU_7;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::ojgEuUdjMsfvxJQiTPipdnqsjqok
	int32_t ___ojgEuUdjMsfvxJQiTPipdnqsjqok_8;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::pmsBuwFKIVUOBshhcpLYItWMxXXFA
	int32_t ___pmsBuwFKIVUOBshhcpLYItWMxXXFA_9;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::oYMqbhFUOAaXPWHbZOuQUzxPRMHS
	int32_t ___oYMqbhFUOAaXPWHbZOuQUzxPRMHS_10;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1::wINccAGXbAcQxOvtiHsbbrlaykhzb
	int32_t ___wINccAGXbAcQxOvtiHsbbrlaykhzb_11;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1<System.Object>
struct aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA  : public RuntimeObject
{
	// System.Func`2<?,System.Int32> Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1::FkKDhjApMORrhuHhObhaCvDMkiLpA
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
};

// Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1<System.Object>
struct ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// ? Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	RuntimeObject* ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// Rewired.Player/ControllerHelper/MapHelper Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::NgYvqnovMkSRHVNEWEYzgQedwFde
	int32_t ___NgYvqnovMkSRHVNEWEYzgQedwFde_4;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::SgebiqeFPgLJkOQfmwCTESQqHVje
	int32_t ___SgebiqeFPgLJkOQfmwCTESQqHVje_5;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::aJKEDagrPrZtQBPOWwEggrXpXqKRA
	int32_t ___aJKEDagrPrZtQBPOWwEggrXpXqKRA_6;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::HyLMjUIcjSOZGGOJZWHdhVkIwYLO
	int32_t ___HyLMjUIcjSOZGGOJZWHdhVkIwYLO_7;
	// System.Collections.Generic.IList`1<?> Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::cQiOFStxurrmPiHEdHNikfiBDsmp
	RuntimeObject* ___cQiOFStxurrmPiHEdHNikfiBDsmp_8;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1::XRXvHMDaUbnUKSmMJEaxfPHXxbMm
	int32_t ___XRXvHMDaUbnUKSmMJEaxfPHXxbMm_9;
};

// Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1<System.Object>
struct ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// ? Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	RuntimeObject* ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// Rewired.Player/ControllerHelper/MapHelper Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::aJKEDagrPrZtQBPOWwEggrXpXqKRA
	int32_t ___aJKEDagrPrZtQBPOWwEggrXpXqKRA_4;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::HyLMjUIcjSOZGGOJZWHdhVkIwYLO
	int32_t ___HyLMjUIcjSOZGGOJZWHdhVkIwYLO_5;
	// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::RhoklXMlDeARBfOObjVUKakOXgdeA
	RuntimeObject* ___RhoklXMlDeARBfOObjVUKakOXgdeA_6;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::HOOpigeeRuyReWfgMQJxfXYvUNwH
	int32_t ___HOOpigeeRuyReWfgMQJxfXYvUNwH_7;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::RjiKTGRGCjXCRtPlIdejjrEnGTVX
	int32_t ___RjiKTGRGCjXCRtPlIdejjrEnGTVX_8;
	// hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::JsBfchTjctnPGyvjpuogNYRZHTKU
	RuntimeObject* ___JsBfchTjctnPGyvjpuogNYRZHTKU_9;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::ojgEuUdjMsfvxJQiTPipdnqsjqok
	int32_t ___ojgEuUdjMsfvxJQiTPipdnqsjqok_10;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::sJwAwqqBIUATnKeVHlBGaVmezkwF
	int32_t ___sJwAwqqBIUATnKeVHlBGaVmezkwF_11;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::oYMqbhFUOAaXPWHbZOuQUzxPRMHS
	int32_t ___oYMqbhFUOAaXPWHbZOuQUzxPRMHS_12;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1::wINccAGXbAcQxOvtiHsbbrlaykhzb
	int32_t ___wINccAGXbAcQxOvtiHsbbrlaykhzb_13;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1<System.Object>
struct sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1  : public RuntimeObject
{
	// ? Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1::GiVZGuLQxvUOqeIVnTCviBpqPbb
	RuntimeObject* ___GiVZGuLQxvUOqeIVnTCviBpqPbb_0;
	// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1<?> Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1::GzKJJorOLWrdrMiTQiKLkIMQBqcb
	aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* ___GzKJJorOLWrdrMiTQiKLkIMQBqcb_1;
};
struct Il2CppArrayBounds;

// Rewired.Utils.Classes.CodeHelper
struct CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291  : public RuntimeObject
{
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

// Rewired.Player
struct Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B  : public RuntimeObject
{
	// TAqjagBhKGcWECRbpfkHPNKbpxLsA Rewired.Player::XBgnbkVKnfYNQCzukXyWfyzLvhPD
	TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A* ___XBgnbkVKnfYNQCzukXyWfyzLvhPD_0;
	// System.Boolean Rewired.Player::xFAmFibjlPPtIetuKtQyyVEnZrzL
	bool ___xFAmFibjlPPtIetuKtQyyVEnZrzL_1;
	// System.Int32 Rewired.Player::uiBcvtaHTXDhDgTmVOTVLzAJdhvt
	int32_t ___uiBcvtaHTXDhDgTmVOTVLzAJdhvt_2;
	// System.String Rewired.Player::DwCxMCYkknMiaGQSTcpyYZtCOarV
	String_t* ___DwCxMCYkknMiaGQSTcpyYZtCOarV_3;
	// System.String Rewired.Player::ohwwxNPtAPIbMAPCQDTpbtvIdDVJA
	String_t* ___ohwwxNPtAPIbMAPCQDTpbtvIdDVJA_4;
	// System.Boolean Rewired.Player::OTBhvOBAvfjjLnHVYHNnRwRHPaGY
	bool ___OTBhvOBAvfjjLnHVYHNnRwRHPaGY_5;
	// System.Int32 Rewired.Player::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_6;
	// Rewired.Player/ControllerHelper Rewired.Player::controllers
	ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* ___controllers_7;
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

// TAqjagBhKGcWECRbpfkHPNKbpxLsA
struct TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Rewired.Joystick> TAqjagBhKGcWECRbpfkHPNKbpxLsA::qqfzpygyXcziWGCnMBWiDWbDfbjs
	List_1_t2531299A66B4BDB8CF994888D67AA13DA020D3FE* ___qqfzpygyXcziWGCnMBWiDWbDfbjs_0;
	// System.Collections.Generic.List`1<Rewired.Joystick> TAqjagBhKGcWECRbpfkHPNKbpxLsA::DjBvWLqAQEGGTyHDrPbxYhzUzucw
	List_1_t2531299A66B4BDB8CF994888D67AA13DA020D3FE* ___DjBvWLqAQEGGTyHDrPbxYhzUzucw_1;
	// System.Collections.Generic.List`1<Rewired.CustomController> TAqjagBhKGcWECRbpfkHPNKbpxLsA::LEEoyPfEWhMwPdeJbgkNcgtrkmIR
	List_1_tB8E529F7236AFA0FD8A80663AB3DD1A80617C2E1* ___LEEoyPfEWhMwPdeJbgkNcgtrkmIR_2;
	// System.Collections.Generic.List`1<Rewired.Controller> TAqjagBhKGcWECRbpfkHPNKbpxLsA::BThrGngvTsuQnMZbNMmizeDGSEMG
	List_1_t31024461DB8266F9EFEB0E1FB30FD6EACAAA348E* ___BThrGngvTsuQnMZbNMmizeDGSEMG_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller> TAqjagBhKGcWECRbpfkHPNKbpxLsA::TLdjCyIaZGcguEERdSJGdFioRhbs
	ReadOnlyCollection_1_t5E285B024BFC4ECA3450993DB52CC4261597335C* ___TLdjCyIaZGcguEERdSJGdFioRhbs_4;
	// Rewired.Keyboard TAqjagBhKGcWECRbpfkHPNKbpxLsA::oCxdsWEkBdyfOWvttlOGoBEqVJhVA
	Keyboard_t3FD52938480ACCD23FDB0DAEC857F9A9D29CC6C3* ___oCxdsWEkBdyfOWvttlOGoBEqVJhVA_5;
	// Rewired.Mouse TAqjagBhKGcWECRbpfkHPNKbpxLsA::XozsQUktyqHZxmlRpydAHghEBLTv
	Mouse_t5C8D9CB89A5C0F4EE87A70501CAF2A68E36DC019* ___XozsQUktyqHZxmlRpydAHghEBLTv_6;
	// Rewired.Data.ConfigVars TAqjagBhKGcWECRbpfkHPNKbpxLsA::DydgGEtSDbDnUIdhpxLLNVJYuyYG
	ConfigVars_t4EC82ACF63376F1869FDC3D0E223EDCE149CF4A3* ___DydgGEtSDbDnUIdhpxLLNVJYuyYG_7;
	// slnZXWsjHVMgmJPfXBYLuaghszns[] TAqjagBhKGcWECRbpfkHPNKbpxLsA::YLPtzoRFStuEYusRAbMZYBSfiXSj
	slnZXWsjHVMgmJPfXBYLuaghsznsU5BU5D_tE4357525683913188793B16409204CE1841C9509* ___YLPtzoRFStuEYusRAbMZYBSfiXSj_8;
	// slnZXWsjHVMgmJPfXBYLuaghszns[] TAqjagBhKGcWECRbpfkHPNKbpxLsA::BURYjhhlAsEOrKtuMOueQZsrOkMA
	slnZXWsjHVMgmJPfXBYLuaghsznsU5BU5D_tE4357525683913188793B16409204CE1841C9509* ___BURYjhhlAsEOrKtuMOueQZsrOkMA_9;
	// slnZXWsjHVMgmJPfXBYLuaghszns[,] TAqjagBhKGcWECRbpfkHPNKbpxLsA::yMVcYkSmwYxIDbnLBPDHnoyoEqfDA
	slnZXWsjHVMgmJPfXBYLuaghsznsU5BU2CU5D_t0E2C0BE01220BC53ADE9E80AF7EC0BE6D677C75F* ___yMVcYkSmwYxIDbnLBPDHnoyoEqfDA_10;
	// mFLEqKpnGpgOhoDYUApNBKpxUruFA TAqjagBhKGcWECRbpfkHPNKbpxLsA::PvFXuNMjLGxoojOWFnDiLmGHfCjaA
	mFLEqKpnGpgOhoDYUApNBKpxUruFA_t3D2572948CEB7B57C2F37B59039EC83B1CB32408* ___PvFXuNMjLGxoojOWFnDiLmGHfCjaA_11;
	// YBzrFNvcnwYplEAweaZfKoEYnJzM TAqjagBhKGcWECRbpfkHPNKbpxLsA::oYFrXCFyNvlEVFeVWGPlBYGJJQJUA
	YBzrFNvcnwYplEAweaZfKoEYnJzM_t30C83160D593E4B3D56437AB7AE3D2507C9AC52E* ___oYFrXCFyNvlEVFeVWGPlBYGJJQJUA_12;
	// YBzrFNvcnwYplEAweaZfKoEYnJzM[] TAqjagBhKGcWECRbpfkHPNKbpxLsA::bRLCbTxpuwcIXisuuGfDXGIBKEOpA
	YBzrFNvcnwYplEAweaZfKoEYnJzMU5BU5D_tFB4689A16323F9FDCBE75ACBD8F2CADD680D9256* ___bRLCbTxpuwcIXisuuGfDXGIBKEOpA_13;
	// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.ActiveControllerChangedDelegate> TAqjagBhKGcWECRbpfkHPNKbpxLsA::XgSBlEiCxinzSMBCAbctflSvuyyC
	inUVqCQsuvBJxHwomlAniLxWfZitA_1_t67BD3968E2211A2E09B85A6376936EA713E90E04* ___XgSBlEiCxinzSMBCAbctflSvuyyC_14;
	// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.PlayerActiveControllerChangedDelegate> TAqjagBhKGcWECRbpfkHPNKbpxLsA::PZpUuTNIzyjsFUzwOMTmNKvYieYL
	inUVqCQsuvBJxHwomlAniLxWfZitA_1_tD7B16D6D1359CB7B06E2A472A7687A5F7B51DE44* ___PZpUuTNIzyjsFUzwOMTmNKvYieYL_15;
	// inUVqCQsuvBJxHwomlAniLxWfZitA`1<Rewired.PlayerActiveControllerChangedDelegate>[] TAqjagBhKGcWECRbpfkHPNKbpxLsA::BwLIsvbRTdbatTumKRnLlIWPMROU
	inUVqCQsuvBJxHwomlAniLxWfZitA_1U5BU5D_tA661DCC17BBBCCABDACE0F73A4D969A777E291EB* ___BwLIsvbRTdbatTumKRnLlIWPMROU_16;
	// Rewired.Utils.Classes.Data.ADictionary`2<System.Int32,TAqjagBhKGcWECRbpfkHPNKbpxLsA/rjYIYGThyzcIjjKJcsAtqiSHJmxp> TAqjagBhKGcWECRbpfkHPNKbpxLsA::ZdrIflEMNwQABYDEMjZlBRcLDVbb
	ADictionary_2_tE7D442DC62B8CFFF9D86A864353481277AAAE32F* ___ZdrIflEMNwQABYDEMjZlBRcLDVbb_17;
	// PjzdStrqNkNQSljwEZWJWYcQhjVQ TAqjagBhKGcWECRbpfkHPNKbpxLsA::WejqIIyLtJZYzZEyxGBqHOkJzsOl
	PjzdStrqNkNQSljwEZWJWYcQhjVQ_tA22AE52C8C2CD0639BCE85B3BE860B096AFBC1EA* ___WejqIIyLtJZYzZEyxGBqHOkJzsOl_18;
	// System.Collections.Generic.IList`1<Rewired.Joystick> TAqjagBhKGcWECRbpfkHPNKbpxLsA::qonPrzzlQyCfQZjPadYQeZcFFpcdb
	RuntimeObject* ___qonPrzzlQyCfQZjPadYQeZcFFpcdb_19;
	// System.Collections.Generic.IList`1<Rewired.CustomController> TAqjagBhKGcWECRbpfkHPNKbpxLsA::ozrwhehVkuTKkRNLqEdddoCxNMUA
	RuntimeObject* ___ozrwhehVkuTKkRNLqEdddoCxNMUA_20;
	// System.Int32 TAqjagBhKGcWECRbpfkHPNKbpxLsA::JJxqZRLuIOYMOCvSqtKjmlipBZG
	int32_t ___JJxqZRLuIOYMOCvSqtKjmlipBZG_21;
	// System.Boolean TAqjagBhKGcWECRbpfkHPNKbpxLsA::QIMbUjJuNimHQcUsfEpTQyHCgvpj
	bool ___QIMbUjJuNimHQcUsfEpTQyHCgvpj_22;
	// System.Boolean TAqjagBhKGcWECRbpfkHPNKbpxLsA::NdysVuEdWQOiFxbhpptWfUiFhFrr
	bool ___NdysVuEdWQOiFxbhpptWfUiFhFrr_23;
	// System.Boolean TAqjagBhKGcWECRbpfkHPNKbpxLsA::RfchLPcQpuACPERHbVpKmqvQbJMFc
	bool ___RfchLPcQpuACPERHbVpKmqvQbJMFc_24;
	// Rewired.Interfaces.IUnifiedKeyboardSource TAqjagBhKGcWECRbpfkHPNKbpxLsA::NGcfyiSARdAtydVWxwKMqywJrUQgA
	RuntimeObject* ___NGcfyiSARdAtydVWxwKMqywJrUQgA_25;
	// Rewired.Interfaces.IUnifiedMouseSource TAqjagBhKGcWECRbpfkHPNKbpxLsA::yMFwNKJAcxFswEbtqielmoztQPuj
	RuntimeObject* ___yMFwNKJAcxFswEbtqielmoztQPuj_26;
	// System.Int32 TAqjagBhKGcWECRbpfkHPNKbpxLsA::gjdKUqvyEFuFPgBvHvnHncERRqYG
	int32_t ___gjdKUqvyEFuFPgBvHvnHncERRqYG_27;
	// JfVkiPqxuvjpxOenWaPbtdnpqNrC TAqjagBhKGcWECRbpfkHPNKbpxLsA::ksfehWcJeyrOvFtcfltlJWjYBpUz
	JfVkiPqxuvjpxOenWaPbtdnpqNrC_tAD3EC599BD987C8364327BCCAE0346D20C00C8F9* ___ksfehWcJeyrOvFtcfltlJWjYBpUz_28;
	// rlfXkJTrHZdpPrmFzvJfeOpwdxFF TAqjagBhKGcWECRbpfkHPNKbpxLsA::RzBxphZmIoCHLXRoGvldiqxCEgwD
	rlfXkJTrHZdpPrmFzvJfeOpwdxFF_t92D577FF2385AF1C7F87003759294BE9754F3ABD* ___RzBxphZmIoCHLXRoGvldiqxCEgwD_29;
	// System.Int32 TAqjagBhKGcWECRbpfkHPNKbpxLsA::kfNkXwBPjzNbdZoVdVblYDAfNwDM
	int32_t ___kfNkXwBPjzNbdZoVdVblYDAfNwDM_30;
	// System.Int32 TAqjagBhKGcWECRbpfkHPNKbpxLsA::ODQiuEhoXylGZrTvnPdXExxhVXCr
	int32_t ___ODQiuEhoXylGZrTvnPdXExxhVXCr_31;
	// System.Action`2<System.Int32,Rewired.ControllerDataUpdater> TAqjagBhKGcWECRbpfkHPNKbpxLsA::TOZZfnPOyHUABuClbaMHZMspAdZt
	Action_2_t13979AF1641790E4111291C572345E665DD175C4* ___TOZZfnPOyHUABuClbaMHZMspAdZt_32;
	// System.Action`3<System.Boolean,System.Int32,System.Int32> TAqjagBhKGcWECRbpfkHPNKbpxLsA::PLZcozGwIYTsVcDDbsYfohEICBuxA
	Action_3_t142D1F73AF66CEBC85F52240EC1B6207B558A40B* ___PLZcozGwIYTsVcDDbsYfohEICBuxA_33;
	// System.Action`1<Rewired.ControllerStatusChangedEventArgs> TAqjagBhKGcWECRbpfkHPNKbpxLsA::IXMtFFcrfEIDzdudanjuhjPDjfuAB
	Action_1_tBAD7548A2A88259FFDD9D2AF491DA79E19CB5D95* ___IXMtFFcrfEIDzdudanjuhjPDjfuAB_34;
	// System.Action`2<Rewired.ControllerType,System.Int32> TAqjagBhKGcWECRbpfkHPNKbpxLsA::JUgvSEmmHKeWXSBgsgJjuCpArCTi
	Action_2_t803BE0EB18DDC66CA042F1CCF405EFB2D468146D* ___JUgvSEmmHKeWXSBgsgJjuCpArCTi_35;
	// System.Boolean TAqjagBhKGcWECRbpfkHPNKbpxLsA::smLxyjQFlClJKIZlhLSifPFFImqe
	bool ___smLxyjQFlClJKIZlhLSifPFFImqe_36;
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

// Rewired.Player/ControllerHelper
struct ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6  : public RuntimeObject
{
	// Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA Rewired.Player/ControllerHelper::rGIwSbUPDgDDJByCitUBBGoZDlmc
	vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* ___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
	// System.Boolean Rewired.Player/ControllerHelper::AGJkYNtGyvZWiyWIaEfTgcpraKBu
	bool ___AGJkYNtGyvZWiyWIaEfTgcpraKBu_1;
	// System.Boolean Rewired.Player/ControllerHelper::dBLcgVfbQAfhgyHLKVtzegFukmFdb
	bool ___dBLcgVfbQAfhgyHLKVtzegFukmFdb_2;
	// System.Boolean Rewired.Player/ControllerHelper::SmMsiOyklhhkMunjfUeDHALkJxFH
	bool ___SmMsiOyklhhkMunjfUeDHALkJxFH_3;
	// System.Double Rewired.Player/ControllerHelper::ogITdZRpeUFIHfycNToWBHNVRMBNA
	double ___ogITdZRpeUFIHfycNToWBHNVRMBNA_4;
	// System.Double Rewired.Player/ControllerHelper::keifNvKNuhLdvhEdIgfcfYKcLHrn
	double ___keifNvKNuhLdvhEdIgfcfYKcLHrn_5;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player/ControllerHelper::sqNsZAxhlgJVOZsPerBubEQPQpZk
	SafeAction_1_t187B602724412D6E71212275DB504DB2CA537DC0* ___sqNsZAxhlgJVOZsPerBubEQPQpZk_6;
	// Rewired.Utils.SafeAction`1<Rewired.ControllerAssignmentChangedEventArgs> Rewired.Player/ControllerHelper::jhdhfFJWcGqnhlNODKtzbmDJktuBc
	SafeAction_1_t187B602724412D6E71212275DB504DB2CA537DC0* ___jhdhfFJWcGqnhlNODKtzbmDJktuBc_7;
	// Rewired.Player/ControllerHelper/eSDNQUnYcyDvQHrqJricxoWzTLr Rewired.Player/ControllerHelper::AeznZlVnkMKpUcCjeVGMsPEvETFp
	eSDNQUnYcyDvQHrqJricxoWzTLr_t52BD0C4EC6573AD81BF763D7FADDE36ECEB3DA34* ___AeznZlVnkMKpUcCjeVGMsPEvETFp_8;
	// Rewired.Player Rewired.Player/ControllerHelper::vLioXoePkQiNEWuOkALOfFKNbaiU
	Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* ___vLioXoePkQiNEWuOkALOfFKNbaiU_9;
	// PjzdStrqNkNQSljwEZWJWYcQhjVQ Rewired.Player/ControllerHelper::WejqIIyLtJZYzZEyxGBqHOkJzsOl
	PjzdStrqNkNQSljwEZWJWYcQhjVQ_tA22AE52C8C2CD0639BCE85B3BE860B096AFBC1EA* ___WejqIIyLtJZYzZEyxGBqHOkJzsOl_10;
	// System.Int32 Rewired.Player/ControllerHelper::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_11;
	// Rewired.Player/ControllerHelper/MapHelper Rewired.Player/ControllerHelper::maps
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* ___maps_12;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper::conflictChecking
	ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* ___conflictChecking_13;
	// Rewired.Player/ControllerHelper/PollingHelper Rewired.Player/ControllerHelper::polling
	PollingHelper_tB0445EF1EE1230F3EE703F3A0F09DEE0A64D8B97* ___polling_14;
};

// Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw
struct TpeBEFhFAWNAsvKKQTVtIrdFUsQw_t5D5197E218132B1DD4BC8E742573E7D86100D91D  : public RuntimeObject
{
};

struct TpeBEFhFAWNAsvKKQTVtIrdFUsQw_t5D5197E218132B1DD4BC8E742573E7D86100D91D_StaticFields
{
	// Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>> Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::PEWuzoCeZDwOZQKsEAnWARJjQZog
	ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* ___PEWuzoCeZDwOZQKsEAnWARJjQZog_0;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD
struct PMmfElSRTHipvrooOqnrsVzyuehD_t8D1CC18A34C4BA6516D092C1F3A22C72108C3572  : public RuntimeObject
{
};

// Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA
struct vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA::TIKqvTvXeujXUEcFBSnvvfWjpzmS
	int32_t ___TIKqvTvXeujXUEcFBSnvvfWjpzmS_0;
	// Rewired.ControllerType[] Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA::hyffvgHsrKHoGLqtewSlwLJnerIhA
	ControllerTypeU5BU5D_t24957BC60A9ED2806B85EDE1E8A60341D1871FD2* ___hyffvgHsrKHoGLqtewSlwLJnerIhA_1;
	// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA[] Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA::WEmxnsiwKrpkpHxSSWWBddalKCmP
	ftuHLSCvHbrPYKqmDICMGujVuqLSAU5BU5D_t1A5828768AE703001918C5473AA9B00044C7C36E* ___WEmxnsiwKrpkpHxSSWWBddalKCmP_2;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK
struct kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D  : public RuntimeObject
{
	// System.Int32 Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK::AcClZBPdNNZKrqgRPVbnRKTztFVA
	int32_t ___AcClZBPdNNZKrqgRPVbnRKTztFVA_0;
	// System.Int32 Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK::CCzhRDaUDvMVJJyCTKXgJlMZxTznA
	int32_t ___CCzhRDaUDvMVJJyCTKXgJlMZxTznA_1;
	// System.Int32 Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK::nUqCRtBiQRTUXOfhCEaNuUGaHEsB
	int32_t ___nUqCRtBiQRTUXOfhCEaNuUGaHEsB_2;
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

// Rewired.InputMapCategory
struct InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111  : public InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C
{
	// System.Boolean Rewired.InputMapCategory::_checkConflictsWithAllCategories
	bool ____checkConflictsWithAllCategories_5;
	// System.Collections.Generic.List`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____checkConflictsCategoryIds_6;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> Rewired.InputMapCategory::_checkConflictsCategoryIds_readOnly
	ReadOnlyCollection_1_t6E714C47AF272D9524CD752F30ED6538C5780952* ____checkConflictsCategoryIds_readOnly_7;
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

// Rewired.ReInput/ControllerHelper
struct ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E  : public CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291
{
	// Rewired.ReInput/ControllerHelper/PollingHelper Rewired.ReInput/ControllerHelper::polling
	PollingHelper_tDC5975DF531D46693230837C215974F5B59AECAB* ___polling_1;
	// Rewired.ReInput/ControllerHelper/ConflictCheckingHelper Rewired.ReInput/ControllerHelper::conflictChecking
	ConflictCheckingHelper_tD50E0E01A2183F0F5290D4704CB790D45A7626C4* ___conflictChecking_2;
};

struct ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E_StaticFields
{
	// Rewired.ReInput/ControllerHelper Rewired.ReInput/ControllerHelper::tusTZiBoCPVQrGuQgVUEuHxykifk
	ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E* ___tusTZiBoCPVQrGuQgVUEuHxykifk_0;
};

// Rewired.ReInput/MappingHelper
struct MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662  : public CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291
{
};

struct MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662_StaticFields
{
	// Rewired.ReInput/MappingHelper Rewired.ReInput/MappingHelper::tusTZiBoCPVQrGuQgVUEuHxykifk
	MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* ___tusTZiBoCPVQrGuQgVUEuHxykifk_0;
};

// Rewired.ReInput/PlayerHelper
struct PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C  : public CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291
{
};

struct PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C_StaticFields
{
	// Rewired.ReInput/PlayerHelper Rewired.ReInput/PlayerHelper::tusTZiBoCPVQrGuQgVUEuHxykifk
	PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* ___tusTZiBoCPVQrGuQgVUEuHxykifk_0;
};

// Rewired.Player/ControllerHelper/ConflictCheckingHelper
struct ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB  : public CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291
{
	// Rewired.Player Rewired.Player/ControllerHelper/ConflictCheckingHelper::vLioXoePkQiNEWuOkALOfFKNbaiU
	Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* ___vLioXoePkQiNEWuOkALOfFKNbaiU_0;
	// Rewired.Player/ControllerHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper::JOhXpftGzsqKykxdovItahCXjNZ
	ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* ___JOhXpftGzsqKykxdovItahCXjNZ_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_2;
};

// Rewired.Player/ControllerHelper/MapHelper
struct MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2  : public CodeHelper_t3C7A463B1ACD337842945793AAAA8641F9832291
{
	// EYzeMRMINmbDPjgLMbiDXTDcHYNs Rewired.Player/ControllerHelper/MapHelper::jPiIwoojBEMPokBDPrKAFdfiDpydA
	EYzeMRMINmbDPjgLMbiDXTDcHYNs_tCDC7C8E6E50F029693E0ACB75DA0000C6F87E379* ___jPiIwoojBEMPokBDPrKAFdfiDpydA_0;
	// Rewired.Player Rewired.Player/ControllerHelper/MapHelper::vLioXoePkQiNEWuOkALOfFKNbaiU
	Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* ___vLioXoePkQiNEWuOkALOfFKNbaiU_1;
	// Rewired.Player/ControllerHelper Rewired.Player/ControllerHelper/MapHelper::JOhXpftGzsqKykxdovItahCXjNZ
	ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* ___JOhXpftGzsqKykxdovItahCXjNZ_2;
	// Rewired.ControllerMapEnabler Rewired.Player/ControllerHelper/MapHelper::dohPxJNTmKSehHjFxABvGTvnYGnw
	ControllerMapEnabler_tA0F9E3CA8F655F79B94FE9343DC7D543CCC0DE9B* ___dohPxJNTmKSehHjFxABvGTvnYGnw_3;
	// Rewired.ControllerMapLayoutManager Rewired.Player/ControllerHelper/MapHelper::DLygvCesBtqGZiRYmwoQkFsPQSgs
	ControllerMapLayoutManager_t630460EA47983879378D747091ED5C63493C23B3* ___DLygvCesBtqGZiRYmwoQkFsPQSgs_4;
	// System.Int32 Rewired.Player/ControllerHelper/MapHelper::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
};

// Rewired.AxisRange
struct AxisRange_tAB921FDCAA3CC6E6128FDC93A6536152A2268E75 
{
	// System.Int32 Rewired.AxisRange::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// Rewired.BoolOption
struct BoolOption_tE7945CF0C089A73DB9DD94B04EE58F0FE57737ED 
{
	// System.Int32 Rewired.BoolOption::value__
	int32_t ___value___2;
};

// Rewired.ControllerElementType
struct ControllerElementType_t69E1FA1BEB508AFD38B2593EAB7E90F56998A370 
{
	// System.Int32 Rewired.ControllerElementType::value__
	int32_t ___value___2;
};

// Rewired.ControllerType
struct ControllerType_t41401D57750E3991DC372B9DFF320913295F3839 
{
	// System.Int32 Rewired.ControllerType::value__
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

// Rewired.Platforms.EditorPlatform
struct EditorPlatform_t33D187BE0BD636E5EF23116C33501D22BA6F407F 
{
	// System.Int32 Rewired.Platforms.EditorPlatform::value__
	int32_t ___value___2;
};

// Rewired.ElementAssignmentType
struct ElementAssignmentType_tC4EA16FFA08E9B000C12C326CB5C0020B77AAF30 
{
	// System.Int32 Rewired.ElementAssignmentType::value__
	int32_t ___value___2;
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

// Rewired.KeyboardKeyCode
struct KeyboardKeyCode_t545B6C6B6503684368C97EF375ECEC08B68993A0 
{
	// System.Int32 Rewired.KeyboardKeyCode::value__
	int32_t ___value___2;
};

// Rewired.ModifierKey
struct ModifierKey_tCF1AD63897E47EB308093D5C9ECFD9335A084AE7 
{
	// System.Int32 Rewired.ModifierKey::value__
	int32_t ___value___2;
};

// Rewired.ModifierKeyFlags
struct ModifierKeyFlags_t43720ED61DD68C8412826524EE2D8A13A9108D61 
{
	// System.Int32 Rewired.ModifierKeyFlags::value__
	int32_t ___value___2;
};

// Rewired.Platforms.Platform
struct Platform_tE434287D5FAAE49534374FB4EE07A9A7EEC84B60 
{
	// System.Int32 Rewired.Platforms.Platform::value__
	int32_t ___value___2;
};

// Rewired.Pole
struct Pole_t753850F5C5B37E6A1F14AC631159E2359BC0F90D 
{
	// System.Int32 Rewired.Pole::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Rewired.UpdateLoopType
struct UpdateLoopType_t54D15B6C8AD3EE8D49B68462CDC608A42F0359FB 
{
	// System.Int32 Rewired.UpdateLoopType::value__
	int32_t ___value___2;
};

// Rewired.Platforms.WebplayerPlatform
struct WebplayerPlatform_t4B3EEFC074B54E11E5F2D8034768A84C9B1192F3 
{
	// System.Int32 Rewired.Platforms.WebplayerPlatform::value__
	int32_t ___value___2;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK/CONyoCVDDnZOISeLTzDqTryyCphV
struct CONyoCVDDnZOISeLTzDqTryyCphV_t502BED7EB442D23A7F862E844D8169E7286BF7C2 
{
	// System.Int32 Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK/CONyoCVDDnZOISeLTzDqTryyCphV::value__
	int32_t ___value___2;
};

// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<System.Object>
struct TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Rewired.ControllerMap> TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::pNzKOGRtvmQWwYdVRwoTKHZVxBoe
	List_1_t2F083EFD818F84CF4216467CD6432E17EA0EAFB4* ___pNzKOGRtvmQWwYdVRwoTKHZVxBoe_0;
	// System.Collections.Generic.IList`1<Rewired.ControllerMap> TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::NwiqNBnqHWKGjNKSdRAyEiLChIzd
	RuntimeObject* ___NwiqNBnqHWKGjNKSdRAyEiLChIzd_1;
	// Rewired.ControllerType TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::FlMTEQmWOHVNzmnTpwqezeosKTre
	int32_t ___FlMTEQmWOHVNzmnTpwqezeosKTre_2;
	// System.Int32 TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::NgYvqnovMkSRHVNEWEYzgQedwFde
	int32_t ___NgYvqnovMkSRHVNEWEYzgQedwFde_3;
	// System.Collections.Generic.List`1<?> TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::xZknXaibuBjUlaKGkavRZlYzYvOv
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___xZknXaibuBjUlaKGkavRZlYzYvOv_4;
	// System.Collections.Generic.IList`1<?> TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1::xfaoXdgWvusGEvpDOGftkKmRAFNVA
	RuntimeObject* ___xfaoXdgWvusGEvpDOGftkKmRAFNVA_5;
};

// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>
struct cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85  : public RuntimeObject
{
	// ? Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1::ycylfGZkQYZLsmkzSDPTgBSCfYpR
	RuntimeObject* ___ycylfGZkQYZLsmkzSDPTgBSCfYpR_0;
	// ? Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1::jibeRAPVQsjIXkavALBbxCpQPlHP
	RuntimeObject* ___jibeRAPVQsjIXkavALBbxCpQPlHP_1;
	// Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK/CONyoCVDDnZOISeLTzDqTryyCphV Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1::qapDwcBmHkNHjyhnhgUIXzBaVSSP
	int32_t ___qapDwcBmHkNHjyhnhgUIXzBaVSSP_2;
	// System.Collections.Generic.IList`1<?> Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1::PZmJBrkPtqspvDEXuRQFiLTDOmrB
	RuntimeObject* ___PZmJBrkPtqspvDEXuRQFiLTDOmrB_3;
	// System.Boolean Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1::MSFNDejRRUAmvrHnnMhlecjglmpU
	bool ___MSFNDejRRUAmvrHnnMhlecjglmpU_4;
};

// Rewired.ActionElementMap
struct ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF  : public RuntimeObject
{
	// System.Int32 Rewired.ActionElementMap::_actionCategoryId
	int32_t ____actionCategoryId_0;
	// System.Int32 Rewired.ActionElementMap::_actionId
	int32_t ____actionId_1;
	// Rewired.ControllerElementType Rewired.ActionElementMap::_elementType
	int32_t ____elementType_2;
	// System.Int32 Rewired.ActionElementMap::_elementIdentifierId
	int32_t ____elementIdentifierId_3;
	// Rewired.AxisRange Rewired.ActionElementMap::_axisRange
	int32_t ____axisRange_4;
	// System.Boolean Rewired.ActionElementMap::_invert
	bool ____invert_5;
	// Rewired.Pole Rewired.ActionElementMap::_axisContribution
	int32_t ____axisContribution_6;
	// Rewired.KeyboardKeyCode Rewired.ActionElementMap::_keyboardKeyCode
	int32_t ____keyboardKeyCode_7;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey1
	int32_t ____modifierKey1_8;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey2
	int32_t ____modifierKey2_9;
	// Rewired.ModifierKey Rewired.ActionElementMap::_modifierKey3
	int32_t ____modifierKey3_10;
	// Rewired.ControllerMap Rewired.ActionElementMap::KcVwECPfnIdZspTPSjsPTIKVzXhj
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* ___KcVwECPfnIdZspTPSjsPTIKVzXhj_11;
	// System.Boolean Rewired.ActionElementMap::ITUIszRiaNrsImOTfgAHSPwPTOLe
	bool ___ITUIszRiaNrsImOTfgAHSPwPTOLe_12;
	// System.String Rewired.ActionElementMap::jbwTRqfqiqACQUTruPwbYnksYmwC
	String_t* ___jbwTRqfqiqACQUTruPwbYnksYmwC_13;
	// System.String Rewired.ActionElementMap::sUFbxreXOxfeGTyhVDXSewHmICtNA
	String_t* ___sUFbxreXOxfeGTyhVDXSewHmICtNA_14;
	// System.Int32 Rewired.ActionElementMap::zmFhEQUDPjAWQEDVHHgiGnzAJkVq
	int32_t ___zmFhEQUDPjAWQEDVHHgiGnzAJkVq_15;
	// System.Int32 Rewired.ActionElementMap::uiBcvtaHTXDhDgTmVOTVLzAJdhvt
	int32_t ___uiBcvtaHTXDhDgTmVOTVLzAJdhvt_16;
	// System.String Rewired.ActionElementMap::JmrfDGCSPNnNIHnRnJJUuzAyYnSqA
	String_t* ___JmrfDGCSPNnNIHnRnJJUuzAyYnSqA_17;
	// Rewired.ModifierKeyFlags Rewired.ActionElementMap::JxxYtkxxuhAOizovwtWBKsTRdbGA
	int32_t ___JxxYtkxxuhAOizovwtWBKsTRdbGA_18;
};

struct ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF_StaticFields
{
	// System.Int32 Rewired.ActionElementMap::uidCounter
	int32_t ___uidCounter_19;
	// System.Text.StringBuilder Rewired.ActionElementMap::s_toStringSB
	StringBuilder_t* ___s_toStringSB_20;
};

// Rewired.ControllerIdentifier
struct ControllerIdentifier_tB97D39E368F2473E38D5C32B427C7E929C905592 
{
	// System.Int32 Rewired.ControllerIdentifier::wovqMdREgMHEHAKFWnDLDuYilFZN
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_0;
	// Rewired.ControllerType Rewired.ControllerIdentifier::uXdofgxOYrPYUxRwFbcOtLnrtwQM
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_1;
	// System.Guid Rewired.ControllerIdentifier::VucGuTnWrLUexICHrMfuLpMDiPwB
	Guid_t ___VucGuTnWrLUexICHrMfuLpMDiPwB_2;
	// System.String Rewired.ControllerIdentifier::VOoFuFHNxirGIZyqlczoBmVHJBpH
	String_t* ___VOoFuFHNxirGIZyqlczoBmVHJBpH_3;
	// System.Guid Rewired.ControllerIdentifier::AdVWPVeeWREAKYnPcptASCNIkCUG
	Guid_t ___AdVWPVeeWREAKYnPcptASCNIkCUG_4;
};
// Native definition for P/Invoke marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_tB97D39E368F2473E38D5C32B427C7E929C905592_marshaled_pinvoke
{
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_0;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_1;
	Guid_t ___VucGuTnWrLUexICHrMfuLpMDiPwB_2;
	char* ___VOoFuFHNxirGIZyqlczoBmVHJBpH_3;
	Guid_t ___AdVWPVeeWREAKYnPcptASCNIkCUG_4;
};
// Native definition for COM marshalling of Rewired.ControllerIdentifier
struct ControllerIdentifier_tB97D39E368F2473E38D5C32B427C7E929C905592_marshaled_com
{
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_0;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_1;
	Guid_t ___VucGuTnWrLUexICHrMfuLpMDiPwB_2;
	Il2CppChar* ___VOoFuFHNxirGIZyqlczoBmVHJBpH_3;
	Guid_t ___AdVWPVeeWREAKYnPcptASCNIkCUG_4;
};

// Rewired.ControllerMap
struct ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3  : public RuntimeObject
{
	// System.Int32 Rewired.ControllerMap::_id
	int32_t ____id_0;
	// System.Int32 Rewired.ControllerMap::_sourceMapId
	int32_t ____sourceMapId_1;
	// System.Int32 Rewired.ControllerMap::_categoryId
	int32_t ____categoryId_2;
	// System.Int32 Rewired.ControllerMap::_layoutId
	int32_t ____layoutId_3;
	// System.String Rewired.ControllerMap::_name
	String_t* ____name_4;
	// System.Guid Rewired.ControllerMap::_hardwareGuid
	Guid_t ____hardwareGuid_5;
	// System.Boolean Rewired.ControllerMap::_enabled
	bool ____enabled_6;
	// System.Int32 Rewired.ControllerMap::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_7;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::tvTaSlZaJJsaHhTxcEdxOMRqgyDi
	AList_1_t26BA8BE4BEB503507B02BE892DA37BBBAA585997* ___tvTaSlZaJJsaHhTxcEdxOMRqgyDi_8;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::zPkhYeKAKTJBuzbXscEEzBRVCPcR
	ReadOnlyCollection_1_t4422A6B0A0A793D51A319B9A8A073733A2FACF05* ___zPkhYeKAKTJBuzbXscEEzBRVCPcR_9;
	// Rewired.Utils.Classes.Data.AList`1<Rewired.ActionElementMap> Rewired.ControllerMap::CGHcOmRSipXfGMFnwEHKevuNmNLUA
	AList_1_t26BA8BE4BEB503507B02BE892DA37BBBAA585997* ___CGHcOmRSipXfGMFnwEHKevuNmNLUA_10;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.ActionElementMap> Rewired.ControllerMap::IEBQoCgKRmtszWwQLyQNFcxpYgxg
	ReadOnlyCollection_1_t4422A6B0A0A793D51A319B9A8A073733A2FACF05* ___IEBQoCgKRmtszWwQLyQNFcxpYgxg_11;
	// System.Int32 Rewired.ControllerMap::_playerId
	int32_t ____playerId_12;
	// System.Int32 Rewired.ControllerMap::_controllerId
	int32_t ____controllerId_13;
	// Rewired.ControllerType Rewired.ControllerMap::_controllerType
	int32_t ____controllerType_14;
};

struct ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3_StaticFields
{
	// System.Int32 Rewired.ControllerMap::dfkdFWaJIiiVPRSutzcNifMbAaHZA
	int32_t ___dfkdFWaJIiiVPRSutzcNifMbAaHZA_15;
};

// Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E 
{
	// Rewired.ElementAssignmentType Rewired.ElementAssignmentConflictCheck::hZpvNjLicRabqamqNseMJpYCCNbIA
	int32_t ___hZpvNjLicRabqamqNseMJpYCCNbIA_0;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::poRIGCSEughNfRYXWSqdxofgERiiA
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_1;
	// Rewired.ControllerType Rewired.ElementAssignmentConflictCheck::uXdofgxOYrPYUxRwFbcOtLnrtwQM
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_2;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::wovqMdREgMHEHAKFWnDLDuYilFZN
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_3;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::IuSWTyCEwxTphLVNpdlvWrKjDFGj
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_4;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::BVLEAOpnlCWLTSJLJiBFhzJTNjut
	int32_t ___BVLEAOpnlCWLTSJLJiBFhzJTNjut_5;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::lZXeDRuUVgdzlcvHRyqDASfetfiq
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::dDfetvBNteDTeczVYgZnpTDFdyZTA
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_7;
	// Rewired.AxisRange Rewired.ElementAssignmentConflictCheck::TUfMfJCvQwRlWQWmvQtAlTTmqfbC
	int32_t ___TUfMfJCvQwRlWQWmvQtAlTTmqfbC_8;
	// UnityEngine.KeyCode Rewired.ElementAssignmentConflictCheck::wphhsjozmzuKXddOdTEOdqtVXqjF
	int32_t ___wphhsjozmzuKXddOdTEOdqtVXqjF_9;
	// Rewired.ModifierKeyFlags Rewired.ElementAssignmentConflictCheck::VTgiPzuQKpZVCFqLcPPZPchaatQr
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	// System.Int32 Rewired.ElementAssignmentConflictCheck::jKZLhONJVjxMGJoFxnLBvfHJROqX
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
	// Rewired.Pole Rewired.ElementAssignmentConflictCheck::SWbeDMcfuMiUORBksMkMeooXMTDcA
	int32_t ___SWbeDMcfuMiUORBksMkMeooXMTDcA_12;
	// System.Boolean Rewired.ElementAssignmentConflictCheck::wjumzoTfqqyyGTaozhcPHbRpEMeN
	bool ___wjumzoTfqqyyGTaozhcPHbRpEMeN_13;
};
// Native definition for P/Invoke marshalling of Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E_marshaled_pinvoke
{
	int32_t ___hZpvNjLicRabqamqNseMJpYCCNbIA_0;
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_1;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_2;
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_3;
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_4;
	int32_t ___BVLEAOpnlCWLTSJLJiBFhzJTNjut_5;
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_7;
	int32_t ___TUfMfJCvQwRlWQWmvQtAlTTmqfbC_8;
	int32_t ___wphhsjozmzuKXddOdTEOdqtVXqjF_9;
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
	int32_t ___SWbeDMcfuMiUORBksMkMeooXMTDcA_12;
	int32_t ___wjumzoTfqqyyGTaozhcPHbRpEMeN_13;
};
// Native definition for COM marshalling of Rewired.ElementAssignmentConflictCheck
struct ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E_marshaled_com
{
	int32_t ___hZpvNjLicRabqamqNseMJpYCCNbIA_0;
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_1;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_2;
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_3;
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_4;
	int32_t ___BVLEAOpnlCWLTSJLJiBFhzJTNjut_5;
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_7;
	int32_t ___TUfMfJCvQwRlWQWmvQtAlTTmqfbC_8;
	int32_t ___wphhsjozmzuKXddOdTEOdqtVXqjF_9;
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
	int32_t ___SWbeDMcfuMiUORBksMkMeooXMTDcA_12;
	int32_t ___wjumzoTfqqyyGTaozhcPHbRpEMeN_13;
};

// Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2 
{
	// System.Boolean Rewired.ElementAssignmentConflictInfo::VEZJCjmasiBxwhmxHhAcQSLHGUUM
	bool ___VEZJCjmasiBxwhmxHhAcQSLHGUUM_0;
	// System.Boolean Rewired.ElementAssignmentConflictInfo::ADrhzjCddZwvoAyLfFOUeCguarFLA
	bool ___ADrhzjCddZwvoAyLfFOUeCguarFLA_1;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::poRIGCSEughNfRYXWSqdxofgERiiA
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_2;
	// Rewired.ControllerType Rewired.ElementAssignmentConflictInfo::uXdofgxOYrPYUxRwFbcOtLnrtwQM
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_3;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::wovqMdREgMHEHAKFWnDLDuYilFZN
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_4;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::IuSWTyCEwxTphLVNpdlvWrKjDFGj
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_5;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::lZXeDRuUVgdzlcvHRyqDASfetfiq
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	// Rewired.ControllerElementType Rewired.ElementAssignmentConflictInfo::fdfPHrqgMMAtUtSYPWbnQLVzypzg
	int32_t ___fdfPHrqgMMAtUtSYPWbnQLVzypzg_7;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::dDfetvBNteDTeczVYgZnpTDFdyZTA
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_8;
	// UnityEngine.KeyCode Rewired.ElementAssignmentConflictInfo::sgekfAUEmxQmUePkTQHBKvMJUHOm
	int32_t ___sgekfAUEmxQmUePkTQHBKvMJUHOm_9;
	// Rewired.ModifierKeyFlags Rewired.ElementAssignmentConflictInfo::VTgiPzuQKpZVCFqLcPPZPchaatQr
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	// System.Int32 Rewired.ElementAssignmentConflictInfo::jKZLhONJVjxMGJoFxnLBvfHJROqX
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
};
// Native definition for P/Invoke marshalling of Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2_marshaled_pinvoke
{
	int32_t ___VEZJCjmasiBxwhmxHhAcQSLHGUUM_0;
	int32_t ___ADrhzjCddZwvoAyLfFOUeCguarFLA_1;
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_2;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_3;
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_4;
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_5;
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	int32_t ___fdfPHrqgMMAtUtSYPWbnQLVzypzg_7;
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_8;
	int32_t ___sgekfAUEmxQmUePkTQHBKvMJUHOm_9;
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
};
// Native definition for COM marshalling of Rewired.ElementAssignmentConflictInfo
struct ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2_marshaled_com
{
	int32_t ___VEZJCjmasiBxwhmxHhAcQSLHGUUM_0;
	int32_t ___ADrhzjCddZwvoAyLfFOUeCguarFLA_1;
	int32_t ___poRIGCSEughNfRYXWSqdxofgERiiA_2;
	int32_t ___uXdofgxOYrPYUxRwFbcOtLnrtwQM_3;
	int32_t ___wovqMdREgMHEHAKFWnDLDuYilFZN_4;
	int32_t ___IuSWTyCEwxTphLVNpdlvWrKjDFGj_5;
	int32_t ___lZXeDRuUVgdzlcvHRyqDASfetfiq_6;
	int32_t ___fdfPHrqgMMAtUtSYPWbnQLVzypzg_7;
	int32_t ___dDfetvBNteDTeczVYgZnpTDFdyZTA_8;
	int32_t ___sgekfAUEmxQmUePkTQHBKvMJUHOm_9;
	int32_t ___VTgiPzuQKpZVCFqLcPPZPchaatQr_10;
	int32_t ___jKZLhONJVjxMGJoFxnLBvfHJROqX_11;
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

// System.Func`2<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>,System.Object>
struct Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Collections.Generic.IList`1<System.Object>,System.Int32>
struct Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E  : public MulticastDelegate_t
{
};

// Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1<System.Object>
struct LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2 ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::BONcEOgaKIwNBDEogpxutUxJqMiOA
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___BONcEOgaKIwNBDEogpxutUxJqMiOA_3;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::GvAHqXQEeCaNOUVGVeofgeJOkljZ
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4;
	// Rewired.ElementAssignmentConflictCheck Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::xujaweHMNjJktkOttbibNvvlcTSP
	ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E ___xujaweHMNjJktkOttbibNvvlcTSP_5;
	// Rewired.ElementAssignmentConflictCheck Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::wmyDcCHWYMasogZlrqkbzlzgyAQe
	ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E ___wmyDcCHWYMasogZlrqkbzlzgyAQe_6;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::nVhagDMkmFWoYFdZMrVvmtWxoqkX
	bool ___nVhagDMkmFWoYFdZMrVvmtWxoqkX_7;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::wbJTSksJrdbiJvScZEcbgDdFVdPiA
	bool ___wbJTSksJrdbiJvScZEcbgDdFVdPiA_8;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::BOdYrjfnCvMbcLNuzrsEUeilyZEp
	bool ___BOdYrjfnCvMbcLNuzrsEUeilyZEp_9;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::mzPyLJUgHmLqXxITGVUETFfKmubS
	bool ___mzPyLJUgHmLqXxITGVUETFfKmubS_10;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11;
	// Rewired.InputMapCategory Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::kksVYTgjEVFZyqFYvtwJgAosNvDn
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* ___kksVYTgjEVFZyqFYvtwJgAosNvDn_12;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::XRXvHMDaUbnUKSmMJEaxfPHXxbMm
	int32_t ___XRXvHMDaUbnUKSmMJEaxfPHXxbMm_13;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1::HpXSjfddGZNESZUwdNcsLgcceUhy
	RuntimeObject* ___HpXSjfddGZNESZUwdNcsLgcceUhy_14;
};

// Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1<System.Object>
struct NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2 ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::BONcEOgaKIwNBDEogpxutUxJqMiOA
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___BONcEOgaKIwNBDEogpxutUxJqMiOA_3;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::GvAHqXQEeCaNOUVGVeofgeJOkljZ
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::hdeEYBGDrHGibivVOHuxbnneRxiy
	RuntimeObject* ___hdeEYBGDrHGibivVOHuxbnneRxiy_5;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::yFsxPduJsRRbcQBkjQYDCjtPsnZC
	RuntimeObject* ___yFsxPduJsRRbcQBkjQYDCjtPsnZC_6;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::nVhagDMkmFWoYFdZMrVvmtWxoqkX
	bool ___nVhagDMkmFWoYFdZMrVvmtWxoqkX_7;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::wbJTSksJrdbiJvScZEcbgDdFVdPiA
	bool ___wbJTSksJrdbiJvScZEcbgDdFVdPiA_8;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::BOdYrjfnCvMbcLNuzrsEUeilyZEp
	bool ___BOdYrjfnCvMbcLNuzrsEUeilyZEp_9;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::mzPyLJUgHmLqXxITGVUETFfKmubS
	bool ___mzPyLJUgHmLqXxITGVUETFfKmubS_10;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::NxodZbWOUvIlUIjuymsXRiZHjbjC
	int32_t ___NxodZbWOUvIlUIjuymsXRiZHjbjC_12;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::GIZHpBfTSGgXJDtcKfJhtDcTARMY
	int32_t ___GIZHpBfTSGgXJDtcKfJhtDcTARMY_13;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::ITgIwrSYaNPfsNHEMkJvPipaoLXv
	int32_t ___ITgIwrSYaNPfsNHEMkJvPipaoLXv_14;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::XuDYOktzvzuJLzqUPQedqdspGDhC
	int32_t ___XuDYOktzvzuJLzqUPQedqdspGDhC_15;
	// Rewired.InputMapCategory Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::kksVYTgjEVFZyqFYvtwJgAosNvDn
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* ___kksVYTgjEVFZyqFYvtwJgAosNvDn_16;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::XRXvHMDaUbnUKSmMJEaxfPHXxbMm
	int32_t ___XRXvHMDaUbnUKSmMJEaxfPHXxbMm_17;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1::HpXSjfddGZNESZUwdNcsLgcceUhy
	RuntimeObject* ___HpXSjfddGZNESZUwdNcsLgcceUhy_18;
};

// System.Predicate`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>
struct Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674  : public MulticastDelegate_t
{
};

// Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1<System.Object>
struct gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3  : public RuntimeObject
{
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::lhJjXYwkSAdydFfoeAtjBqWdritd
	int32_t ___lhJjXYwkSAdydFfoeAtjBqWdritd_0;
	// Rewired.ElementAssignmentConflictInfo Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::vCTBKloGAsThLIlfLnSUZmMAGBkDA
	ElementAssignmentConflictInfo_t5BEF1917CC1F4A9E47FD362786C2F9A13BEDDEC2 ___vCTBKloGAsThLIlfLnSUZmMAGBkDA_1;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::IZEjyMBhYsNpKQOWFbNUXKoJwbAw
	int32_t ___IZEjyMBhYsNpKQOWFbNUXKoJwbAw_2;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::BONcEOgaKIwNBDEogpxutUxJqMiOA
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___BONcEOgaKIwNBDEogpxutUxJqMiOA_3;
	// TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?> Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::GvAHqXQEeCaNOUVGVeofgeJOkljZ
	TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* ___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4;
	// Rewired.ActionElementMap Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::enhfJSxEcPayvXmpsPbcdIzfGAnbA
	ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* ___enhfJSxEcPayvXmpsPbcdIzfGAnbA_5;
	// Rewired.ActionElementMap Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::CjJHlxWDwYLXIQWEDyYWzjqIDWLF
	ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* ___CjJHlxWDwYLXIQWEDyYWzjqIDWLF_6;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::hdeEYBGDrHGibivVOHuxbnneRxiy
	RuntimeObject* ___hdeEYBGDrHGibivVOHuxbnneRxiy_7;
	// ? Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::yFsxPduJsRRbcQBkjQYDCjtPsnZC
	RuntimeObject* ___yFsxPduJsRRbcQBkjQYDCjtPsnZC_8;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::nVhagDMkmFWoYFdZMrVvmtWxoqkX
	bool ___nVhagDMkmFWoYFdZMrVvmtWxoqkX_9;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::wbJTSksJrdbiJvScZEcbgDdFVdPiA
	bool ___wbJTSksJrdbiJvScZEcbgDdFVdPiA_10;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::BOdYrjfnCvMbcLNuzrsEUeilyZEp
	bool ___BOdYrjfnCvMbcLNuzrsEUeilyZEp_11;
	// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::mzPyLJUgHmLqXxITGVUETFfKmubS
	bool ___mzPyLJUgHmLqXxITGVUETFfKmubS_12;
	// Rewired.Player/ControllerHelper/ConflictCheckingHelper Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::hJlvyFukKfMzsWcSVLwLCnIUdlMn
	ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* ___hJlvyFukKfMzsWcSVLwLCnIUdlMn_13;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::NxodZbWOUvIlUIjuymsXRiZHjbjC
	int32_t ___NxodZbWOUvIlUIjuymsXRiZHjbjC_14;
	// Rewired.ControllerType Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::GIZHpBfTSGgXJDtcKfJhtDcTARMY
	int32_t ___GIZHpBfTSGgXJDtcKfJhtDcTARMY_15;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::ITgIwrSYaNPfsNHEMkJvPipaoLXv
	int32_t ___ITgIwrSYaNPfsNHEMkJvPipaoLXv_16;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::XuDYOktzvzuJLzqUPQedqdspGDhC
	int32_t ___XuDYOktzvzuJLzqUPQedqdspGDhC_17;
	// Rewired.InputMapCategory Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::kksVYTgjEVFZyqFYvtwJgAosNvDn
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* ___kksVYTgjEVFZyqFYvtwJgAosNvDn_18;
	// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::XRXvHMDaUbnUKSmMJEaxfPHXxbMm
	int32_t ___XRXvHMDaUbnUKSmMJEaxfPHXxbMm_19;
	// System.Collections.Generic.IEnumerator`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1::HpXSjfddGZNESZUwdNcsLgcceUhy
	RuntimeObject* ___HpXSjfddGZNESZUwdNcsLgcceUhy_20;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Rewired.Controller
struct Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911  : public RuntimeObject
{
	// System.Int32 Rewired.Controller::id
	int32_t ___id_0;
	// System.String Rewired.Controller::_tag
	String_t* ____tag_1;
	// System.String Rewired.Controller::_name
	String_t* ____name_2;
	// System.String Rewired.Controller::_hardwareName
	String_t* ____hardwareName_3;
	// Rewired.ControllerType Rewired.Controller::_type
	int32_t ____type_4;
	// System.Guid Rewired.Controller::VucGuTnWrLUexICHrMfuLpMDiPwB
	Guid_t ___VucGuTnWrLUexICHrMfuLpMDiPwB_5;
	// System.String Rewired.Controller::_hardwareIdentifier
	String_t* ____hardwareIdentifier_6;
	// System.Boolean Rewired.Controller::_isConnected
	bool ____isConnected_7;
	// Rewired.Controller/Extension Rewired.Controller::ASWjdRHfSQEduELqJgMwaGOflbbJc
	Extension_t65CC6FDD7104DC3F9E55C8238302E9F8870162F9* ___ASWjdRHfSQEduELqJgMwaGOflbbJc_8;
	// System.Boolean Rewired.Controller::ITUIszRiaNrsImOTfgAHSPwPTOLe
	bool ___ITUIszRiaNrsImOTfgAHSPwPTOLe_9;
	// Rewired.ControllerIdentifier Rewired.Controller::tJNfNbYLySwKRswjmUWkHYDZmjpy
	ControllerIdentifier_tB97D39E368F2473E38D5C32B427C7E929C905592 ___tJNfNbYLySwKRswjmUWkHYDZmjpy_10;
	// System.Int32 Rewired.Controller::eNyGUiEiMyquCTKLRhFvpeyOvzMm
	int32_t ___eNyGUiEiMyquCTKLRhFvpeyOvzMm_11;
	// System.Int32 Rewired.Controller::_buttonCount
	int32_t ____buttonCount_12;
	// Rewired.Controller/Button[] Rewired.Controller::buttons
	ButtonU5BU5D_t72C5601523D894D77B2BDF77A056019A61C0AF62* ___buttons_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Button> Rewired.Controller::buttons_readOnly
	ReadOnlyCollection_1_t6632538F4C35EC35B77D58F6C62A8C0D52AED202* ___buttons_readOnly_14;
	// System.Collections.Generic.IList`1<Rewired.Controller/Element> Rewired.Controller::FZydGRarJpccYCkKlMkeaFhsIdKT
	RuntimeObject* ___FZydGRarJpccYCkKlMkeaFhsIdKT_15;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/Element> Rewired.Controller::nSbiqQXKVSDSaiJKwBgVawveFWfo
	ReadOnlyCollection_1_tCB75F8E52C91C2CE68136F2CE66A099484F8D615* ___nSbiqQXKVSDSaiJKwBgVawveFWfo_16;
	// System.Collections.Generic.IList`1<Rewired.Controller/CompoundElement> Rewired.Controller::adewKstltyDoFATGkHdgJNMfaboeb
	RuntimeObject* ___adewKstltyDoFATGkHdgJNMfaboeb_17;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.Controller/CompoundElement> Rewired.Controller::MkZGTdvWwFCmEcJGZDpznCicochf
	ReadOnlyCollection_1_tD98C9F15A7AA1561CBE4F44983375EEF67277B2C* ___MkZGTdvWwFCmEcJGZDpznCicochf_18;
	// Rewired.InputSource Rewired.Controller::inputSource
	int32_t ___inputSource_19;
	// Rewired.ControllerDataUpdater Rewired.Controller::luXPZItLRMwFxNAWMfXihrwEgVTc
	ControllerDataUpdater_tEA424134962ED8FCA977957E8CAE6B6521D67788* ___luXPZItLRMwFxNAWMfXihrwEgVTc_20;
	// Rewired.HardwareControllerMap_Game Rewired.Controller::EigeWkagcWzRPQmiYOxpLjFTpqseb
	HardwareControllerMap_Game_t3C259C0FEB7E4318075A0A7CAECB7DF1D7AA950A* ___EigeWkagcWzRPQmiYOxpLjFTpqseb_21;
	// System.UInt32 Rewired.Controller::IJiyUmKnjSNPKvEiqQLXnuKpOCsg
	uint32_t ___IJiyUmKnjSNPKvEiqQLXnuKpOCsg_22;
	// System.UInt32 Rewired.Controller::UvuBCPUuHHYtnkIhVxnAOcaTtIcw
	uint32_t ___UvuBCPUuHHYtnkIhVxnAOcaTtIcw_23;
	// System.UInt32 Rewired.Controller::RjewqXqKptDRYmQeaAqwzeLIPikX
	uint32_t ___RjewqXqKptDRYmQeaAqwzeLIPikX_24;
	// System.Action`1<System.Boolean> Rewired.Controller::AErBYrGXWgrwJAqLrNeIFeEEzRynb
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___AErBYrGXWgrwJAqLrNeIFeEEzRynb_25;
	// Rewired.IControllerTemplate[] Rewired.Controller::tEWJZJTzhuyUFZhjqTlPRfVEydnJ
	IControllerTemplateU5BU5D_tAD319B5FD030C9F0A993A85F2EB5B7A47390C3DB* ___tEWJZJTzhuyUFZhjqTlPRfVEydnJ_26;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<Rewired.IControllerTemplate> Rewired.Controller::zsQnMsRrxAfNPzSctkaVViXeNqUE
	ReadOnlyCollection_1_t18497760E4F1439D0468B3BAC863283807D8A1CA* ___zsQnMsRrxAfNPzSctkaVViXeNqUE_27;
};

struct Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911_StaticFields
{
	// System.Func`3<Rewired.Controller,System.Guid,System.Boolean> Rewired.Controller::UAvWYMZpuVTFLFVJDbDZgwlJpKdI
	Func_3_tF4129F872BD8CCCF0D22456285DD4191EE3A59E2* ___UAvWYMZpuVTFLFVJDbDZgwlJpKdI_28;
	// System.Func`3<Rewired.Controller,System.Type,System.Boolean> Rewired.Controller::NhTrfvOUfeTHrvPDlAwBzzTPVKIl
	Func_3_t25669F6E536690B24E25E22CBF39D17E60F1401A* ___NhTrfvOUfeTHrvPDlAwBzzTPVKIl_29;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ADictionary_2_ContainsKey_mF7EDB2872C4A7F23E8C686FC27B7362894661938_gshared (ADictionary_2_t95DEC58ADD1420C20E0CB2463868ED1353F2C657* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Rewired.Utils.Classes.Data.ADictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADictionary_2_Add_mDEC20CAEDBCBB889CE37AC97BDDEBDB45990E0E2_gshared (ADictionary_2_t95DEC58ADD1420C20E0CB2463868ED1353F2C657* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue Rewired.Utils.Classes.Data.ADictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ADictionary_2_get_Item_m24FFDB07E02919DD00AC0F6130FEA41E0C0782F2_gshared (ADictionary_2_t95DEC58ADD1420C20E0CB2463868ED1353F2C657* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ADictionary_2_TryGetValue_m9D92E1E12F8D2EF4C1F2F8104621B4707CAC8716_gshared (ADictionary_2_t95DEC58ADD1420C20E0CB2463868ED1353F2C657* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean Rewired.Utils.ListTools::AddIfUnique<System.Object>(System.Collections.Generic.IList`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_gshared (RuntimeObject* ___list0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1__ctor_m85F258D1E7D7A4BE9D3B8F13453BC940F7D38D16_gshared (aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>::.ctor(?,?,Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK/CONyoCVDDnZOISeLTzDqTryyCphV,System.Collections.Generic.IList`1<?>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90_gshared (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85* __this, RuntimeObject* p0, RuntimeObject* p1, int32_t p2, RuntimeObject* p3, bool p4, const RuntimeMethod* method) ;
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sQEkcZUofLSdEALOSOuyKPdNiQEDA_1__ctor_m22DB3A340E2C132D9FC9F965583E016FD9F40992_gshared (sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LaNNrUufXUaCsHwYSVeeItSJzfQrA_1__ctor_m4CB206044F75D42101528E3DE9EDB4BE49E09B23_gshared (LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1__ctor_m471D4BF3F60DB5E5C8E988C205C6217CA5E5C74D_gshared (NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1__ctor_mAAA860EA13BFD81E13FB29502A14D28E72DD2762_gshared (gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XcujpkEuhtkMjJAdZtQvqOzWNWoy_1__ctor_m8793AFB1079D0A7CA7D1C71689E0C8BA63138080_gshared (XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ojuhOybXRUNKAWBYROlwkJhBlkPc_1__ctor_m48EF0C0BCF7EB4E23415C4B13C967B63A9589F32_gshared (ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1__ctor_m34A74F392D550360F7C8349AB6963AEEEE9CC11B_gshared (ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* __this, int32_t p0, const RuntimeMethod* method) ;

// System.Boolean Rewired.ReInput::CheckInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReInput_CheckInitialized_m77ED29D92874786A88A3FA315343991DA7A5B95B (const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>> Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::HPGleOOgRvXHtYsMXGTEsiryvtWs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>::ContainsKey(TKey)
inline bool ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90*, Type_t*, const RuntimeMethod*))ADictionary_2_ContainsKey_mF7EDB2872C4A7F23E8C686FC27B7362894661938_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>::Add(TKey,TValue)
inline void ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6 (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* __this, Type_t* ___key0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90*, Type_t*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))ADictionary_2_Add_mDEC20CAEDBCBB889CE37AC97BDDEBDB45990E0E2_gshared)(__this, ___key0, ___value1, method);
}
// TValue Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>::get_Item(TKey)
inline List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3 (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90*, Type_t*, const RuntimeMethod*))ADictionary_2_get_Item_m24FFDB07E02919DD00AC0F6130FEA41E0C0782F2_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean Rewired.Utils.Classes.Data.ADictionary`2<System.Type,System.Collections.Generic.List`1<System.Object>>::TryGetValue(TKey,TValue&)
inline bool ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55 (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* __this, Type_t* ___key0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90*, Type_t*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D**, const RuntimeMethod*))ADictionary_2_TryGetValue_m9D92E1E12F8D2EF4C1F2F8104621B4707CAC8716_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Rewired.Utils.ListTools::AddIfUnique<System.Object>(System.Collections.Generic.IList`1<T>,T)
inline bool ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81 (RuntimeObject* ___list0, RuntimeObject* ___item1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_gshared)(___list0, ___item1, method);
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/aKSDPjRJZQzZwYkmoXKHoOMDFOWe`1<System.Object>::.ctor()
inline void aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1__ctor_m85F258D1E7D7A4BE9D3B8F13453BC940F7D38D16 (aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* __this, const RuntimeMethod* method)
{
	((  void (*) (aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA*, const RuntimeMethod*))aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1__ctor_m85F258D1E7D7A4BE9D3B8F13453BC940F7D38D16_gshared)(__this, method);
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void kzedFdEdISaCJppRVzkSmhYBfiDK__ctor_mCECC0F8AC7218CE1ED3AB6E85EC8C0FC5BCA8564 (kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>::Add(T)
inline void List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_inline (List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* __this, kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7*, kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<System.Object>::.ctor(?,?,Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK/CONyoCVDDnZOISeLTzDqTryyCphV,System.Collections.Generic.IList`1<?>,System.Boolean)
inline void cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90 (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85* __this, RuntimeObject* p0, RuntimeObject* p1, int32_t p2, RuntimeObject* p3, bool p4, const RuntimeMethod* method)
{
	((  void (*) (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*, RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject*, bool, const RuntimeMethod*))cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90_gshared)(__this, p0, p1, p2, p3, p4, method);
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/sQEkcZUofLSdEALOSOuyKPdNiQEDA`1<System.Object>::.ctor()
inline void sQEkcZUofLSdEALOSOuyKPdNiQEDA_1__ctor_m22DB3A340E2C132D9FC9F965583E016FD9F40992 (sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* __this, const RuntimeMethod* method)
{
	((  void (*) (sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1*, const RuntimeMethod*))sQEkcZUofLSdEALOSOuyKPdNiQEDA_1__ctor_m22DB3A340E2C132D9FC9F965583E016FD9F40992_gshared)(__this, method);
}
// System.Void System.Predicate`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mC7ED0FD7569E0ACBA4AA0C7D8592AADCFA28A8EA (Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>::Find(System.Predicate`1<T>)
inline kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* List_1_Find_m412DFD00E7077EF26A7689218DBB67CFEBBAA57D (List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* __this, Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674* ___match0, const RuntimeMethod* method)
{
	return ((  kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* (*) (List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7*, Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Rewired.Logger::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_m7AFB3DE7CB55B1AF479DD909EB1A71CEEC54672D (RuntimeObject* ___msg0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/LaNNrUufXUaCsHwYSVeeItSJzfQrA`1<System.Object>::.ctor(System.Int32)
inline void LaNNrUufXUaCsHwYSVeeItSJzfQrA_1__ctor_m4CB206044F75D42101528E3DE9EDB4BE49E09B23 (LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA*, int32_t, const RuntimeMethod*))LaNNrUufXUaCsHwYSVeeItSJzfQrA_1__ctor_m4CB206044F75D42101528E3DE9EDB4BE49E09B23_gshared)(__this, p0, method);
}
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/NPPlAOzpsFiqWUuYJtTMLJfMbmYu`1<System.Object>::.ctor(System.Int32)
inline void NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1__ctor_m471D4BF3F60DB5E5C8E988C205C6217CA5E5C74D (NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185*, int32_t, const RuntimeMethod*))NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1__ctor_m471D4BF3F60DB5E5C8E988C205C6217CA5E5C74D_gshared)(__this, p0, method);
}
// System.Void Rewired.Player/ControllerHelper/ConflictCheckingHelper/gPTTtyzOAxLCvPhgMtIrgUsCIpeH`1<System.Object>::.ctor(System.Int32)
inline void gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1__ctor_mAAA860EA13BFD81E13FB29502A14D28E72DD2762 (gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3*, int32_t, const RuntimeMethod*))gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1__ctor_mAAA860EA13BFD81E13FB29502A14D28E72DD2762_gshared)(__this, p0, method);
}
// Rewired.ReInput/PlayerHelper Rewired.ReInput::get_players()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* ReInput_get_players_m3DDA5505CC1DB7580B0C41F1D781A284D3EACD27 (const RuntimeMethod* method) ;
// System.Int32 Rewired.ElementAssignmentConflictCheck::get_playerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_playerId_m13D1C2C48B4AF7E87153014EE4B16491202256C5_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) ;
// Rewired.Player Rewired.ReInput/PlayerHelper::GetPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* PlayerHelper_GetPlayer_m42CD1C5AC3CC96C9E36A74D680F0CEC9F5EB5FDC (PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* __this, int32_t ___playerId0, const RuntimeMethod* method) ;
// Rewired.ControllerType Rewired.ElementAssignmentConflictCheck::get_controllerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerType_mB10ABC66916B5C14CA467D3289A606AEE947FE72_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) ;
// System.Int32 Rewired.ElementAssignmentConflictCheck::get_controllerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerId_m5C57BA2FE3D405B624E86F7DD88454ED9711954A_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) ;
// System.Int32 Rewired.ElementAssignmentConflictCheck::get_controllerMapId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerMapId_m4C899DB8B80BBF22D0B0CAA98E0F5330AECF1800_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) ;
// Rewired.ControllerMap Rewired.Player/ControllerHelper/MapHelper::GetMap(Rewired.ControllerType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* MapHelper_GetMap_m7447D54D0BABDE292B5BC1AAA6F5576F29B016BE (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___controllerId1, int32_t ___mapId2, const RuntimeMethod* method) ;
// Rewired.ReInput/MappingHelper Rewired.ReInput::get_mapping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554 (const RuntimeMethod* method) ;
// System.Int32 Rewired.ElementAssignmentConflictCheck::get_controllerMapCategoryId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerMapCategoryId_m0A29A78618798D54C96B3EE602E3576B899DBB99_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) ;
// Rewired.InputMapCategory Rewired.ReInput/MappingHelper::GetMapCategory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD (MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* __this, int32_t ___mapCategoryId0, const RuntimeMethod* method) ;
// System.Int32 Rewired.ControllerMap::get_categoryId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33 (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.ControllerMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915 (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* __this, const RuntimeMethod* method) ;
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper::HSvNYjKwjqmkkXAMHhkOgaGsivnQA(Rewired.InputMapCategory,Rewired.ControllerMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306 (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* p0, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* p1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Rewired.ActionElementMap>::Clear()
inline void List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_inline (List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean Rewired.ReInput::CheckInitialized(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF (int32_t ___reInputId0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::JumOMOwvXGOuPuOcxsTpVHdKrpWy(Rewired.ControllerType,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_JumOMOwvXGOuPuOcxsTpVHdKrpWy_m1025513A8D96A8FDC1ED03E1DEAB4657987276C6 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::JumOMOwvXGOuPuOcxsTpVHdKrpWy(Rewired.ControllerType,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_JumOMOwvXGOuPuOcxsTpVHdKrpWy_mED039BB84BB04F5E54C2B60E867E3C20C2AD8564 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, String_t* p3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::eARszvxUDfRQEHAaHAQfkQChFPGDb(Rewired.ControllerType,System.Int32,Rewired.ControllerMap,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_eARszvxUDfRQEHAaHAQfkQChFPGDb_m2F43D7FDFDEE1F636EDEC7226B9953E64C57F7E0 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* p2, int32_t p3, const RuntimeMethod* method) ;
// System.Boolean Rewired.Player/ControllerHelper/MapHelper::ogIOwmXsniAMouscEmnvbvCsvknx(Rewired.ControllerType,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapHelper_ogIOwmXsniAMouscEmnvbvCsvknx_m5CF220DABA9A843745BB5108753BD9DBE734F696 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, const RuntimeMethod* method) ;
// System.Boolean Rewired.Player/ControllerHelper/MapHelper::vsoXxjlyQkRgSJiWizMXuCTWvcQQ(Rewired.ControllerType,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapHelper_vsoXxjlyQkRgSJiWizMXuCTWvcQQ_m6A031FB42A3792160FDB353B488EA5710A8CDC40 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA::OlLACmpwoMamrxMTFzLaRnppBEGFA(Rewired.ControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Rewired.InputCategory::get_userAssignable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputCategory_get_userAssignable_mBD58AC35EE83AAE55914DC85584314585326C703_inline (InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* __this, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMaps(Rewired.ControllerType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMaps_mE9839E66C615927C4E053CF3A89BF6C85E98614C (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, bool ___userAssignableOnly1, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForController(Rewired.ControllerType,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForController_m0AF8A2D1031EA3A7299F1384656833D0E0996200 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___controllerId1, bool ___userAssignableOnly2, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForController(Rewired.ControllerType,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForController_mC11D4A3C112748E4A510469C5FB6AC10950EF667 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___controllerId1, int32_t ___categoryId2, bool ___userAssignableOnly3, const RuntimeMethod* method) ;
// System.Int32 Rewired.ReInput/MappingHelper::GetMapCategoryId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB (MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForControllerInLayout(Rewired.ControllerType,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForControllerInLayout_m2012A7C928B519693B0F57C5D13E84DBDBBEDE50 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___controllerId1, int32_t ___layoutId2, bool ___userAssignableOnly3, const RuntimeMethod* method) ;
// System.Int32 Rewired.ReInput/MappingHelper::GetLayoutId(Rewired.ControllerType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MappingHelper_GetLayoutId_m3C47818192FB2D4E2E46CB5F7E7585C302DE6ED7 (MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* __this, int32_t ___controllerType0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory(Rewired.ControllerType,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_m75DD455E3093205B83DBB0C3CD22842B7820F570 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___categoryId1, bool ___userAssignableOnly2, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory(Rewired.ControllerType,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_m7A84D03ED5B7E2058C03C75F2AFC4416A58149F4 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___categoryId1, int32_t ___layoutId2, bool ___userAssignableOnly3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInLayout(Rewired.ControllerType,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInLayout_m93FF033059DFAB7D685235CEDEA7A42D28A1E042 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerType0, int32_t ___layoutId1, bool ___userAssignableOnly2, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/XcujpkEuhtkMjJAdZtQvqOzWNWoy`1<System.Object>::.ctor(System.Int32)
inline void XcujpkEuhtkMjJAdZtQvqOzWNWoy_1__ctor_m8793AFB1079D0A7CA7D1C71689E0C8BA63138080 (XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2*, int32_t, const RuntimeMethod*))XcujpkEuhtkMjJAdZtQvqOzWNWoy_1__ctor_m8793AFB1079D0A7CA7D1C71689E0C8BA63138080_gshared)(__this, p0, method);
}
// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA Rewired.Player/ControllerHelper/vpfVMfLDNQCKabtrXuyMMndafvvoA::WnvLUDAsClwKBCDbOHhIRBMdKTgv(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vpfVMfLDNQCKabtrXuyMMndafvvoA_WnvLUDAsClwKBCDbOHhIRBMdKTgv_mFB15C8D1E61FDBCCAB87F4892BB7481AF3BBEE6F (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* __this, int32_t p0, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/ojuhOybXRUNKAWBYROlwkJhBlkPc`1<System.Object>::.ctor(System.Int32)
inline void ojuhOybXRUNKAWBYROlwkJhBlkPc_1__ctor_m48EF0C0BCF7EB4E23415C4B13C967B63A9589F32 (ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60*, int32_t, const RuntimeMethod*))ojuhOybXRUNKAWBYROlwkJhBlkPc_1__ctor_m48EF0C0BCF7EB4E23415C4B13C967B63A9589F32_gshared)(__this, p0, method);
}
// Rewired.ControllerMap Rewired.Player/ControllerHelper/MapHelper::tXTzuxnKeaFcJkTzJwQUsSwUoCsRA(Rewired.ControllerType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* MapHelper_tXTzuxnKeaFcJkTzJwQUsSwUoCsRA_mF1BB015F2E3CACA5BBF1FD7BB5FDE74068F7D365 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) ;
// Rewired.ControllerMap Rewired.Player/ControllerHelper/MapHelper::qYqBIOFxqlADXLihiBsFcAqNepub(Rewired.ControllerType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mF5BC6DA17BCBE2D8833A183352C5F877C7CD6F2B (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) ;
// Rewired.ControllerMap Rewired.Player/ControllerHelper/MapHelper::qYqBIOFxqlADXLihiBsFcAqNepub(Rewired.ControllerType,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mA72BABB67A8FEDFC05D5020E5F5B09570B71F927 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) ;
// Rewired.ControllerMap Rewired.Player/ControllerHelper/MapHelper::qYqBIOFxqlADXLihiBsFcAqNepub(Rewired.ControllerType,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mB544FDCDF4762ABA843DC4D4395B51F558E2913A (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, String_t* p3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper/ecjdcwfzgyPMBWdzOraiwfCBcrRoA`1<System.Object>::.ctor(System.Int32)
inline void ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1__ctor_m34A74F392D550360F7C8349AB6963AEEEE9CC11B (ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73*, int32_t, const RuntimeMethod*))ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1__ctor_m34A74F392D550360F7C8349AB6963AEEEE9CC11B_gshared)(__this, p0, method);
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::lphhQOcxOMSOPhjlSDCZLLXGLsWm(Rewired.ControllerType,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_mCA8C06E4464C92F56AC93F431310898E3D3CFDD4 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::lphhQOcxOMSOPhjlSDCZLLXGLsWm(Rewired.ControllerType,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_m3194478C4255DC656B551522E1AB9F7FB067346C (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::lphhQOcxOMSOPhjlSDCZLLXGLsWm(Rewired.ControllerType,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_m3B7D645A45FA19D76F0FFA6B0DC5704477A80FFC (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, String_t* p3, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::xUxtwYDqEBAoBQJfMbKEZonwyhmq(Rewired.ControllerType,System.Int32,System.Int32,System.Int32,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_xUxtwYDqEBAoBQJfMbKEZonwyhmq_m27EEE026ABE014B51797CA00F9EECB40B0365F33 (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, const RuntimeMethod* method) ;
// System.Void Rewired.Player/ControllerHelper/MapHelper::xUxtwYDqEBAoBQJfMbKEZonwyhmq(Rewired.ControllerType,System.Int32,System.String,System.String,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_xUxtwYDqEBAoBQJfMbKEZonwyhmq_mB64759EE9B99E28074BDA8EA24384C48A867BC1C (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, String_t* p2, String_t* p3, int32_t p4, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TInterface> Rewired.ReInput/ControllerHelper::GetControllerTemplates<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerHelper_GetControllerTemplates_TisRuntimeObject_m5755D3181FB0F4BA4DDB4D2DEE6FF0E995B4F7B3_gshared (ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ReInput_CheckInitialized_m77ED29D92874786A88A3FA315343991DA7A5B95B(NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}

IL_000d:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A* L_2 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->___pufaEMRhTHuKQfVnvkQxbbFTmmTc_10;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
// T Rewired.ReInput/ControllerHelper::GetLastActiveController<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ControllerHelper_GetLastActiveController_TisRuntimeObject_m401CE23BE38BA123D7467FC439D2403C8CEAE7D9_gshared (ControllerHelper_t470828F1E9094A484F8FE12DB16199890DF23F5E* __this, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = ReInput_CheckInitialized_m77ED29D92874786A88A3FA315343991DA7A5B95B(NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		return L_1;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A* L_2 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->___pufaEMRhTHuKQfVnvkQxbbFTmmTc_10;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (TAqjagBhKGcWECRbpfkHPNKbpxLsA_t5B25C84F87417D98CA0E8452EAD0DB3A23D7833A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// Rewired.Utils.TempListPool/TList`1<?> Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::OlLACmpwoMamrxMTFzLaRnppBEGFA<Rewired.ControllerTemplateElementTarget>(System.Collections.Generic.List`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisControllerTemplateElementTarget_tDB0CB7A22A83FD188DBBB27A7D75DD3459D5542C_m73B7B7D8BE540D2410F77E3C5456F5C2F945B484_gshared (List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisControllerTemplateElementTarget_tDB0CB7A22A83FD188DBBB27A7D75DD3459D5542C_m73B7B7D8BE540D2410F77E3C5456F5C2F945B484_RuntimeMethod_var)));
	}

IL_000e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_2;
		L_2 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F(L_2, L_4, ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_9, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_003e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_10;
		L_10 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_10);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13;
		L_13 = ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3(L_10, L_12, ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		V_0 = L_13;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_14, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0068;
		}
	}
	{
		TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* L_16;
		L_16 = ((  TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* L_17 = L_16;
		List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* L_18 = p0;
		NullCheck((RuntimeObject*)L_17);
		InterfaceActionInvoker1< List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<Rewired.ControllerTemplateElementTarget>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_17, L_18);
		return L_17;
	}

IL_0068:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_19, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_21, L_22, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_24, L_25, List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* L_26 = ((TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7*)IsInstSealed((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 5)));
		List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* L_27 = p0;
		NullCheck((RuntimeObject*)L_26);
		InterfaceActionInvoker1< List_1_tB9A85F131783B7EEF32BCC88394DEF28B255F56A* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<Rewired.ControllerTemplateElementTarget>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_26, L_27);
		return L_26;
	}
}
// Rewired.Utils.TempListPool/TList`1<?> Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::OlLACmpwoMamrxMTFzLaRnppBEGFA<System.Int32Enum>(System.Collections.Generic.List`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m367FAB5997343ECE6DE4E93FF624C27132D42877_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m367FAB5997343ECE6DE4E93FF624C27132D42877_RuntimeMethod_var)));
	}

IL_000e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_2;
		L_2 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F(L_2, L_4, ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_9, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_003e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_10;
		L_10 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_10);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13;
		L_13 = ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3(L_10, L_12, ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		V_0 = L_13;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_14, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0068;
		}
	}
	{
		TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* L_16;
		L_16 = ((  TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* L_17 = L_16;
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_18 = p0;
		NullCheck((RuntimeObject*)L_17);
		InterfaceActionInvoker1< List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<System.Int32Enum>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_17, L_18);
		return L_17;
	}

IL_0068:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_19, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_21, L_22, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_24, L_25, List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* L_26 = ((TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069*)IsInstSealed((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 5)));
		List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* L_27 = p0;
		NullCheck((RuntimeObject*)L_26);
		InterfaceActionInvoker1< List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<System.Int32Enum>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_26, L_27);
		return L_26;
	}
}
// Rewired.Utils.TempListPool/TList`1<?> Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::OlLACmpwoMamrxMTFzLaRnppBEGFA<System.Object>(System.Collections.Generic.List`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisRuntimeObject_mC8479E090ED307F17BAE844DE2C29FE904E56C5B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = p0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TpeBEFhFAWNAsvKKQTVtIrdFUsQw_OlLACmpwoMamrxMTFzLaRnppBEGFA_TisRuntimeObject_mC8479E090ED307F17BAE844DE2C29FE904E56C5B_RuntimeMethod_var)));
	}

IL_000e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_2;
		L_2 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F(L_2, L_4, ADictionary_2_ContainsKey_mC5ADB925423D250073B9A2A62A2534AB23B21A0F_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_9, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_003e:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_10;
		L_10 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_10);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13;
		L_13 = ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3(L_10, L_12, ADictionary_2_get_Item_m16DA44C3730BB63327BFAF65D10C028CA7CD13E3_RuntimeMethod_var);
		V_0 = L_13;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_14, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0068;
		}
	}
	{
		TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* L_16;
		L_16 = ((  TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* L_17 = L_16;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = p0;
		NullCheck((RuntimeObject*)L_17);
		InterfaceActionInvoker1< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<System.Object>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_17, L_18);
		return L_17;
	}

IL_0068:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_19, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_21, L_22, List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_RuntimeMethod_var);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_24, L_25, List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_RuntimeMethod_var);
		TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* L_26 = ((TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7*)IsInstSealed((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 5)));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_27 = p0;
		NullCheck((RuntimeObject*)L_26);
		InterfaceActionInvoker1< List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* >::Invoke(0 /* System.Void Rewired.Utils.TempListPool/ITListSetter`1<System.Object>::SetList(System.Collections.Generic.List`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 3), (RuntimeObject*)L_26, L_27);
		return L_26;
	}
}
// System.Void Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::hFfgKgidBhpsyheEnoFheSvsHLRGA<Rewired.ControllerTemplateElementTarget>(Rewired.Utils.TempListPool/TList`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TpeBEFhFAWNAsvKKQTVtIrdFUsQw_hFfgKgidBhpsyheEnoFheSvsHLRGA_TisControllerTemplateElementTarget_tDB0CB7A22A83FD188DBBB27A7D75DD3459D5542C_m803B93CA19C24BF6852BFD78C75A0EFCA23B440E_gshared (TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* L_0 = p0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_1;
		L_1 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55(L_1, L_3, (&V_0), ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_5, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		V_0 = L_5;
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_0038:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_10, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		TList_1_t08828BE7F5A36A1F8E5542F3DE822A03B4E625D7* L_13 = p0;
		bool L_14;
		L_14 = ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81((RuntimeObject*)L_12, (RuntimeObject*)L_13, ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		return;
	}
}
// System.Void Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::hFfgKgidBhpsyheEnoFheSvsHLRGA<System.Int32Enum>(Rewired.Utils.TempListPool/TList`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TpeBEFhFAWNAsvKKQTVtIrdFUsQw_hFfgKgidBhpsyheEnoFheSvsHLRGA_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBE9C3683EEEDC7754565FAD3D8BF02887DE8958F_gshared (TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* L_0 = p0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_1;
		L_1 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55(L_1, L_3, (&V_0), ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_5, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		V_0 = L_5;
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_0038:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_10, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		TList_1_t91EC4434C71F6E97F426C89A756A7E8D0F090069* L_13 = p0;
		bool L_14;
		L_14 = ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81((RuntimeObject*)L_12, (RuntimeObject*)L_13, ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		return;
	}
}
// System.Void Rewired.Utils.TempListPool/TpeBEFhFAWNAsvKKQTVtIrdFUsQw::hFfgKgidBhpsyheEnoFheSvsHLRGA<System.Object>(Rewired.Utils.TempListPool/TList`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TpeBEFhFAWNAsvKKQTVtIrdFUsQw_hFfgKgidBhpsyheEnoFheSvsHLRGA_TisRuntimeObject_m3ABAD753F2250411C71B86BC67D2358B58F79D54_gshared (TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* L_0 = p0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_1;
		L_1 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55(L_1, L_3, (&V_0), ADictionary_2_TryGetValue_mF116A47D7285E8974FA1C99B2650B697DFD56A55_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_5, 3, /*hidden argument*/List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		V_0 = L_5;
		ADictionary_2_tE212D15054E58919DA98BE219858633B9BBE9C90* L_6;
		L_6 = TpeBEFhFAWNAsvKKQTVtIrdFUsQw_HPGleOOgRvXHtYsMXGTEsiryvtWs_m957491260AFBA8FB32FBC5DE4209106675FFB34C(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = V_0;
		NullCheck(L_6);
		ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6(L_6, L_8, L_9, ADictionary_2_Add_m0B52951B53E7F35DD40A3E9D2435F6A9921FEAD6_RuntimeMethod_var);
	}

IL_0038:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_10, List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0042:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_12 = V_0;
		TList_1_t5EEB5351D4D3485884B025F946B9EB1B39C163F7* L_13 = p0;
		bool L_14;
		L_14 = ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81((RuntimeObject*)L_12, (RuntimeObject*)L_13, ListTools_AddIfUnique_TisRuntimeObject_m1FC233E73FB0BCD08B759B78473378745A884A81_RuntimeMethod_var);
		return;
	}
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD::PlGykcohZgSWLRBrICBpjzSbvblvA<System.Object>(System.String,System.Collections.Generic.IList`1<?>,System.Collections.Generic.IList`1<?>,System.Collections.Generic.IList`1<?>,System.Boolean,System.Collections.Generic.List`1<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/kzedFdEdISaCJppRVzkSmhYBfiDK>,System.Func`2<?,System.Int32>,System.Func`2<?,System.String>,System.Func`3<?,System.Collections.Generic.IList`1<?>,System.Int32>,System.Func`2<Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD/cTlcZwgBmjmwQjxeEhJdCJOLqDjC`1<?>,?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMmfElSRTHipvrooOqnrsVzyuehD_PlGykcohZgSWLRBrICBpjzSbvblvA_TisRuntimeObject_mDA24E72ED2DA5CB19EB022461C0DD7EFBB22A9B4_gshared (String_t* p0, RuntimeObject* p1, RuntimeObject* p2, RuntimeObject* p3, bool p4, List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* p5, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* p6, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* p7, Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E* p8, Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758* p9, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m412DFD00E7077EF26A7689218DBB67CFEBBAA57D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC7ED0FD7569E0ACBA4AA0C7D8592AADCFA28A8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18671CD5DECD4AF4B7DF2AA0F1A0C1E4DE25F8AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B1478CDF9C226208AE289896781AF22519D6CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	String_t* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	String_t* G_B22_2 = NULL;
	{
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_0 = (aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1__ctor_m85F258D1E7D7A4BE9D3B8F13453BC940F7D38D16(L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_1 = V_0;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = p6;
		NullCheck(L_1);
		L_1->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0), (void*)L_2);
		V_1 = 0;
		goto IL_0089;
	}

IL_0012:
	{
		RuntimeObject* L_3 = p1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_3, L_4);
		V_2 = L_5;
		bool L_6 = p4;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* L_7 = p5;
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_8 = V_0;
		NullCheck(L_8);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_9 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_8->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 5));
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_12 = V_0;
		NullCheck(L_12);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_13 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_12->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 5));
		kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* L_16 = (kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D*)il2cpp_codegen_object_new(kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D_il2cpp_TypeInfo_var);
		kzedFdEdISaCJppRVzkSmhYBfiDK__ctor_mCECC0F8AC7218CE1ED3AB6E85EC8C0FC5BCA8564(L_16, L_11, (-1), L_15, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_inline(L_7, L_16, List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_RuntimeMethod_var);
		goto IL_0085;
	}

IL_0045:
	{
		Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758* L_17 = p9;
		RuntimeObject* L_18 = V_2;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_19 = V_4;
		RuntimeObject* L_20 = p3;
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85* L_21 = (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90(L_21, L_18, L_19, (int32_t)0, L_20, (bool)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_17);
		RuntimeObject* L_22;
		L_22 = ((  RuntimeObject* (*) (Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758*, cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_17, L_21, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_3 = L_22;
		List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* L_23 = p5;
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_24 = V_0;
		NullCheck(L_24);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_25 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_24->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_25, L_26, il2cpp_rgctx_method(method->rgctx_data, 5));
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_28 = V_0;
		NullCheck(L_28);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_29 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_28->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_29, L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
		kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* L_32 = (kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D*)il2cpp_codegen_object_new(kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D_il2cpp_TypeInfo_var);
		kzedFdEdISaCJppRVzkSmhYBfiDK__ctor_mCECC0F8AC7218CE1ED3AB6E85EC8C0FC5BCA8564(L_32, L_27, (-1), L_31, /*hidden argument*/NULL);
		NullCheck(L_23);
		List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_inline(L_23, L_32, List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_RuntimeMethod_var);
	}

IL_0085:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0089:
	{
		int32_t L_34 = V_1;
		RuntimeObject* L_35 = p1;
		NullCheck((RuntimeObject*)L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 10), (RuntimeObject*)L_35);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_37 = p2;
		if (!L_37)
		{
			goto IL_0238;
		}
	}
	{
		V_5 = 0;
		goto IL_022b;
	}

IL_00a0:
	{
		RuntimeObject* L_38 = p2;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_38, L_39);
		V_6 = L_40;
		Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E* L_41 = p8;
		RuntimeObject* L_42 = V_6;
		RuntimeObject* L_43 = p3;
		NullCheck(L_41);
		int32_t L_44;
		L_44 = ((  int32_t (*) (Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(L_41, L_42, L_43, il2cpp_rgctx_method(method->rgctx_data, 13));
		V_7 = L_44;
		int32_t L_45 = V_7;
		if ((((int32_t)L_45) < ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* L_46 = (sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 14));
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1__ctor_m22DB3A340E2C132D9FC9F965583E016FD9F40992(L_46, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 15));
		V_8 = L_46;
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* L_47 = V_8;
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_48 = V_0;
		NullCheck(L_47);
		L_47->___GzKJJorOLWrdrMiTQiKLkIMQBqcb_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___GzKJJorOLWrdrMiTQiKLkIMQBqcb_1), (void*)L_48);
		RuntimeObject* L_49 = p3;
		int32_t L_50 = V_7;
		NullCheck(L_49);
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 2), L_49, L_50);
		V_9 = L_51;
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* L_52 = V_8;
		Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758* L_53 = p9;
		RuntimeObject* L_54 = V_6;
		RuntimeObject* L_55 = V_9;
		RuntimeObject* L_56 = p3;
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85* L_57 = (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90(L_57, L_54, L_55, (int32_t)1, L_56, (bool)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_53);
		RuntimeObject* L_58;
		L_58 = ((  RuntimeObject* (*) (Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758*, cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_53, L_57, il2cpp_rgctx_method(method->rgctx_data, 9));
		NullCheck(L_52);
		L_52->___GiVZGuLQxvUOqeIVnTCviBpqPbb_0 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___GiVZGuLQxvUOqeIVnTCviBpqPbb_0), (void*)L_58);
		List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* L_59 = p5;
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* L_60 = V_8;
		Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674* L_61 = (Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674*)il2cpp_codegen_object_new(Predicate_1_t0AE34D834A58115AD4CD9532C7FEAF28A2A18674_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mC7ED0FD7569E0ACBA4AA0C7D8592AADCFA28A8EA(L_61, (RuntimeObject*)L_60, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 16)), /*hidden argument*/Predicate_1__ctor_mC7ED0FD7569E0ACBA4AA0C7D8592AADCFA28A8EA_RuntimeMethod_var);
		NullCheck(L_59);
		kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* L_62;
		L_62 = List_1_Find_m412DFD00E7077EF26A7689218DBB67CFEBBAA57D(L_59, L_61, List_1_Find_m412DFD00E7077EF26A7689218DBB67CFEBBAA57D_RuntimeMethod_var);
		sQEkcZUofLSdEALOSOuyKPdNiQEDA_1_t1B5CB90AB9525321551E427D7C2054C85C37AAC1* L_63 = V_8;
		NullCheck(L_63);
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_64 = (aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA*)L_63->___GzKJJorOLWrdrMiTQiKLkIMQBqcb_1;
		NullCheck(L_64);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_65 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_64->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_66 = V_6;
		NullCheck(L_65);
		int32_t L_67;
		L_67 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_65, L_66, il2cpp_rgctx_method(method->rgctx_data, 5));
		NullCheck(L_62);
		L_62->___CCzhRDaUDvMVJJyCTKXgJlMZxTznA_1 = L_67;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_68 = p7;
		RuntimeObject* L_69 = V_6;
		NullCheck(L_68);
		String_t* L_70;
		L_70 = ((  String_t* (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)))(L_68, L_69, il2cpp_rgctx_method(method->rgctx_data, 18));
		bool L_71;
		L_71 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_70, NULL);
		if (!L_71)
		{
			goto IL_0134;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_014c;
	}

IL_0134:
	{
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_72 = p7;
		RuntimeObject* L_73 = V_6;
		NullCheck(L_72);
		String_t* L_74;
		L_74 = ((  String_t* (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)))(L_72, L_73, il2cpp_rgctx_method(method->rgctx_data, 18));
		String_t* L_75;
		L_75 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_74, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		G_B12_0 = L_75;
	}

IL_014c:
	{
		V_10 = G_B12_0;
		String_t* L_76 = p0;
		String_t* L_77 = V_10;
		bool L_78;
		L_78 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_77, NULL);
		G_B13_0 = L_76;
		if (!L_78)
		{
			G_B14_0 = L_76;
			goto IL_015f;
		}
	}
	{
		G_B15_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B15_1 = G_B13_0;
		goto IL_016b;
	}

IL_015f:
	{
		String_t* L_79 = V_10;
		String_t* L_80;
		L_80 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_79, NULL);
		G_B15_0 = L_80;
		G_B15_1 = G_B14_0;
	}

IL_016b:
	{
		String_t* L_81;
		L_81 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B15_1, G_B15_0, _stringLiteral22B1478CDF9C226208AE289896781AF22519D6CB, NULL);
		Logger_Log_m7AFB3DE7CB55B1AF479DD909EB1A71CEEC54672D((RuntimeObject*)L_81, NULL);
		goto IL_0225;
	}

IL_017f:
	{
		Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758* L_82 = p9;
		RuntimeObject* L_83 = V_6;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_84 = V_4;
		RuntimeObject* L_85 = p3;
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85* L_86 = (cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1__ctor_m2660924875158C34CA727FFC10FA37C6C7C14D90(L_86, L_83, L_84, (int32_t)1, L_85, (bool)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 7));
		NullCheck(L_82);
		RuntimeObject* L_87;
		L_87 = ((  RuntimeObject* (*) (Func_2_t47FA43C06CA3B7E69EECC5B0C6D36F44AADCB758*, cTlcZwgBmjmwQjxeEhJdCJOLqDjC_1_t00DEF10DFB18F406646ED696288655ED53671B85*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)))(L_82, L_86, il2cpp_rgctx_method(method->rgctx_data, 9));
		V_11 = L_87;
		List_1_t2371DBA2BC5BA5E401A3796013E23F6AA5DE82E7* L_88 = p5;
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_89 = V_0;
		NullCheck(L_89);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_90 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_89->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92;
		L_92 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_90, L_91, il2cpp_rgctx_method(method->rgctx_data, 5));
		aKSDPjRJZQzZwYkmoXKHoOMDFOWe_1_tBF7584EF632A787EC6F2057BA1C49894E7E22FCA* L_93 = V_0;
		NullCheck(L_93);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_94 = (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*)L_93->___FkKDhjApMORrhuHhObhaCvDMkiLpA_0;
		RuntimeObject* L_95 = V_11;
		NullCheck(L_94);
		int32_t L_96;
		L_96 = ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_94, L_95, il2cpp_rgctx_method(method->rgctx_data, 5));
		kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D* L_97 = (kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D*)il2cpp_codegen_object_new(kzedFdEdISaCJppRVzkSmhYBfiDK_t96C908773E13D2FD31BFC3C0BC59CD2D7B31233D_il2cpp_TypeInfo_var);
		kzedFdEdISaCJppRVzkSmhYBfiDK__ctor_mCECC0F8AC7218CE1ED3AB6E85EC8C0FC5BCA8564(L_97, (-1), L_92, L_96, /*hidden argument*/NULL);
		NullCheck(L_88);
		List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_inline(L_88, L_97, List_1_Add_mEBA4A42D074F0BFA59336506E8E0639669B309DD_RuntimeMethod_var);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_98 = p7;
		RuntimeObject* L_99 = V_6;
		NullCheck(L_98);
		String_t* L_100;
		L_100 = ((  String_t* (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)))(L_98, L_99, il2cpp_rgctx_method(method->rgctx_data, 18));
		bool L_101;
		L_101 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_100, NULL);
		if (!L_101)
		{
			goto IL_01da;
		}
	}
	{
		G_B19_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_01f2;
	}

IL_01da:
	{
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_102 = p7;
		RuntimeObject* L_103 = V_6;
		NullCheck(L_102);
		String_t* L_104;
		L_104 = ((  String_t* (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)))(L_102, L_103, il2cpp_rgctx_method(method->rgctx_data, 18));
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_104, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		G_B19_0 = L_105;
	}

IL_01f2:
	{
		V_12 = G_B19_0;
		String_t* L_106 = p0;
		String_t* L_107 = V_12;
		bool L_108;
		L_108 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_107, NULL);
		G_B20_0 = L_106;
		G_B20_1 = _stringLiteral18671CD5DECD4AF4B7DF2AA0F1A0C1E4DE25F8AB;
		if (!L_108)
		{
			G_B21_0 = L_106;
			G_B21_1 = _stringLiteral18671CD5DECD4AF4B7DF2AA0F1A0C1E4DE25F8AB;
			goto IL_020a;
		}
	}
	{
		G_B22_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		goto IL_0216;
	}

IL_020a:
	{
		String_t* L_109 = V_12;
		String_t* L_110;
		L_110 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_109, NULL);
		G_B22_0 = L_110;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
	}

IL_0216:
	{
		String_t* L_111;
		L_111 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B22_2, G_B22_1, G_B22_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		Logger_Log_m7AFB3DE7CB55B1AF479DD909EB1A71CEEC54672D((RuntimeObject*)L_111, NULL);
	}

IL_0225:
	{
		int32_t L_112 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_022b:
	{
		int32_t L_113 = V_5;
		RuntimeObject* L_114 = p2;
		NullCheck((RuntimeObject*)L_114);
		int32_t L_115;
		L_115 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 10), (RuntimeObject*)L_114);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_00a0;
		}
	}

IL_0238:
	{
		return;
	}
}
// System.Void Rewired.Data.UserData/PMmfElSRTHipvrooOqnrsVzyuehD::wAJHKXCfuDHpydIwGUKdtfiKfwOlB<System.Object>(System.Collections.Generic.IList`1<?>,System.Collections.Generic.IList`1<?>,System.Collections.Generic.IList`1<?>,System.Func`3<?,System.Collections.Generic.IList`1<?>,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PMmfElSRTHipvrooOqnrsVzyuehD_wAJHKXCfuDHpydIwGUKdtfiKfwOlB_TisRuntimeObject_m22A6F50F306C5EFDBEF1155C1AC0CF015C89845D_gshared (RuntimeObject* p0, RuntimeObject* p1, RuntimeObject* p2, Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E* p3, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		RuntimeObject* L_0 = p2;
		RuntimeObject* L_1 = p0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_1, L_2);
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T) */, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_0, L_3);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = p0;
		NullCheck((RuntimeObject*)L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_8 = p1;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_0025:
	{
		RuntimeObject* L_9 = p1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_9, L_10);
		V_2 = L_11;
		Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E* L_12 = p3;
		RuntimeObject* L_13 = V_2;
		RuntimeObject* L_14 = p2;
		NullCheck(L_12);
		int32_t L_15;
		L_15 = ((  int32_t (*) (Func_3_tA2EC68432F49E8DB1FC81E592EA4A30855D5EE0E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_12, L_13, L_14, il2cpp_rgctx_method(method->rgctx_data, 6));
		V_3 = L_15;
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_17 = p2;
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_2;
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_17, L_18, L_19);
		goto IL_004b;
	}

IL_0044:
	{
		RuntimeObject* L_20 = p2;
		RuntimeObject* L_21 = V_2;
		NullCheck((RuntimeObject*)L_20);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T) */, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_20, L_21);
	}

IL_004b:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_004f:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = p1;
		NullCheck((RuntimeObject*)L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 2), (RuntimeObject*)L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0025;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper::IOcxdCLgugooqaADqWvPIyWRSwwG<System.Object>(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCheckingHelper_IOcxdCLgugooqaADqWvPIyWRSwwG_TisRuntimeObject_mE52046BB02FF894FFB3B98B180EABD8DFF91ACB9_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E p0, bool p1, bool p2, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p3, const RuntimeMethod* method) 
{
{
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_0 = (LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1__ctor_m4CB206044F75D42101528E3DE9EDB4BE49E09B23(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11), (void*)__this);
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_2 = L_1;
		ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E L_3 = p0;
		NullCheck(L_2);
		L_2->___wmyDcCHWYMasogZlrqkbzlzgyAQe_6 = L_3;
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_4 = L_2;
		bool L_5 = p1;
		NullCheck(L_4);
		L_4->___wbJTSksJrdbiJvScZEcbgDdFVdPiA_8 = L_5;
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_6 = L_4;
		bool L_7 = p2;
		NullCheck(L_6);
		L_6->___mzPyLJUgHmLqXxITGVUETFfKmubS_10 = L_7;
		LaNNrUufXUaCsHwYSVeeItSJzfQrA_1_t90BE74457214F7F3801FB0D2DD805D4EAF4457DA* L_8 = L_6;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_9 = p3;
		NullCheck(L_8);
		L_8->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4), (void*)L_9);
		return (RuntimeObject*)L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper::IOcxdCLgugooqaADqWvPIyWRSwwG<System.Object>(Rewired.ControllerType,System.Int32,?,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCheckingHelper_IOcxdCLgugooqaADqWvPIyWRSwwG_TisRuntimeObject_m07F0DEDCCBE0EBB24C53F61CFE7E4F3C5E50E7E6_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, bool p3, bool p4, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p5, const RuntimeMethod* method) 
{
{
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_0 = (NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1__ctor_m471D4BF3F60DB5E5C8E988C205C6217CA5E5C74D(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_11), (void*)__this);
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_2 = L_1;
		int32_t L_3 = p0;
		NullCheck(L_2);
		L_2->___GIZHpBfTSGgXJDtcKfJhtDcTARMY_13 = L_3;
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_4 = L_2;
		int32_t L_5 = p1;
		NullCheck(L_4);
		L_4->___XuDYOktzvzuJLzqUPQedqdspGDhC_15 = L_5;
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_6 = L_4;
		RuntimeObject* L_7 = p2;
		NullCheck(L_6);
		L_6->___yFsxPduJsRRbcQBkjQYDCjtPsnZC_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___yFsxPduJsRRbcQBkjQYDCjtPsnZC_6), (void*)L_7);
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_8 = L_6;
		bool L_9 = p3;
		NullCheck(L_8);
		L_8->___wbJTSksJrdbiJvScZEcbgDdFVdPiA_8 = L_9;
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_10 = L_8;
		bool L_11 = p4;
		NullCheck(L_10);
		L_10->___mzPyLJUgHmLqXxITGVUETFfKmubS_10 = L_11;
		NPPlAOzpsFiqWUuYJtTMLJfMbmYu_1_tDD2E3885D14A7C4488825DE3B7C56DEA023BC185* L_12 = L_10;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_13 = p5;
		NullCheck(L_12);
		L_12->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4), (void*)L_13);
		return (RuntimeObject*)L_12;
	}
}
// System.Collections.Generic.IEnumerable`1<Rewired.ElementAssignmentConflictInfo> Rewired.Player/ControllerHelper/ConflictCheckingHelper::IOcxdCLgugooqaADqWvPIyWRSwwG<System.Object>(Rewired.ControllerType,System.Int32,?,Rewired.ActionElementMap,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCheckingHelper_IOcxdCLgugooqaADqWvPIyWRSwwG_TisRuntimeObject_m4A17F643DF9D8442AFECD026C62EC60B33B86DF8_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* p3, bool p4, bool p5, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p6, const RuntimeMethod* method) 
{
{
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_0 = (gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1__ctor_mAAA860EA13BFD81E13FB29502A14D28E72DD2762(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_13), (void*)__this);
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_2 = L_1;
		int32_t L_3 = p0;
		NullCheck(L_2);
		L_2->___GIZHpBfTSGgXJDtcKfJhtDcTARMY_15 = L_3;
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_4 = L_2;
		int32_t L_5 = p1;
		NullCheck(L_4);
		L_4->___XuDYOktzvzuJLzqUPQedqdspGDhC_17 = L_5;
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_6 = L_4;
		RuntimeObject* L_7 = p2;
		NullCheck(L_6);
		L_6->___yFsxPduJsRRbcQBkjQYDCjtPsnZC_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___yFsxPduJsRRbcQBkjQYDCjtPsnZC_8), (void*)L_7);
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_8 = L_6;
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_9 = p3;
		NullCheck(L_8);
		L_8->___CjJHlxWDwYLXIQWEDyYWzjqIDWLF_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___CjJHlxWDwYLXIQWEDyYWzjqIDWLF_6), (void*)L_9);
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_10 = L_8;
		bool L_11 = p4;
		NullCheck(L_10);
		L_10->___wbJTSksJrdbiJvScZEcbgDdFVdPiA_10 = L_11;
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_12 = L_10;
		bool L_13 = p5;
		NullCheck(L_12);
		L_12->___mzPyLJUgHmLqXxITGVUETFfKmubS_12 = L_13;
		gPTTtyzOAxLCvPhgMtIrgUsCIpeH_1_tA05B48EAD2AA2E510F8D380D32FC8F6D8331D7E3* L_14 = L_12;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_15 = p6;
		NullCheck(L_14);
		L_14->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___GvAHqXQEeCaNOUVGVeofgeJOkljZ_4), (void*)L_15);
		return (RuntimeObject*)L_14;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::LjomBUWEwGFWAlAdQCyHCghfTkQvA<System.Object>(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_LjomBUWEwGFWAlAdQCyHCghfTkQvA_TisRuntimeObject_m3CFB80FA72BED709C47A864F8A153F18BEB293EB_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E p0, bool p1, bool p2, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* V_0 = NULL;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_1 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_5 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B7_0 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p3;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* L_1;
		L_1 = ReInput_get_players_m3DDA5505CC1DB7580B0C41F1D781A284D3EACD27(NULL);
		int32_t L_2;
		L_2 = ElementAssignmentConflictCheck_get_playerId_m13D1C2C48B4AF7E87153014EE4B16491202256C5_inline((&p0), NULL);
		NullCheck(L_1);
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_3;
		L_3 = PlayerHelper_GetPlayer_m42CD1C5AC3CC96C9E36A74D680F0CEC9F5EB5FDC(L_1, L_2, NULL);
		V_0 = L_3;
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_4 = V_0;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return 0;
	}

IL_001d:
	{
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_5 = V_0;
		NullCheck(L_5);
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_6 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)L_5->___controllers_7;
		NullCheck(L_6);
		MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* L_7 = (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*)L_6->___maps_12;
		int32_t L_8;
		L_8 = ElementAssignmentConflictCheck_get_controllerType_mB10ABC66916B5C14CA467D3289A606AEE947FE72_inline((&p0), NULL);
		int32_t L_9;
		L_9 = ElementAssignmentConflictCheck_get_controllerId_m5C57BA2FE3D405B624E86F7DD88454ED9711954A_inline((&p0), NULL);
		int32_t L_10;
		L_10 = ElementAssignmentConflictCheck_get_controllerMapId_m4C899DB8B80BBF22D0B0CAA98E0F5330AECF1800_inline((&p0), NULL);
		NullCheck(L_7);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11;
		L_11 = MapHelper_GetMap_m7447D54D0BABDE292B5BC1AAA6F5576F29B016BE(L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_12 = V_1;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_13;
		L_13 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_14;
		L_14 = ElementAssignmentConflictCheck_get_controllerMapCategoryId_m0A29A78618798D54C96B3EE602E3576B899DBB99_inline((&p0), NULL);
		NullCheck(L_13);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_15;
		L_15 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_13, L_14, NULL);
		G_B7_0 = L_15;
		goto IL_0069;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_16;
		L_16 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33(L_17, NULL);
		NullCheck(L_16);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_19;
		L_19 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_16, L_18, NULL);
		G_B7_0 = L_19;
	}

IL_0069:
	{
		V_2 = G_B7_0;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_20 = V_2;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_00b2;
	}

IL_0076:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_21 = p3;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_23;
		bool L_24 = p1;
		if (!L_24)
		{
			goto IL_0092;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_25 = V_5;
		NullCheck(L_25);
		bool L_26;
		L_26 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_25, NULL);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}

IL_0092:
	{
		bool L_27 = p2;
		if (L_27)
		{
			goto IL_00a0;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_28 = V_2;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_29 = V_5;
		bool L_30;
		L_30 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_00ac;
		}
	}

IL_00a0:
	{
		int32_t L_31 = V_3;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_32 = V_5;
		ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E L_33 = p0;
		bool L_34 = p1;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2< int32_t, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E, bool >::Invoke(25 /* System.Int32 Rewired.ControllerMap::RemoveElementAssignmentConflicts(Rewired.ElementAssignmentConflictCheck,System.Boolean) */, L_32, L_33, L_34);
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, L_35));
	}

IL_00ac:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b2:
	{
		int32_t L_37 = V_4;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_38 = p3;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_38, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_40 = V_3;
		return L_40;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::LjomBUWEwGFWAlAdQCyHCghfTkQvA<System.Object>(Rewired.ControllerType,System.Int32,?,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_LjomBUWEwGFWAlAdQCyHCghfTkQvA_TisRuntimeObject_mDD292C3B25730CB4186E127000BEE94F11E722B0_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, bool p3, bool p4, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p5, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_3 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p5;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = p2;
		if (L_1)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_2;
		L_2 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_3 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_3);
		int32_t L_4;
		L_4 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_3, NULL);
		NullCheck(L_2);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_5;
		L_5 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_2, L_4, NULL);
		V_0 = L_5;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_6 = V_0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return 0;
	}

IL_0029:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_006c;
	}

IL_002f:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_7 = p5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_9;
		bool L_10 = p3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11 = V_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_11, NULL);
		if (!L_12)
		{
			goto IL_0068;
		}
	}

IL_0049:
	{
		bool L_13 = p4;
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_14 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_15 = V_3;
		bool L_16;
		L_16 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0068;
		}
	}

IL_0057:
	{
		int32_t L_17 = V_1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_18 = V_3;
		RuntimeObject* L_19 = p2;
		bool L_20 = p3;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = VirtualFuncInvoker2< int32_t, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, bool >::Invoke(23 /* System.Int32 Rewired.ControllerMap::RemoveElementAssignmentConflicts(Rewired.ControllerMap,System.Boolean) */, L_18, (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_19, L_20);
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_21));
	}

IL_0068:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006c:
	{
		int32_t L_23 = V_2;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_24 = p5;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::LjomBUWEwGFWAlAdQCyHCghfTkQvA<System.Object>(Rewired.ControllerType,System.Int32,?,Rewired.ActionElementMap,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_LjomBUWEwGFWAlAdQCyHCghfTkQvA_TisRuntimeObject_m281AD5E79B0C2D0230F04587EC6C86CEAF7021EE_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* p3, bool p4, bool p5, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p6, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_3 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B6_0 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p6;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_1 = p3;
		if (L_1)
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = p2;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		G_B6_0 = ((InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111*)(NULL));
		goto IL_002a;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_3;
		L_3 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_4 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_4);
		int32_t L_5;
		L_5 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_4, NULL);
		NullCheck(L_3);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_6;
		L_6 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_3, L_5, NULL);
		G_B6_0 = L_6;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_006a;
	}

IL_0031:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_7 = p6;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_9;
		bool L_10 = p4;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11 = V_3;
		NullCheck(L_11);
		bool L_12;
		L_12 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_11, NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}

IL_004b:
	{
		bool L_13 = p5;
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_14 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_15 = V_3;
		bool L_16;
		L_16 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0066;
		}
	}

IL_0059:
	{
		int32_t L_17 = V_1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_18 = V_3;
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_19 = p3;
		bool L_20 = p4;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = VirtualFuncInvoker2< int32_t, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF*, bool >::Invoke(24 /* System.Int32 Rewired.ControllerMap::RemoveElementAssignmentConflicts(Rewired.ActionElementMap,System.Boolean) */, L_18, L_19, L_20);
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, L_21));
	}

IL_0066:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006a:
	{
		int32_t L_23 = V_2;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_24 = p6;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::VaGOdHqZoxozsaVvNJDBbKLKdiWj<System.Object>(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>,System.Collections.Generic.List`1<Rewired.ActionElementMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_VaGOdHqZoxozsaVvNJDBbKLKdiWj_TisRuntimeObject_mB5EA31C720642DE95294563BDE80DB27B943DC8F_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E p0, bool p1, bool p2, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p3, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* p4, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* V_0 = NULL;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_1 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_5 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B9_0 = NULL;
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_0 = p4;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_1 = p4;
		NullCheck(L_1);
		List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_inline(L_1, List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
	}

IL_000b:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_2 = p3;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* L_3;
		L_3 = ReInput_get_players_m3DDA5505CC1DB7580B0C41F1D781A284D3EACD27(NULL);
		int32_t L_4;
		L_4 = ElementAssignmentConflictCheck_get_playerId_m13D1C2C48B4AF7E87153014EE4B16491202256C5_inline((&p0), NULL);
		NullCheck(L_3);
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_5;
		L_5 = PlayerHelper_GetPlayer_m42CD1C5AC3CC96C9E36A74D680F0CEC9F5EB5FDC(L_3, L_4, NULL);
		V_0 = L_5;
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_6 = V_0;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_7 = V_0;
		NullCheck(L_7);
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_8 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)L_7->___controllers_7;
		NullCheck(L_8);
		MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* L_9 = (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*)L_8->___maps_12;
		int32_t L_10;
		L_10 = ElementAssignmentConflictCheck_get_controllerType_mB10ABC66916B5C14CA467D3289A606AEE947FE72_inline((&p0), NULL);
		int32_t L_11;
		L_11 = ElementAssignmentConflictCheck_get_controllerId_m5C57BA2FE3D405B624E86F7DD88454ED9711954A_inline((&p0), NULL);
		int32_t L_12;
		L_12 = ElementAssignmentConflictCheck_get_controllerMapId_m4C899DB8B80BBF22D0B0CAA98E0F5330AECF1800_inline((&p0), NULL);
		NullCheck(L_9);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_13;
		L_13 = MapHelper_GetMap_m7447D54D0BABDE292B5BC1AAA6F5576F29B016BE(L_9, L_10, L_11, L_12, NULL);
		V_1 = L_13;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_14 = V_1;
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_15;
		L_15 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_16;
		L_16 = ElementAssignmentConflictCheck_get_controllerMapCategoryId_m0A29A78618798D54C96B3EE602E3576B899DBB99_inline((&p0), NULL);
		NullCheck(L_15);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_17;
		L_17 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_15, L_16, NULL);
		G_B9_0 = L_17;
		goto IL_0074;
	}

IL_0064:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_18;
		L_18 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33(L_19, NULL);
		NullCheck(L_18);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_21;
		L_21 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_18, L_20, NULL);
		G_B9_0 = L_21;
	}

IL_0074:
	{
		V_2 = G_B9_0;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_22 = V_2;
		if (L_22)
		{
			goto IL_007a;
		}
	}
	{
		return 0;
	}

IL_007a:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_00c0;
	}

IL_0081:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_23 = p3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_23, L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_5 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_25;
		bool L_26 = p1;
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_27 = V_5;
		NullCheck(L_27);
		bool L_28;
		L_28 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_27, NULL);
		if (!L_28)
		{
			goto IL_00ba;
		}
	}

IL_009d:
	{
		bool L_29 = p2;
		if (L_29)
		{
			goto IL_00ab;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_30 = V_2;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_31 = V_5;
		bool L_32;
		L_32 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00ba;
		}
	}

IL_00ab:
	{
		int32_t L_33 = V_3;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_34 = V_5;
		ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E L_35 = p0;
		bool L_36 = p1;
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_37 = p4;
		NullCheck(L_34);
		int32_t L_38;
		L_38 = VirtualFuncInvoker4< int32_t, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E, bool, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6*, bool >::Invoke(28 /* System.Int32 Rewired.ControllerMap::VaGOdHqZoxozsaVvNJDBbKLKdiWj(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Collections.Generic.List`1<Rewired.ActionElementMap>,System.Boolean) */, L_34, L_35, L_36, L_37, (bool)1);
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, L_38));
	}

IL_00ba:
	{
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00c0:
	{
		int32_t L_40 = V_4;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_41 = p3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_41, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_43 = V_3;
		return L_43;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::VaGOdHqZoxozsaVvNJDBbKLKdiWj<System.Object>(Rewired.ControllerType,System.Int32,?,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>,System.Collections.Generic.List`1<Rewired.ActionElementMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_VaGOdHqZoxozsaVvNJDBbKLKdiWj_TisRuntimeObject_m7E464955AD8F849C79953F1F8D10C4D34FE3DB04_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, bool p3, bool p4, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p5, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* p6, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_3 = NULL;
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_0 = p6;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_1 = p6;
		NullCheck(L_1);
		List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_inline(L_1, List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
	}

IL_000b:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_2 = p5;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_3 = p2;
		if (L_3)
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_5 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_5);
		int32_t L_6;
		L_6 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_5, NULL);
		NullCheck(L_4);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_7;
		L_7 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_4, L_6, NULL);
		V_0 = L_7;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_8 = V_0;
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_007a;
	}

IL_003a:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_9 = p5;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_11;
		bool L_12 = p3;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_13 = V_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_13, NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}

IL_0054:
	{
		bool L_15 = p4;
		if (L_15)
		{
			goto IL_0062;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_16 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_3;
		bool L_18;
		L_18 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_0076;
		}
	}

IL_0062:
	{
		int32_t L_19 = V_1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_20 = V_3;
		RuntimeObject* L_21 = p2;
		bool L_22 = p3;
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_23 = p6;
		NullCheck(L_20);
		int32_t L_24;
		L_24 = VirtualFuncInvoker4< int32_t, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, bool, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6*, bool >::Invoke(26 /* System.Int32 Rewired.ControllerMap::VaGOdHqZoxozsaVvNJDBbKLKdiWj(Rewired.ControllerMap,System.Boolean,System.Collections.Generic.List`1<Rewired.ActionElementMap>,System.Boolean) */, L_20, (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_21, L_22, L_23, (bool)1);
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
	}

IL_0076:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007a:
	{
		int32_t L_26 = V_2;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_27 = p5;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/ConflictCheckingHelper::VaGOdHqZoxozsaVvNJDBbKLKdiWj<System.Object>(Rewired.ControllerType,System.Int32,?,Rewired.ActionElementMap,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>,System.Collections.Generic.List`1<Rewired.ActionElementMap>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConflictCheckingHelper_VaGOdHqZoxozsaVvNJDBbKLKdiWj_TisRuntimeObject_m84E2218AE5336359635ACB3AC7DF2A12CC895FCE_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* p3, bool p4, bool p5, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p6, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* p7, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_3 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B8_0 = NULL;
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_0 = p7;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_1 = p7;
		NullCheck(L_1);
		List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_inline(L_1, List_1_Clear_m2036CFD23AB93618EE6F473B3864A226AB3B519E_RuntimeMethod_var);
	}

IL_000b:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_2 = p6;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_3 = p3;
		if (L_3)
		{
			goto IL_0015;
		}
	}

IL_0013:
	{
		return 0;
	}

IL_0015:
	{
		RuntimeObject* L_4 = p2;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		G_B8_0 = ((InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111*)(NULL));
		goto IL_0035;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_5;
		L_5 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_6 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_6);
		int32_t L_7;
		L_7 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_6, NULL);
		NullCheck(L_5);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_8;
		L_8 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_5, L_7, NULL);
		G_B8_0 = L_8;
	}

IL_0035:
	{
		V_0 = G_B8_0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0078;
	}

IL_003c:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_9 = p6;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_11;
		bool L_12 = p4;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_13 = V_3;
		NullCheck(L_13);
		bool L_14;
		L_14 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_13, NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}

IL_0056:
	{
		bool L_15 = p5;
		if (L_15)
		{
			goto IL_0064;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_16 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_3;
		bool L_18;
		L_18 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_0074;
		}
	}

IL_0064:
	{
		int32_t L_19 = V_1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_20 = V_3;
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_21 = p3;
		bool L_22 = p4;
		List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6* L_23 = p7;
		NullCheck(L_20);
		int32_t L_24;
		L_24 = VirtualFuncInvoker4< int32_t, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF*, bool, List_1_t61A2C1C85DEC6157A1333F351530E22E04BDF9A6*, bool >::Invoke(27 /* System.Int32 Rewired.ControllerMap::VaGOdHqZoxozsaVvNJDBbKLKdiWj(Rewired.ActionElementMap,System.Boolean,System.Collections.Generic.List`1<Rewired.ActionElementMap>,System.Boolean) */, L_20, L_21, L_22, L_23, (bool)1);
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
	}

IL_0074:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0078:
	{
		int32_t L_26 = V_2;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_27 = p6;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper::kpgnYZBVBPyHNKSlsFcMpEhPPIHB<System.Object>(Rewired.ElementAssignmentConflictCheck,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConflictCheckingHelper_kpgnYZBVBPyHNKSlsFcMpEhPPIHB_TisRuntimeObject_mCAAB629B6BD2A233BE0DBB06E7DF2A5AF6B1C1A0_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E p0, bool p1, bool p2, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* V_0 = NULL;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_1 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_2 = NULL;
	int32_t V_3 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_4 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B7_0 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p3;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		PlayerHelper_t96BC8DE1C94717C98B253F25C7B9C82639E4BF5C* L_1;
		L_1 = ReInput_get_players_m3DDA5505CC1DB7580B0C41F1D781A284D3EACD27(NULL);
		int32_t L_2;
		L_2 = ElementAssignmentConflictCheck_get_playerId_m13D1C2C48B4AF7E87153014EE4B16491202256C5_inline((&p0), NULL);
		NullCheck(L_1);
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_3;
		L_3 = PlayerHelper_GetPlayer_m42CD1C5AC3CC96C9E36A74D680F0CEC9F5EB5FDC(L_1, L_2, NULL);
		V_0 = L_3;
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_4 = V_0;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Player_t71A64CE695A2F96B144F3050755AB2799DA7C01B* L_5 = V_0;
		NullCheck(L_5);
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_6 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)L_5->___controllers_7;
		NullCheck(L_6);
		MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* L_7 = (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*)L_6->___maps_12;
		int32_t L_8;
		L_8 = ElementAssignmentConflictCheck_get_controllerType_mB10ABC66916B5C14CA467D3289A606AEE947FE72_inline((&p0), NULL);
		int32_t L_9;
		L_9 = ElementAssignmentConflictCheck_get_controllerId_m5C57BA2FE3D405B624E86F7DD88454ED9711954A_inline((&p0), NULL);
		int32_t L_10;
		L_10 = ElementAssignmentConflictCheck_get_controllerMapId_m4C899DB8B80BBF22D0B0CAA98E0F5330AECF1800_inline((&p0), NULL);
		NullCheck(L_7);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11;
		L_11 = MapHelper_GetMap_m7447D54D0BABDE292B5BC1AAA6F5576F29B016BE(L_7, L_8, L_9, L_10, NULL);
		V_1 = L_11;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_12 = V_1;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_13;
		L_13 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_14;
		L_14 = ElementAssignmentConflictCheck_get_controllerMapCategoryId_m0A29A78618798D54C96B3EE602E3576B899DBB99_inline((&p0), NULL);
		NullCheck(L_13);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_15;
		L_15 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_13, L_14, NULL);
		G_B7_0 = L_15;
		goto IL_0069;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_16;
		L_16 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33(L_17, NULL);
		NullCheck(L_16);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_19;
		L_19 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_16, L_18, NULL);
		G_B7_0 = L_19;
	}

IL_0069:
	{
		V_2 = G_B7_0;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_20 = V_2;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		return (bool)0;
	}

IL_006f:
	{
		V_3 = 0;
		goto IL_00ad;
	}

IL_0073:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_21 = p3;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_21, L_22, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_23;
		bool L_24 = p1;
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_25 = V_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_25, NULL);
		if (!L_26)
		{
			goto IL_00a9;
		}
	}

IL_008e:
	{
		bool L_27 = p2;
		if (L_27)
		{
			goto IL_009c;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_28 = V_2;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_29 = V_4;
		bool L_30;
		L_30 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_28, L_29, NULL);
		if (L_30)
		{
			goto IL_00a9;
		}
	}

IL_009c:
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_31 = V_4;
		ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E L_32 = p0;
		bool L_33 = p1;
		NullCheck(L_31);
		bool L_34;
		L_34 = VirtualFuncInvoker2< bool, ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E, bool >::Invoke(19 /* System.Boolean Rewired.ControllerMap::DoesElementAssignmentConflict(Rewired.ElementAssignmentConflictCheck,System.Boolean) */, L_31, L_32, L_33);
		if (!L_34)
		{
			goto IL_00a9;
		}
	}
	{
		return (bool)1;
	}

IL_00a9:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ad:
	{
		int32_t L_36 = V_3;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_37 = p3;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper::kpgnYZBVBPyHNKSlsFcMpEhPPIHB<System.Object>(Rewired.ControllerType,System.Int32,?,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConflictCheckingHelper_kpgnYZBVBPyHNKSlsFcMpEhPPIHB_TisRuntimeObject_m7B05810FFCA50BA654990036AE1FE5313AE34D04_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, bool p3, bool p4, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p5, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_2 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p5;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = p2;
		if (L_1)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return (bool)0;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_2;
		L_2 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_3 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_3);
		int32_t L_4;
		L_4 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_3, NULL);
		NullCheck(L_2);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_5;
		L_5 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_2, L_4, NULL);
		V_0 = L_5;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_6 = V_0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_1 = 0;
		goto IL_006b;
	}

IL_002d:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_7 = p5;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_9;
		bool L_10 = p3;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_11, NULL);
		if (!L_12)
		{
			goto IL_0067;
		}
	}

IL_0047:
	{
		bool L_13 = p4;
		if (L_13)
		{
			goto IL_0055;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_14 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_15 = V_2;
		bool L_16;
		L_16 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0067;
		}
	}

IL_0055:
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_2;
		RuntimeObject* L_18 = p2;
		bool L_19 = p3;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, bool >::Invoke(17 /* System.Boolean Rewired.ControllerMap::DoesElementAssignmentConflict(Rewired.ControllerMap,System.Boolean) */, L_17, (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)1;
	}

IL_0067:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006b:
	{
		int32_t L_22 = V_1;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_23 = p5;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/ConflictCheckingHelper::kpgnYZBVBPyHNKSlsFcMpEhPPIHB<System.Object>(Rewired.ControllerType,System.Int32,?,Rewired.ActionElementMap,System.Boolean,System.Boolean,TBSPGJPKaXrjsOpBQZPxJnrcfSfAA`1<?>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConflictCheckingHelper_kpgnYZBVBPyHNKSlsFcMpEhPPIHB_TisRuntimeObject_mC2BE4CED45B361FC87CF82F2FF78D988AA13D116_gshared (ConflictCheckingHelper_t8D707CEC57F056B87A4C68F98F780D34E893A8DB* __this, int32_t p0, int32_t p1, RuntimeObject* p2, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* p3, bool p4, bool p5, TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* p6, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_0 = NULL;
	int32_t V_1 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_2 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* G_B6_0 = NULL;
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_0 = p6;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_1 = p3;
		if (L_1)
		{
			goto IL_000a;
		}
	}

IL_0008:
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = p2;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		G_B6_0 = ((InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111*)(NULL));
		goto IL_002a;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_3;
		L_3 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		RuntimeObject* L_4 = p2;
		NullCheck((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_4);
		int32_t L_5;
		L_5 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33((ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_4, NULL);
		NullCheck(L_3);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_6;
		L_6 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_3, L_5, NULL);
		G_B6_0 = L_6;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		V_1 = 0;
		goto IL_0069;
	}

IL_002f:
	{
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_7 = p6;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*)L_9;
		bool L_10 = p4;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = ControllerMap_get_enabled_mA47FDF987F7A3D02B760A0F6923993074A810915(L_11, NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}

IL_0049:
	{
		bool L_13 = p5;
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_14 = V_0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_15 = V_2;
		bool L_16;
		L_16 = ConflictCheckingHelper_HSvNYjKwjqmkkXAMHhkOgaGsivnQA_m95133A1C4C565019762E4A5EACF95189E3ECC306(__this, L_14, L_15, NULL);
		if (L_16)
		{
			goto IL_0065;
		}
	}

IL_0057:
	{
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_17 = V_2;
		ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF* L_18 = p3;
		bool L_19 = p4;
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, ActionElementMap_t0EBE3E5D3A5DF3BA6D35F8082ED2232404EFF8CF*, bool >::Invoke(18 /* System.Boolean Rewired.ControllerMap::DoesElementAssignmentConflict(Rewired.ActionElementMap,System.Boolean) */, L_17, L_18, L_19);
		if (!L_20)
		{
			goto IL_0065;
		}
	}
	{
		return (bool)1;
	}

IL_0065:
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		int32_t L_22 = V_1;
		TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE* L_23 = p6;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = ((  int32_t (*) (TBSPGJPKaXrjsOpBQZPxJnrcfSfAA_1_t92F77A2C0897D802673079FA32163CACC9FD23DE*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_23, il2cpp_rgctx_method(method->rgctx_data, 3));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::AddEmptyMap<System.Object>(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_AddEmptyMap_TisRuntimeObject_mEAC94A50F2F91679D2B013DC324379952A206BC0_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, int32_t ___layoutId2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		int32_t L_6 = ___categoryId1;
		int32_t L_7 = ___layoutId2;
		MapHelper_JumOMOwvXGOuPuOcxsTpVHdKrpWy_m1025513A8D96A8FDC1ED03E1DEAB4657987276C6(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::AddEmptyMap<System.Object>(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_AddEmptyMap_TisRuntimeObject_m8CCF5FF7CDFD2CF14142E438AFDBC50FE6A32385_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, String_t* ___layoutName2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		String_t* L_6 = ___categoryName1;
		String_t* L_7 = ___layoutName2;
		MapHelper_JumOMOwvXGOuPuOcxsTpVHdKrpWy_mED039BB84BB04F5E54C2B60E867E3C20C2AD8564(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::AddMap<System.Object>(System.Int32,Rewired.ControllerMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_AddMap_TisRuntimeObject_mEA9313BE765503413DC3D1F1888FBF34EA3A210F_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* ___map1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_6 = ___map1;
		MapHelper_eARszvxUDfRQEHAaHAQfkQChFPGDb_m2F43D7FDFDEE1F636EDEC7226B9953E64C57F7E0(__this, L_4, L_5, L_6, (int32_t)0, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::AddMap<System.Object>(System.Int32,Rewired.ControllerMap,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_AddMap_TisRuntimeObject_m1D71D752AEB5D9BD0165ABC1AA55E0FD25FE4FEF_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* ___map1, bool ___startEnabled2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B4_3 = NULL;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	int32_t G_B5_3 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B5_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_6 = ___map1;
		bool L_7 = ___startEnabled2;
		G_B3_0 = L_6;
		G_B3_1 = L_5;
		G_B3_2 = L_4;
		G_B3_3 = __this;
		if (L_7)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_5;
			G_B4_2 = L_4;
			G_B4_3 = __this;
			goto IL_0028;
		}
	}
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_0029:
	{
		NullCheck(G_B5_4);
		MapHelper_eARszvxUDfRQEHAaHAQfkQChFPGDb_m2F43D7FDFDEE1F636EDEC7226B9953E64C57F7E0(G_B5_4, G_B5_3, G_B5_2, G_B5_1, (int32_t)G_B5_0, NULL);
		return;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/MapHelper::AddMapFromJson<System.Object>(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapHelper_AddMapFromJson_TisRuntimeObject_m198AC6D0033F40F4794599C0B8471EA84A71199D_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___jsonString1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		String_t* L_6 = ___jsonString1;
		bool L_7;
		L_7 = MapHelper_ogIOwmXsniAMouscEmnvbvCsvknx_m5CF220DABA9A843745BB5108753BD9DBE734F696(__this, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Boolean Rewired.Player/ControllerHelper/MapHelper::AddMapFromXml<System.Object>(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapHelper_AddMapFromXml_TisRuntimeObject_m58C70D09D3DFBC0D6D26AB633C40F7C0F278B721_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___xmlString1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return (bool)0;
	}

IL_001b:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		String_t* L_6 = ___xmlString1;
		bool L_7;
		L_7 = MapHelper_vsoXxjlyQkRgSJiWizMXuCTWvcQQ_m6A031FB42A3792160FDB353B488EA5710A8CDC40(__this, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::AddMapsFromJson<System.Object>(System.Int32,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_AddMapsFromJson_TisRuntimeObject_m5844BCC05930030C0C6D2DF3808C9355B5E6F11E_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___jsonStrings1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___jsonStrings1;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003e;
	}

IL_0026:
	{
		int32_t L_5 = ___controllerId0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ___jsonStrings1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_6, L_7, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		bool L_9;
		L_9 = ((  bool (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_5, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = ___jsonStrings1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_13, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::AddMapsFromXml<System.Object>(System.Int32,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_AddMapsFromXml_TisRuntimeObject_m41EA4B5B9FB7A26DFF6EA7CF5219B882D605E2D4_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___xmlStrings1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___xmlStrings1;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_003e;
	}

IL_0026:
	{
		int32_t L_5 = ___controllerId0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ___xmlStrings1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_6, L_7, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		bool L_9;
		L_9 = ((  bool (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_5, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = ___xmlStrings1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_13, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// ?[] Rewired.Player/ControllerHelper/MapHelper::BxVrdQsklySKzvdpWIubABxzIpfdA<System.Object>(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MapHelper_BxVrdQsklySKzvdpWIubABxzIpfdA_TisRuntimeObject_m88E469DFBA4D5C25E29638A863B1592917CFD73C_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, bool p1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_6 = NULL;
	Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* V_7 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_8 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_1 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_1);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_2 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_1->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F(L_2, L_3, NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		int32_t L_6 = p0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(11 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::LFBHpqbppIulyYiNTvRYfiNwKOGN(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_5, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		return (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
	}

IL_0026:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_9, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_9;
		RuntimeObject* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_10, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_12);
		V_4 = L_13;
		V_5 = 0;
		goto IL_0090;
	}

IL_003f:
	{
		RuntimeObject* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_16;
		L_16 = InterfaceFuncInvoker1< ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, int32_t >::Invoke(0 /* Rewired.ControllerMap hDTwQOONkmiSaaPHwqpfFkmXMCAbb::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var, L_14, L_15);
		V_6 = L_16;
		bool L_17 = p1;
		if (!L_17)
		{
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_18;
		L_18 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_19 = V_6;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33(L_19, NULL);
		NullCheck(L_18);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_21;
		L_21 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_18, L_20, NULL);
		V_8 = L_21;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_22 = V_8;
		if (!L_22)
		{
			goto IL_006d;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_23 = V_8;
		NullCheck((InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C*)L_23);
		bool L_24;
		L_24 = InputCategory_get_userAssignable_mBD58AC35EE83AAE55914DC85584314585326C703_inline((InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C*)L_23, NULL);
		if (!L_24)
		{
			goto IL_008a;
		}
	}

IL_006d:
	{
		RuntimeObject* L_25 = V_1;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_25, L_26);
		NullCheck(L_27);
		Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* L_28;
		L_28 = InterfaceFuncInvoker0< Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* >::Invoke(1 /* Rewired.Controller Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::ozNcfmyISWkqVPVfvPOfROcWRfsf() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_27);
		V_7 = L_28;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_29 = V_3;
		Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* L_30 = V_7;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_31 = V_6;
		RuntimeObject* L_32;
		L_32 = ((  RuntimeObject* (*) (Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911*, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_30, L_31, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_29);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_29, L_32, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_008a:
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0090:
	{
		int32_t L_34 = V_5;
		RuntimeObject* L_35 = V_4;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 hDTwQOONkmiSaaPHwqpfFkmXMCAbb::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var, L_35);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_003f;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_37 = V_3;
		NullCheck(L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_38;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMaps<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMaps_TisRuntimeObject_mFE0F2F27E7E5E506026446A6EBDFEFE72B5E3B2D_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, bool ___userAssignableOnly0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_5 = ___userAssignableOnly0;
		MapHelper_ClearMaps_mE9839E66C615927C4E053CF3A89BF6C85E98614C(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForController<System.Object>(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForController_TisRuntimeObject_m7B52119079028DB2A11BF8805E6083011301576E_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, bool ___userAssignableOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		bool L_6 = ___userAssignableOnly1;
		MapHelper_ClearMapsForController_m0AF8A2D1031EA3A7299F1384656833D0E0996200(__this, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForController<System.Object>(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForController_TisRuntimeObject_m9E9FF700CA6E02C3C40CF6E4E9423E38CB3FA85C_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		int32_t L_6 = ___categoryId1;
		bool L_7 = ___userAssignableOnly2;
		MapHelper_ClearMapsForController_mC11D4A3C112748E4A510469C5FB6AC10950EF667(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForController<System.Object>(System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForController_TisRuntimeObject_m23566A46B28A3EABC254F1448A78BF61594DF3DF_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_5 = ___categoryName1;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		int32_t L_8 = ___controllerId0;
		int32_t L_9 = V_0;
		bool L_10 = ___userAssignableOnly2;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForControllerInLayout<System.Object>(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForControllerInLayout_TisRuntimeObject_mC55B53675C35FA75DD8C833854D16867A3E590E7_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___layoutId1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		int32_t L_6 = ___layoutId1;
		bool L_7 = ___userAssignableOnly2;
		MapHelper_ClearMapsForControllerInLayout_m2012A7C928B519693B0F57C5D13E84DBDBBEDE50(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsForControllerInLayout<System.Object>(System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsForControllerInLayout_TisRuntimeObject_m4BE3E287843B1E127ED49D569910845B746EE356_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___layoutName1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		String_t* L_6 = ___layoutName1;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = MappingHelper_GetLayoutId_m3C47818192FB2D4E2E46CB5F7E7585C302DE6ED7(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		int32_t L_9 = ___controllerId0;
		int32_t L_10 = V_0;
		bool L_11 = ___userAssignableOnly2;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory<System.Object>(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_TisRuntimeObject_m4E4554DA0304D40319E4BCB52599FD36EE8E3412_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___categoryId0, bool ___userAssignableOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___categoryId0;
		bool L_6 = ___userAssignableOnly1;
		MapHelper_ClearMapsInCategory_m75DD455E3093205B83DBB0C3CD22842B7820F570(__this, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_TisRuntimeObject_m8BDBA3E727F1587A213939CD43C13A7C9993A616_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, String_t* ___categoryName0, bool ___userAssignableOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_5 = ___categoryName0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		bool L_9 = ___userAssignableOnly1;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory<System.Object>(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_TisRuntimeObject_mB9E53ED1DA2EA0A6FC71D32CD3C3D4954DBE4FE6_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___categoryId0, int32_t ___layoutId1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___categoryId0;
		int32_t L_6 = ___layoutId1;
		bool L_7 = ___userAssignableOnly2;
		MapHelper_ClearMapsInCategory_m7A84D03ED5B7E2058C03C75F2AFC4416A58149F4(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInCategory<System.Object>(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInCategory_TisRuntimeObject_mB227F7F2038B64CDD422B55FDDFBF3C16BEF1414_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, String_t* ___categoryName0, String_t* ___layoutName1, bool ___userAssignableOnly2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_5 = ___categoryName0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		return;
	}

IL_002b:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_8;
		L_8 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		String_t* L_10 = ___layoutName1;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = MappingHelper_GetLayoutId_m3C47818192FB2D4E2E46CB5F7E7585C302DE6ED7(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0041:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		bool L_15 = ___userAssignableOnly2;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInLayout<System.Object>(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInLayout_TisRuntimeObject_mE171A6904265C0C4726A07AF2EEFC31AE2A121B5_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___layoutId0, bool ___userAssignableOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___layoutId0;
		bool L_6 = ___userAssignableOnly1;
		MapHelper_ClearMapsInLayout_m93FF033059DFAB7D685235CEDEA7A42D28A1E042(__this, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::ClearMapsInLayout<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_ClearMapsInLayout_TisRuntimeObject_mEC3EB50298E3B5F8D70F0276EF8F7170D0B8896A_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, String_t* ___layoutName0, bool ___userAssignableOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		String_t* L_6 = ___layoutName0;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = MappingHelper_GetLayoutId_m3C47818192FB2D4E2E46CB5F7E7585C302DE6ED7(L_4, L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}

IL_0030:
	{
		int32_t L_9 = V_0;
		bool L_10 = ___userAssignableOnly1;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
// T[] Rewired.Player/ControllerHelper/MapHelper::GetAllMapSaveData<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MapHelper_GetAllMapSaveData_TisRuntimeObject_m5F9E150D9C601E61F7CB347C3E488356C9EB6EEB_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, bool ___userAssignableMapsOnly0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_001f:
	{
		bool L_5 = ___userAssignableMapsOnly0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Rewired.Player/ControllerHelper/MapHelper::GetAllMaps<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetAllMaps_TisRuntimeObject_m1C7B7EB1521FEBB8F41CE1D85A548D1CFC5948BE_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, const RuntimeMethod* method) 
{
{
		XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2* L_0 = (XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		XcujpkEuhtkMjJAdZtQvqOzWNWoy_1__ctor_m8793AFB1079D0A7CA7D1C71689E0C8BA63138080(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		XcujpkEuhtkMjJAdZtQvqOzWNWoy_1_t8DB30E00B0855C4A917D6B66CABCB5A4E19B64A2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::GetAllMaps<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_GetAllMaps_TisRuntimeObject_m55A3C44AC237AE83A83C4653F89DA90562BB92D5_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___results0;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB16B3999460DDC981865934D979087351A14F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapHelper_GetAllMaps_TisRuntimeObject_m55A3C44AC237AE83A83C4653F89DA90562BB92D5_RuntimeMethod_var)));
	}

IL_0029:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___results0;
		NullCheck(L_6);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_7;
		L_7 = ((  bool (*) (int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_0073;
		}
	}
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_8 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_8);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_9 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_8->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F(L_9, L_10, NULL);
		V_1 = L_11;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_006d;
	}

IL_0055:
	{
		RuntimeObject* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_14, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_16);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = ___results0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = GenericInterfaceFuncInvoker2< int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_17, L_18, (bool)1);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006d:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_00da;
	}

IL_0073:
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_23 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_23);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_24 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_23->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		NullCheck(L_24);
		int32_t L_25 = (int32_t)L_24->___TIKqvTvXeujXUEcFBSnvvfWjpzmS_0;
		V_4 = L_25;
		V_5 = 0;
		goto IL_00d4;
	}

IL_008a:
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_26 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_26);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_27 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_26->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = vpfVMfLDNQCKabtrXuyMMndafvvoA_WnvLUDAsClwKBCDbOHhIRBMdKTgv_mFB15C8D1E61FDBCCAB87F4892BB7481AF3BBEE6F(L_27, L_28, NULL);
		V_6 = L_29;
		RuntimeObject* L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_30);
		V_7 = L_31;
		V_8 = 0;
		goto IL_00c8;
	}

IL_00ac:
	{
		RuntimeObject* L_32 = V_6;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_32, L_33);
		NullCheck(L_34);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_34);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_36 = ___results0;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = GenericInterfaceFuncInvoker2< int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_35, L_36, (bool)1);
		int32_t L_38 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00c8:
	{
		int32_t L_39 = V_8;
		int32_t L_40 = V_7;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d4:
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_008a;
		}
	}

IL_00da:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_44 = ___results0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_44, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_45;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Rewired.Player/ControllerHelper/MapHelper::GetAllMapsInCategory<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetAllMapsInCategory_TisRuntimeObject_m4BBEDF0B5F20B262FF788C09F6D861D00208927B_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___categoryId0, const RuntimeMethod* method) 
{
{
		ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60* L_0 = (ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		ojuhOybXRUNKAWBYROlwkJhBlkPc_1__ctor_m48EF0C0BCF7EB4E23415C4B13C967B63A9589F32(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3), (void*)__this);
		ojuhOybXRUNKAWBYROlwkJhBlkPc_1_t7B54C1CB431E7958F15D7F71C96CAF6E68E76D60* L_2 = L_1;
		int32_t L_3 = ___categoryId0;
		NullCheck(L_2);
		L_2->___HyLMjUIcjSOZGGOJZWHdhVkIwYLO_5 = L_3;
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Rewired.Player/ControllerHelper/MapHelper::GetAllMapsInCategory<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetAllMapsInCategory_TisRuntimeObject_m3F1991966E90B0521BFD5702F3F0A5FCE2344604_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, String_t* ___categoryName0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return (RuntimeObject*)L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_5;
		L_5 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_6 = ___categoryName0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return (RuntimeObject*)L_9;
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_11;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::GetAllMapsInCategory<System.Object>(System.Int32,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_GetAllMapsInCategory_TisRuntimeObject_mDDC9515B6EDC86309D3538EC6D3337E30244542F_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___categoryId0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___results1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB16B3999460DDC981865934D979087351A14F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapHelper_GetAllMapsInCategory_TisRuntimeObject_mDDC9515B6EDC86309D3538EC6D3337E30244542F_RuntimeMethod_var)));
	}

IL_0029:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___results1;
		NullCheck(L_6);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_7;
		L_7 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_8 = ___categoryId0;
		NullCheck(L_7);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_9;
		L_9 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		bool L_10;
		L_10 = ((  bool (*) (int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_11 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_11);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_12 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_11->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_14;
		L_14 = vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F(L_12, L_13, NULL);
		V_1 = L_14;
		RuntimeObject* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_15);
		V_2 = L_16;
		V_3 = 0;
		goto IL_007d;
	}

IL_0064:
	{
		RuntimeObject* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_17, L_18);
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_19);
		int32_t L_21 = ___categoryId0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_22 = ___results1;
		NullCheck(L_20);
		int32_t L_23;
		L_23 = GenericInterfaceFuncInvoker3< int32_t, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_20, L_21, L_22, (bool)1);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007d:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_00eb;
	}

IL_0083:
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_27 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_27);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_28 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_27->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)L_28->___TIKqvTvXeujXUEcFBSnvvfWjpzmS_0;
		V_4 = L_29;
		V_5 = 0;
		goto IL_00e5;
	}

IL_009a:
	{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_30 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_30);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_31 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_30->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = vpfVMfLDNQCKabtrXuyMMndafvvoA_WnvLUDAsClwKBCDbOHhIRBMdKTgv_mFB15C8D1E61FDBCCAB87F4892BB7481AF3BBEE6F(L_31, L_32, NULL);
		V_6 = L_33;
		RuntimeObject* L_34 = V_6;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_34);
		V_7 = L_35;
		V_8 = 0;
		goto IL_00d9;
	}

IL_00bc:
	{
		RuntimeObject* L_36 = V_6;
		int32_t L_37 = V_8;
		NullCheck(L_36);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_36, L_37);
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_38);
		int32_t L_40 = ___categoryId0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_41 = ___results1;
		NullCheck(L_39);
		int32_t L_42;
		L_42 = GenericInterfaceFuncInvoker3< int32_t, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_39, L_40, L_41, (bool)1);
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d9:
	{
		int32_t L_44 = V_8;
		int32_t L_45 = V_7;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00e5:
	{
		int32_t L_47 = V_5;
		int32_t L_48 = V_4;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_009a;
		}
	}

IL_00eb:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_49 = ___results1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_49, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_50;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::GetAllMapsInCategory<System.Object>(System.String,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_GetAllMapsInCategory_TisRuntimeObject_m2FF48FC70CADFFE41CEE4DBCCF11796B67BF2F33_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, String_t* ___categoryName0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_4;
		L_4 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_5 = ___categoryName0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = ___results1;
		int32_t L_10;
		L_10 = ((  int32_t (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_10;
	}
}
// T Rewired.Player/ControllerHelper/MapHelper::GetFirstMapInCategory<System.Object>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetFirstMapInCategory_TisRuntimeObject_mD4E90C2675ABC375303448AA24E8B2DF314C6FF5_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0023:
	{
		int32_t L_5 = ___categoryId1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_0;
		return L_6;
	}

IL_0031:
	{
		int32_t L_7;
		L_7 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___controllerId0;
		int32_t L_9 = ___categoryId1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_10;
		L_10 = MapHelper_tXTzuxnKeaFcJkTzJwQUsSwUoCsRA_mF1BB015F2E3CACA5BBF1FD7BB5FDE74068F7D365(__this, L_7, L_8, L_9, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T Rewired.Player/ControllerHelper/MapHelper::GetFirstMapInCategory<System.Object>(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetFirstMapInCategory_TisRuntimeObject_mB395AB93505B347BDEC591C38ABE6FFB5A15737E_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_5;
		L_5 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_6 = ___categoryName1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}

IL_003d:
	{
		int32_t L_10 = ___controllerId0;
		int32_t L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_12;
	}
}
// T Rewired.Player/ControllerHelper/MapHelper::GetMap<System.Object>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMap_TisRuntimeObject_mD8AA613CF01C9AE281CF2CAB94FAE83215FEBF48_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___mapId1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0023:
	{
		int32_t L_5 = ___mapId1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_0;
		return L_6;
	}

IL_0031:
	{
		int32_t L_7;
		L_7 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___controllerId0;
		int32_t L_9 = ___mapId1;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_10;
		L_10 = MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mF5BC6DA17BCBE2D8833A183352C5F877C7CD6F2B(__this, L_7, L_8, L_9, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T Rewired.Player/ControllerHelper/MapHelper::GetMap<System.Object>(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMap_TisRuntimeObject_mFA274DDC1671882E5BFCA3311F3CF0496E6260AA_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, int32_t ___layoutId2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0023:
	{
		int32_t L_5 = ___categoryId1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = ___layoutId2;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_002b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_7 = V_0;
		return L_7;
	}

IL_0035:
	{
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_9 = ___controllerId0;
		int32_t L_10 = ___categoryId1;
		int32_t L_11 = ___layoutId2;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_12;
		L_12 = MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mA72BABB67A8FEDFC05D5020E5F5B09570B71F927(__this, L_8, L_9, L_10, L_11, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T Rewired.Player/ControllerHelper/MapHelper::GetMap<System.Object>(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMap_TisRuntimeObject_m2BA5295B6A3B934D9EF8A3AB8FCB85C457B6BE55_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, String_t* ___layoutName2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0023:
	{
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_6 = ___controllerId0;
		String_t* L_7 = ___categoryName1;
		String_t* L_8 = ___layoutName2;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_9;
		L_9 = MapHelper_qYqBIOFxqlADXLihiBsFcAqNepub_mB544FDCDF4762ABA843DC4D4395B51F558E2913A(__this, L_5, L_6, L_7, L_8, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T[] Rewired.Player/ControllerHelper/MapHelper::GetMapSaveData<System.Object>(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MapHelper_GetMapSaveData_TisRuntimeObject_mE87F41817A9DD31A9ABB341F2D45C8003154AECE_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, bool ___userAssignableMapsOnly1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_001f:
	{
		int32_t L_5 = ___controllerId0;
		bool L_6 = ___userAssignableMapsOnly1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}
}
// System.Collections.Generic.IList`1<T> Rewired.Player/ControllerHelper/MapHelper::GetMaps<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMaps_TisRuntimeObject_m56D26C2BE639F0E8706430376972E43A361AD2CA_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_001f:
	{
		int32_t L_5 = ___controllerId0;
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_6;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Rewired.Player/ControllerHelper/MapHelper::GetMapsInCategory<System.Object>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMapsInCategory_TisRuntimeObject_mDF27D549D9D0CE05AEDEE7CCCBC48978DEF8AD9F_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return (RuntimeObject*)L_4;
	}

IL_001f:
	{
		int32_t L_5 = ___controllerId0;
		int32_t L_6 = ___categoryId1;
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Rewired.Player/ControllerHelper/MapHelper::GetMapsInCategory<System.Object>(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_GetMapsInCategory_TisRuntimeObject_m698FD4BF5F0A7F63533FC15984C3C3A7E6119722_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return (RuntimeObject*)L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_5;
		L_5 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_6 = ___categoryName1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		return (RuntimeObject*)L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___controllerId0;
		int32_t L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_12;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::GetMapsInCategory<System.Object>(System.Int32,System.Int32,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_GetMapsInCategory_TisRuntimeObject_mD3FCC7B7E3E92BD67FBD312A75A0B08B972A7427_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___results2;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB16B3999460DDC981865934D979087351A14F2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MapHelper_GetMapsInCategory_TisRuntimeObject_mD3FCC7B7E3E92BD67FBD312A75A0B08B972A7427_RuntimeMethod_var)));
	}

IL_0029:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___results2;
		NullCheck(L_6);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_7;
		L_7 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		int32_t L_8 = ___categoryId1;
		NullCheck(L_7);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_9;
		L_9 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = ___controllerId0;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(14 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::howjPBfRJshDbKOTcPHxFqZjkrDUB(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_10, L_11);
		V_0 = L_12;
		RuntimeObject* L_13 = V_0;
		if (L_13)
		{
			goto IL_0050;
		}
	}
	{
		return 0;
	}

IL_0050:
	{
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_14);
		int32_t L_16 = ___categoryId1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = ___results2;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = GenericInterfaceFuncInvoker3< int32_t, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, bool >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_15, L_16, L_17, (bool)1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = ___results2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_20;
	}
}
// System.Int32 Rewired.Player/ControllerHelper/MapHelper::GetMapsInCategory<System.Object>(System.Int32,System.String,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapHelper_GetMapsInCategory_TisRuntimeObject_m50028FF3E8391ADD501F975C0AB5708419A9DC4C_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return 0;
	}

IL_001b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___results2;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_5;
		L_5 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		String_t* L_6 = ___categoryName1;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = MappingHelper_GetMapCategoryId_mFC02A9FF6A6BFF6C38668558CB3DC6EB598077FB(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return 0;
	}

IL_0033:
	{
		int32_t L_9 = ___controllerId0;
		int32_t L_10 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = ___results2;
		int32_t L_12;
		L_12 = ((  int32_t (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Collections.Generic.IEnumerable`1<?> Rewired.Player/ControllerHelper/MapHelper::HhEjHGfUFpDhUEzhIsTLLSlcjgTt<System.Object>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_HhEjHGfUFpDhUEzhIsTLLSlcjgTt_TisRuntimeObject_m7E3F520EB3E0E24140563995CE47D9998656EA6E_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) 
{
{
		ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* L_0 = (ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1__ctor_m34A74F392D550360F7C8349AB6963AEEEE9CC11B(L_0, ((int32_t)-2), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* L_1 = L_0;
		NullCheck(L_1);
		L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___hJlvyFukKfMzsWcSVLwLCnIUdlMn_3), (void*)__this);
		ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* L_2 = L_1;
		int32_t L_3 = p0;
		NullCheck(L_2);
		L_2->___SgebiqeFPgLJkOQfmwCTESQqHVje_5 = L_3;
		ecjdcwfzgyPMBWdzOraiwfCBcrRoA_1_tCC80E04812F8A48B4DDE3B494ED31F6CC82A6A73* L_4 = L_2;
		int32_t L_5 = p1;
		NullCheck(L_4);
		L_4->___HyLMjUIcjSOZGGOJZWHdhVkIwYLO_7 = L_5;
		return (RuntimeObject*)L_4;
	}
}
// ?[] Rewired.Player/ControllerHelper/MapHelper::JQFZWOtCliAnOBrDkwQiJbYBgJKm<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MapHelper_JQFZWOtCliAnOBrDkwQiJbYBgJKm_TisRuntimeObject_m479FD02D7F64949C6F29C1A4091FE910F1E70F53_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, bool p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* V_6 = NULL;
	Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* V_7 = NULL;
	InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* V_8 = NULL;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_1 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_1);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_2 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_1->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F(L_2, L_3, NULL);
		V_1 = L_4;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = L_5;
		V_3 = 0;
		goto IL_0095;
	}

IL_0022:
	{
		RuntimeObject* L_6 = V_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
		V_5 = 0;
		goto IL_0086;
	}

IL_0035:
	{
		RuntimeObject* L_10 = V_4;
		int32_t L_11 = V_5;
		NullCheck(L_10);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_12;
		L_12 = InterfaceFuncInvoker1< ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, int32_t >::Invoke(0 /* Rewired.ControllerMap hDTwQOONkmiSaaPHwqpfFkmXMCAbb::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var, L_10, L_11);
		V_6 = L_12;
		bool L_13 = p0;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		MappingHelper_t18AE344473D49AF2E7133108678DD4D963699662* L_14;
		L_14 = ReInput_get_mapping_mDE6BD708754EB86C540ACCB26BFD21D1F8054554(NULL);
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_15 = V_6;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ControllerMap_get_categoryId_m4D2BD4A8373EE16C75E13CB9B5ED8941A26D2B33(L_15, NULL);
		NullCheck(L_14);
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_17;
		L_17 = MappingHelper_GetMapCategory_m6B8082A9D9CAAB69B2EC97F6B2FCAF94C5C88DBD(L_14, L_16, NULL);
		V_8 = L_17;
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_18 = V_8;
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		InputMapCategory_t309A7C800100DDCC67C5C6A69F960A1D71768111* L_19 = V_8;
		NullCheck((InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C*)L_19);
		bool L_20;
		L_20 = InputCategory_get_userAssignable_mBD58AC35EE83AAE55914DC85584314585326C703_inline((InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C*)L_19, NULL);
		if (!L_20)
		{
			goto IL_0080;
		}
	}

IL_0063:
	{
		RuntimeObject* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_21, L_22);
		NullCheck(L_23);
		Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* L_24;
		L_24 = InterfaceFuncInvoker0< Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* >::Invoke(1 /* Rewired.Controller Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::ozNcfmyISWkqVPVfvPOfROcWRfsf() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_23);
		V_7 = L_24;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_25 = V_2;
		Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* L_26 = V_7;
		ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3* L_27 = V_6;
		RuntimeObject* L_28;
		L_28 = ((  RuntimeObject* (*) (Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911*, ControllerMap_tC01A582E577E38D21EB7D87A8C040AF5DA285FB3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		NullCheck(L_25);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_25, L_28, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0080:
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0086:
	{
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = V_4;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 hDTwQOONkmiSaaPHwqpfFkmXMCAbb::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, hDTwQOONkmiSaaPHwqpfFkmXMCAbb_tE1CD926FAF554AEBC6AFFC839A4294D64BE76AC3_il2cpp_TypeInfo_var, L_31);
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0095:
	{
		int32_t L_34 = V_3;
		RuntimeObject* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::NEFjFYSXjpJmKUMrQuBCmBemjvSFA() */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_35);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_37 = V_2;
		NullCheck(L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_38;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::LoadMap<System.Object>(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_LoadMap_TisRuntimeObject_m97D0900090F03EF7FDEFA2ED3AFD30820AF2CD32_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, int32_t ___layoutId2, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___controllerId0;
		int32_t L_1 = ___categoryId1;
		int32_t L_2 = ___layoutId2;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::LoadMap<System.Object>(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_LoadMap_TisRuntimeObject_mE8413943008177B96F95F40FFC25CB6E54E53B01_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, String_t* ___layoutName2, const RuntimeMethod* method) 
{
{
		int32_t L_0 = ___controllerId0;
		String_t* L_1 = ___categoryName1;
		String_t* L_2 = ___layoutName2;
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, String_t*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::LoadMap<System.Object>(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_LoadMap_TisRuntimeObject_m4910A86EC6FF25BD2446BA8FB3826BBC57898C99_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, int32_t ___layoutId2, bool ___startEnabled3, const RuntimeMethod* method) 
{
int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B3_4 = NULL;
	{
		int32_t L_0 = ___controllerId0;
		int32_t L_1 = ___categoryId1;
		int32_t L_2 = ___layoutId2;
		bool L_3 = ___startEnabled3;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_000c:
	{
		NullCheck(G_B3_4);
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(G_B3_4, G_B3_3, G_B3_2, G_B3_1, (int32_t)G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::LoadMap<System.Object>(System.Int32,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_LoadMap_TisRuntimeObject_m77E7A51DB69AA135826F8BCE89D8E8D9132F7A2B_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, String_t* ___layoutName2, bool ___startEnabled3, const RuntimeMethod* method) 
{
String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B2_3 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	int32_t G_B1_2 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* G_B3_4 = NULL;
	{
		int32_t L_0 = ___controllerId0;
		String_t* L_1 = ___categoryName1;
		String_t* L_2 = ___layoutName2;
		bool L_3 = ___startEnabled3;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_000c:
	{
		NullCheck(G_B3_4);
		((  void (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, int32_t, String_t*, String_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(G_B3_4, G_B3_3, G_B3_2, G_B3_1, (int32_t)G_B3_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::RemoveMap<System.Object>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_RemoveMap_TisRuntimeObject_m91AB904D57FF2BE50DD75E48954461F8C77AC1E7_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___mapId1, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4 = ___mapId1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_6 = ___controllerId0;
		int32_t L_7 = ___mapId1;
		MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_mCA8C06E4464C92F56AC93F431310898E3D3CFDD4(__this, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::RemoveMap<System.Object>(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_RemoveMap_TisRuntimeObject_m483E5B2F35E539EEAD64D8C88A989E7DD8B0334A_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, int32_t ___categoryId1, int32_t ___layoutId2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4 = ___categoryId1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = ___layoutId2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_7 = ___controllerId0;
		int32_t L_8 = ___categoryId1;
		int32_t L_9 = ___layoutId2;
		MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_m3194478C4255DC656B551522E1AB9F7FB067346C(__this, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::RemoveMap<System.Object>(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_RemoveMap_TisRuntimeObject_m610AF20FA991BE0B025B883EAB51245FAA090F5F_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t ___controllerId0, String_t* ___categoryName1, String_t* ___layoutName2, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = ___controllerId0;
		String_t* L_6 = ___categoryName1;
		String_t* L_7 = ___layoutName2;
		MapHelper_lphhQOcxOMSOPhjlSDCZLLXGLsWm_m3B7D645A45FA19D76F0FFA6B0DC5704477A80FFC(__this, L_4, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::iYjfAKkNRBiCebDRjLujsuzhhUUyb<System.Object>(System.Int32,System.Int32,System.Int32,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_iYjfAKkNRBiCebDRjLujsuzhhUUyb_TisRuntimeObject_mBCFE68B6CDBA018C24F47C0A5CC7CDCF3B4250C4_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = p0;
		int32_t L_6 = p1;
		int32_t L_7 = p2;
		int32_t L_8 = p3;
		MapHelper_xUxtwYDqEBAoBQJfMbKEZonwyhmq_m27EEE026ABE014B51797CA00F9EECB40B0365F33(__this, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Rewired.Player/ControllerHelper/MapHelper::iYjfAKkNRBiCebDRjLujsuzhhUUyb<System.Object>(System.Int32,System.String,System.String,Rewired.BoolOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapHelper_iYjfAKkNRBiCebDRjLujsuzhhUUyb_TisRuntimeObject_m6D0D77CAC2D56AE02698724DBBED6E3D2D7D7A94_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, String_t* p1, String_t* p2, int32_t p3, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
{
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_StaticFields*)il2cpp_codegen_static_fields_for(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var))->____id_29;
		int32_t L_1 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->___eNyGUiEiMyquCTKLRhFvpeyOvzMm_5;
		il2cpp_codegen_runtime_class_init_inline(ReInput_t4304E64B566AAB8EF94F002DEA29F31680226BB0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ReInput_CheckInitialized_mAAC593CB03C886BDB7B72864FBB1A59B2B0530AF(L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_5 = p0;
		String_t* L_6 = p1;
		String_t* L_7 = p2;
		int32_t L_8 = p3;
		MapHelper_xUxtwYDqEBAoBQJfMbKEZonwyhmq_mB64759EE9B99E28074BDA8EA24384C48A867BC1C(__this, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<?> Rewired.Player/ControllerHelper/MapHelper::tvzSUyFQMZzmsFFoXUNxDESRBotM<System.Object>(Rewired.Controller)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_tvzSUyFQMZzmsFFoXUNxDESRBotM_TisRuntimeObject_m3A1DD0225875EA12899FB3DBB161AB2C794DDCE9_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* L_1 = p0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, Controller_t919A4A50FC7A0F25D7B31615C0F4E4D4A4D17911* >::Invoke(15 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::howjPBfRJshDbKOTcPHxFqZjkrDUB(Rewired.Controller) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0012:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 1), L_5);
		return L_6;
	}
}
// System.Collections.Generic.IList`1<?> Rewired.Player/ControllerHelper/MapHelper::tvzSUyFQMZzmsFFoXUNxDESRBotM<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_tvzSUyFQMZzmsFFoXUNxDESRBotM_TisRuntimeObject_mCBC8A03F5DB58F2D30FBC1404374DF61D541FD4B_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, int32_t p0, const RuntimeMethod* method) 
{
static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = p0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(11 /* System.Int32 Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::LFBHpqbppIulyYiNTvRYfiNwKOGN(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_1, L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}

IL_0019:
	{
		RuntimeObject* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA::ZfIXNjSNQNQjmCdAUEIsaOrcLoPs(System.Int32) */, ftuHLSCvHbrPYKqmDICMGujVuqLSA_tD67CC6A3A416E57262B63617FA5896CF7BF4F187_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* hDTwQOONkmiSaaPHwqpfFkmXMCAbb Rewired.Player/ControllerHelper/ccKIYWnZwPjlGgvjpHVACPHqZTWG::DJykFGUxbFlHMIneTwfokcsefclu() */, ccKIYWnZwPjlGgvjpHVACPHqZTWG_t7AB72F4748B9EC6B1975F90F35E5838740AD2011_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_9);
		return L_10;
	}
}
// Rewired.Player/ControllerHelper/ftuHLSCvHbrPYKqmDICMGujVuqLSA Rewired.Player/ControllerHelper/MapHelper::uUgxrqQkdpQhPYYUpxCfhZRqzfWH<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MapHelper_uUgxrqQkdpQhPYYUpxCfhZRqzfWH_TisRuntimeObject_m5389B149C77B13756EACC4F22E5C6DE17152A598_gshared (MapHelper_t214BA4F045E5EB4B312E4E6AEB6697813117A7C2* __this, const RuntimeMethod* method) 
{
{
		ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6* L_0 = (ControllerHelper_tCE72EA23053BD0C6ECB4D75A69F8CD1B3AC28FF6*)__this->___JOhXpftGzsqKykxdovItahCXjNZ_2;
		NullCheck(L_0);
		vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D* L_1 = (vpfVMfLDNQCKabtrXuyMMndafvvoA_t24DAE63535EED93A1490AC97901F2551704D116D*)L_0->___rGIwSbUPDgDDJByCitUBBGoZDlmc_0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = vpfVMfLDNQCKabtrXuyMMndafvvoA_OlLACmpwoMamrxMTFzLaRnppBEGFA_m7D256F4AAE84410B2D3EC0217ADB4B49A6AE0B9F(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_playerId_m13D1C2C48B4AF7E87153014EE4B16491202256C5_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___poRIGCSEughNfRYXWSqdxofgERiiA_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerType_mB10ABC66916B5C14CA467D3289A606AEE947FE72_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___uXdofgxOYrPYUxRwFbcOtLnrtwQM_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerId_m5C57BA2FE3D405B624E86F7DD88454ED9711954A_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___wovqMdREgMHEHAKFWnDLDuYilFZN_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerMapId_m4C899DB8B80BBF22D0B0CAA98E0F5330AECF1800_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___IuSWTyCEwxTphLVNpdlvWrKjDFGj_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ElementAssignmentConflictCheck_get_controllerMapCategoryId_m0A29A78618798D54C96B3EE602E3576B899DBB99_inline (ElementAssignmentConflictCheck_tC22925257E88D3999FDD06C7ABF3B6CE6C09847E* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = __this->___BVLEAOpnlCWLTSJLJiBFhzJTNjut_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InputCategory_get_userAssignable_mBD58AC35EE83AAE55914DC85584314585326C703_inline (InputCategory_t9C22614C15FBDA3F98B6F03EA3CEB547BF5F373C* __this, const RuntimeMethod* method) 
{
{
		bool L_0 = __this->____userAssignable_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
