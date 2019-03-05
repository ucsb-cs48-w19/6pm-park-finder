#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660;
// System.Collections.Generic.List`1<System.String>
struct List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Experimental.XR.Interaction.BaseArmModel
struct BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
extern RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral06ECA142B442A4AAD1AB59248E25AE5B6EB0E748;
extern String_t* _stringLiteral0AF88236BF554DC501402AE826A6A48DDD86E21B;
extern String_t* _stringLiteral2D8AFD1CBFD68602614FCEB9065FBEA5B60D943F;
extern String_t* _stringLiteral44D92A5464E8B2E6F6AE9ED4E78D576167262FDA;
extern String_t* _stringLiteral72A5C553060E7B472521D1B134E4D021BBB9C68F;
extern String_t* _stringLiteral91D9D8A6B7660F753FCC117086E9E9F62B06C3A8;
extern String_t* _stringLiteralB0B90F9C11BDDD08E75F17A56C98197AF8DA47D3;
extern String_t* _stringLiteralDB3F6C02FA9E1F1B6B7EF6FD6736E11C0DB11D05;
extern String_t* _stringLiteralE5FFD15BE7069312E3D9DE21089B1501189277A6;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082_RuntimeMethod_var;
extern const uint32_t BaseArmModel_TryGetTrackingDataFromSource_m3B5679DE8974B09A662ADBFD986324C068DFE6A4_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2_MetadataUsageId;
extern const uint32_t PoseDataSource_TryGetTangoPose_m49ADCF846EE42733B7940859A8FCEC6611889DF7_MetadataUsageId;
extern const uint32_t PoseDataSource__cctor_m3AE5E3AE4EFC60675A3C02E9613F7A73CDCF154F_MetadataUsageId;
extern const uint32_t TrackedPoseDriverDataDescription__cctor_m3F94A2F1230FB36E7FC389757BE5903908CB2DAB_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_Awake_m61AFBF8E4D31F91F3A4E433FF5E334E4476B3976_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_OnDisable_mD3DE6B203F8D62484616C92B248D12358C894A63_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_OnEnable_m53A6F7C67E8A7EACB8EAC93FAA1000A5023AF9C9_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_PerformUpdate_m8B8DFDA519160657B07B11E2C5E8EEA846DC0610_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_SetPoseSource_mC7525E8DC71F20F71ECDF3AF720D26821936B788_MetadataUsageId;
extern const uint32_t TrackedPoseDriver_TryGetPoseData_m5E0C47655ED6E4510FF10EBA1454D6831626FBCE_MetadataUsageId;

struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;


#ifndef U3CMODULEU3E_T61085D0352A59B7105C361DB16CFAD5E8986AE2E_H
#define U3CMODULEU3E_T61085D0352A59B7105C361DB16CFAD5E8986AE2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t61085D0352A59B7105C361DB16CFAD5E8986AE2E 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T61085D0352A59B7105C361DB16CFAD5E8986AE2E_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T7600B3EA144F32C2120D420AB63C9E014D113CF1_H
#define LIST_1_T7600B3EA144F32C2120D420AB63C9E014D113CF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1, ____items_1)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T7600B3EA144F32C2120D420AB63C9E014D113CF1_H
#ifndef LIST_1_T894CB1A35FB018A041CA1B49CF3AB136E531995A_H
#define LIST_1_T894CB1A35FB018A041CA1B49CF3AB136E531995A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct  List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A, ____items_1)); }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* get__items_1() const { return ____items_1; }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_StaticFields, ___EmptyArray_4)); }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T894CB1A35FB018A041CA1B49CF3AB136E531995A_H
#ifndef LIST_1_T634EA217FAFE0009FF221F59F7952CBEA023049B_H
#define LIST_1_T634EA217FAFE0009FF221F59F7952CBEA023049B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct  List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B, ____items_1)); }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* get__items_1() const { return ____items_1; }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B_StaticFields, ___EmptyArray_4)); }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T634EA217FAFE0009FF221F59F7952CBEA023049B_H
#ifndef LIST_1_TDECBF737A96DF978685F6386C44B9284190E43C7_H
#define LIST_1_TDECBF737A96DF978685F6386C44B9284190E43C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct  List_1_tDECBF737A96DF978685F6386C44B9284190E43C7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____items_1)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields, ___EmptyArray_4)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TDECBF737A96DF978685F6386C44B9284190E43C7_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef POSEDATASOURCE_T922E6B2F7058F8A78172B8E29AEB0BBD748B4657_H
#define POSEDATASOURCE_T922E6B2F7058F8A78172B8E29AEB0BBD748B4657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.PoseDataSource
struct  PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657  : public RuntimeObject
{
public:

public:
};

struct PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___nodeStates_0;

public:
	inline static int32_t get_offset_of_nodeStates_0() { return static_cast<int32_t>(offsetof(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields, ___nodeStates_0)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_nodeStates_0() const { return ___nodeStates_0; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_nodeStates_0() { return &___nodeStates_0; }
	inline void set_nodeStates_0(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___nodeStates_0 = value;
		Il2CppCodeGenWriteBarrier((&___nodeStates_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATASOURCE_T922E6B2F7058F8A78172B8E29AEB0BBD748B4657_H
#ifndef TRACKEDPOSEDRIVERDATADESCRIPTION_TEA05A7320AED44B790D678CF1B65B48138DA1ECA_H
#define TRACKEDPOSEDRIVERDATADESCRIPTION_TEA05A7320AED44B790D678CF1B65B48138DA1ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct  TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA  : public RuntimeObject
{
public:

public:
};

struct TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * ___DeviceData_0;

public:
	inline static int32_t get_offset_of_DeviceData_0() { return static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields, ___DeviceData_0)); }
	inline List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * get_DeviceData_0() const { return ___DeviceData_0; }
	inline List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B ** get_address_of_DeviceData_0() { return &___DeviceData_0; }
	inline void set_DeviceData_0(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * value)
	{
		___DeviceData_0 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVERDATADESCRIPTION_TEA05A7320AED44B790D678CF1B65B48138DA1ECA_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef POSEDATA_TF79A33767571168AAB333A85A6B6F0F9A8825DFE_H
#define POSEDATA_TF79A33767571168AAB333A85A6B6F0F9A8825DFE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct  PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___PoseNames_0)); }
	inline List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((&___PoseNames_0), value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___Poses_1)); }
	inline List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * get_Poses_1() const { return ___Poses_1; }
	inline List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((&___Poses_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke
{
	List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * ___PoseNames_0;
	List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com
{
	List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * ___PoseNames_0;
	List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * ___Poses_1;
};
#endif // POSEDATA_TF79A33767571168AAB333A85A6B6F0F9A8825DFE_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#define DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType
struct  DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETYPE_TC20CDCE75CB9BCB7EEF098A83B16071A0C86D198_H
#ifndef TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#define TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct  TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSE_TBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_H
#ifndef TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#define TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType
struct  TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGTYPE_T54A99FD46DD997F9BDD94EB51082AEA72640B28A_H
#ifndef UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#define UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType
struct  UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATETYPE_T2E40BE3577C3CE3CB868167C75BA759A2B76BB10_H
#ifndef AVAILABLETRACKINGDATA_TF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD_H
#define AVAILABLETRACKINGDATA_TF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVAILABLETRACKINGDATA_TF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD_H
#ifndef POSESTATUS_T679095D526AF2819322E3199BC816C544C2942AA_H
#define POSESTATUS_T679095D526AF2819322E3199BC816C544C2942AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_t679095D526AF2819322E3199BC816C544C2942AA 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PoseStatus_t679095D526AF2819322E3199BC816C544C2942AA, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSESTATUS_T679095D526AF2819322E3199BC816C544C2942AA_H
#ifndef XRNODE_TC8909A28AC7B1B4D71839715DDC1011895BA5F5F_H
#define XRNODE_TC8909A28AC7B1B4D71839715DDC1011895BA5F5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODE_TC8909A28AC7B1B4D71839715DDC1011895BA5F5F_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef POSEDATA_TF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638_H
#define POSEDATA_TF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.Tango.PoseData
struct  PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 
{
public:
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
	double ___orientation_x_0;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
	double ___orientation_y_1;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
	double ___orientation_z_2;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
	double ___orientation_w_3;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_x
	double ___translation_x_4;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_y
	double ___translation_y_5;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_z
	double ___translation_z_6;
	// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
	int32_t ___statusCode_7;

public:
	inline static int32_t get_offset_of_orientation_x_0() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_x_0)); }
	inline double get_orientation_x_0() const { return ___orientation_x_0; }
	inline double* get_address_of_orientation_x_0() { return &___orientation_x_0; }
	inline void set_orientation_x_0(double value)
	{
		___orientation_x_0 = value;
	}

	inline static int32_t get_offset_of_orientation_y_1() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_y_1)); }
	inline double get_orientation_y_1() const { return ___orientation_y_1; }
	inline double* get_address_of_orientation_y_1() { return &___orientation_y_1; }
	inline void set_orientation_y_1(double value)
	{
		___orientation_y_1 = value;
	}

	inline static int32_t get_offset_of_orientation_z_2() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_z_2)); }
	inline double get_orientation_z_2() const { return ___orientation_z_2; }
	inline double* get_address_of_orientation_z_2() { return &___orientation_z_2; }
	inline void set_orientation_z_2(double value)
	{
		___orientation_z_2 = value;
	}

	inline static int32_t get_offset_of_orientation_w_3() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_w_3)); }
	inline double get_orientation_w_3() const { return ___orientation_w_3; }
	inline double* get_address_of_orientation_w_3() { return &___orientation_w_3; }
	inline void set_orientation_w_3(double value)
	{
		___orientation_w_3 = value;
	}

	inline static int32_t get_offset_of_translation_x_4() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_x_4)); }
	inline double get_translation_x_4() const { return ___translation_x_4; }
	inline double* get_address_of_translation_x_4() { return &___translation_x_4; }
	inline void set_translation_x_4(double value)
	{
		___translation_x_4 = value;
	}

	inline static int32_t get_offset_of_translation_y_5() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_y_5)); }
	inline double get_translation_y_5() const { return ___translation_y_5; }
	inline double* get_address_of_translation_y_5() { return &___translation_y_5; }
	inline void set_translation_y_5(double value)
	{
		___translation_y_5 = value;
	}

	inline static int32_t get_offset_of_translation_z_6() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_z_6)); }
	inline double get_translation_z_6() const { return ___translation_z_6; }
	inline double* get_address_of_translation_z_6() { return &___translation_z_6; }
	inline void set_translation_z_6(double value)
	{
		___translation_z_6 = value;
	}

	inline static int32_t get_offset_of_statusCode_7() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___statusCode_7)); }
	inline int32_t get_statusCode_7() const { return ___statusCode_7; }
	inline int32_t* get_address_of_statusCode_7() { return &___statusCode_7; }
	inline void set_statusCode_7(int32_t value)
	{
		___statusCode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_TF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638_H
#ifndef XRNODESTATE_T927C248D649ED31F587DFE078E3FF180D98F7C0A_H
#define XRNODESTATE_T927C248D649ED31F587DFE078E3FF180D98F7C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Acceleration_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularAcceleration_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODESTATE_T927C248D649ED31F587DFE078E3FF180D98F7C0A_H
#ifndef ENUMERATOR_TCFBA72574172788AF0600795AA474DB3C78F9189_H
#define ENUMERATOR_TCFBA72574172788AF0600795AA474DB3C78F9189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>
struct  Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189, ___l_0)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_l_0() const { return ___l_0; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189, ___current_3)); }
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  get_current_3() const { return ___current_3; }
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TCFBA72574172788AF0600795AA474DB3C78F9189_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#define UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef BASEPOSEPROVIDER_T951B9DB48DBBA7336FFE70B77529EEF42742B50B_H
#define BASEPOSEPROVIDER_T951B9DB48DBBA7336FFE70B77529EEF42742B50B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct  BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEPOSEPROVIDER_T951B9DB48DBBA7336FFE70B77529EEF42742B50B_H
#ifndef TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#define TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_PoseProviderComponent_6), value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_OriginPose_10)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDPOSEDRIVER_T7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A_H
#ifndef BASEARMMODEL_T3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7_H
#define BASEARMMODEL_T3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Interaction.BaseArmModel
struct  BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7  : public BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::m_HeadPoseSource
	int32_t ___m_HeadPoseSource_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::m_PoseSource
	int32_t ___m_PoseSource_5;

public:
	inline static int32_t get_offset_of_m_HeadPoseSource_4() { return static_cast<int32_t>(offsetof(BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7, ___m_HeadPoseSource_4)); }
	inline int32_t get_m_HeadPoseSource_4() const { return ___m_HeadPoseSource_4; }
	inline int32_t* get_address_of_m_HeadPoseSource_4() { return &___m_HeadPoseSource_4; }
	inline void set_m_HeadPoseSource_4(int32_t value)
	{
		___m_HeadPoseSource_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEARMMODEL_T3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7_H
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189  List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126_gshared (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
extern "C" IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF_gshared (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A_gshared (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB_gshared (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14_gshared (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D_gshared (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65_gshared (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082_gshared (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A_gshared (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094_gshared (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared (List_1_tE72A517BD14F52539FF78EA90F58D1387FEED660 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_gshared (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_gshared (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_gshared (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  p0, const RuntimeMethod* method);

// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mF3C155790BD23443639B054EAF80A204D0C14D25 (BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8 (int32_t ___poseSource0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
extern "C" IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189  List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126 (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189  (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method)
{
	return ((  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  (*) (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *, const RuntimeMethod*))Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF_gshared)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *, const RuntimeMethod*))Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *, const RuntimeMethod*))Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB_gshared)(__this, method);
}
// UnityEngine.Pose UnityEngine.Pose::get_identity()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2 (int32_t ___node0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetTangoPose_m49ADCF846EE42733B7940859A8FCEC6611889DF7 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___pose0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* p0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
extern "C" IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m8AA6B8CEADE806F981A62E2928425265987F1C3F (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PoseData_get_position_m356B0853C5A393D0748E95FCBEF3BFDA9AC46D9B (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  PoseData_get_rotation_m8784EAC91FE13E8909E972A0AD9B9A9B9CAA2981 (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14 (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
inline int32_t List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B *, const RuntimeMethod*))List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65 (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  (*) (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B *, int32_t, const RuntimeMethod*))List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082 (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *, int32_t, const RuntimeMethod*))List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082_gshared)(__this, p0, method);
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m8C41241D820B793854592BD9BDF2E120B83DBDE6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mD3F2E0FF6E89C1B5A89910EF95068743FAAEACD9 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
inline int32_t List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *, const RuntimeMethod*))List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m453A8FCC2A49AF5AEACF030D9E4122B240C8C4E4 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRDevice_DisableAutoXRCameraTracking_mE0B1C3EE30838C68743D55286775057462F4C6EC (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mC00950B8FC35DB9048121D43BE8F69D55BCB4723 (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_mB4DBA621E1154E3FEBE61D58B45B5493D37927D6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m4601D9804BC86F64FB071348EC1CF448C55CBA3B (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
extern "C" IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m24FC636CCDA9B771F2A975C4F5DB561454357856 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetPoseData_m5E0C47655ED6E4510FF10EBA1454D6831626FBCE (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m163F494493F8CB0DFFFF1C55B82DE1329B24CCB9 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
inline void List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094 (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B *, const RuntimeMethod*))List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0 (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 *, const RuntimeMethod*))List_1__ctor_m3EE2218014A615CBBF70592A7E92CC83BF59AEF9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 *, String_t*, const RuntimeMethod*))List_1_Add_m66ACE80424582788B769E061E2FEB145E4035121_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
inline void List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *, const RuntimeMethod*))List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
inline void List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2 (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *, int32_t, const RuntimeMethod*))List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
inline void List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1 (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * __this, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B *, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE , const RuntimeMethod*))List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_gshared)(__this, p0, method);
}
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
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel__ctor_m5C18FB25BD33F94A49933B89B164C45CEDB2A37C (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, const RuntimeMethod* method)
{
	{
		BasePoseProvider__ctor_mF3C155790BD23443639B054EAF80A204D0C14D25(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::get_headPoseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseArmModel_get_headPoseSource_mC30890311903D69DA48B8ADC824039F5D33AB311 (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_HeadPoseSource_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::set_headPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel_set_headPoseSource_m3EDBED9F879D82CBFEA2F69F00CF126FD89D207E (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_HeadPoseSource_4(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.Experimental.XR.Interaction.BaseArmModel::get_poseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseArmModel_get_poseSource_m92DF29B0A98CCB143A42413536B4AED0F0C5F13E (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PoseSource_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Experimental.XR.Interaction.BaseArmModel::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void BaseArmModel_set_poseSource_m7C816366E63B1881B57F46ADB95E2FB738DEC125 (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.XR.Interaction.BaseArmModel::TryGetTrackingDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool BaseArmModel_TryGetTrackingDataFromSource_m3B5679DE8974B09A662ADBFD986324C068DFE6A4 (BaseArmModel_t3D5FC4A9BC5D3133D9D8190B32F9E215F3CDCDA7 * __this, int32_t ___poseSource0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseArmModel_TryGetTrackingDataFromSource_m3B5679DE8974B09A662ADBFD986324C068DFE6A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___poseSource0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_2 = PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8(L_0, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mF3C155790BD23443639B054EAF80A204D0C14D25 (BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2 (int32_t ___node0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = ((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->get_nodeStates_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = ((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->get_nodeStates_0();
		NullCheck(L_1);
		Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189  L_2 = List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126(L_1, /*hidden argument*/List_1_GetEnumerator_m953F6C7035893AC82043EE51212E303CD594D126_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_001c:
		{
			XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_3 = Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF((Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2B0F180A358CD694BCAD5468D9137867654632DF_RuntimeMethod_var);
			V_0 = L_3;
			int32_t L_4 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_0), /*hidden argument*/NULL);
			int32_t L_5 = ___node0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0058;
			}
		}

IL_0032:
		{
			Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_6 = ___resultPose1;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = L_6->get_address_of_position_0();
			bool L_8 = XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			bool L_9 = V_2;
			Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_10 = ___resultPose1;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_11 = L_10->get_address_of_rotation_1();
			bool L_12 = XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_0), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_11, /*hidden argument*/NULL);
			V_2 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_12));
			bool L_13 = V_2;
			V_3 = L_13;
			IL2CPP_LEAVE(0x8A, FINALLY_006a);
		}

IL_0058:
		{
		}

IL_0059:
		{
			bool L_14 = Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A((Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mE9CEC6EC2ECA48F482C35885BC828FD8DB3D757A_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_001c;
			}
		}

IL_0065:
		{
			IL2CPP_LEAVE(0x78, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB((Enumerator_tCFBA72574172788AF0600795AA474DB3C78F9189 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m89C551D5DE1D54CD7D161C0D40A18FB57A7FF2AB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(106)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x8A, IL_008a)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_16 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_15 = L_16;
		V_3 = (bool)0;
		goto IL_008a;
	}

IL_008a:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8 (int32_t ___poseSource0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___poseSource0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_0083;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_009f;
			}
			case 6:
			{
				goto IL_00ad;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_00ce;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_00ce;
	}

IL_0038:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_2 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0052;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_4 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(4, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0106;
	}

IL_0052:
	{
		V_0 = (bool)1;
		goto IL_0106;
	}

IL_0059:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_5 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_6 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(0, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0106;
	}

IL_0067:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_7 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_8 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(1, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0106;
	}

IL_0075:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_9 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_10 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(3, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0106;
	}

IL_0083:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_11 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_12 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0106;
	}

IL_0091:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_13 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_14 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(4, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0106;
	}

IL_009f:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_16 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0106;
	}

IL_00ad:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_17 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_18 = PoseDataSource_TryGetTangoPose_m49ADCF846EE42733B7940859A8FCEC6611889DF7((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_00c7;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_19 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_20 = PoseDataSource_TryGetNodePoseData_mC0E35FF7548D7B92DB90B2D773185AA45B6748B2(2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0106;
	}

IL_00c7:
	{
		V_0 = (bool)1;
		goto IL_0106;
	}

IL_00ce:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_21 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_22 = L_21;
		RuntimeObject * L_23 = Box(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_il2cpp_TypeInfo_var, (&___poseSource0));
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		___poseSource0 = *(int32_t*)UnBox(L_23);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_24);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteralDB3F6C02FA9E1F1B6B7EF6FD6736E11C0DB11D05, L_22, /*hidden argument*/NULL);
		goto IL_00f4;
	}

IL_00f4:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_25 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_26 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_25 = L_26;
		V_0 = (bool)0;
		goto IL_0106;
	}

IL_0106:
	{
		bool L_27 = V_0;
		return L_27;
	}
}
// System.Boolean UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool PoseDataSource_TryGetTangoPose_m49ADCF846EE42733B7940859A8FCEC6611889DF7 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetTangoPose_m49ADCF846EE42733B7940859A8FCEC6611889DF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		bool L_0 = TangoInputTracking_TryGetPoseAtTime_m8AA6B8CEADE806F981A62E2928425265987F1C3F((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_1 = (&V_0)->get_statusCode_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = ___pose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = PoseData_get_position_m356B0853C5A393D0748E95FCBEF3BFDA9AC46D9B((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		L_2->set_position_0(L_3);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = ___pose0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = PoseData_get_rotation_m8784EAC91FE13E8909E972A0AD9B9A9B9CAA2981((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		L_4->set_rotation_1(L_5);
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_003c:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_6 = ___pose0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_6 = L_7;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_004e:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.SpatialTracking.PoseDataSource::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PoseDataSource__cctor_m3AE5E3AE4EFC60675A3C02E9613F7A73CDCF154F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource__cctor_m3AE5E3AE4EFC60675A3C02E9613F7A73CDCF154F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14(L_0, /*hidden argument*/List_1__ctor_m78FCCD1431337973DAC94867FEFE4CD1008B2B14_RuntimeMethod_var);
		((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->set_nodeStates_0(L_0);
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_m93E2AC43B480A9960EECF7B73BF3E9EF356BA687 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_PoseProviderComponent_6((BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B *)NULL);
		__this->set_m_UpdateType_8(0);
		__this->set_m_UseRelativeTransform_9((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_mE5F386A2BF8FECC966A301DD2B2BADB1E43FE45B (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Device_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_m8C41241D820B793854592BD9BDF2E120B83DBDE6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_mEA679C5EF0CCC37C423C45AA32B4DB4843642994 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PoseSource_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mD3F2E0FF6E89C1B5A89910EF95068743FAAEACD9 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_mC7525E8DC71F20F71ECDF3AF720D26821936B788 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___deviceType0, int32_t ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetPoseSource_mC7525E8DC71F20F71ECDF3AF720D26821936B788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___deviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var);
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_1 = ((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->get_DeviceData_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D(L_1, /*hidden argument*/List_1_get_Count_m974E000BC62E1E4C7B8E8FCFFD8E1A14C342977D_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0067;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var);
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_3 = ((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->get_DeviceData_0();
		int32_t L_4 = ___deviceType0;
		NullCheck(L_3);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_5 = List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65(L_3, L_4, /*hidden argument*/List_1_get_Item_m663F08A47FECF544E9135B62BFA2D989A98F5C65_RuntimeMethod_var);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0054;
	}

IL_0025:
	{
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_6 = (&V_0)->get_Poses_1();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082(L_6, L_7, /*hidden argument*/List_1_get_Item_m7665D4D3E49ADBBE21B66EDCDB4B8D9B8A0F1082_RuntimeMethod_var);
		int32_t L_9 = ___pose1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___deviceType0;
		TrackedPoseDriver_set_deviceType_m8C41241D820B793854592BD9BDF2E120B83DBDE6(__this, L_10, /*hidden argument*/NULL);
		int32_t L_11 = ___pose1;
		TrackedPoseDriver_set_poseSource_mD3F2E0FF6E89C1B5A89910EF95068743FAAEACD9(__this, L_11, /*hidden argument*/NULL);
		V_2 = (bool)1;
		goto IL_006e;
	}

IL_004f:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0054:
	{
		int32_t L_13 = V_1;
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_14 = (&V_0)->get_Poses_1();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A(L_14, /*hidden argument*/List_1_get_Count_m893C8385AFD9109F32EC58F59D7299396E789C1A_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0025;
		}
	}
	{
	}

IL_0067:
	{
		V_2 = (bool)0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_16 = V_2;
		return L_16;
	}
}
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseProviderComponent()
extern "C" IL2CPP_METHOD_ATTR BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * TrackedPoseDriver_get_poseProviderComponent_m03D5791B013A27CC5B3FE70FB65C3ABD5B27D666 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * V_0 = NULL;
	{
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = __this->get_m_PoseProviderComponent_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseProviderComponent(UnityEngine.Experimental.XR.Interaction.BasePoseProvider)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseProviderComponent_mDDE9FABA0480848303E0C283B26877AF0DE8994C (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___value0, const RuntimeMethod* method)
{
	{
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = ___value0;
		__this->set_m_PoseProviderComponent_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::TryGetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_TryGetPoseData_m5E0C47655ED6E4510FF10EBA1454D6831626FBCE (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_TryGetPoseData_m5E0C47655ED6E4510FF10EBA1454D6831626FBCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = __this->get_m_PoseProviderComponent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_2 = __this->get_m_PoseProviderComponent_6();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___resultPose2;
		NullCheck(L_2);
		bool L_4 = VirtFuncInvoker1< bool, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * >::Invoke(4 /* System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&) */, L_2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_3);
		V_0 = L_4;
		goto IL_0032;
	}

IL_0025:
	{
		int32_t L_5 = ___poseSource1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_6 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		bool L_7 = PoseDataSource_TryGetDataFromSource_mB1B71839B8DDB705E5A4E67CED7C8975D087EAD8(L_5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m80641A648636D2F5C46DCC5CB09B21D228BC6F91 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_TrackingType_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackingType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_mCAA05BCA75427ECC4ADD4566A3C8680181279B4F (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_TrackingType_7(L_0);
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_mD272FF43F508E0171C232293639BF33541B507C0 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver/UpdateType)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_mD45ADA827141355E6D1110A412E89BCB6DE0BFE8 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_UpdateType_8(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_mCF2BECEE5B73345DAF1FF0F4781CBFF2C5CF2BEC (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_mF4700448553B387AE68A5A71AC74F9C7883EDCD1 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_UseRelativeTransform_9(L_0);
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_get_originPose_m15486C45FA6B5B84DE98275AA1DD9ED9467D9C1D (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_OriginPose_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_m3FC6C3F373E2ADCBE48FD399A5A7A49D197B8A78 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___value0, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___value0;
		__this->set_m_OriginPose_10(L_0);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m453A8FCC2A49AF5AEACF030D9E4122B240C8C4E4 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_0 = __this->get_address_of_m_OriginPose_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		L_0->set_position_0(L_2);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = __this->get_address_of_m_OriginPose_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_4, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_5);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_mB4DBA621E1154E3FEBE61D58B45B5493D37927D6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_0 = __this->get_address_of_m_OriginPose_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = L_0->get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = __this->get_address_of_m_OriginPose_10();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = L_2->get_rotation_1();
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_1, L_3);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_m61AFBF8E4D31F91F3A4E433FF5E334E4476B3976 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_Awake_m61AFBF8E4D31F91F3A4E433FF5E334E4476B3976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackedPoseDriver_CacheLocalPosition_m453A8FCC2A49AF5AEACF030D9E4122B240C8C4E4(__this, /*hidden argument*/NULL);
		bool L_0 = TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		XRDevice_DisableAutoXRCameraTracking_mE0B1C3EE30838C68743D55286775057462F4C6EC(L_1, (bool)1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_m7AFA08D936F5B1C353EA6733D17A0D116B00B806 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
	}

IL_000e:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_m53A6F7C67E8A7EACB8EAC93FAA1000A5023AF9C9 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnEnable_m53A6F7C67E8A7EACB8EAC93FAA1000A5023AF9C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_0 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mC00950B8FC35DB9048121D43BE8F69D55BCB4723(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_mD3DE6B203F8D62484616C92B248D12358C894A63 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDisable_mD3DE6B203F8D62484616C92B248D12358C894A63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackedPoseDriver_ResetToCachedLocalPosition_mB4DBA621E1154E3FEBE61D58B45B5493D37927D6(__this, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_0 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m4601D9804BC86F64FB071348EC1CF448C55CBA3B(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m5CC53A428650D413D9ECF551BCBDDC19C48F05BB (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_mE29FCF30473102207A62FABC2CA30790071B5FD8 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_mF29107380280DCEBA11AE8DAD112BC028763DAD4 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0020:
	{
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_m0632634D6C41BB5ACA8F956E822BF482B08E230C (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___newRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingType_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}

IL_0018:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___newRotation1;
		NullCheck(L_2);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		int32_t L_4 = __this->get_m_TrackingType_7();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}

IL_003d:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___newPosition0;
		NullCheck(L_6);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_6, L_7, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_TransformPoseByOriginIfNeeded_m163F494493F8CB0DFFFF1C55B82DE1329B24CCB9 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, const RuntimeMethod* method)
{
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = __this->get_m_OriginPose_10();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&___pose0), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0028;
	}

IL_0020:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_3 = ___pose0;
		V_0 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
extern "C" IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_HasStereoCamera_mDF47307E8A75016EDAAD893A6D0A860C758267A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		V_0 = L_0;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Camera_get_stereoEnabled_m24FC636CCDA9B771F2A975C4F5DB561454357856(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_m8B8DFDA519160657B07B11E2C5E8EEA846DC0610 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_PerformUpdate_m8B8DFDA519160657B07B11E2C5E8EEA846DC0610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0056;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 ));
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_Device_4();
		int32_t L_3 = __this->get_m_PoseSource_5();
		bool L_4 = TrackedPoseDriver_TryGetPoseData_m5E0C47655ED6E4510FF10EBA1454D6831626FBCE(__this, L_2, L_3, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = V_0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_m163F494493F8CB0DFFFF1C55B82DE1329B24CCB9(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (&V_1)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = (&V_1)->get_rotation_1();
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_7, L_8);
	}

IL_0056:
	{
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
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_m3F94A2F1230FB36E7FC389757BE5903908CB2DAB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriverDataDescription__cctor_m3F94A2F1230FB36E7FC389757BE5903908CB2DAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * V_0 = NULL;
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * V_2 = NULL;
	List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * V_3 = NULL;
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_4;
	memset(&V_4, 0, sizeof(V_4));
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_0 = (List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B *)il2cpp_codegen_object_new(List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B_il2cpp_TypeInfo_var);
		List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094(L_0, /*hidden argument*/List_1__ctor_mC32F8FAF4DA4ABE55358C21C44335DC010E6E094_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_1 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_2 = (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 *)il2cpp_codegen_object_new(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_il2cpp_TypeInfo_var);
		List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0(L_2, /*hidden argument*/List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0_RuntimeMethod_var);
		V_2 = L_2;
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_3 = V_2;
		NullCheck(L_3);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_3, _stringLiteral06ECA142B442A4AAD1AB59248E25AE5B6EB0E748, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_4 = V_2;
		NullCheck(L_4);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_4, _stringLiteral0AF88236BF554DC501402AE826A6A48DDD86E21B, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_5 = V_2;
		NullCheck(L_5);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_5, _stringLiteral44D92A5464E8B2E6F6AE9ED4E78D576167262FDA, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_6 = V_2;
		NullCheck(L_6);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_6, _stringLiteralE5FFD15BE7069312E3D9DE21089B1501189277A6, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_7 = V_2;
		NullCheck(L_7);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_7, _stringLiteralB0B90F9C11BDDD08E75F17A56C98197AF8DA47D3, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_8 = V_2;
		(&V_1)->set_PoseNames_0(L_8);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_9 = (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *)il2cpp_codegen_object_new(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_il2cpp_TypeInfo_var);
		List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF(L_9, /*hidden argument*/List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_RuntimeMethod_var);
		V_3 = L_9;
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_10 = V_3;
		NullCheck(L_10);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_10, 0, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_11 = V_3;
		NullCheck(L_11);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_11, 1, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_12 = V_3;
		NullCheck(L_12);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_12, 2, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_13 = V_3;
		NullCheck(L_13);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_13, 3, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_14 = V_3;
		NullCheck(L_14);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_14, 6, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_15 = V_3;
		(&V_1)->set_Poses_1(L_15);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_16 = V_1;
		NullCheck(L_1);
		List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1(L_1, L_16, /*hidden argument*/List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_RuntimeMethod_var);
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_17 = V_0;
		il2cpp_codegen_initobj((&V_4), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_18 = (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 *)il2cpp_codegen_object_new(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_il2cpp_TypeInfo_var);
		List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0(L_18, /*hidden argument*/List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0_RuntimeMethod_var);
		V_2 = L_18;
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_19 = V_2;
		NullCheck(L_19);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_19, _stringLiteral72A5C553060E7B472521D1B134E4D021BBB9C68F, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_20 = V_2;
		NullCheck(L_20);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_20, _stringLiteral91D9D8A6B7660F753FCC117086E9E9F62B06C3A8, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_21 = V_2;
		(&V_4)->set_PoseNames_0(L_21);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_22 = (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *)il2cpp_codegen_object_new(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_il2cpp_TypeInfo_var);
		List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF(L_22, /*hidden argument*/List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_RuntimeMethod_var);
		V_3 = L_22;
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_23 = V_3;
		NullCheck(L_23);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_23, 4, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_24 = V_3;
		NullCheck(L_24);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_24, 5, /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_25 = V_3;
		(&V_4)->set_Poses_1(L_25);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_26 = V_4;
		NullCheck(L_17);
		List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1(L_17, L_26, /*hidden argument*/List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_RuntimeMethod_var);
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_27 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_28 = (List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 *)il2cpp_codegen_object_new(List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1_il2cpp_TypeInfo_var);
		List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0(L_28, /*hidden argument*/List_1__ctor_m305B88DC489D89F9B621181D4607090B6756CCC0_RuntimeMethod_var);
		V_2 = L_28;
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_29 = V_2;
		NullCheck(L_29);
		List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F(L_29, _stringLiteral2D8AFD1CBFD68602614FCEB9065FBEA5B60D943F, /*hidden argument*/List_1_Add_m42D4A0DE72FD23AC567EBFAB58B2FAAF6B43C59F_RuntimeMethod_var);
		List_1_t7600B3EA144F32C2120D420AB63C9E014D113CF1 * L_30 = V_2;
		(&V_5)->set_PoseNames_0(L_30);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_31 = (List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A *)il2cpp_codegen_object_new(List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A_il2cpp_TypeInfo_var);
		List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF(L_31, /*hidden argument*/List_1__ctor_m6536B99D1519124F474F6C251EEB336B26BDFDBF_RuntimeMethod_var);
		V_3 = L_31;
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_32 = V_3;
		NullCheck(L_32);
		List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2(L_32, ((int32_t)10), /*hidden argument*/List_1_Add_m279D48A0DBC8EDF3E6073BA65453FA77B63C5FE2_RuntimeMethod_var);
		List_1_t894CB1A35FB018A041CA1B49CF3AB136E531995A * L_33 = V_3;
		(&V_5)->set_Poses_1(L_33);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_34 = V_5;
		NullCheck(L_27);
		List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1(L_27, L_34, /*hidden argument*/List_1_Add_m50D913F794F90D13663213A1078221C5DB4184D1_RuntimeMethod_var);
		List_1_t634EA217FAFE0009FF221F59F7952CBEA023049B * L_35 = V_0;
		((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->set_DeviceData_0(L_35);
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
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke_back(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke_cleanup(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com_back(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
extern "C" void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com_cleanup(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
