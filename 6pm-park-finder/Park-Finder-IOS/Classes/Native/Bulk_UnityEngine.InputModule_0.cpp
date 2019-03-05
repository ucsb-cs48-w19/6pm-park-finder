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


// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1;
// System.Action`2<System.Int32,System.Object>
struct Action_2_tF61370A6F15F9B35E62C107472768F65A0879066;
// System.Action`2<System.Int32,System.String>
struct Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36;
// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>
struct Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;

extern RuntimeClass* NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_RuntimeMethod_var;
extern const RuntimeMethod* Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489_RuntimeMethod_var;
extern const RuntimeMethod* Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_RuntimeMethod_var;
extern const uint32_t NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA_MetadataUsageId;



#ifndef U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#define U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
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
#ifndef NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#define NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields
{
public:
	// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr> UnityEngineInternal.Input.NativeInputSystem::onUpdate
	Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * ___onBeforeUpdate_1;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * ___s_OnDeviceDiscoveredCallback_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onUpdate_0)); }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onBeforeUpdate_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onBeforeUpdate_1)); }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * get_onBeforeUpdate_1() const { return ___onBeforeUpdate_1; }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 ** get_address_of_onBeforeUpdate_1() { return &___onBeforeUpdate_1; }
	inline void set_onBeforeUpdate_1(Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * value)
	{
		___onBeforeUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeUpdate_1), value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___s_OnDeviceDiscoveredCallback_2)); }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * get_s_OnDeviceDiscoveredCallback_2() const { return ___s_OnDeviceDiscoveredCallback_2; }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 ** get_address_of_s_OnDeviceDiscoveredCallback_2() { return &___s_OnDeviceDiscoveredCallback_2; }
	inline void set_s_OnDeviceDiscoveredCallback_2(Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * value)
	{
		___s_OnDeviceDiscoveredCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnDeviceDiscoveredCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
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
#ifndef NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#define NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71, ___value___1)); }
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
#endif // NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
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
#ifndef ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
#define ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct  Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TA0A72999A108CE29CD4CB14537B8FE41501859C1_H
#ifndef ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
#define ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Int32,System.String>
struct  Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T3DE7FA14577DE01568F76D409273F315827CAA36_H
#ifndef ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H
#define ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>
struct  Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_3_T218EFA183BDE39E1AC9A0240E98B4BFC33A703D4_H


// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_gshared (Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>::Invoke(!0,!1,!2)
extern "C" IL2CPP_METHOD_ATTR void Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_gshared (Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * __this, int32_t p0, int32_t p1, intptr_t p2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32,System.Object>::Invoke(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Action_2_Invoke_m8265202287B19C85C8ED56B19BAB8F5234CEF60C_gshared (Action_2_tF61370A6F15F9B35E62C107472768F65A0879066 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362 (bool ___value0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>::Invoke(!0)
inline void Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0 (Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 *, int32_t, const RuntimeMethod*))Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_gshared)(__this, p0, method);
}
// System.Void System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>::Invoke(!0,!1,!2)
inline void Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A (Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * __this, int32_t p0, int32_t p1, intptr_t p2, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 *, int32_t, int32_t, intptr_t, const RuntimeMethod*))Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_gshared)(__this, p0, p1, p2, method);
}
// System.Void System.Action`2<System.Int32,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489 (Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 *, int32_t, String_t*, const RuntimeMethod*))Action_2_Invoke_m8265202287B19C85C8ED56B19BAB8F5234CEF60C_gshared)(__this, p0, p1, method);
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
// System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem__cctor_m062AB23A2EB8CDEC8BEB378C4588038BD1614A11 (const RuntimeMethod* method)
{
	{
		NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574 (int32_t ___updateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyBeforeUpdate_m317D534DBDD42915CE638051B87E48B76ED28574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onBeforeUpdate_1();
		V_0 = L_0;
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		NullCheck(L_2);
		Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0(L_2, L_3, /*hidden argument*/Action_1_Invoke_m60C027AA0F030AC2B693BEFB8E213066CD9000D0_RuntimeMethod_var);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA (int32_t ___updateType0, int32_t ___eventCount1, intptr_t ___eventData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_m77B02AB50FCFA5649D7203E76163C757EE1DA3CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		int32_t L_4 = ___eventCount1;
		intptr_t L_5 = ___eventData2;
		NullCheck(L_2);
		Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A(L_2, L_3, L_4, (intptr_t)L_5, /*hidden argument*/Action_3_Invoke_m14ADB6DD0234BFB201A7050855A62A4DA2612D0A_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0 (int32_t ___deviceId0, String_t* ___deviceDescriptor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m48C3818DDCFB1A2C0530B6CE1C78743ABA4614B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var);
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_0 = ((NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_il2cpp_TypeInfo_var))->get_s_OnDeviceDiscoveredCallback_2();
		V_0 = L_0;
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * L_2 = V_0;
		int32_t L_3 = ___deviceId0;
		String_t* L_4 = ___deviceDescriptor1;
		NullCheck(L_2);
		Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489(L_2, L_3, L_4, /*hidden argument*/Action_2_Invoke_mC215CA1421B7DF8C0023F107CA72045332A79489_RuntimeMethod_var);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362 (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn) (bool);
	static NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NativeInputSystem_set_hasDeviceDiscoveredCallback_mB5319D5A7C245D6F12C294928D4AF3B635FFE362_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)");
	_il2cpp_icall_func(___value0);
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
