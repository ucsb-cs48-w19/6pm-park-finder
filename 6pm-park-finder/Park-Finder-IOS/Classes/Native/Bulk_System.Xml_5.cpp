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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_tCDEF4AACF366E8B2298CAB3070235D432B854F55;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t8081E28AEC61216CB0502E9C8584C09D7A13F340;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t45A928E2967593285196499A173437F6AB3AE89D;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t94CA8138E40F051734624B32D031268F326F1995;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_tF5A146D5CFBA10C2C7B82FDCD76FA19A301C936C;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_tA4A3C5F34157BEF4F00F640C63D94D48ABA0773E;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_tD410944C4A9AE89256F67B1E85F27375A0ABA100;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_tDC731B271CA71CDD2CCAA81DD046275A56A60BAE;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_tFAEEDCB34D0C2C4A330EA399EFF9E166D1C8B7F2;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t775B2DAE0BCFA2CA1F941E56B78921A90F82EDF5;
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_tAC00CA31D3E381773C0EA56FCAF3FFA3AD87546E;
// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.ArgumentNullException
struct ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.ArrayList
struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t862850E7A796A22A359C413FF4367484A404CAD2;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747;
// System.Collections.Stack
struct Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E;
// System.Globalization.CompareInfo
struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B;
// System.Globalization.CultureInfo
struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4;
// System.Globalization.TextInfo
struct TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IFormatProvider
struct IFormatProvider_t3BAF59CC620257B8C99F911BC233EF7CC5480D67;
// System.IO.FileStream
struct FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4;
// System.IO.Stream
struct Stream_tCFD27E43C18381861212C0288CACF467FB602009;
// System.IO.StreamWriter
struct StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C;
// System.IO.StringWriter
struct StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D;
// System.IO.TextReader
struct TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520;
// System.IO.TextWriter
struct TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45;
// System.Int32
struct Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.InvalidOperationException
struct InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07;
// System.Net.ICredentials
struct ICredentials_tD0AB83297BDF32EE92C413F575F62DD096386B58;
// System.Net.IWebProxy
struct IWebProxy_t7E44658B5DCD492983886B8614CE96464347062A;
// System.Net.WebRequest
struct WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberFilter
struct MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.Decoder
struct Decoder_t95F6C32901671048111BEE6EAD9273760D7881C6;
// System.Text.DecoderFallback
struct DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5;
// System.Text.EncoderFallback
struct EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.Uri
struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6;
// System.UriParser
struct UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_tDB505F93FA770FCD1D11A52E37E473B9144318BD;
// System.Xml.NameTable
struct NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6;
// System.Xml.NameTable/Entry[]
struct EntryU5BU5D_t97618C7433A838405FA69D1932F53790DB93AEAE;
// System.Xml.NonBlockingStreamReader
struct NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_tA1795EB62BAF4B2A85998D2E227BBE15EDF6DFE7;
// System.Xml.XmlCharacterData
struct XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07;
// System.Xml.XmlDocument
struct XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763;
// System.Xml.XmlException
struct XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1;
// System.Xml.XmlImplementation
struct XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B;
// System.Xml.XmlInputStream
struct XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B;
// System.Xml.XmlNameTable
struct XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_tBDD6A9B70A78098C87EE5FC7BBC47AEC966170DC;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t27760A59C722CCA943743D29B23D0A1BDC0E226F;
// System.Xml.XmlNode
struct XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A;
// System.Xml.XmlParserContext
struct XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14;
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC;
// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004;
// System.Xml.XmlReader
struct XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB;
// System.Xml.XmlResolver
struct XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C;
// System.Xml.XmlSignificantWhitespace
struct XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103;
// System.Xml.XmlStreamReader
struct XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F;
// System.Xml.XmlText
struct XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89;
// System.Xml.XmlTextReader
struct XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3;
// System.Xml.XmlTextWriter
struct XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1;
// System.Xml.XmlTextWriter/XmlNodeInfo
struct XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3;
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83;
// System.Xml.XmlWhitespace
struct XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C;
// System.Xml.XmlWriter
struct XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var;
extern RuntimeClass* ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4_il2cpp_TypeInfo_var;
extern RuntimeClass* IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var;
extern RuntimeClass* IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var;
extern RuntimeClass* IXmlNamespaceResolver_tDB505F93FA770FCD1D11A52E37E473B9144318BD_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var;
extern RuntimeClass* NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45_il2cpp_TypeInfo_var;
extern RuntimeClass* Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var;
extern RuntimeClass* StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_il2cpp_TypeInfo_var;
extern RuntimeClass* WriteState_t77FFF7A78C6BEB469AF5904B89980997CDC8735F_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlConvert_t3BB1C81D3A39888DBF9262B91B4AA4BF4BF44D84_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4____U24U24fieldU2D43_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4____U24U24fieldU2D44_7_FieldInfo_var;
extern String_t* _stringLiteral0127B47C24A678B54F68BED1F5388F18CD6CD43F;
extern String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
extern String_t* _stringLiteral0803DF4FF1650933D2FFE6BE04D4B21432134252;
extern String_t* _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194;
extern String_t* _stringLiteral099600A10A944114AAC406D136B625FB416DD779;
extern String_t* _stringLiteral0E7D45A89FBE43241F6EC32EAAA6BC29E9D24EDF;
extern String_t* _stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263;
extern String_t* _stringLiteral148AD7EB924EA204A6D3EA8E34EF9AAD04C02287;
extern String_t* _stringLiteral153D7A58B3A3E898FCBDD04C462AF308414BD09D;
extern String_t* _stringLiteral162ABF240B6251D3A62D6C55F97F733A1658D32C;
extern String_t* _stringLiteral186B3ECE6D1F6FD3555A1C225DFEB8A9DEEB3BDF;
extern String_t* _stringLiteral19135B60BB317176833558266D07E27A0ECA8924;
extern String_t* _stringLiteral195173658C45A7956733CE6245E286888F948E4D;
extern String_t* _stringLiteral19A0A25B2E57E92791A7EF5F7D161FFBFA48572F;
extern String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
extern String_t* _stringLiteral1EA4AEE64A9348306AAD4BB0877E2FF6D36F7689;
extern String_t* _stringLiteral226348BA417E81E001FC53B778A579F7ABA91F3A;
extern String_t* _stringLiteral23CA53467188C6E3B3B6DDDCF70CC405235CE99C;
extern String_t* _stringLiteral246B64512FAAF84DFE7E353F0E802265CA54EB6C;
extern String_t* _stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761;
extern String_t* _stringLiteral26419611CAC6B146C81C560C579F6750ABC20526;
extern String_t* _stringLiteral28020C12AA0B6BFDD59787318EE70FF83FE6D232;
extern String_t* _stringLiteral285F7602FA1B1C77986903AA7F6CAE5EDB867CBE;
extern String_t* _stringLiteral29D43743C43BDA9873FC7A79C99F2EC4B6B442B1;
extern String_t* _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6;
extern String_t* _stringLiteral30DCA830ABB1D0D789EA96F200E93C1BC8B28C8B;
extern String_t* _stringLiteral30DF1DD51B0450B0C391FA8E369FCB37A9BC4559;
extern String_t* _stringLiteral33019C3C63FB15BBD709A6B0798E32FC20D74EED;
extern String_t* _stringLiteral34A1EBDCD233F31853A982CEF6C974393C6ADFA5;
extern String_t* _stringLiteral34E3C39BBF56CE446C610972B76C14A8E34DF050;
extern String_t* _stringLiteral372EA08CAB33E71C02C651DBC83A474D32C676EA;
extern String_t* _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA;
extern String_t* _stringLiteral42F7B70ED71B02780AEA1639F4E24485753CE736;
extern String_t* _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B;
extern String_t* _stringLiteral47B13CDB0607925057B8E9D36B0386D1A11EB54C;
extern String_t* _stringLiteral485A84A2B5716468C77FE916857151A0353B95BE;
extern String_t* _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE;
extern String_t* _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792;
extern String_t* _stringLiteral49BD947F0EFAA57DE923B73532B5B03ADBE29DA2;
extern String_t* _stringLiteral4A9B7BCD8B5FFA809C971678AAB5405D5A38D43D;
extern String_t* _stringLiteral4CB7A257A87B43D73800487B7F57EB27CBBB5C07;
extern String_t* _stringLiteral4D484D27B8B903C9DDEC779942A2F4BEA9081946;
extern String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
extern String_t* _stringLiteral56FA24FEE01DA5669E54DB9397ACDD38325B48F9;
extern String_t* _stringLiteral57B84A87FA55E27F5FA44BC5B92658441F8074DF;
extern String_t* _stringLiteral57EB32E3FEEA4AD960C405E7B00439A3CEA75764;
extern String_t* _stringLiteral594A29ECD2DC85F003F5214D279CCD4A1755547E;
extern String_t* _stringLiteral64B12C6E60389A38F3EF51564AF59891C57C064C;
extern String_t* _stringLiteral658A22E6E30710D4E8E85B2181B79554D764E240;
extern String_t* _stringLiteral67E9FDA3BA98305778D5F1BAF16110335B444C5D;
extern String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
extern String_t* _stringLiteral6BDB3C5694D4A738A5ED7467CC26DEF7664323A6;
extern String_t* _stringLiteral6FA4048355E8ABAC44412AD0ADABC7A2CEE12F65;
extern String_t* _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635;
extern String_t* _stringLiteral752E13194FEE33B9BD6D1D0D406082C5FCAB0C99;
extern String_t* _stringLiteral773B6930C7A1363936BE02B3D627E2CC79F0A12C;
extern String_t* _stringLiteral7859E7AFFA569B5D7ACA069908DBD2ED9F05629B;
extern String_t* _stringLiteral7A2F85497548F3DB88542025E6F75908B8716C12;
extern String_t* _stringLiteral84B2966FCA1DAA208D0427F242D1783971A693AB;
extern String_t* _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
extern String_t* _stringLiteral891B65282C2FA38C6F63A4842A9048DEFD6415EC;
extern String_t* _stringLiteral8BCDCE41BEE002F11C8CF51B698D461BE3BD3797;
extern String_t* _stringLiteral90AA1810DE5F0A23C768CF496EC7C8BCA73D80A5;
extern String_t* _stringLiteral947EBC5EF2F0E5D8650771141D095733C0616838;
extern String_t* _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2;
extern String_t* _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93;
extern String_t* _stringLiteral99D003C0355C9A2D9E2ACF23D923CB91D367952F;
extern String_t* _stringLiteral9C248427E4A045BB61C863530445561BD0D138E0;
extern String_t* _stringLiteral9D88E36FD8224B9B1AC201FE9C2B3C8C0E5280D1;
extern String_t* _stringLiteral9DCAB17267766230B5CD23C1864DAFBCB1AECA9C;
extern String_t* _stringLiteralA086D942884A301B827479029BA19C2746237425;
extern String_t* _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130;
extern String_t* _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB;
extern String_t* _stringLiteralAACF433E5A037C45B6FA28E60D34A52D319DBA0E;
extern String_t* _stringLiteralABA919879A84497010BF1F530146F2C6C41D3822;
extern String_t* _stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73;
extern String_t* _stringLiteralB4F3203E222557090E52A70DF590EC32DB60D176;
extern String_t* _stringLiteralB7800DD7F410CCD049697701C24028B425C31C9F;
extern String_t* _stringLiteralB7A5148DDACFB05E9B7C6F1B3A5B319F1B8705F1;
extern String_t* _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBA860FD430FDBB5379A377B6ABE5473ADE841521;
extern String_t* _stringLiteralBBA3CE1157AD92B2A799DE4ACFF949792B409ABE;
extern String_t* _stringLiteralBCEFE8050A4051FBC90433E2AB029328BC454FA2;
extern String_t* _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B;
extern String_t* _stringLiteralC3328C39B0E29F78E9FF45DB674248B1D245887D;
extern String_t* _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29;
extern String_t* _stringLiteralC9E45AA9177CB61B95B8468A972DE4AA387CE20B;
extern String_t* _stringLiteralC9FCA1EFD8FB162E1D25614618D292DF8ABCF050;
extern String_t* _stringLiteralCAB9D571652E78DFCAC0100ACB0F2C4078B9FCFC;
extern String_t* _stringLiteralCB51439F4D8087A7A3BCE2CD95A8898C8A32D028;
extern String_t* _stringLiteralCCABA513C2A2BADD6230F57CC478F8272596F90B;
extern String_t* _stringLiteralD00B54396BED68CBF959970D395E2DAE36C90217;
extern String_t* _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841;
extern String_t* _stringLiteralD0998110D4F271571EA799F05B153504A56056C0;
extern String_t* _stringLiteralD1785CA28C3A4D29A6EDEF1520C544B838A93DB3;
extern String_t* _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F;
extern String_t* _stringLiteralD45C28652972F2BD3F8592508FB44AD1EBDC696B;
extern String_t* _stringLiteralD8280FE80D9AEB9C128D4DA3FBEC21DF0E4BECE7;
extern String_t* _stringLiteralD8EE00948E54927B094D93E3BED821BA2E3DE652;
extern String_t* _stringLiteralDA591A242289A352E3BDA962DCE20B666296ED93;
extern String_t* _stringLiteralDE797FFB1A4E00CD7AF4F5B2FDC0F6EFA2CFC66B;
extern String_t* _stringLiteralE1CA8C073F0F4B3BBF6E9D1C49867D6B1C49EC1E;
extern String_t* _stringLiteralE4C65AFC352CFB9B55C37194E3F3FA4873144869;
extern String_t* _stringLiteralE6A9FC04320A924F46C7C737432BB0389D9DD095;
extern String_t* _stringLiteralE8DC057D3346E56AED7CF252185DBE1FA6454411;
extern String_t* _stringLiteralE900984DC91DC9C7F107CA96EA386473DA13D8F8;
extern String_t* _stringLiteralE96E9FDACB927E5F7D760927B7CEEA7A381622BA;
extern String_t* _stringLiteralEA9A94C5DAEE77E5AFB3EDEDAE3E09CBA26D4FCC;
extern String_t* _stringLiteralEB8431F8E06C8492F2806E7A7EAA8A4A288D55D1;
extern String_t* _stringLiteralF19A9AEDA23581D5C24CF50840B0581BEA1EF76F;
extern String_t* _stringLiteralF27745EAC549C664A0DFD3BCE825F7AFD87019CD;
extern String_t* _stringLiteralF58D61BB454E3A553B31ED2AB291EF5AE4937D1B;
extern String_t* _stringLiteralF938069BCBD4BCC740711B1C07E31288F7829797;
extern String_t* _stringLiteralF939F03112FE1E980F484E1313A516E9B653F137;
extern String_t* _stringLiteralFB360F9C09AC8C5EDB2F18BE5DE4E80EA4C430D0;
extern String_t* _stringLiteralFC10B29CDDED26401EE7BC8EB6FDB0E440CCDEDC;
extern String_t* _stringLiteralFD1286353570C5703799BA76999323B7C7447B06;
extern String_t* _stringLiteralFD7A2B83CB0BA8522402983CB3068C33624C6687;
extern String_t* _stringLiteralFE28F10D2C6DAB4E315F2659ADAA6A4F16B5E4B8;
extern const RuntimeMethod* Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Contains_mD3AD4AB2026F952196797FD6B824DD40C2B102A8_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1_Push_mC513DE9969A3775192FD4415162DC838134275B7_RuntimeMethod_var;
extern const RuntimeMethod* Stack_1__ctor_m6FC59676E1FBAD7919330DDB58328A0EC4A21E24_RuntimeMethod_var;
extern const RuntimeMethod* XmlProcessingInstruction_set_Value_m329778F6B2F2795173A4CAAD6A72C0F88AE925F2_RuntimeMethod_var;
extern const RuntimeMethod* XmlQualifiedName_Parse_mB9C998D00F8F51CB56C6C8D3BB8245ED3C26F513_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_MoveToAttribute_m47E34140CF38B24E8D8D57E35329956F210D4710_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_ReadEndElement_mBF6B3B74EF169CE5E2A48684F10855286E3E1468_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_ReadInnerXml_m2A48FC95CC20E26FEB1DD3AEA0062004EE009D50_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C_RuntimeMethod_var;
extern const RuntimeMethod* XmlReader_ReadStartElement_mDE09CB61DEEB3B06A31E1B0F7B003206CCDE8B9B_RuntimeMethod_var;
extern const RuntimeMethod* XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD_RuntimeMethod_var;
extern const RuntimeMethod* XmlSignificantWhitespace_set_Value_mC4DF8C86BCB7828A040A72797F9C49950ED0B7CD_RuntimeMethod_var;
extern const RuntimeMethod* XmlStreamReader_Read_m157D2E0A7B427461A32F486DF3AEA308BF55437F_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_LookupPrefix_m2F832CF80793997E4751E563696B4218874EE461_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteCData_m31BB72028A47864B52B2D241DAA42A3D3069D860_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4_RuntimeMethod_var;
extern const RuntimeMethod* XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F_RuntimeMethod_var;
extern const RuntimeMethod* XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var;
extern const RuntimeMethod* XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_RuntimeMethod_var;
extern const RuntimeMethod* XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var;
extern const RuntimeMethod* XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B_RuntimeMethod_var;
extern const RuntimeType* Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var;
extern const uint32_t CharGetter_BeginInvoke_m7DE0078B7CE7153F30B69175FBA9D0B2BBD4FD9D_MetadataUsageId;
extern const uint32_t StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985_MetadataUsageId;
extern const uint32_t StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33_MetadataUsageId;
extern const uint32_t StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F_MetadataUsageId;
extern const uint32_t XmlProcessingInstruction_CloneNode_m8599164A5F5EA5E040E07230A5C94CF0B0641C5B_MetadataUsageId;
extern const uint32_t XmlProcessingInstruction__ctor_m0A68E4685B65C462E10AF881D6DD2CE4CCAED58C_MetadataUsageId;
extern const uint32_t XmlProcessingInstruction_set_Value_m329778F6B2F2795173A4CAAD6A72C0F88AE925F2_MetadataUsageId;
extern const uint32_t XmlQualifiedName_Equals_m09211F15B7D2A358D35B9BA50E323057BB94669D_MetadataUsageId;
extern const uint32_t XmlQualifiedName_Parse_mB9C998D00F8F51CB56C6C8D3BB8245ED3C26F513_MetadataUsageId;
extern const uint32_t XmlQualifiedName_ToString_mE692286107F61C7F6F6EF4CAAF992BD18F9138DC_MetadataUsageId;
extern const uint32_t XmlQualifiedName__cctor_m27460544F29BE41F77A5D953D4FD901F3E3BB70B_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_m587F31DB0131E0C3A1600E7D5C0FA58B0AF46BB3_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875_MetadataUsageId;
extern const uint32_t XmlQualifiedName__ctor_mF5CFE41E1317FF763F319AC91F9CD7F6C9AE746B_MetadataUsageId;
extern const uint32_t XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57_MetadataUsageId;
extern const uint32_t XmlQualifiedName_op_Inequality_m06659EEA1E729269DE04459236B11A4A3C5F55B7_MetadataUsageId;
extern const uint32_t XmlReader_MoveToAttribute_m47E34140CF38B24E8D8D57E35329956F210D4710_MetadataUsageId;
extern const uint32_t XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248_MetadataUsageId;
extern const uint32_t XmlReader_ReadEndElement_mBF6B3B74EF169CE5E2A48684F10855286E3E1468_MetadataUsageId;
extern const uint32_t XmlReader_ReadInnerXml_m2A48FC95CC20E26FEB1DD3AEA0062004EE009D50_MetadataUsageId;
extern const uint32_t XmlReader_ReadOuterXml_m9B5D78EA308E7F44898DFB20CC24B4DB3B3BE56C_MetadataUsageId;
extern const uint32_t XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C_MetadataUsageId;
extern const uint32_t XmlReader_ReadStartElement_mDE09CB61DEEB3B06A31E1B0F7B003206CCDE8B9B_MetadataUsageId;
extern const uint32_t XmlReader_ReadString_m91D4D72FC4017ABBD357051B96701465848FB3F1_MetadataUsageId;
extern const uint32_t XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB_MetadataUsageId;
extern const uint32_t XmlReader_get_Name_m8B58FFEECED4C50E46A4A250022F18AE1562AEC2_MetadataUsageId;
extern const uint32_t XmlReader_get_XmlLang_m4AB87E40136DD57F75A1C2E8A058A4E6300899DB_MetadataUsageId;
extern const uint32_t XmlResolver_EscapeRelativeUriBody_m811FB445CF02DF57C84252F06BEA78810D834AB3_MetadataUsageId;
extern const uint32_t XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD_MetadataUsageId;
extern const uint32_t XmlSignificantWhitespace_CloneNode_m5B96734CFC41A7EEB9FFA84EA2AE9CCBF66C2CD3_MetadataUsageId;
extern const uint32_t XmlSignificantWhitespace_get_LocalName_m690B0BE93474C2B5CD56F896601F066FC8186BE0_MetadataUsageId;
extern const uint32_t XmlSignificantWhitespace_get_Name_m5CE54D81FA48080F13A7441D7F3277D7F80C231F_MetadataUsageId;
extern const uint32_t XmlSignificantWhitespace_set_Value_mC4DF8C86BCB7828A040A72797F9C49950ED0B7CD_MetadataUsageId;
extern const uint32_t XmlStreamReader_Read_m157D2E0A7B427461A32F486DF3AEA308BF55437F_MetadataUsageId;
extern const uint32_t XmlStreamReader__cctor_mFE2BF24C39F6111653630B156836D3B98968FE09_MetadataUsageId;
extern const uint32_t XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470_MetadataUsageId;
extern const uint32_t XmlStreamReader__ctor_mBBBCCBC38391D62388B968C857FE4A05DF418244_MetadataUsageId;
extern const uint32_t XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C_MetadataUsageId;
extern const uint32_t XmlTextReader_GetRemainder_m36054D3E4B513A1BAC42A62D68980CE56CAAB2B6_MetadataUsageId;
extern const uint32_t XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m013061FAED66FFF5D06F67E10FAA0FF73EFF84C7_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m10E2AD5F02C28DE1AB9C9FA66E370CB7C8398CE9_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_m6FE7D1AA93163BD80F274D04FA9C6AD376123391_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_mCFA2D802CE9995F0698F06A4A651603A6EF25973_MetadataUsageId;
extern const uint32_t XmlTextReader__ctor_mE24476169339BBE7C899BA76087A58DF3D9AA139_MetadataUsageId;
extern const uint32_t XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903_MetadataUsageId;
extern const uint32_t XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194_MetadataUsageId;
extern const uint32_t XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E_MetadataUsageId;
extern const uint32_t XmlTextWriter_DetermineAttributePrefix_m0AA33E68BF4562FAE20D6C41AEF7DD3CB72F4863_MetadataUsageId;
extern const uint32_t XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08_MetadataUsageId;
extern const uint32_t XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F_MetadataUsageId;
extern const uint32_t XmlTextWriter_LookupPrefix_m2F832CF80793997E4751E563696B4218874EE461_MetadataUsageId;
extern const uint32_t XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D_MetadataUsageId;
extern const uint32_t XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368_MetadataUsageId;
extern const uint32_t XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B_MetadataUsageId;
extern const uint32_t XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCData_m31BB72028A47864B52B2D241DAA42A3D3069D860_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEscapedBuffer_m38588032EFF7A916070DCF1312EE73B5A7201ADA_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteString_m6F22ECD31C1D4F035BD1B6AB088224B643CED54F_MetadataUsageId;
extern const uint32_t XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4_MetadataUsageId;
extern const uint32_t XmlTextWriter__cctor_m2BB4CABDEA65C3E4607D8BB0AADC670510A44630_MetadataUsageId;
extern const uint32_t XmlTextWriter__ctor_m1748A6857532C4B7429B578F3E813AF6B62CA492_MetadataUsageId;
extern const uint32_t XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F_MetadataUsageId;
extern const uint32_t XmlTextWriter__ctor_m7CFDC19FBE18FC80C5D4908DD982E3369E93CFA0_MetadataUsageId;
extern const uint32_t XmlText_get_LocalName_mF534D142DB83BDAAD93BE554F10505A293988BF7_MetadataUsageId;
extern const uint32_t XmlText_get_Name_m6844BE1F6226741564A719938EC7B7688C7E0ABF_MetadataUsageId;
extern const uint32_t XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_MetadataUsageId;
extern const uint32_t XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F_MetadataUsageId;
extern const uint32_t XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773_MetadataUsageId;
extern const uint32_t XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855_MetadataUsageId;
extern const uint32_t XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_MetadataUsageId;
extern const uint32_t XmlWriterSettings_Reset_mA213D873CE0AE502086C9B4A517448176F0D8E60_MetadataUsageId;
extern const uint32_t XmlWriter_CreateTextWriter_m413FBF72A94A50BEA4D60E8DA36D1CB2A053536F_MetadataUsageId;
extern const uint32_t XmlWriter_Create_mD608046E3A653761C41C1032F571DC75F9845265_MetadataUsageId;
extern const uint32_t XmlWriter_Create_mE9BDE0B36DA4CD5A5B7E1CFF412299C7EAE4733A_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributeString_m352A7B5F1859CD992EF33CC053D7E0F42CC23E3E_MetadataUsageId;
extern const uint32_t XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693_MetadataUsageId;
extern const uint32_t XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_MetadataUsageId;
extern const uint32_t XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B_MetadataUsageId;
extern const uint32_t XmlWriter_get_Settings_m324FDA9901FB12AD09CFDA5E09FE301450541C74_MetadataUsageId;

struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
struct XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D;


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
#ifndef DTDOBJECTMODEL_T1F8566CF41C2964FF7D10C0F00255A1A2EA1682E_H
#define DTDOBJECTMODEL_T1F8566CF41C2964FF7D10C0F00255A1A2EA1682E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E  : public RuntimeObject
{
public:
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t8081E28AEC61216CB0502E9C8584C09D7A13F340 * ___factory_0;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t45A928E2967593285196499A173437F6AB3AE89D * ___elementDecls_1;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_tCDEF4AACF366E8B2298CAB3070235D432B854F55 * ___attListDecls_2;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_tA4A3C5F34157BEF4F00F640C63D94D48ABA0773E * ___peDecls_3;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t94CA8138E40F051734624B32D031268F326F1995 * ___entityDecls_4;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_tF5A146D5CFBA10C2C7B82FDCD76FA19A301C936C * ___notationDecls_5;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___validationErrors_6;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_7;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_8;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___externalResources_9;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_10;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_11;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_12;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_13;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_14;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_15;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_16;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_17;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_18;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___factory_0)); }
	inline DTDAutomataFactory_t8081E28AEC61216CB0502E9C8584C09D7A13F340 * get_factory_0() const { return ___factory_0; }
	inline DTDAutomataFactory_t8081E28AEC61216CB0502E9C8584C09D7A13F340 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(DTDAutomataFactory_t8081E28AEC61216CB0502E9C8584C09D7A13F340 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier((&___factory_0), value);
	}

	inline static int32_t get_offset_of_elementDecls_1() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___elementDecls_1)); }
	inline DTDElementDeclarationCollection_t45A928E2967593285196499A173437F6AB3AE89D * get_elementDecls_1() const { return ___elementDecls_1; }
	inline DTDElementDeclarationCollection_t45A928E2967593285196499A173437F6AB3AE89D ** get_address_of_elementDecls_1() { return &___elementDecls_1; }
	inline void set_elementDecls_1(DTDElementDeclarationCollection_t45A928E2967593285196499A173437F6AB3AE89D * value)
	{
		___elementDecls_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecls_1), value);
	}

	inline static int32_t get_offset_of_attListDecls_2() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___attListDecls_2)); }
	inline DTDAttListDeclarationCollection_tCDEF4AACF366E8B2298CAB3070235D432B854F55 * get_attListDecls_2() const { return ___attListDecls_2; }
	inline DTDAttListDeclarationCollection_tCDEF4AACF366E8B2298CAB3070235D432B854F55 ** get_address_of_attListDecls_2() { return &___attListDecls_2; }
	inline void set_attListDecls_2(DTDAttListDeclarationCollection_tCDEF4AACF366E8B2298CAB3070235D432B854F55 * value)
	{
		___attListDecls_2 = value;
		Il2CppCodeGenWriteBarrier((&___attListDecls_2), value);
	}

	inline static int32_t get_offset_of_peDecls_3() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___peDecls_3)); }
	inline DTDParameterEntityDeclarationCollection_tA4A3C5F34157BEF4F00F640C63D94D48ABA0773E * get_peDecls_3() const { return ___peDecls_3; }
	inline DTDParameterEntityDeclarationCollection_tA4A3C5F34157BEF4F00F640C63D94D48ABA0773E ** get_address_of_peDecls_3() { return &___peDecls_3; }
	inline void set_peDecls_3(DTDParameterEntityDeclarationCollection_tA4A3C5F34157BEF4F00F640C63D94D48ABA0773E * value)
	{
		___peDecls_3 = value;
		Il2CppCodeGenWriteBarrier((&___peDecls_3), value);
	}

	inline static int32_t get_offset_of_entityDecls_4() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___entityDecls_4)); }
	inline DTDEntityDeclarationCollection_t94CA8138E40F051734624B32D031268F326F1995 * get_entityDecls_4() const { return ___entityDecls_4; }
	inline DTDEntityDeclarationCollection_t94CA8138E40F051734624B32D031268F326F1995 ** get_address_of_entityDecls_4() { return &___entityDecls_4; }
	inline void set_entityDecls_4(DTDEntityDeclarationCollection_t94CA8138E40F051734624B32D031268F326F1995 * value)
	{
		___entityDecls_4 = value;
		Il2CppCodeGenWriteBarrier((&___entityDecls_4), value);
	}

	inline static int32_t get_offset_of_notationDecls_5() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___notationDecls_5)); }
	inline DTDNotationDeclarationCollection_tF5A146D5CFBA10C2C7B82FDCD76FA19A301C936C * get_notationDecls_5() const { return ___notationDecls_5; }
	inline DTDNotationDeclarationCollection_tF5A146D5CFBA10C2C7B82FDCD76FA19A301C936C ** get_address_of_notationDecls_5() { return &___notationDecls_5; }
	inline void set_notationDecls_5(DTDNotationDeclarationCollection_tF5A146D5CFBA10C2C7B82FDCD76FA19A301C936C * value)
	{
		___notationDecls_5 = value;
		Il2CppCodeGenWriteBarrier((&___notationDecls_5), value);
	}

	inline static int32_t get_offset_of_validationErrors_6() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___validationErrors_6)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_validationErrors_6() const { return ___validationErrors_6; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_validationErrors_6() { return &___validationErrors_6; }
	inline void set_validationErrors_6(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___validationErrors_6 = value;
		Il2CppCodeGenWriteBarrier((&___validationErrors_6), value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___resolver_7)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_7), value);
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___nameTable_8)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_externalResources_9() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___externalResources_9)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_externalResources_9() const { return ___externalResources_9; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_externalResources_9() { return &___externalResources_9; }
	inline void set_externalResources_9(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___externalResources_9 = value;
		Il2CppCodeGenWriteBarrier((&___externalResources_9), value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_10), value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_publicId_12() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___publicId_12)); }
	inline String_t* get_publicId_12() const { return ___publicId_12; }
	inline String_t** get_address_of_publicId_12() { return &___publicId_12; }
	inline void set_publicId_12(String_t* value)
	{
		___publicId_12 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_12), value);
	}

	inline static int32_t get_offset_of_systemId_13() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___systemId_13)); }
	inline String_t* get_systemId_13() const { return ___systemId_13; }
	inline String_t** get_address_of_systemId_13() { return &___systemId_13; }
	inline void set_systemId_13(String_t* value)
	{
		___systemId_13 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_13), value);
	}

	inline static int32_t get_offset_of_intSubset_14() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___intSubset_14)); }
	inline String_t* get_intSubset_14() const { return ___intSubset_14; }
	inline String_t** get_address_of_intSubset_14() { return &___intSubset_14; }
	inline void set_intSubset_14(String_t* value)
	{
		___intSubset_14 = value;
		Il2CppCodeGenWriteBarrier((&___intSubset_14), value);
	}

	inline static int32_t get_offset_of_intSubsetHasPERef_15() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___intSubsetHasPERef_15)); }
	inline bool get_intSubsetHasPERef_15() const { return ___intSubsetHasPERef_15; }
	inline bool* get_address_of_intSubsetHasPERef_15() { return &___intSubsetHasPERef_15; }
	inline void set_intSubsetHasPERef_15(bool value)
	{
		___intSubsetHasPERef_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_lineNumber_17() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___lineNumber_17)); }
	inline int32_t get_lineNumber_17() const { return ___lineNumber_17; }
	inline int32_t* get_address_of_lineNumber_17() { return &___lineNumber_17; }
	inline void set_lineNumber_17(int32_t value)
	{
		___lineNumber_17 = value;
	}

	inline static int32_t get_offset_of_linePosition_18() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E, ___linePosition_18)); }
	inline int32_t get_linePosition_18() const { return ___linePosition_18; }
	inline int32_t* get_address_of_linePosition_18() { return &___linePosition_18; }
	inline void set_linePosition_18(int32_t value)
	{
		___linePosition_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDOBJECTMODEL_T1F8566CF41C2964FF7D10C0F00255A1A2EA1682E_H
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
#ifndef ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#define ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_0;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ____items_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____items_1)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_StaticFields, ___EmptyArray_3)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T438A4032A4FBAF49F565FAD10C546E26CFBD847F_H
#ifndef DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#define DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___keySlots_6)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___valueSlots_7)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t65686AED861AC45494753EDD54F3AFAB55E25448 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TC40CE8B8795121971E021F04C9E151F97814FCA1_H
#ifndef STACK_1_T36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45_H
#define STACK_1_T36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Stack`1<System.String>
struct  Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45, ____array_0)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get__array_0() const { return ____array_0; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_1_T36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45_H
#ifndef STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
#define STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::contents
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___contents_0;
	// System.Int32 System.Collections.Stack::current
	int32_t ___current_1;
	// System.Int32 System.Collections.Stack::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Stack::capacity
	int32_t ___capacity_3;
	// System.Int32 System.Collections.Stack::modCount
	int32_t ___modCount_4;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___contents_0)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_contents_0() const { return ___contents_0; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_modCount_4() { return static_cast<int32_t>(offsetof(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5, ___modCount_4)); }
	inline int32_t get_modCount_4() const { return ___modCount_4; }
	inline int32_t* get_address_of_modCount_4() { return &___modCount_4; }
	inline void set_modCount_4(int32_t value)
	{
		___modCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#define COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_3;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * ___collator_5;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_2), value);
	}

	inline static int32_t get_offset_of_win32LCID_3() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___win32LCID_3)); }
	inline int32_t get_win32LCID_3() const { return ___win32LCID_3; }
	inline int32_t* get_address_of_win32LCID_3() { return &___win32LCID_3; }
	inline void set_win32LCID_3(int32_t value)
	{
		___win32LCID_3 = value;
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_collator_5() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B, ___collator_5)); }
	inline SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * get_collator_5() const { return ___collator_5; }
	inline SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D ** get_address_of_collator_5() { return &___collator_5; }
	inline void set_collator_5(SimpleCollator_t925FDB9532C200EA058255C64A72E2BBB02A5C2D * value)
	{
		___collator_5 = value;
		Il2CppCodeGenWriteBarrier((&___collator_5), value);
	}
};

struct CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___collators_6;
	// System.Object System.Globalization.CompareInfo::monitor
	RuntimeObject * ___monitor_7;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_6() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___collators_6)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_collators_6() const { return ___collators_6; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_collators_6() { return &___collators_6; }
	inline void set_collators_6(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___collators_6 = value;
		Il2CppCodeGenWriteBarrier((&___collators_6), value);
	}

	inline static int32_t get_offset_of_monitor_7() { return static_cast<int32_t>(offsetof(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_StaticFields, ___monitor_7)); }
	inline RuntimeObject * get_monitor_7() const { return ___monitor_7; }
	inline RuntimeObject ** get_address_of_monitor_7() { return &___monitor_7; }
	inline void set_monitor_7(RuntimeObject * value)
	{
		___monitor_7 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T704FFB923C9EF69DFAE63C1950E5B466A94C0F4B_H
#ifndef CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#define CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___numInfo_14)); }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t705565BF0412AF40E62A35D9A8274BAE58096BA4 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t392C2A0F34C2403AD964D3D3BF27506B83BA49D4 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textInfo_16)); }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_tFAC9352EF3663F7B44E9B6E4A3E64A08BF02428A * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___compareInfo_26)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t6D772388D3C57B6834EC19608C3DE39C25C0D53E* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___parent_culture_30)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___calendar_32)); }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t4D88BF2E5C47E1CE77605B8AD886FAE40FD2E3B1 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_H
#ifndef STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#define STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tCFD27E43C18381861212C0288CACF467FB602009  : public RuntimeObject
{
public:

public:
};

struct Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields, ___Null_0)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_Null_0() const { return ___Null_0; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifndef TEXTREADER_TC6C39132CD1389E729FA893F06C34EE351D24520_H
#define TEXTREADER_TC6C39132CD1389E729FA893F06C34EE351D24520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520  : public RuntimeObject
{
public:

public:
};

struct TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520_StaticFields, ___Null_0)); }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * get_Null_0() const { return ___Null_0; }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_TC6C39132CD1389E729FA893F06C34EE351D24520_H
#ifndef TEXTWRITER_T584EB24550495420EF2EC2E56D5404D0A0A79A45_H
#define TEXTWRITER_T584EB24550495420EF2EC2E56D5404D0A0A79A45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45, ___CoreNewLine_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45_StaticFields, ___Null_2)); }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T584EB24550495420EF2EC2E56D5404D0A0A79A45_H
#ifndef MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#define MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4, ____identity_0)); }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3C5F8BAEFAC94CF69694273ACCB6CB41355E0B5C * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T05F62A8AC86E36BAE3063CA28097945DE9E179C4_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#define ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___decoder_fallback_3)); }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoder_fallback_4)); }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#define URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___parser_30)); }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * get_parser_30() const { return ___parser_30; }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
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
#ifndef XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#define XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNameTable
struct  XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMETABLE_TAA4F116720DEE4495552DD594D090390F342894B_H
#ifndef XMLNAMESPACEMANAGER_T638B0C086B7716A1FE071BF9611C4CE780717F86_H
#define XMLNAMESPACEMANAGER_T638B0C086B7716A1FE071BF9611C4CE780717F86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_tBDD6A9B70A78098C87EE5FC7BBC47AEC966170DC* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t27760A59C722CCA943743D29B23D0A1BDC0E226F* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___decls_0)); }
	inline NsDeclU5BU5D_tBDD6A9B70A78098C87EE5FC7BBC47AEC966170DC* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_tBDD6A9B70A78098C87EE5FC7BBC47AEC966170DC** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_tBDD6A9B70A78098C87EE5FC7BBC47AEC966170DC* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier((&___decls_0), value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___scopes_2)); }
	inline NsScopeU5BU5D_t27760A59C722CCA943743D29B23D0A1BDC0E226F* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t27760A59C722CCA943743D29B23D0A1BDC0E226F** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t27760A59C722CCA943743D29B23D0A1BDC0E226F* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_2), value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___nameTable_6)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_6), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map28_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86_StaticFields, ___U3CU3Ef__switchU24map28_8)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map28_8() const { return ___U3CU3Ef__switchU24map28_8; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map28_8() { return &___U3CU3Ef__switchU24map28_8; }
	inline void set_U3CU3Ef__switchU24map28_8(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map28_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T638B0C086B7716A1FE071BF9611C4CE780717F86_H
#ifndef XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#define XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___ownerDocument_1)); }
	inline XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___parentNode_2)); }
	inline XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A, ___childNodes_3)); }
	inline XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t0DFA6642EB0E0CA24CB3F5AF8DC38D09D5656B2A * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map44_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map46
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map46_5;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_tABF5FD9F0A8DC7FBC7808B3BACC780547EB48735 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map44_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map46_5() { return static_cast<int32_t>(offsetof(XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A_StaticFields, ___U3CU3Ef__switchU24map46_5)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map46_5() const { return ___U3CU3Ef__switchU24map46_5; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map46_5() { return &___U3CU3Ef__switchU24map46_5; }
	inline void set_U3CU3Ef__switchU24map46_5(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map46_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map46_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T2B708D2776777AFF8C95DD2EFB651AA64E57632A_H
#ifndef XMLPARSERINPUTSOURCE_T91A9158D94809823091460776ED5C8688D6D54CC_H
#define XMLPARSERINPUTSOURCE_T91A9158D94809823091460776ED5C8688D6D54CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserInput/XmlParserInputSource
struct  XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserInput/XmlParserInputSource::BaseURI
	String_t* ___BaseURI_0;
	// System.IO.TextReader System.Xml.XmlParserInput/XmlParserInputSource::reader
	TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___reader_1;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlParserInput/XmlParserInputSource::isPE
	bool ___isPE_3;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::line
	int32_t ___line_4;
	// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::column
	int32_t ___column_5;

public:
	inline static int32_t get_offset_of_BaseURI_0() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___BaseURI_0)); }
	inline String_t* get_BaseURI_0() const { return ___BaseURI_0; }
	inline String_t** get_address_of_BaseURI_0() { return &___BaseURI_0; }
	inline void set_BaseURI_0(String_t* value)
	{
		___BaseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___BaseURI_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___reader_1)); }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * get_reader_1() const { return ___reader_1; }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_isPE_3() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___isPE_3)); }
	inline bool get_isPE_3() const { return ___isPE_3; }
	inline bool* get_address_of_isPE_3() { return &___isPE_3; }
	inline void set_isPE_3(bool value)
	{
		___isPE_3 = value;
	}

	inline static int32_t get_offset_of_line_4() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___line_4)); }
	inline int32_t get_line_4() const { return ___line_4; }
	inline int32_t* get_address_of_line_4() { return &___line_4; }
	inline void set_line_4(int32_t value)
	{
		___line_4 = value;
	}

	inline static int32_t get_offset_of_column_5() { return static_cast<int32_t>(offsetof(XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC, ___column_5)); }
	inline int32_t get_column_5() const { return ___column_5; }
	inline int32_t* get_address_of_column_5() { return &___column_5; }
	inline void set_column_5(int32_t value)
	{
		___column_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERINPUTSOURCE_T91A9158D94809823091460776ED5C8688D6D54CC_H
#ifndef XMLQUALIFIEDNAME_T473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_H
#define XMLQUALIFIEDNAME_T473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlQualifiedName
struct  XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_ns_2() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004, ___ns_2)); }
	inline String_t* get_ns_2() const { return ___ns_2; }
	inline String_t** get_address_of_ns_2() { return &___ns_2; }
	inline void set_ns_2(String_t* value)
	{
		___ns_2 = value;
		Il2CppCodeGenWriteBarrier((&___ns_2), value);
	}

	inline static int32_t get_offset_of_hash_3() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004, ___hash_3)); }
	inline int32_t get_hash_3() const { return ___hash_3; }
	inline int32_t* get_address_of_hash_3() { return &___hash_3; }
	inline void set_hash_3(int32_t value)
	{
		___hash_3 = value;
	}
};

struct XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_StaticFields, ___Empty_0)); }
	inline XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * get_Empty_0() const { return ___Empty_0; }
	inline XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLQUALIFIEDNAME_T473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_H
#ifndef XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#define XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293, ___binary_1)); }
	inline XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293, ___settings_2)); }
	inline XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_TC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293_H
#ifndef XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#define XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_TF417EFBE696C3A5E7656C0FA477260AFF8AA252C_H
#ifndef STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#define STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/StringUtil
struct  StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110  : public RuntimeObject
{
public:

public:
};

struct StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields
{
public:
	// System.Globalization.CultureInfo System.Xml.XmlTextWriter/StringUtil::cul
	CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * ___cul_0;
	// System.Globalization.CompareInfo System.Xml.XmlTextWriter/StringUtil::cmp
	CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * ___cmp_1;

public:
	inline static int32_t get_offset_of_cul_0() { return static_cast<int32_t>(offsetof(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields, ___cul_0)); }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * get_cul_0() const { return ___cul_0; }
	inline CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D ** get_address_of_cul_0() { return &___cul_0; }
	inline void set_cul_0(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * value)
	{
		___cul_0 = value;
		Il2CppCodeGenWriteBarrier((&___cul_0), value);
	}

	inline static int32_t get_offset_of_cmp_1() { return static_cast<int32_t>(offsetof(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields, ___cmp_1)); }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * get_cmp_1() const { return ___cmp_1; }
	inline CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B ** get_address_of_cmp_1() { return &___cmp_1; }
	inline void set_cmp_1(CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * value)
	{
		___cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&___cmp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTIL_T6B1C7DC3B724BD6FC51242BBACBCC786751CA110_H
#ifndef XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#define XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6, ___settings_0)); }
	inline XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_TF67065A3B83E8B7E2B24D172D8223F4328F437B6_H
#ifndef U24ARRAYTYPEU2412_T240C25AFE6D004BFFB06A982F7E42749780F8A23_H
#define U24ARRAYTYPEU2412_T240C25AFE6D004BFFB06A982F7E42749780F8A23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T240C25AFE6D004BFFB06A982F7E42749780F8A23_H
#ifndef U24ARRAYTYPEU241280_T07BD843025ECC2676C90DA85D9C7D398AA8A6DBA_H
#define U24ARRAYTYPEU241280_T07BD843025ECC2676C90DA85D9C7D398AA8A6DBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1280
struct  U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA__padding[1280];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241280_T07BD843025ECC2676C90DA85D9C7D398AA8A6DBA_H
#ifndef U24ARRAYTYPEU24256_T6264193FFFEE81B3F24E58F2F58D3CCFD2957611_H
#define U24ARRAYTYPEU24256_T6264193FFFEE81B3F24E58F2F58D3CCFD2957611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T6264193FFFEE81B3F24E58F2F58D3CCFD2957611_H
#ifndef U24ARRAYTYPEU248_T46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8_H
#define U24ARRAYTYPEU248_T46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8_H
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
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
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
#ifndef STREAMWRITER_T8043D136B6EE2E79326056FDD0810A9132A9DC0C_H
#define STREAMWRITER_T8043D136B6EE2E79326056FDD0810A9132A9DC0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamWriter
struct  StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C  : public TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45
{
public:
	// System.Text.Encoding System.IO.StreamWriter::internalEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___internalEncoding_3;
	// System.IO.Stream System.IO.StreamWriter::internalStream
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___internalStream_4;
	// System.Boolean System.IO.StreamWriter::iflush
	bool ___iflush_5;
	// System.Byte[] System.IO.StreamWriter::byte_buf
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___byte_buf_6;
	// System.Int32 System.IO.StreamWriter::byte_pos
	int32_t ___byte_pos_7;
	// System.Char[] System.IO.StreamWriter::decode_buf
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___decode_buf_8;
	// System.Int32 System.IO.StreamWriter::decode_pos
	int32_t ___decode_pos_9;
	// System.Boolean System.IO.StreamWriter::DisposedAlready
	bool ___DisposedAlready_10;
	// System.Boolean System.IO.StreamWriter::preamble_done
	bool ___preamble_done_11;

public:
	inline static int32_t get_offset_of_internalEncoding_3() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___internalEncoding_3)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_internalEncoding_3() const { return ___internalEncoding_3; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_internalEncoding_3() { return &___internalEncoding_3; }
	inline void set_internalEncoding_3(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___internalEncoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalEncoding_3), value);
	}

	inline static int32_t get_offset_of_internalStream_4() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___internalStream_4)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_internalStream_4() const { return ___internalStream_4; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_internalStream_4() { return &___internalStream_4; }
	inline void set_internalStream_4(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___internalStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalStream_4), value);
	}

	inline static int32_t get_offset_of_iflush_5() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___iflush_5)); }
	inline bool get_iflush_5() const { return ___iflush_5; }
	inline bool* get_address_of_iflush_5() { return &___iflush_5; }
	inline void set_iflush_5(bool value)
	{
		___iflush_5 = value;
	}

	inline static int32_t get_offset_of_byte_buf_6() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___byte_buf_6)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_byte_buf_6() const { return ___byte_buf_6; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_byte_buf_6() { return &___byte_buf_6; }
	inline void set_byte_buf_6(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___byte_buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___byte_buf_6), value);
	}

	inline static int32_t get_offset_of_byte_pos_7() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___byte_pos_7)); }
	inline int32_t get_byte_pos_7() const { return ___byte_pos_7; }
	inline int32_t* get_address_of_byte_pos_7() { return &___byte_pos_7; }
	inline void set_byte_pos_7(int32_t value)
	{
		___byte_pos_7 = value;
	}

	inline static int32_t get_offset_of_decode_buf_8() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___decode_buf_8)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_decode_buf_8() const { return ___decode_buf_8; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_decode_buf_8() { return &___decode_buf_8; }
	inline void set_decode_buf_8(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___decode_buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___decode_buf_8), value);
	}

	inline static int32_t get_offset_of_decode_pos_9() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___decode_pos_9)); }
	inline int32_t get_decode_pos_9() const { return ___decode_pos_9; }
	inline int32_t* get_address_of_decode_pos_9() { return &___decode_pos_9; }
	inline void set_decode_pos_9(int32_t value)
	{
		___decode_pos_9 = value;
	}

	inline static int32_t get_offset_of_DisposedAlready_10() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___DisposedAlready_10)); }
	inline bool get_DisposedAlready_10() const { return ___DisposedAlready_10; }
	inline bool* get_address_of_DisposedAlready_10() { return &___DisposedAlready_10; }
	inline void set_DisposedAlready_10(bool value)
	{
		___DisposedAlready_10 = value;
	}

	inline static int32_t get_offset_of_preamble_done_11() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C, ___preamble_done_11)); }
	inline bool get_preamble_done_11() const { return ___preamble_done_11; }
	inline bool* get_address_of_preamble_done_11() { return &___preamble_done_11; }
	inline void set_preamble_done_11(bool value)
	{
		___preamble_done_11 = value;
	}
};

struct StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_StaticFields, ___Null_12)); }
	inline StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C * get_Null_12() const { return ___Null_12; }
	inline StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier((&___Null_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMWRITER_T8043D136B6EE2E79326056FDD0810A9132A9DC0C_H
#ifndef STRINGWRITER_T3C72AF79544098A9167A3748E65721DB7ED2960D_H
#define STRINGWRITER_T3C72AF79544098A9167A3748E65721DB7ED2960D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D  : public TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T3C72AF79544098A9167A3748E65721DB7ED2960D_H
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
#ifndef WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
#define WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T5E9F05BAC005D2105A122CD5973E1D70B9B45325_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef UTF8ENCODING_T4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15_H
#define UTF8ENCODING_T4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15  : public Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15_H
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
#ifndef NAMETABLE_TE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_H
#define NAMETABLE_TE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NameTable
struct  NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6  : public XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B
{
public:
	// System.Int32 System.Xml.NameTable::count
	int32_t ___count_0;
	// System.Xml.NameTable/Entry[] System.Xml.NameTable::buckets
	EntryU5BU5D_t97618C7433A838405FA69D1932F53790DB93AEAE* ___buckets_1;
	// System.Int32 System.Xml.NameTable::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_buckets_1() { return static_cast<int32_t>(offsetof(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6, ___buckets_1)); }
	inline EntryU5BU5D_t97618C7433A838405FA69D1932F53790DB93AEAE* get_buckets_1() const { return ___buckets_1; }
	inline EntryU5BU5D_t97618C7433A838405FA69D1932F53790DB93AEAE** get_address_of_buckets_1() { return &___buckets_1; }
	inline void set_buckets_1(EntryU5BU5D_t97618C7433A838405FA69D1932F53790DB93AEAE* value)
	{
		___buckets_1 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_1), value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMETABLE_TE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_H
#ifndef NONBLOCKINGSTREAMREADER_TCD1035F526FC01E59384659F6AF39B6DEA3365D8_H
#define NONBLOCKINGSTREAMREADER_TCD1035F526FC01E59384659F6AF39B6DEA3365D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NonBlockingStreamReader
struct  NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8  : public TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520
{
public:
	// System.Byte[] System.Xml.NonBlockingStreamReader::input_buffer
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___input_buffer_1;
	// System.Char[] System.Xml.NonBlockingStreamReader::decoded_buffer
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___decoded_buffer_2;
	// System.Int32 System.Xml.NonBlockingStreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.Xml.NonBlockingStreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.Xml.NonBlockingStreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Text.Encoding System.Xml.NonBlockingStreamReader::encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding_6;
	// System.Text.Decoder System.Xml.NonBlockingStreamReader::decoder
	Decoder_t95F6C32901671048111BEE6EAD9273760D7881C6 * ___decoder_7;
	// System.IO.Stream System.Xml.NonBlockingStreamReader::base_stream
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___base_stream_8;
	// System.Boolean System.Xml.NonBlockingStreamReader::mayBlock
	bool ___mayBlock_9;
	// System.Text.StringBuilder System.Xml.NonBlockingStreamReader::line_builder
	StringBuilder_t * ___line_builder_10;
	// System.Boolean System.Xml.NonBlockingStreamReader::foundCR
	bool ___foundCR_11;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___input_buffer_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_1), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___decoded_buffer_2)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___encoding_6)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_6), value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___decoder_7)); }
	inline Decoder_t95F6C32901671048111BEE6EAD9273760D7881C6 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t95F6C32901671048111BEE6EAD9273760D7881C6 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t95F6C32901671048111BEE6EAD9273760D7881C6 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_7), value);
	}

	inline static int32_t get_offset_of_base_stream_8() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___base_stream_8)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_base_stream_8() const { return ___base_stream_8; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_base_stream_8() { return &___base_stream_8; }
	inline void set_base_stream_8(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___base_stream_8 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_8), value);
	}

	inline static int32_t get_offset_of_mayBlock_9() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___mayBlock_9)); }
	inline bool get_mayBlock_9() const { return ___mayBlock_9; }
	inline bool* get_address_of_mayBlock_9() { return &___mayBlock_9; }
	inline void set_mayBlock_9(bool value)
	{
		___mayBlock_9 = value;
	}

	inline static int32_t get_offset_of_line_builder_10() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___line_builder_10)); }
	inline StringBuilder_t * get_line_builder_10() const { return ___line_builder_10; }
	inline StringBuilder_t ** get_address_of_line_builder_10() { return &___line_builder_10; }
	inline void set_line_builder_10(StringBuilder_t * value)
	{
		___line_builder_10 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_10), value);
	}

	inline static int32_t get_offset_of_foundCR_11() { return static_cast<int32_t>(offsetof(NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8, ___foundCR_11)); }
	inline bool get_foundCR_11() const { return ___foundCR_11; }
	inline bool* get_address_of_foundCR_11() { return &___foundCR_11; }
	inline void set_foundCR_11(bool value)
	{
		___foundCR_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBLOCKINGSTREAMREADER_TCD1035F526FC01E59384659F6AF39B6DEA3365D8_H
#ifndef XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#define XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763  : public XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_7;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_8;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_9;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_10;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * ___implementation_11;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_12;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_13;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___idTable_14;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * ___nameCache_15;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * ___lastLinkedChild_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_7() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___optimal_create_element_7)); }
	inline bool get_optimal_create_element_7() const { return ___optimal_create_element_7; }
	inline bool* get_address_of_optimal_create_element_7() { return &___optimal_create_element_7; }
	inline void set_optimal_create_element_7(bool value)
	{
		___optimal_create_element_7 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_8() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___optimal_create_attribute_8)); }
	inline bool get_optimal_create_attribute_8() const { return ___optimal_create_attribute_8; }
	inline bool* get_address_of_optimal_create_attribute_8() { return &___optimal_create_attribute_8; }
	inline void set_optimal_create_attribute_8(bool value)
	{
		___optimal_create_attribute_8 = value;
	}

	inline static int32_t get_offset_of_nameTable_9() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___nameTable_9)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_9() const { return ___nameTable_9; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_9() { return &___nameTable_9; }
	inline void set_nameTable_9(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_9 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_9), value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_10), value);
	}

	inline static int32_t get_offset_of_implementation_11() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___implementation_11)); }
	inline XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * get_implementation_11() const { return ___implementation_11; }
	inline XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B ** get_address_of_implementation_11() { return &___implementation_11; }
	inline void set_implementation_11(XmlImplementation_t941F4E3C7A3128487AD76CEEA212EDCC5484E64B * value)
	{
		___implementation_11 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_11), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_12() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___preserveWhitespace_12)); }
	inline bool get_preserveWhitespace_12() const { return ___preserveWhitespace_12; }
	inline bool* get_address_of_preserveWhitespace_12() { return &___preserveWhitespace_12; }
	inline void set_preserveWhitespace_12(bool value)
	{
		___preserveWhitespace_12 = value;
	}

	inline static int32_t get_offset_of_resolver_13() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___resolver_13)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_13() const { return ___resolver_13; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_13() { return &___resolver_13; }
	inline void set_resolver_13(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_13 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_13), value);
	}

	inline static int32_t get_offset_of_idTable_14() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___idTable_14)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_idTable_14() const { return ___idTable_14; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_idTable_14() { return &___idTable_14; }
	inline void set_idTable_14(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___idTable_14 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_14), value);
	}

	inline static int32_t get_offset_of_nameCache_15() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___nameCache_15)); }
	inline XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * get_nameCache_15() const { return ___nameCache_15; }
	inline XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B ** get_address_of_nameCache_15() { return &___nameCache_15; }
	inline void set_nameCache_15(XmlNameEntryCache_t69A1B77D4107BB4F1DEEA63F9436F43B53EA205B * value)
	{
		___nameCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_15), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_16() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___lastLinkedChild_16)); }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * get_lastLinkedChild_16() const { return ___lastLinkedChild_16; }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 ** get_address_of_lastLinkedChild_16() { return &___lastLinkedChild_16; }
	inline void set_lastLinkedChild_16(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * value)
	{
		___lastLinkedChild_16 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_16), value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___schemaInfo_17)); }
	inline RuntimeObject* get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline RuntimeObject** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(RuntimeObject* value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_17), value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_19), value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_20), value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_21), value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_tDE269819AB9B5B4BE28B1EDC553BDE78F7F5D4FC * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_24), value);
	}
};

struct XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___optimal_create_types_6;

public:
	inline static int32_t get_offset_of_optimal_create_types_6() { return static_cast<int32_t>(offsetof(XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763_StaticFields, ___optimal_create_types_6)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_optimal_create_types_6() const { return ___optimal_create_types_6; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_optimal_create_types_6() { return &___optimal_create_types_6; }
	inline void set_optimal_create_types_6(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___optimal_create_types_6 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T4C411CC65B75933374C140FB5737CF2C261CC763_H
#ifndef XMLINPUTSTREAM_TD179743E3D4482E2297EEC3A71D082F2F2B2F629_H
#define XMLINPUTSTREAM_TD179743E3D4482E2297EEC3A71D082F2F2B2F629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlInputStream
struct  XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::enc
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___enc_2;
	// System.IO.Stream System.Xml.XmlInputStream::stream
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___stream_3;
	// System.Byte[] System.Xml.XmlInputStream::buffer
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___buffer_4;
	// System.Int32 System.Xml.XmlInputStream::bufLength
	int32_t ___bufLength_5;
	// System.Int32 System.Xml.XmlInputStream::bufPos
	int32_t ___bufPos_6;

public:
	inline static int32_t get_offset_of_enc_2() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629, ___enc_2)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_enc_2() const { return ___enc_2; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_enc_2() { return &___enc_2; }
	inline void set_enc_2(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___enc_2 = value;
		Il2CppCodeGenWriteBarrier((&___enc_2), value);
	}

	inline static int32_t get_offset_of_stream_3() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629, ___stream_3)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_stream_3() const { return ___stream_3; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_stream_3() { return &___stream_3; }
	inline void set_stream_3(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___stream_3 = value;
		Il2CppCodeGenWriteBarrier((&___stream_3), value);
	}

	inline static int32_t get_offset_of_buffer_4() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629, ___buffer_4)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_buffer_4() const { return ___buffer_4; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_buffer_4() { return &___buffer_4; }
	inline void set_buffer_4(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_4), value);
	}

	inline static int32_t get_offset_of_bufLength_5() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629, ___bufLength_5)); }
	inline int32_t get_bufLength_5() const { return ___bufLength_5; }
	inline int32_t* get_address_of_bufLength_5() { return &___bufLength_5; }
	inline void set_bufLength_5(int32_t value)
	{
		___bufLength_5 = value;
	}

	inline static int32_t get_offset_of_bufPos_6() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629, ___bufPos_6)); }
	inline int32_t get_bufPos_6() const { return ___bufPos_6; }
	inline int32_t* get_address_of_bufPos_6() { return &___bufPos_6; }
	inline void set_bufPos_6(int32_t value)
	{
		___bufPos_6 = value;
	}
};

struct XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlInputStream::StrictUTF8
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___StrictUTF8_1;
	// System.Xml.XmlException System.Xml.XmlInputStream::encodingException
	XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * ___encodingException_7;

public:
	inline static int32_t get_offset_of_StrictUTF8_1() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_StaticFields, ___StrictUTF8_1)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_StrictUTF8_1() const { return ___StrictUTF8_1; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_StrictUTF8_1() { return &___StrictUTF8_1; }
	inline void set_StrictUTF8_1(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___StrictUTF8_1 = value;
		Il2CppCodeGenWriteBarrier((&___StrictUTF8_1), value);
	}

	inline static int32_t get_offset_of_encodingException_7() { return static_cast<int32_t>(offsetof(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_StaticFields, ___encodingException_7)); }
	inline XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * get_encodingException_7() const { return ___encodingException_7; }
	inline XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 ** get_address_of_encodingException_7() { return &___encodingException_7; }
	inline void set_encodingException_7(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * value)
	{
		___encodingException_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodingException_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLINPUTSTREAM_TD179743E3D4482E2297EEC3A71D082F2F2B2F629_H
#ifndef XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#define XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23  : public XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * ___nextSibling_6;

public:
	inline static int32_t get_offset_of_nextSibling_6() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23, ___nextSibling_6)); }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * get_nextSibling_6() const { return ___nextSibling_6; }
	inline XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 ** get_address_of_nextSibling_6() { return &___nextSibling_6; }
	inline void set_nextSibling_6(XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * value)
	{
		___nextSibling_6 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23_H
#ifndef XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#define XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * ___entityNameStack_7;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entity_3)); }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * get_entity_3() const { return ___entity_3; }
	inline XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier((&___entity_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___source_4)); }
	inline XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * get_source_4() const { return ___source_4; }
	inline XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entityInsideAttribute_5)); }
	inline bool get_entityInsideAttribute_5() const { return ___entityInsideAttribute_5; }
	inline bool* get_address_of_entityInsideAttribute_5() { return &___entityInsideAttribute_5; }
	inline void set_entityInsideAttribute_5(bool value)
	{
		___entityInsideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___insideAttribute_6)); }
	inline bool get_insideAttribute_6() const { return ___insideAttribute_6; }
	inline bool* get_address_of_insideAttribute_6() { return &___insideAttribute_6; }
	inline void set_insideAttribute_6(bool value)
	{
		___insideAttribute_6 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3, ___entityNameStack_7)); }
	inline Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * get_entityNameStack_7() const { return ___entityNameStack_7; }
	inline Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 ** get_address_of_entityNameStack_7() { return &___entityNameStack_7; }
	inline void set_entityNameStack_7(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * value)
	{
		___entityNameStack_7 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_H
#ifndef XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#define XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83  : public XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_TD3E7BD8A4D69B96E8EB009EA459545CFE399FA83_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  ___U24U24fieldU2D23_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  ___U24U24fieldU2D24_1;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  ___U24U24fieldU2D26_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  ___U24U24fieldU2D27_3;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  ___U24U24fieldU2D28_4;
	// <PrivateImplementationDetails>/$ArrayType$1280 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA  ___U24U24fieldU2D29_5;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  ___U24U24fieldU2D43_6;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  ___U24U24fieldU2D44_7;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D23_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D23_0)); }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  get_U24U24fieldU2D23_0() const { return ___U24U24fieldU2D23_0; }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8 * get_address_of_U24U24fieldU2D23_0() { return &___U24U24fieldU2D23_0; }
	inline void set_U24U24fieldU2D23_0(U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  value)
	{
		___U24U24fieldU2D23_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D24_1)); }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  get_U24U24fieldU2D24_1() const { return ___U24U24fieldU2D24_1; }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8 * get_address_of_U24U24fieldU2D24_1() { return &___U24U24fieldU2D24_1; }
	inline void set_U24U24fieldU2D24_1(U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  value)
	{
		___U24U24fieldU2D24_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D26_2)); }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  get_U24U24fieldU2D26_2() const { return ___U24U24fieldU2D26_2; }
	inline U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8 * get_address_of_U24U24fieldU2D26_2() { return &___U24U24fieldU2D26_2; }
	inline void set_U24U24fieldU2D26_2(U24ArrayTypeU248_t46D59E10C7F0BFA066E0D741BF43D9C65C9F0CB8  value)
	{
		___U24U24fieldU2D26_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D27_3)); }
	inline U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  get_U24U24fieldU2D27_3() const { return ___U24U24fieldU2D27_3; }
	inline U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611 * get_address_of_U24U24fieldU2D27_3() { return &___U24U24fieldU2D27_3; }
	inline void set_U24U24fieldU2D27_3(U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  value)
	{
		___U24U24fieldU2D27_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D28_4)); }
	inline U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  get_U24U24fieldU2D28_4() const { return ___U24U24fieldU2D28_4; }
	inline U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611 * get_address_of_U24U24fieldU2D28_4() { return &___U24U24fieldU2D28_4; }
	inline void set_U24U24fieldU2D28_4(U24ArrayTypeU24256_t6264193FFFEE81B3F24E58F2F58D3CCFD2957611  value)
	{
		___U24U24fieldU2D28_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D29_5)); }
	inline U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA  get_U24U24fieldU2D29_5() const { return ___U24U24fieldU2D29_5; }
	inline U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA * get_address_of_U24U24fieldU2D29_5() { return &___U24U24fieldU2D29_5; }
	inline void set_U24U24fieldU2D29_5(U24ArrayTypeU241280_t07BD843025ECC2676C90DA85D9C7D398AA8A6DBA  value)
	{
		___U24U24fieldU2D29_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D43_6)); }
	inline U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  get_U24U24fieldU2D43_6() const { return ___U24U24fieldU2D43_6; }
	inline U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23 * get_address_of_U24U24fieldU2D43_6() { return &___U24U24fieldU2D43_6; }
	inline void set_U24U24fieldU2D43_6(U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  value)
	{
		___U24U24fieldU2D43_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_StaticFields, ___U24U24fieldU2D44_7)); }
	inline U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  get_U24U24fieldU2D44_7() const { return ___U24U24fieldU2D44_7; }
	inline U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23 * get_address_of_U24U24fieldU2D44_7() { return &___U24U24fieldU2D44_7; }
	inline void set_U24U24fieldU2D44_7(U24ArrayTypeU2412_t240C25AFE6D004BFFB06A982F7E42749780F8A23  value)
	{
		___U24U24fieldU2D44_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TABCDEB03D02815D5F6F33FF21BBF0880559C9DA4_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
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
#ifndef FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#define FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t31DF356A13590FED578C50963AE6A7DE1D2AF4A9, ___value___1)); }
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
#endif // FILEACCESS_T31DF356A13590FED578C50963AE6A7DE1D2AF4A9_H
#ifndef FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#define FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t02E675DEBF7B943D7860964036928636E5EB5D3F 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileMode_t02E675DEBF7B943D7860964036928636E5EB5D3F, ___value___1)); }
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
#endif // FILEMODE_T02E675DEBF7B943D7860964036928636E5EB5D3F_H
#ifndef FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#define FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t62D741153960719BA9D15F0F957072043079FA10 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileShare_t62D741153960719BA9D15F0F957072043079FA10, ___value___1)); }
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
#endif // FILESHARE_T62D741153960719BA9D15F0F957072043079FA10_H
#ifndef INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#define INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifndef AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#define AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_tDD7C55ABAF179BD6273AA3DC6AC59A265B006E17 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tDD7C55ABAF179BD6273AA3DC6AC59A265B006E17, ___value___1)); }
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
#endif // AUTHENTICATIONLEVEL_TDD7C55ABAF179BD6273AA3DC6AC59A265B006E17_H
#ifndef RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#define RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_TDDEB9F6EC2C3875C313750A5C3C33488A2F7A703_H
#ifndef RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#define RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T58BB862EF56F46A9518F8ACA413EF7D70238F1AD_H
#ifndef CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#define CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_tBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_tBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB, ___value___1)); }
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
#endif // CONFORMANCELEVEL_TBA47CA81D3009DF2AD8DC7CE769E6982D1EA96CB_H
#ifndef ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#define ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.EntityHandling
struct  EntityHandling_tF590E11CFBDA825293A1964A1234087114F4B98D 
{
public:
	// System.Int32 System.Xml.EntityHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EntityHandling_tF590E11CFBDA825293A1964A1234087114F4B98D, ___value___1)); }
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
#endif // ENTITYHANDLING_TF590E11CFBDA825293A1964A1234087114F4B98D_H
#ifndef FORMATTING_T2EC8ADDABC4B928B58EA5351103138C3579EC1E4_H
#define FORMATTING_T2EC8ADDABC4B928B58EA5351103138C3579EC1E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Formatting
struct  Formatting_t2EC8ADDABC4B928B58EA5351103138C3579EC1E4 
{
public:
	// System.Int32 System.Xml.Formatting::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Formatting_t2EC8ADDABC4B928B58EA5351103138C3579EC1E4, ___value___1)); }
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
#endif // FORMATTING_T2EC8ADDABC4B928B58EA5351103138C3579EC1E4_H
#ifndef NAMESPACEHANDLING_T2F02A279F33A1348B8E4AB835A10E0C06237939A_H
#define NAMESPACEHANDLING_T2F02A279F33A1348B8E4AB835A10E0C06237939A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t2F02A279F33A1348B8E4AB835A10E0C06237939A 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceHandling_t2F02A279F33A1348B8E4AB835A10E0C06237939A, ___value___1)); }
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
#endif // NAMESPACEHANDLING_T2F02A279F33A1348B8E4AB835A10E0C06237939A_H
#ifndef NEWLINEHANDLING_TC5B27F2FDF6CAA10BBBB61E1F03BAF891FF30FC9_H
#define NEWLINEHANDLING_TC5B27F2FDF6CAA10BBBB61E1F03BAF891FF30FC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_tC5B27F2FDF6CAA10BBBB61E1F03BAF891FF30FC9 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_tC5B27F2FDF6CAA10BBBB61E1F03BAF891FF30FC9, ___value___1)); }
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
#endif // NEWLINEHANDLING_TC5B27F2FDF6CAA10BBBB61E1F03BAF891FF30FC9_H
#ifndef READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#define READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ReadState
struct  ReadState_tEB8765F42B4F591ECA14C88336750FF5E198AAF1 
{
public:
	// System.Int32 System.Xml.ReadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReadState_tEB8765F42B4F591ECA14C88336750FF5E198AAF1, ___value___1)); }
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
#endif // READSTATE_TEB8765F42B4F591ECA14C88336750FF5E198AAF1_H
#ifndef WHITESPACEHANDLING_T49897E1FC16BB3483FAEE35AE0F396573EE124B5_H
#define WHITESPACEHANDLING_T49897E1FC16BB3483FAEE35AE0F396573EE124B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WhitespaceHandling
struct  WhitespaceHandling_t49897E1FC16BB3483FAEE35AE0F396573EE124B5 
{
public:
	// System.Int32 System.Xml.WhitespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WhitespaceHandling_t49897E1FC16BB3483FAEE35AE0F396573EE124B5, ___value___1)); }
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
#endif // WHITESPACEHANDLING_T49897E1FC16BB3483FAEE35AE0F396573EE124B5_H
#ifndef WRITESTATE_T77FFF7A78C6BEB469AF5904B89980997CDC8735F_H
#define WRITESTATE_T77FFF7A78C6BEB469AF5904B89980997CDC8735F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.WriteState
struct  WriteState_t77FFF7A78C6BEB469AF5904B89980997CDC8735F 
{
public:
	// System.Int32 System.Xml.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t77FFF7A78C6BEB469AF5904B89980997CDC8735F, ___value___1)); }
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
#endif // WRITESTATE_T77FFF7A78C6BEB469AF5904B89980997CDC8735F_H
#ifndef XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#define XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07  : public XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_7;

public:
	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07, ___data_7)); }
	inline String_t* get_data_7() const { return ___data_7; }
	inline String_t** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(String_t* value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier((&___data_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1733676F46934DE88DE8DEC9CF47190ABAE32F07_H
#ifndef XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#define XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlException
struct  XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.Int32 System.Xml.XmlException::lineNumber
	int32_t ___lineNumber_11;
	// System.Int32 System.Xml.XmlException::linePosition
	int32_t ___linePosition_12;
	// System.String System.Xml.XmlException::sourceUri
	String_t* ___sourceUri_13;
	// System.String System.Xml.XmlException::res
	String_t* ___res_14;
	// System.String[] System.Xml.XmlException::messages
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___messages_15;

public:
	inline static int32_t get_offset_of_lineNumber_11() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___lineNumber_11)); }
	inline int32_t get_lineNumber_11() const { return ___lineNumber_11; }
	inline int32_t* get_address_of_lineNumber_11() { return &___lineNumber_11; }
	inline void set_lineNumber_11(int32_t value)
	{
		___lineNumber_11 = value;
	}

	inline static int32_t get_offset_of_linePosition_12() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___linePosition_12)); }
	inline int32_t get_linePosition_12() const { return ___linePosition_12; }
	inline int32_t* get_address_of_linePosition_12() { return &___linePosition_12; }
	inline void set_linePosition_12(int32_t value)
	{
		___linePosition_12 = value;
	}

	inline static int32_t get_offset_of_sourceUri_13() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___sourceUri_13)); }
	inline String_t* get_sourceUri_13() const { return ___sourceUri_13; }
	inline String_t** get_address_of_sourceUri_13() { return &___sourceUri_13; }
	inline void set_sourceUri_13(String_t* value)
	{
		___sourceUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_13), value);
	}

	inline static int32_t get_offset_of_res_14() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___res_14)); }
	inline String_t* get_res_14() const { return ___res_14; }
	inline String_t** get_address_of_res_14() { return &___res_14; }
	inline void set_res_14(String_t* value)
	{
		___res_14 = value;
		Il2CppCodeGenWriteBarrier((&___res_14), value);
	}

	inline static int32_t get_offset_of_messages_15() { return static_cast<int32_t>(offsetof(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1, ___messages_15)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_messages_15() const { return ___messages_15; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_messages_15() { return &___messages_15; }
	inline void set_messages_15(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___messages_15 = value;
		Il2CppCodeGenWriteBarrier((&___messages_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLEXCEPTION_TC3F8843762100626FC686CF0862B5545BCB261A1_H
#ifndef XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#define XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA, ___value___1)); }
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
#endif // XMLNODETYPE_TF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_H
#ifndef XMLOUTPUTMETHOD_T0CB2FE34B2BA2EEE1FFF8F1F6B36A016C9EFC478_H
#define XMLOUTPUTMETHOD_T0CB2FE34B2BA2EEE1FFF8F1F6B36A016C9EFC478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t0CB2FE34B2BA2EEE1FFF8F1F6B36A016C9EFC478 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t0CB2FE34B2BA2EEE1FFF8F1F6B36A016C9EFC478, ___value___1)); }
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
#endif // XMLOUTPUTMETHOD_T0CB2FE34B2BA2EEE1FFF8F1F6B36A016C9EFC478_H
#ifndef XMLPROCESSINGINSTRUCTION_TD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF_H
#define XMLPROCESSINGINSTRUCTION_TD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlProcessingInstruction
struct  XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF  : public XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23
{
public:
	// System.String System.Xml.XmlProcessingInstruction::target
	String_t* ___target_7;
	// System.String System.Xml.XmlProcessingInstruction::data
	String_t* ___data_8;

public:
	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF, ___target_7)); }
	inline String_t* get_target_7() const { return ___target_7; }
	inline String_t** get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(String_t* value)
	{
		___target_7 = value;
		Il2CppCodeGenWriteBarrier((&___target_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF, ___data_8)); }
	inline String_t* get_data_8() const { return ___data_8; }
	inline String_t** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(String_t* value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPROCESSINGINSTRUCTION_TD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF_H
#ifndef COMMANDSTATE_T151B413EEEE8EFF4B4C087D57AE3D3F595D0DE72_H
#define COMMANDSTATE_T151B413EEEE8EFF4B4C087D57AE3D3F595D0DE72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport/CommandState
struct  CommandState_t151B413EEEE8EFF4B4C087D57AE3D3F595D0DE72 
{
public:
	// System.Int32 System.Xml.XmlReaderBinarySupport/CommandState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandState_t151B413EEEE8EFF4B4C087D57AE3D3F595D0DE72, ___value___1)); }
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
#endif // COMMANDSTATE_T151B413EEEE8EFF4B4C087D57AE3D3F595D0DE72_H
#ifndef XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#define XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSpace
struct  XmlSpace_t6A54DEF6D051D3E7B2509C3E101CE153C833F7E0 
{
public:
	// System.Int32 System.Xml.XmlSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSpace_t6A54DEF6D051D3E7B2509C3E101CE153C833F7E0, ___value___1)); }
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
#endif // XMLSPACE_T6A54DEF6D051D3E7B2509C3E101CE153C833F7E0_H
#ifndef XMLSTREAMREADER_T86B59C766839F8959042F327B7D4A2A3DBF9E27F_H
#define XMLSTREAMREADER_T86B59C766839F8959042F327B7D4A2A3DBF9E27F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlStreamReader
struct  XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F  : public NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8
{
public:
	// System.Xml.XmlInputStream System.Xml.XmlStreamReader::input
	XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * ___input_12;

public:
	inline static int32_t get_offset_of_input_12() { return static_cast<int32_t>(offsetof(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F, ___input_12)); }
	inline XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * get_input_12() const { return ___input_12; }
	inline XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 ** get_address_of_input_12() { return &___input_12; }
	inline void set_input_12(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * value)
	{
		___input_12 = value;
		Il2CppCodeGenWriteBarrier((&___input_12), value);
	}
};

struct XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_StaticFields
{
public:
	// System.Xml.XmlException System.Xml.XmlStreamReader::invalidDataException
	XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * ___invalidDataException_13;

public:
	inline static int32_t get_offset_of_invalidDataException_13() { return static_cast<int32_t>(offsetof(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_StaticFields, ___invalidDataException_13)); }
	inline XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * get_invalidDataException_13() const { return ___invalidDataException_13; }
	inline XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 ** get_address_of_invalidDataException_13() { return &___invalidDataException_13; }
	inline void set_invalidDataException_13(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * value)
	{
		___invalidDataException_13 = value;
		Il2CppCodeGenWriteBarrier((&___invalidDataException_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSTREAMREADER_T86B59C766839F8959042F327B7D4A2A3DBF9E27F_H
#ifndef XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#define XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlDeclState
struct  XmlDeclState_t1D1721A2F7823A6484A591BC8F6775DFEF3A13E0 
{
public:
	// System.Int32 System.Xml.XmlTextWriter/XmlDeclState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDeclState_t1D1721A2F7823A6484A591BC8F6775DFEF3A13E0, ___value___1)); }
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
#endif // XMLDECLSTATE_T1D1721A2F7823A6484A591BC8F6775DFEF3A13E0_H
#ifndef XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#define XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTokenizedType
struct  XmlTokenizedType_t8CDA56668C31147E44A370167F11C0F6ACE7E338 
{
public:
	// System.Int32 System.Xml.XmlTokenizedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlTokenizedType_t8CDA56668C31147E44A370167F11C0F6ACE7E338, ___value___1)); }
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
#endif // XMLTOKENIZEDTYPE_T8CDA56668C31147E44A370167F11C0F6ACE7E338_H
#ifndef XMLTEXTREADER_TD979FF6B5FEF83373F4D669070FDD627F2447BCD_H
#define XMLTEXTREADER_TD979FF6B5FEF83373F4D669070FDD627F2447BCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml2.XmlTextReader
struct  XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD  : public XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293
{
public:
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * ___cursorToken_3;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * ___currentToken_4;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_tFAEEDCB34D0C2C4A330EA399EFF9E166D1C8B7F2 * ___currentAttributeToken_5;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * ___currentAttributeValueToken_6;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t775B2DAE0BCFA2CA1F941E56B78921A90F82EDF5* ___attributeTokens_7;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_tAC00CA31D3E381773C0EA56FCAF3FFA3AD87546E* ___attributeValueTokens_8;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute_9;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue_10;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount_11;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * ___parserContext_12;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_13;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * ___nsmgr_14;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState_15;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset_16;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth_17;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth_18;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp_19;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope_20;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_tDC731B271CA71CDD2CCAA81DD046275A56A60BAE* ___elementNames_21;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos_22;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot_23;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone_24;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference_25;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName_26;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t * ___valueBuffer_27;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___reader_28;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___peekChars_29;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex_30;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength_31;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex_32;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag_33;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line_34;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column_35;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber_36;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition_37;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo_38;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType_39;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState_40;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel_41;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress_42;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * ___binaryCharGetter_43;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces_44;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling_45;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___resolver_46;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization_47;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters_48;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd_49;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput_50;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling_51;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * ___whitespacePool_52;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___whitespaceCache_53;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_tD410944C4A9AE89256F67B1E85F27375A0ABA100 * ___stateStack_54;

public:
	inline static int32_t get_offset_of_cursorToken_3() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___cursorToken_3)); }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * get_cursorToken_3() const { return ___cursorToken_3; }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 ** get_address_of_cursorToken_3() { return &___cursorToken_3; }
	inline void set_cursorToken_3(XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * value)
	{
		___cursorToken_3 = value;
		Il2CppCodeGenWriteBarrier((&___cursorToken_3), value);
	}

	inline static int32_t get_offset_of_currentToken_4() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentToken_4)); }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * get_currentToken_4() const { return ___currentToken_4; }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 ** get_address_of_currentToken_4() { return &___currentToken_4; }
	inline void set_currentToken_4(XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * value)
	{
		___currentToken_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentToken_4), value);
	}

	inline static int32_t get_offset_of_currentAttributeToken_5() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentAttributeToken_5)); }
	inline XmlAttributeTokenInfo_tFAEEDCB34D0C2C4A330EA399EFF9E166D1C8B7F2 * get_currentAttributeToken_5() const { return ___currentAttributeToken_5; }
	inline XmlAttributeTokenInfo_tFAEEDCB34D0C2C4A330EA399EFF9E166D1C8B7F2 ** get_address_of_currentAttributeToken_5() { return &___currentAttributeToken_5; }
	inline void set_currentAttributeToken_5(XmlAttributeTokenInfo_tFAEEDCB34D0C2C4A330EA399EFF9E166D1C8B7F2 * value)
	{
		___currentAttributeToken_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttributeToken_5), value);
	}

	inline static int32_t get_offset_of_currentAttributeValueToken_6() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentAttributeValueToken_6)); }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * get_currentAttributeValueToken_6() const { return ___currentAttributeValueToken_6; }
	inline XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 ** get_address_of_currentAttributeValueToken_6() { return &___currentAttributeValueToken_6; }
	inline void set_currentAttributeValueToken_6(XmlTokenInfo_t2A1A819C64EA244AED28E17A84BA664B876EF3A8 * value)
	{
		___currentAttributeValueToken_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentAttributeValueToken_6), value);
	}

	inline static int32_t get_offset_of_attributeTokens_7() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___attributeTokens_7)); }
	inline XmlAttributeTokenInfoU5BU5D_t775B2DAE0BCFA2CA1F941E56B78921A90F82EDF5* get_attributeTokens_7() const { return ___attributeTokens_7; }
	inline XmlAttributeTokenInfoU5BU5D_t775B2DAE0BCFA2CA1F941E56B78921A90F82EDF5** get_address_of_attributeTokens_7() { return &___attributeTokens_7; }
	inline void set_attributeTokens_7(XmlAttributeTokenInfoU5BU5D_t775B2DAE0BCFA2CA1F941E56B78921A90F82EDF5* value)
	{
		___attributeTokens_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributeTokens_7), value);
	}

	inline static int32_t get_offset_of_attributeValueTokens_8() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___attributeValueTokens_8)); }
	inline XmlTokenInfoU5BU5D_tAC00CA31D3E381773C0EA56FCAF3FFA3AD87546E* get_attributeValueTokens_8() const { return ___attributeValueTokens_8; }
	inline XmlTokenInfoU5BU5D_tAC00CA31D3E381773C0EA56FCAF3FFA3AD87546E** get_address_of_attributeValueTokens_8() { return &___attributeValueTokens_8; }
	inline void set_attributeValueTokens_8(XmlTokenInfoU5BU5D_tAC00CA31D3E381773C0EA56FCAF3FFA3AD87546E* value)
	{
		___attributeValueTokens_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributeValueTokens_8), value);
	}

	inline static int32_t get_offset_of_currentAttribute_9() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentAttribute_9)); }
	inline int32_t get_currentAttribute_9() const { return ___currentAttribute_9; }
	inline int32_t* get_address_of_currentAttribute_9() { return &___currentAttribute_9; }
	inline void set_currentAttribute_9(int32_t value)
	{
		___currentAttribute_9 = value;
	}

	inline static int32_t get_offset_of_currentAttributeValue_10() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentAttributeValue_10)); }
	inline int32_t get_currentAttributeValue_10() const { return ___currentAttributeValue_10; }
	inline int32_t* get_address_of_currentAttributeValue_10() { return &___currentAttributeValue_10; }
	inline void set_currentAttributeValue_10(int32_t value)
	{
		___currentAttributeValue_10 = value;
	}

	inline static int32_t get_offset_of_attributeCount_11() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___attributeCount_11)); }
	inline int32_t get_attributeCount_11() const { return ___attributeCount_11; }
	inline int32_t* get_address_of_attributeCount_11() { return &___attributeCount_11; }
	inline void set_attributeCount_11(int32_t value)
	{
		___attributeCount_11 = value;
	}

	inline static int32_t get_offset_of_parserContext_12() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___parserContext_12)); }
	inline XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * get_parserContext_12() const { return ___parserContext_12; }
	inline XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 ** get_address_of_parserContext_12() { return &___parserContext_12; }
	inline void set_parserContext_12(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * value)
	{
		___parserContext_12 = value;
		Il2CppCodeGenWriteBarrier((&___parserContext_12), value);
	}

	inline static int32_t get_offset_of_nameTable_13() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___nameTable_13)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_13() const { return ___nameTable_13; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_13() { return &___nameTable_13; }
	inline void set_nameTable_13(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_13), value);
	}

	inline static int32_t get_offset_of_nsmgr_14() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___nsmgr_14)); }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * get_nsmgr_14() const { return ___nsmgr_14; }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 ** get_address_of_nsmgr_14() { return &___nsmgr_14; }
	inline void set_nsmgr_14(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * value)
	{
		___nsmgr_14 = value;
		Il2CppCodeGenWriteBarrier((&___nsmgr_14), value);
	}

	inline static int32_t get_offset_of_readState_15() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___readState_15)); }
	inline int32_t get_readState_15() const { return ___readState_15; }
	inline int32_t* get_address_of_readState_15() { return &___readState_15; }
	inline void set_readState_15(int32_t value)
	{
		___readState_15 = value;
	}

	inline static int32_t get_offset_of_disallowReset_16() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___disallowReset_16)); }
	inline bool get_disallowReset_16() const { return ___disallowReset_16; }
	inline bool* get_address_of_disallowReset_16() { return &___disallowReset_16; }
	inline void set_disallowReset_16(bool value)
	{
		___disallowReset_16 = value;
	}

	inline static int32_t get_offset_of_depth_17() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___depth_17)); }
	inline int32_t get_depth_17() const { return ___depth_17; }
	inline int32_t* get_address_of_depth_17() { return &___depth_17; }
	inline void set_depth_17(int32_t value)
	{
		___depth_17 = value;
	}

	inline static int32_t get_offset_of_elementDepth_18() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___elementDepth_18)); }
	inline int32_t get_elementDepth_18() const { return ___elementDepth_18; }
	inline int32_t* get_address_of_elementDepth_18() { return &___elementDepth_18; }
	inline void set_elementDepth_18(int32_t value)
	{
		___elementDepth_18 = value;
	}

	inline static int32_t get_offset_of_depthUp_19() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___depthUp_19)); }
	inline bool get_depthUp_19() const { return ___depthUp_19; }
	inline bool* get_address_of_depthUp_19() { return &___depthUp_19; }
	inline void set_depthUp_19(bool value)
	{
		___depthUp_19 = value;
	}

	inline static int32_t get_offset_of_popScope_20() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___popScope_20)); }
	inline bool get_popScope_20() const { return ___popScope_20; }
	inline bool* get_address_of_popScope_20() { return &___popScope_20; }
	inline void set_popScope_20(bool value)
	{
		___popScope_20 = value;
	}

	inline static int32_t get_offset_of_elementNames_21() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___elementNames_21)); }
	inline TagNameU5BU5D_tDC731B271CA71CDD2CCAA81DD046275A56A60BAE* get_elementNames_21() const { return ___elementNames_21; }
	inline TagNameU5BU5D_tDC731B271CA71CDD2CCAA81DD046275A56A60BAE** get_address_of_elementNames_21() { return &___elementNames_21; }
	inline void set_elementNames_21(TagNameU5BU5D_tDC731B271CA71CDD2CCAA81DD046275A56A60BAE* value)
	{
		___elementNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___elementNames_21), value);
	}

	inline static int32_t get_offset_of_elementNameStackPos_22() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___elementNameStackPos_22)); }
	inline int32_t get_elementNameStackPos_22() const { return ___elementNameStackPos_22; }
	inline int32_t* get_address_of_elementNameStackPos_22() { return &___elementNameStackPos_22; }
	inline void set_elementNameStackPos_22(int32_t value)
	{
		___elementNameStackPos_22 = value;
	}

	inline static int32_t get_offset_of_allowMultipleRoot_23() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___allowMultipleRoot_23)); }
	inline bool get_allowMultipleRoot_23() const { return ___allowMultipleRoot_23; }
	inline bool* get_address_of_allowMultipleRoot_23() { return &___allowMultipleRoot_23; }
	inline void set_allowMultipleRoot_23(bool value)
	{
		___allowMultipleRoot_23 = value;
	}

	inline static int32_t get_offset_of_isStandalone_24() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___isStandalone_24)); }
	inline bool get_isStandalone_24() const { return ___isStandalone_24; }
	inline bool* get_address_of_isStandalone_24() { return &___isStandalone_24; }
	inline void set_isStandalone_24(bool value)
	{
		___isStandalone_24 = value;
	}

	inline static int32_t get_offset_of_returnEntityReference_25() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___returnEntityReference_25)); }
	inline bool get_returnEntityReference_25() const { return ___returnEntityReference_25; }
	inline bool* get_address_of_returnEntityReference_25() { return &___returnEntityReference_25; }
	inline void set_returnEntityReference_25(bool value)
	{
		___returnEntityReference_25 = value;
	}

	inline static int32_t get_offset_of_entityReferenceName_26() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___entityReferenceName_26)); }
	inline String_t* get_entityReferenceName_26() const { return ___entityReferenceName_26; }
	inline String_t** get_address_of_entityReferenceName_26() { return &___entityReferenceName_26; }
	inline void set_entityReferenceName_26(String_t* value)
	{
		___entityReferenceName_26 = value;
		Il2CppCodeGenWriteBarrier((&___entityReferenceName_26), value);
	}

	inline static int32_t get_offset_of_valueBuffer_27() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___valueBuffer_27)); }
	inline StringBuilder_t * get_valueBuffer_27() const { return ___valueBuffer_27; }
	inline StringBuilder_t ** get_address_of_valueBuffer_27() { return &___valueBuffer_27; }
	inline void set_valueBuffer_27(StringBuilder_t * value)
	{
		___valueBuffer_27 = value;
		Il2CppCodeGenWriteBarrier((&___valueBuffer_27), value);
	}

	inline static int32_t get_offset_of_reader_28() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___reader_28)); }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * get_reader_28() const { return ___reader_28; }
	inline TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 ** get_address_of_reader_28() { return &___reader_28; }
	inline void set_reader_28(TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * value)
	{
		___reader_28 = value;
		Il2CppCodeGenWriteBarrier((&___reader_28), value);
	}

	inline static int32_t get_offset_of_peekChars_29() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___peekChars_29)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_peekChars_29() const { return ___peekChars_29; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_peekChars_29() { return &___peekChars_29; }
	inline void set_peekChars_29(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___peekChars_29 = value;
		Il2CppCodeGenWriteBarrier((&___peekChars_29), value);
	}

	inline static int32_t get_offset_of_peekCharsIndex_30() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___peekCharsIndex_30)); }
	inline int32_t get_peekCharsIndex_30() const { return ___peekCharsIndex_30; }
	inline int32_t* get_address_of_peekCharsIndex_30() { return &___peekCharsIndex_30; }
	inline void set_peekCharsIndex_30(int32_t value)
	{
		___peekCharsIndex_30 = value;
	}

	inline static int32_t get_offset_of_peekCharsLength_31() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___peekCharsLength_31)); }
	inline int32_t get_peekCharsLength_31() const { return ___peekCharsLength_31; }
	inline int32_t* get_address_of_peekCharsLength_31() { return &___peekCharsLength_31; }
	inline void set_peekCharsLength_31(int32_t value)
	{
		___peekCharsLength_31 = value;
	}

	inline static int32_t get_offset_of_curNodePeekIndex_32() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___curNodePeekIndex_32)); }
	inline int32_t get_curNodePeekIndex_32() const { return ___curNodePeekIndex_32; }
	inline int32_t* get_address_of_curNodePeekIndex_32() { return &___curNodePeekIndex_32; }
	inline void set_curNodePeekIndex_32(int32_t value)
	{
		___curNodePeekIndex_32 = value;
	}

	inline static int32_t get_offset_of_preserveCurrentTag_33() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___preserveCurrentTag_33)); }
	inline bool get_preserveCurrentTag_33() const { return ___preserveCurrentTag_33; }
	inline bool* get_address_of_preserveCurrentTag_33() { return &___preserveCurrentTag_33; }
	inline void set_preserveCurrentTag_33(bool value)
	{
		___preserveCurrentTag_33 = value;
	}

	inline static int32_t get_offset_of_line_34() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___line_34)); }
	inline int32_t get_line_34() const { return ___line_34; }
	inline int32_t* get_address_of_line_34() { return &___line_34; }
	inline void set_line_34(int32_t value)
	{
		___line_34 = value;
	}

	inline static int32_t get_offset_of_column_35() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___column_35)); }
	inline int32_t get_column_35() const { return ___column_35; }
	inline int32_t* get_address_of_column_35() { return &___column_35; }
	inline void set_column_35(int32_t value)
	{
		___column_35 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLineNumber_36() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentLinkedNodeLineNumber_36)); }
	inline int32_t get_currentLinkedNodeLineNumber_36() const { return ___currentLinkedNodeLineNumber_36; }
	inline int32_t* get_address_of_currentLinkedNodeLineNumber_36() { return &___currentLinkedNodeLineNumber_36; }
	inline void set_currentLinkedNodeLineNumber_36(int32_t value)
	{
		___currentLinkedNodeLineNumber_36 = value;
	}

	inline static int32_t get_offset_of_currentLinkedNodeLinePosition_37() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentLinkedNodeLinePosition_37)); }
	inline int32_t get_currentLinkedNodeLinePosition_37() const { return ___currentLinkedNodeLinePosition_37; }
	inline int32_t* get_address_of_currentLinkedNodeLinePosition_37() { return &___currentLinkedNodeLinePosition_37; }
	inline void set_currentLinkedNodeLinePosition_37(int32_t value)
	{
		___currentLinkedNodeLinePosition_37 = value;
	}

	inline static int32_t get_offset_of_useProceedingLineInfo_38() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___useProceedingLineInfo_38)); }
	inline bool get_useProceedingLineInfo_38() const { return ___useProceedingLineInfo_38; }
	inline bool* get_address_of_useProceedingLineInfo_38() { return &___useProceedingLineInfo_38; }
	inline void set_useProceedingLineInfo_38(bool value)
	{
		___useProceedingLineInfo_38 = value;
	}

	inline static int32_t get_offset_of_startNodeType_39() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___startNodeType_39)); }
	inline int32_t get_startNodeType_39() const { return ___startNodeType_39; }
	inline int32_t* get_address_of_startNodeType_39() { return &___startNodeType_39; }
	inline void set_startNodeType_39(int32_t value)
	{
		___startNodeType_39 = value;
	}

	inline static int32_t get_offset_of_currentState_40() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___currentState_40)); }
	inline int32_t get_currentState_40() const { return ___currentState_40; }
	inline int32_t* get_address_of_currentState_40() { return &___currentState_40; }
	inline void set_currentState_40(int32_t value)
	{
		___currentState_40 = value;
	}

	inline static int32_t get_offset_of_nestLevel_41() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___nestLevel_41)); }
	inline int32_t get_nestLevel_41() const { return ___nestLevel_41; }
	inline int32_t* get_address_of_nestLevel_41() { return &___nestLevel_41; }
	inline void set_nestLevel_41(int32_t value)
	{
		___nestLevel_41 = value;
	}

	inline static int32_t get_offset_of_readCharsInProgress_42() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___readCharsInProgress_42)); }
	inline bool get_readCharsInProgress_42() const { return ___readCharsInProgress_42; }
	inline bool* get_address_of_readCharsInProgress_42() { return &___readCharsInProgress_42; }
	inline void set_readCharsInProgress_42(bool value)
	{
		___readCharsInProgress_42 = value;
	}

	inline static int32_t get_offset_of_binaryCharGetter_43() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___binaryCharGetter_43)); }
	inline CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * get_binaryCharGetter_43() const { return ___binaryCharGetter_43; }
	inline CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B ** get_address_of_binaryCharGetter_43() { return &___binaryCharGetter_43; }
	inline void set_binaryCharGetter_43(CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * value)
	{
		___binaryCharGetter_43 = value;
		Il2CppCodeGenWriteBarrier((&___binaryCharGetter_43), value);
	}

	inline static int32_t get_offset_of_namespaces_44() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___namespaces_44)); }
	inline bool get_namespaces_44() const { return ___namespaces_44; }
	inline bool* get_address_of_namespaces_44() { return &___namespaces_44; }
	inline void set_namespaces_44(bool value)
	{
		___namespaces_44 = value;
	}

	inline static int32_t get_offset_of_whitespaceHandling_45() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___whitespaceHandling_45)); }
	inline int32_t get_whitespaceHandling_45() const { return ___whitespaceHandling_45; }
	inline int32_t* get_address_of_whitespaceHandling_45() { return &___whitespaceHandling_45; }
	inline void set_whitespaceHandling_45(int32_t value)
	{
		___whitespaceHandling_45 = value;
	}

	inline static int32_t get_offset_of_resolver_46() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___resolver_46)); }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * get_resolver_46() const { return ___resolver_46; }
	inline XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C ** get_address_of_resolver_46() { return &___resolver_46; }
	inline void set_resolver_46(XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * value)
	{
		___resolver_46 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_46), value);
	}

	inline static int32_t get_offset_of_normalization_47() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___normalization_47)); }
	inline bool get_normalization_47() const { return ___normalization_47; }
	inline bool* get_address_of_normalization_47() { return &___normalization_47; }
	inline void set_normalization_47(bool value)
	{
		___normalization_47 = value;
	}

	inline static int32_t get_offset_of_checkCharacters_48() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___checkCharacters_48)); }
	inline bool get_checkCharacters_48() const { return ___checkCharacters_48; }
	inline bool* get_address_of_checkCharacters_48() { return &___checkCharacters_48; }
	inline void set_checkCharacters_48(bool value)
	{
		___checkCharacters_48 = value;
	}

	inline static int32_t get_offset_of_prohibitDtd_49() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___prohibitDtd_49)); }
	inline bool get_prohibitDtd_49() const { return ___prohibitDtd_49; }
	inline bool* get_address_of_prohibitDtd_49() { return &___prohibitDtd_49; }
	inline void set_prohibitDtd_49(bool value)
	{
		___prohibitDtd_49 = value;
	}

	inline static int32_t get_offset_of_closeInput_50() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___closeInput_50)); }
	inline bool get_closeInput_50() const { return ___closeInput_50; }
	inline bool* get_address_of_closeInput_50() { return &___closeInput_50; }
	inline void set_closeInput_50(bool value)
	{
		___closeInput_50 = value;
	}

	inline static int32_t get_offset_of_entityHandling_51() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___entityHandling_51)); }
	inline int32_t get_entityHandling_51() const { return ___entityHandling_51; }
	inline int32_t* get_address_of_entityHandling_51() { return &___entityHandling_51; }
	inline void set_entityHandling_51(int32_t value)
	{
		___entityHandling_51 = value;
	}

	inline static int32_t get_offset_of_whitespacePool_52() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___whitespacePool_52)); }
	inline NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * get_whitespacePool_52() const { return ___whitespacePool_52; }
	inline NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 ** get_address_of_whitespacePool_52() { return &___whitespacePool_52; }
	inline void set_whitespacePool_52(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * value)
	{
		___whitespacePool_52 = value;
		Il2CppCodeGenWriteBarrier((&___whitespacePool_52), value);
	}

	inline static int32_t get_offset_of_whitespaceCache_53() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___whitespaceCache_53)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_whitespaceCache_53() const { return ___whitespaceCache_53; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_whitespaceCache_53() { return &___whitespaceCache_53; }
	inline void set_whitespaceCache_53(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___whitespaceCache_53 = value;
		Il2CppCodeGenWriteBarrier((&___whitespaceCache_53), value);
	}

	inline static int32_t get_offset_of_stateStack_54() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD, ___stateStack_54)); }
	inline DtdInputStateStack_tD410944C4A9AE89256F67B1E85F27375A0ABA100 * get_stateStack_54() const { return ___stateStack_54; }
	inline DtdInputStateStack_tD410944C4A9AE89256F67B1E85F27375A0ABA100 ** get_address_of_stateStack_54() { return &___stateStack_54; }
	inline void set_stateStack_54(DtdInputStateStack_tD410944C4A9AE89256F67B1E85F27375A0ABA100 * value)
	{
		___stateStack_54 = value;
		Il2CppCodeGenWriteBarrier((&___stateStack_54), value);
	}
};

struct XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map51
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map51_55;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map52
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map52_56;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map51_55() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_StaticFields, ___U3CU3Ef__switchU24map51_55)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map51_55() const { return ___U3CU3Ef__switchU24map51_55; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map51_55() { return &___U3CU3Ef__switchU24map51_55; }
	inline void set_U3CU3Ef__switchU24map51_55(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map51_55 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map51_55), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map52_56() { return static_cast<int32_t>(offsetof(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_StaticFields, ___U3CU3Ef__switchU24map52_56)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map52_56() const { return ___U3CU3Ef__switchU24map52_56; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map52_56() { return &___U3CU3Ef__switchU24map52_56; }
	inline void set_U3CU3Ef__switchU24map52_56(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map52_56 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map52_56), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_TD979FF6B5FEF83373F4D669070FDD627F2447BCD_H
#ifndef ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#define ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4  : public ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T34548D25A41CBE2BC60196610CCE14D9D56892D4_H
#ifndef FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#define FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_7)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T7540109F33E9AA6431B9316FD268BA7E9F012AF4_H
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
#ifndef WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#define WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebRequest
struct  WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399  : public MarshalByRefObject_t05F62A8AC86E36BAE3063CA28097945DE9E179C4
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;

public:
	inline static int32_t get_offset_of_authentication_level_4() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399, ___authentication_level_4)); }
	inline int32_t get_authentication_level_4() const { return ___authentication_level_4; }
	inline int32_t* get_address_of_authentication_level_4() { return &___authentication_level_4; }
	inline void set_authentication_level_4(int32_t value)
	{
		___authentication_level_4 = value;
	}
};

struct WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	RuntimeObject* ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	RuntimeObject * ___lockobj_5;

public:
	inline static int32_t get_offset_of_prefixes_1() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___prefixes_1)); }
	inline HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * get_prefixes_1() const { return ___prefixes_1; }
	inline HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 ** get_address_of_prefixes_1() { return &___prefixes_1; }
	inline void set_prefixes_1(HybridDictionary_t5AD529BFF21493C38235716C9AD62F1F7623C747 * value)
	{
		___prefixes_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefixes_1), value);
	}

	inline static int32_t get_offset_of_isDefaultWebProxySet_2() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___isDefaultWebProxySet_2)); }
	inline bool get_isDefaultWebProxySet_2() const { return ___isDefaultWebProxySet_2; }
	inline bool* get_address_of_isDefaultWebProxySet_2() { return &___isDefaultWebProxySet_2; }
	inline void set_isDefaultWebProxySet_2(bool value)
	{
		___isDefaultWebProxySet_2 = value;
	}

	inline static int32_t get_offset_of_defaultWebProxy_3() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___defaultWebProxy_3)); }
	inline RuntimeObject* get_defaultWebProxy_3() const { return ___defaultWebProxy_3; }
	inline RuntimeObject** get_address_of_defaultWebProxy_3() { return &___defaultWebProxy_3; }
	inline void set_defaultWebProxy_3(RuntimeObject* value)
	{
		___defaultWebProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultWebProxy_3), value);
	}

	inline static int32_t get_offset_of_lockobj_5() { return static_cast<int32_t>(offsetof(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_StaticFields, ___lockobj_5)); }
	inline RuntimeObject * get_lockobj_5() const { return ___lockobj_5; }
	inline RuntimeObject ** get_address_of_lockobj_5() { return &___lockobj_5; }
	inline void set_lockobj_5(RuntimeObject * value)
	{
		___lockobj_5 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUEST_T079731BC640578743ADC705570EAC33A9BCFB399_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* ___EmptyTypes_2;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterAttribute_3;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterName_4;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * ___FilterNameIgnoreCase_5;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_6;

public:
	inline static int32_t get_offset_of_Delimiter_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_1)); }
	inline Il2CppChar get_Delimiter_1() const { return ___Delimiter_1; }
	inline Il2CppChar* get_address_of_Delimiter_1() { return &___Delimiter_1; }
	inline void set_Delimiter_1(Il2CppChar value)
	{
		___Delimiter_1 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_2)); }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* get_EmptyTypes_2() const { return ___EmptyTypes_2; }
	inline TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532** get_address_of_EmptyTypes_2() { return &___EmptyTypes_2; }
	inline void set_EmptyTypes_2(TypeU5BU5D_tEF927658123F6CD4274B971442504A42AB6DE532* value)
	{
		___EmptyTypes_2 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_2), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_3)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterAttribute_3() const { return ___FilterAttribute_3; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterAttribute_3() { return &___FilterAttribute_3; }
	inline void set_FilterAttribute_3(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterAttribute_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_3), value);
	}

	inline static int32_t get_offset_of_FilterName_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_4)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterName_4() const { return ___FilterName_4; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterName_4() { return &___FilterName_4; }
	inline void set_FilterName_4(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterName_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_4), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_5)); }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * get_FilterNameIgnoreCase_5() const { return ___FilterNameIgnoreCase_5; }
	inline MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE ** get_address_of_FilterNameIgnoreCase_5() { return &___FilterNameIgnoreCase_5; }
	inline void set_FilterNameIgnoreCase_5(MemberFilter_t0471813A7FF5255D21A8EA144C5CCF3325274CDE * value)
	{
		___FilterNameIgnoreCase_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_5), value);
	}

	inline static int32_t get_offset_of_Missing_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_6)); }
	inline RuntimeObject * get_Missing_6() const { return ___Missing_6; }
	inline RuntimeObject ** get_address_of_Missing_6() { return &___Missing_6; }
	inline void set_Missing_6(RuntimeObject * value)
	{
		___Missing_6 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#define XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlParserContext
struct  XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI_0;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName_1;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding_2;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset_3;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * ___namespaceManager_4;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable_5;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID_6;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID_7;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang_8;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace_9;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___contextItems_10;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount_11;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * ___dtd_12;

public:
	inline static int32_t get_offset_of_baseURI_0() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___baseURI_0)); }
	inline String_t* get_baseURI_0() const { return ___baseURI_0; }
	inline String_t** get_address_of_baseURI_0() { return &___baseURI_0; }
	inline void set_baseURI_0(String_t* value)
	{
		___baseURI_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_0), value);
	}

	inline static int32_t get_offset_of_docTypeName_1() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___docTypeName_1)); }
	inline String_t* get_docTypeName_1() const { return ___docTypeName_1; }
	inline String_t** get_address_of_docTypeName_1() { return &___docTypeName_1; }
	inline void set_docTypeName_1(String_t* value)
	{
		___docTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_1), value);
	}

	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___encoding_2)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}

	inline static int32_t get_offset_of_internalSubset_3() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___internalSubset_3)); }
	inline String_t* get_internalSubset_3() const { return ___internalSubset_3; }
	inline String_t** get_address_of_internalSubset_3() { return &___internalSubset_3; }
	inline void set_internalSubset_3(String_t* value)
	{
		___internalSubset_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSubset_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_nameTable_5() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___nameTable_5)); }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * get_nameTable_5() const { return ___nameTable_5; }
	inline XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B ** get_address_of_nameTable_5() { return &___nameTable_5; }
	inline void set_nameTable_5(XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * value)
	{
		___nameTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_5), value);
	}

	inline static int32_t get_offset_of_publicID_6() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___publicID_6)); }
	inline String_t* get_publicID_6() const { return ___publicID_6; }
	inline String_t** get_address_of_publicID_6() { return &___publicID_6; }
	inline void set_publicID_6(String_t* value)
	{
		___publicID_6 = value;
		Il2CppCodeGenWriteBarrier((&___publicID_6), value);
	}

	inline static int32_t get_offset_of_systemID_7() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___systemID_7)); }
	inline String_t* get_systemID_7() const { return ___systemID_7; }
	inline String_t** get_address_of_systemID_7() { return &___systemID_7; }
	inline void set_systemID_7(String_t* value)
	{
		___systemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___systemID_7), value);
	}

	inline static int32_t get_offset_of_xmlLang_8() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___xmlLang_8)); }
	inline String_t* get_xmlLang_8() const { return ___xmlLang_8; }
	inline String_t** get_address_of_xmlLang_8() { return &___xmlLang_8; }
	inline void set_xmlLang_8(String_t* value)
	{
		___xmlLang_8 = value;
		Il2CppCodeGenWriteBarrier((&___xmlLang_8), value);
	}

	inline static int32_t get_offset_of_xmlSpace_9() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___xmlSpace_9)); }
	inline int32_t get_xmlSpace_9() const { return ___xmlSpace_9; }
	inline int32_t* get_address_of_xmlSpace_9() { return &___xmlSpace_9; }
	inline void set_xmlSpace_9(int32_t value)
	{
		___xmlSpace_9 = value;
	}

	inline static int32_t get_offset_of_contextItems_10() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___contextItems_10)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_contextItems_10() const { return ___contextItems_10; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_contextItems_10() { return &___contextItems_10; }
	inline void set_contextItems_10(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___contextItems_10 = value;
		Il2CppCodeGenWriteBarrier((&___contextItems_10), value);
	}

	inline static int32_t get_offset_of_contextItemCount_11() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___contextItemCount_11)); }
	inline int32_t get_contextItemCount_11() const { return ___contextItemCount_11; }
	inline int32_t* get_address_of_contextItemCount_11() { return &___contextItemCount_11; }
	inline void set_contextItemCount_11(int32_t value)
	{
		___contextItemCount_11 = value;
	}

	inline static int32_t get_offset_of_dtd_12() { return static_cast<int32_t>(offsetof(XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14, ___dtd_12)); }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * get_dtd_12() const { return ___dtd_12; }
	inline DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E ** get_address_of_dtd_12() { return &___dtd_12; }
	inline void set_dtd_12(DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * value)
	{
		___dtd_12 = value;
		Il2CppCodeGenWriteBarrier((&___dtd_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLPARSERCONTEXT_TFCFB3C705A296076573E3517AAD1F1C187DACB14_H
#ifndef XMLREADERBINARYSUPPORT_TACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A_H
#define XMLREADERBINARYSUPPORT_TACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport
struct  XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A  : public RuntimeObject
{
public:
	// System.Xml.XmlReader System.Xml.XmlReaderBinarySupport::reader
	XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader_0;
	// System.Int32 System.Xml.XmlReaderBinarySupport::base64CacheStartsAt
	int32_t ___base64CacheStartsAt_1;
	// System.Xml.XmlReaderBinarySupport/CommandState System.Xml.XmlReaderBinarySupport::state
	int32_t ___state_2;
	// System.Boolean System.Xml.XmlReaderBinarySupport::hasCache
	bool ___hasCache_3;
	// System.Boolean System.Xml.XmlReaderBinarySupport::dontReset
	bool ___dontReset_4;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A, ___reader_0)); }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * get_reader_0() const { return ___reader_0; }
	inline XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_base64CacheStartsAt_1() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A, ___base64CacheStartsAt_1)); }
	inline int32_t get_base64CacheStartsAt_1() const { return ___base64CacheStartsAt_1; }
	inline int32_t* get_address_of_base64CacheStartsAt_1() { return &___base64CacheStartsAt_1; }
	inline void set_base64CacheStartsAt_1(int32_t value)
	{
		___base64CacheStartsAt_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_hasCache_3() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A, ___hasCache_3)); }
	inline bool get_hasCache_3() const { return ___hasCache_3; }
	inline bool* get_address_of_hasCache_3() { return &___hasCache_3; }
	inline void set_hasCache_3(bool value)
	{
		___hasCache_3 = value;
	}

	inline static int32_t get_offset_of_dontReset_4() { return static_cast<int32_t>(offsetof(XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A, ___dontReset_4)); }
	inline bool get_dontReset_4() const { return ___dontReset_4; }
	inline bool* get_address_of_dontReset_4() { return &___dontReset_4; }
	inline void set_dontReset_4(bool value)
	{
		___dontReset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERBINARYSUPPORT_TACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A_H
#ifndef XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#define XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderSettings
struct  XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlReaderSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::conformance
	int32_t ___conformance_1;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_conformance_1() { return static_cast<int32_t>(offsetof(XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB, ___conformance_1)); }
	inline int32_t get_conformance_1() const { return ___conformance_1; }
	inline int32_t* get_address_of_conformance_1() { return &___conformance_1; }
	inline void set_conformance_1(int32_t value)
	{
		___conformance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADERSETTINGS_TCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB_H
#ifndef XMLSIGNIFICANTWHITESPACE_T7E151A744639F09EDE3057CA5B18C4E1F6A50103_H
#define XMLSIGNIFICANTWHITESPACE_T7E151A744639F09EDE3057CA5B18C4E1F6A50103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSignificantWhitespace
struct  XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103  : public XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSIGNIFICANTWHITESPACE_T7E151A744639F09EDE3057CA5B18C4E1F6A50103_H
#ifndef XMLTEXT_T5F596B3ED20FB449A77E07BFA11CCE56E36E9D89_H
#define XMLTEXT_T5F596B3ED20FB449A77E07BFA11CCE56E36E9D89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlText
struct  XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89  : public XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXT_T5F596B3ED20FB449A77E07BFA11CCE56E36E9D89_H
#ifndef XMLTEXTWRITER_TBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_H
#define XMLTEXTWRITER_TBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter
struct  XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1  : public XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6
{
public:
	// System.IO.Stream System.Xml.XmlTextWriter::base_stream
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___base_stream_4;
	// System.IO.TextWriter System.Xml.XmlTextWriter::source
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___source_5;
	// System.IO.TextWriter System.Xml.XmlTextWriter::writer
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer_6;
	// System.IO.StringWriter System.Xml.XmlTextWriter::preserver
	StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * ___preserver_7;
	// System.String System.Xml.XmlTextWriter::preserved_name
	String_t* ___preserved_name_8;
	// System.Boolean System.Xml.XmlTextWriter::is_preserved_xmlns
	bool ___is_preserved_xmlns_9;
	// System.Boolean System.Xml.XmlTextWriter::allow_doc_fragment
	bool ___allow_doc_fragment_10;
	// System.Boolean System.Xml.XmlTextWriter::close_output_stream
	bool ___close_output_stream_11;
	// System.Boolean System.Xml.XmlTextWriter::ignore_encoding
	bool ___ignore_encoding_12;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_13;
	// System.Xml.XmlTextWriter/XmlDeclState System.Xml.XmlTextWriter::xmldecl_state
	int32_t ___xmldecl_state_14;
	// System.Boolean System.Xml.XmlTextWriter::check_character_validity
	bool ___check_character_validity_15;
	// System.Xml.NewLineHandling System.Xml.XmlTextWriter::newline_handling
	int32_t ___newline_handling_16;
	// System.Boolean System.Xml.XmlTextWriter::is_document_entity
	bool ___is_document_entity_17;
	// System.Xml.WriteState System.Xml.XmlTextWriter::state
	int32_t ___state_18;
	// System.Xml.XmlNodeType System.Xml.XmlTextWriter::node_state
	int32_t ___node_state_19;
	// System.Xml.XmlNamespaceManager System.Xml.XmlTextWriter::nsmanager
	XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * ___nsmanager_20;
	// System.Int32 System.Xml.XmlTextWriter::open_count
	int32_t ___open_count_21;
	// System.Xml.XmlTextWriter/XmlNodeInfo[] System.Xml.XmlTextWriter::elements
	XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* ___elements_22;
	// System.Collections.Stack System.Xml.XmlTextWriter::new_local_namespaces
	Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * ___new_local_namespaces_23;
	// System.Collections.ArrayList System.Xml.XmlTextWriter::explicit_nsdecls
	ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * ___explicit_nsdecls_24;
	// System.Xml.NamespaceHandling System.Xml.XmlTextWriter::namespace_handling
	int32_t ___namespace_handling_25;
	// System.Boolean System.Xml.XmlTextWriter::indent
	bool ___indent_26;
	// System.Int32 System.Xml.XmlTextWriter::indent_count
	int32_t ___indent_count_27;
	// System.Char System.Xml.XmlTextWriter::indent_char
	Il2CppChar ___indent_char_28;
	// System.String System.Xml.XmlTextWriter::indent_string
	String_t* ___indent_string_29;
	// System.String System.Xml.XmlTextWriter::newline
	String_t* ___newline_30;
	// System.Boolean System.Xml.XmlTextWriter::indent_attributes
	bool ___indent_attributes_31;
	// System.Char System.Xml.XmlTextWriter::quote_char
	Il2CppChar ___quote_char_32;
	// System.Boolean System.Xml.XmlTextWriter::v2
	bool ___v2_33;

public:
	inline static int32_t get_offset_of_base_stream_4() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___base_stream_4)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_base_stream_4() const { return ___base_stream_4; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_base_stream_4() { return &___base_stream_4; }
	inline void set_base_stream_4(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___base_stream_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_4), value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___source_5)); }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * get_source_5() const { return ___source_5; }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_writer_6() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___writer_6)); }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * get_writer_6() const { return ___writer_6; }
	inline TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 ** get_address_of_writer_6() { return &___writer_6; }
	inline void set_writer_6(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * value)
	{
		___writer_6 = value;
		Il2CppCodeGenWriteBarrier((&___writer_6), value);
	}

	inline static int32_t get_offset_of_preserver_7() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___preserver_7)); }
	inline StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * get_preserver_7() const { return ___preserver_7; }
	inline StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D ** get_address_of_preserver_7() { return &___preserver_7; }
	inline void set_preserver_7(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * value)
	{
		___preserver_7 = value;
		Il2CppCodeGenWriteBarrier((&___preserver_7), value);
	}

	inline static int32_t get_offset_of_preserved_name_8() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___preserved_name_8)); }
	inline String_t* get_preserved_name_8() const { return ___preserved_name_8; }
	inline String_t** get_address_of_preserved_name_8() { return &___preserved_name_8; }
	inline void set_preserved_name_8(String_t* value)
	{
		___preserved_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___preserved_name_8), value);
	}

	inline static int32_t get_offset_of_is_preserved_xmlns_9() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___is_preserved_xmlns_9)); }
	inline bool get_is_preserved_xmlns_9() const { return ___is_preserved_xmlns_9; }
	inline bool* get_address_of_is_preserved_xmlns_9() { return &___is_preserved_xmlns_9; }
	inline void set_is_preserved_xmlns_9(bool value)
	{
		___is_preserved_xmlns_9 = value;
	}

	inline static int32_t get_offset_of_allow_doc_fragment_10() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___allow_doc_fragment_10)); }
	inline bool get_allow_doc_fragment_10() const { return ___allow_doc_fragment_10; }
	inline bool* get_address_of_allow_doc_fragment_10() { return &___allow_doc_fragment_10; }
	inline void set_allow_doc_fragment_10(bool value)
	{
		___allow_doc_fragment_10 = value;
	}

	inline static int32_t get_offset_of_close_output_stream_11() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___close_output_stream_11)); }
	inline bool get_close_output_stream_11() const { return ___close_output_stream_11; }
	inline bool* get_address_of_close_output_stream_11() { return &___close_output_stream_11; }
	inline void set_close_output_stream_11(bool value)
	{
		___close_output_stream_11 = value;
	}

	inline static int32_t get_offset_of_ignore_encoding_12() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___ignore_encoding_12)); }
	inline bool get_ignore_encoding_12() const { return ___ignore_encoding_12; }
	inline bool* get_address_of_ignore_encoding_12() { return &___ignore_encoding_12; }
	inline void set_ignore_encoding_12(bool value)
	{
		___ignore_encoding_12 = value;
	}

	inline static int32_t get_offset_of_namespaces_13() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___namespaces_13)); }
	inline bool get_namespaces_13() const { return ___namespaces_13; }
	inline bool* get_address_of_namespaces_13() { return &___namespaces_13; }
	inline void set_namespaces_13(bool value)
	{
		___namespaces_13 = value;
	}

	inline static int32_t get_offset_of_xmldecl_state_14() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___xmldecl_state_14)); }
	inline int32_t get_xmldecl_state_14() const { return ___xmldecl_state_14; }
	inline int32_t* get_address_of_xmldecl_state_14() { return &___xmldecl_state_14; }
	inline void set_xmldecl_state_14(int32_t value)
	{
		___xmldecl_state_14 = value;
	}

	inline static int32_t get_offset_of_check_character_validity_15() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___check_character_validity_15)); }
	inline bool get_check_character_validity_15() const { return ___check_character_validity_15; }
	inline bool* get_address_of_check_character_validity_15() { return &___check_character_validity_15; }
	inline void set_check_character_validity_15(bool value)
	{
		___check_character_validity_15 = value;
	}

	inline static int32_t get_offset_of_newline_handling_16() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___newline_handling_16)); }
	inline int32_t get_newline_handling_16() const { return ___newline_handling_16; }
	inline int32_t* get_address_of_newline_handling_16() { return &___newline_handling_16; }
	inline void set_newline_handling_16(int32_t value)
	{
		___newline_handling_16 = value;
	}

	inline static int32_t get_offset_of_is_document_entity_17() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___is_document_entity_17)); }
	inline bool get_is_document_entity_17() const { return ___is_document_entity_17; }
	inline bool* get_address_of_is_document_entity_17() { return &___is_document_entity_17; }
	inline void set_is_document_entity_17(bool value)
	{
		___is_document_entity_17 = value;
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___state_18)); }
	inline int32_t get_state_18() const { return ___state_18; }
	inline int32_t* get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(int32_t value)
	{
		___state_18 = value;
	}

	inline static int32_t get_offset_of_node_state_19() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___node_state_19)); }
	inline int32_t get_node_state_19() const { return ___node_state_19; }
	inline int32_t* get_address_of_node_state_19() { return &___node_state_19; }
	inline void set_node_state_19(int32_t value)
	{
		___node_state_19 = value;
	}

	inline static int32_t get_offset_of_nsmanager_20() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___nsmanager_20)); }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * get_nsmanager_20() const { return ___nsmanager_20; }
	inline XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 ** get_address_of_nsmanager_20() { return &___nsmanager_20; }
	inline void set_nsmanager_20(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * value)
	{
		___nsmanager_20 = value;
		Il2CppCodeGenWriteBarrier((&___nsmanager_20), value);
	}

	inline static int32_t get_offset_of_open_count_21() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___open_count_21)); }
	inline int32_t get_open_count_21() const { return ___open_count_21; }
	inline int32_t* get_address_of_open_count_21() { return &___open_count_21; }
	inline void set_open_count_21(int32_t value)
	{
		___open_count_21 = value;
	}

	inline static int32_t get_offset_of_elements_22() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___elements_22)); }
	inline XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* get_elements_22() const { return ___elements_22; }
	inline XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D** get_address_of_elements_22() { return &___elements_22; }
	inline void set_elements_22(XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* value)
	{
		___elements_22 = value;
		Il2CppCodeGenWriteBarrier((&___elements_22), value);
	}

	inline static int32_t get_offset_of_new_local_namespaces_23() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___new_local_namespaces_23)); }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * get_new_local_namespaces_23() const { return ___new_local_namespaces_23; }
	inline Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 ** get_address_of_new_local_namespaces_23() { return &___new_local_namespaces_23; }
	inline void set_new_local_namespaces_23(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * value)
	{
		___new_local_namespaces_23 = value;
		Il2CppCodeGenWriteBarrier((&___new_local_namespaces_23), value);
	}

	inline static int32_t get_offset_of_explicit_nsdecls_24() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___explicit_nsdecls_24)); }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * get_explicit_nsdecls_24() const { return ___explicit_nsdecls_24; }
	inline ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F ** get_address_of_explicit_nsdecls_24() { return &___explicit_nsdecls_24; }
	inline void set_explicit_nsdecls_24(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * value)
	{
		___explicit_nsdecls_24 = value;
		Il2CppCodeGenWriteBarrier((&___explicit_nsdecls_24), value);
	}

	inline static int32_t get_offset_of_namespace_handling_25() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___namespace_handling_25)); }
	inline int32_t get_namespace_handling_25() const { return ___namespace_handling_25; }
	inline int32_t* get_address_of_namespace_handling_25() { return &___namespace_handling_25; }
	inline void set_namespace_handling_25(int32_t value)
	{
		___namespace_handling_25 = value;
	}

	inline static int32_t get_offset_of_indent_26() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___indent_26)); }
	inline bool get_indent_26() const { return ___indent_26; }
	inline bool* get_address_of_indent_26() { return &___indent_26; }
	inline void set_indent_26(bool value)
	{
		___indent_26 = value;
	}

	inline static int32_t get_offset_of_indent_count_27() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___indent_count_27)); }
	inline int32_t get_indent_count_27() const { return ___indent_count_27; }
	inline int32_t* get_address_of_indent_count_27() { return &___indent_count_27; }
	inline void set_indent_count_27(int32_t value)
	{
		___indent_count_27 = value;
	}

	inline static int32_t get_offset_of_indent_char_28() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___indent_char_28)); }
	inline Il2CppChar get_indent_char_28() const { return ___indent_char_28; }
	inline Il2CppChar* get_address_of_indent_char_28() { return &___indent_char_28; }
	inline void set_indent_char_28(Il2CppChar value)
	{
		___indent_char_28 = value;
	}

	inline static int32_t get_offset_of_indent_string_29() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___indent_string_29)); }
	inline String_t* get_indent_string_29() const { return ___indent_string_29; }
	inline String_t** get_address_of_indent_string_29() { return &___indent_string_29; }
	inline void set_indent_string_29(String_t* value)
	{
		___indent_string_29 = value;
		Il2CppCodeGenWriteBarrier((&___indent_string_29), value);
	}

	inline static int32_t get_offset_of_newline_30() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___newline_30)); }
	inline String_t* get_newline_30() const { return ___newline_30; }
	inline String_t** get_address_of_newline_30() { return &___newline_30; }
	inline void set_newline_30(String_t* value)
	{
		___newline_30 = value;
		Il2CppCodeGenWriteBarrier((&___newline_30), value);
	}

	inline static int32_t get_offset_of_indent_attributes_31() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___indent_attributes_31)); }
	inline bool get_indent_attributes_31() const { return ___indent_attributes_31; }
	inline bool* get_address_of_indent_attributes_31() { return &___indent_attributes_31; }
	inline void set_indent_attributes_31(bool value)
	{
		___indent_attributes_31 = value;
	}

	inline static int32_t get_offset_of_quote_char_32() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___quote_char_32)); }
	inline Il2CppChar get_quote_char_32() const { return ___quote_char_32; }
	inline Il2CppChar* get_address_of_quote_char_32() { return &___quote_char_32; }
	inline void set_quote_char_32(Il2CppChar value)
	{
		___quote_char_32 = value;
	}

	inline static int32_t get_offset_of_v2_33() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1, ___v2_33)); }
	inline bool get_v2_33() const { return ___v2_33; }
	inline bool* get_address_of_v2_33() { return &___v2_33; }
	inline void set_v2_33(bool value)
	{
		___v2_33 = value;
	}
};

struct XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields
{
public:
	// System.Text.Encoding System.Xml.XmlTextWriter::unmarked_utf8encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unmarked_utf8encoding_1;
	// System.Char[] System.Xml.XmlTextWriter::escaped_text_chars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___escaped_text_chars_2;
	// System.Char[] System.Xml.XmlTextWriter::escaped_attr_chars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___escaped_attr_chars_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map53
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map53_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::<>f__switch$map54
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map54_35;

public:
	inline static int32_t get_offset_of_unmarked_utf8encoding_1() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields, ___unmarked_utf8encoding_1)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unmarked_utf8encoding_1() const { return ___unmarked_utf8encoding_1; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unmarked_utf8encoding_1() { return &___unmarked_utf8encoding_1; }
	inline void set_unmarked_utf8encoding_1(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unmarked_utf8encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unmarked_utf8encoding_1), value);
	}

	inline static int32_t get_offset_of_escaped_text_chars_2() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields, ___escaped_text_chars_2)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_escaped_text_chars_2() const { return ___escaped_text_chars_2; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_escaped_text_chars_2() { return &___escaped_text_chars_2; }
	inline void set_escaped_text_chars_2(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___escaped_text_chars_2 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_text_chars_2), value);
	}

	inline static int32_t get_offset_of_escaped_attr_chars_3() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields, ___escaped_attr_chars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_escaped_attr_chars_3() const { return ___escaped_attr_chars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_escaped_attr_chars_3() { return &___escaped_attr_chars_3; }
	inline void set_escaped_attr_chars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___escaped_attr_chars_3 = value;
		Il2CppCodeGenWriteBarrier((&___escaped_attr_chars_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map53_34() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields, ___U3CU3Ef__switchU24map53_34)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map53_34() const { return ___U3CU3Ef__switchU24map53_34; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map53_34() { return &___U3CU3Ef__switchU24map53_34; }
	inline void set_U3CU3Ef__switchU24map53_34(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map53_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map53_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map54_35() { return static_cast<int32_t>(offsetof(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields, ___U3CU3Ef__switchU24map54_35)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map54_35() const { return ___U3CU3Ef__switchU24map54_35; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map54_35() { return &___U3CU3Ef__switchU24map54_35; }
	inline void set_U3CU3Ef__switchU24map54_35(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map54_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map54_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTWRITER_TBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_H
#ifndef XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#define XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextWriter/XmlNodeInfo
struct  XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3  : public RuntimeObject
{
public:
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::Prefix
	String_t* ___Prefix_0;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::LocalName
	String_t* ___LocalName_1;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::NS
	String_t* ___NS_2;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasSimple
	bool ___HasSimple_3;
	// System.Boolean System.Xml.XmlTextWriter/XmlNodeInfo::HasElements
	bool ___HasElements_4;
	// System.String System.Xml.XmlTextWriter/XmlNodeInfo::XmlLang
	String_t* ___XmlLang_5;
	// System.Xml.XmlSpace System.Xml.XmlTextWriter/XmlNodeInfo::XmlSpace
	int32_t ___XmlSpace_6;

public:
	inline static int32_t get_offset_of_Prefix_0() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___Prefix_0)); }
	inline String_t* get_Prefix_0() const { return ___Prefix_0; }
	inline String_t** get_address_of_Prefix_0() { return &___Prefix_0; }
	inline void set_Prefix_0(String_t* value)
	{
		___Prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prefix_0), value);
	}

	inline static int32_t get_offset_of_LocalName_1() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___LocalName_1)); }
	inline String_t* get_LocalName_1() const { return ___LocalName_1; }
	inline String_t** get_address_of_LocalName_1() { return &___LocalName_1; }
	inline void set_LocalName_1(String_t* value)
	{
		___LocalName_1 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_1), value);
	}

	inline static int32_t get_offset_of_NS_2() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___NS_2)); }
	inline String_t* get_NS_2() const { return ___NS_2; }
	inline String_t** get_address_of_NS_2() { return &___NS_2; }
	inline void set_NS_2(String_t* value)
	{
		___NS_2 = value;
		Il2CppCodeGenWriteBarrier((&___NS_2), value);
	}

	inline static int32_t get_offset_of_HasSimple_3() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___HasSimple_3)); }
	inline bool get_HasSimple_3() const { return ___HasSimple_3; }
	inline bool* get_address_of_HasSimple_3() { return &___HasSimple_3; }
	inline void set_HasSimple_3(bool value)
	{
		___HasSimple_3 = value;
	}

	inline static int32_t get_offset_of_HasElements_4() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___HasElements_4)); }
	inline bool get_HasElements_4() const { return ___HasElements_4; }
	inline bool* get_address_of_HasElements_4() { return &___HasElements_4; }
	inline void set_HasElements_4(bool value)
	{
		___HasElements_4 = value;
	}

	inline static int32_t get_offset_of_XmlLang_5() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___XmlLang_5)); }
	inline String_t* get_XmlLang_5() const { return ___XmlLang_5; }
	inline String_t** get_address_of_XmlLang_5() { return &___XmlLang_5; }
	inline void set_XmlLang_5(String_t* value)
	{
		___XmlLang_5 = value;
		Il2CppCodeGenWriteBarrier((&___XmlLang_5), value);
	}

	inline static int32_t get_offset_of_XmlSpace_6() { return static_cast<int32_t>(offsetof(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3, ___XmlSpace_6)); }
	inline int32_t get_XmlSpace_6() const { return ___XmlSpace_6; }
	inline int32_t* get_address_of_XmlSpace_6() { return &___XmlSpace_6; }
	inline void set_XmlSpace_6(int32_t value)
	{
		___XmlSpace_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODEINFO_TB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_H
#ifndef XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#define XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C  : public XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T94DE163BDCCE5B034799544EE082260E57B4D53C_H
#ifndef XMLWRITERSETTINGS_TA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_H
#define XMLWRITERSETTINGS_TA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::<NamespaceHandling>k__BackingField
	int32_t ___U3CNamespaceHandlingU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___encoding_3)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_5), value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}

	inline static int32_t get_offset_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD, ___U3CNamespaceHandlingU3Ek__BackingField_11)); }
	inline int32_t get_U3CNamespaceHandlingU3Ek__BackingField_11() const { return ___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return &___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline void set_U3CNamespaceHandlingU3Ek__BackingField_11(int32_t value)
	{
		___U3CNamespaceHandlingU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_TA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef CHARGETTER_T41F2B070679160162013D7D2B99DF5A72133136B_H
#define CHARGETTER_T41F2B070679160162013D7D2B99DF5A72133136B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReaderBinarySupport/CharGetter
struct  CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARGETTER_T41F2B070679160162013D7D2B99DF5A72133136B_H
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
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.Xml.XmlTextWriter/XmlNodeInfo[]
struct XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * m_Items[1];

public:
	inline XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool Stack_1_Contains_m14AEF6681686C4128E6FE2580C32A6D1FD273494_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
extern "C" IL2CPP_METHOD_ATTR void Stack_1_Push_m37B071735755DFDACCBD15B90883504F838E91EC_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m775FE83F320DC74FC2D399ECACBAFB4C1E91E6FD_gshared (Stack_1_t0D197BFD9E4E8ABDD6CB59029EE175E24078F45D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared (Dictionary_2_t3BE3B3611169A9445796DD06948526DEEF990F44 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlLinkedNode__ctor_m24D58E75C54A2150C8E0FD8D16A063E2DAB8AB7E (XmlLinkedNode_t8FF499D3DFBCA73D6F60F491BCC7C3D23435DF23 * __this, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc0, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyName_m98078FEB6A8C00F41900A94E6949DC14BA73039D (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Data_m31C257EFA758E02B60207D0CC4C22732C7B33AD2 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlProcessingInstruction__ctor_m0A68E4685B65C462E10AF881D6DD2CE4CCAED58C (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, String_t* ___target0, String_t* ___data1, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc2, const RuntimeMethod* method);
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D (String_t* __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_mF5CFE41E1317FF763F319AC91F9CD7F6C9AE746B (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" IL2CPP_METHOD_ATTR bool XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___a0, XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___b1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m587F31DB0131E0C3A1600E7D5C0FA58B0AF46BB3 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mD212AC21F408A5A3D37D99529D71B87DBE2D57F1 (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_IsContent_m290FADD036255F8CB10E4B5DCC95B09287A9CEDB (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, int32_t ___nodeType0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m5A93B84173E5F919171874AD117D69B93388910A (String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringWriter__ctor_m6A203053C6A91BBF97C1BCD4EE438EFDC53BAC99 (StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m5B45EF5C70673C3B5D702E402B815134CC22AB84 (String_t* p0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlException__ctor_mFDFBD42328AE40DF093C947246265F7F3142D2AC (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * __this, RuntimeObject* ___li0, String_t* ___sourceUri1, String_t* ___message2, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t CharGetter_Invoke_m4363FFA4B8D12AB72CEC5404432071CD1C5FF289 (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740 (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFullPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m6080A19375BD4C662988C19C07C9E5866E388203 (String_t* p0, const RuntimeMethod* method);
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlResolver_EscapeRelativeUriBody_m811FB445CF02DF57C84252F06BEA78810D834AB3 (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, String_t* ___src0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlCharacterData::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717 (XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07 * __this, String_t* ___data0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlChar::IsWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlChar_IsWhitespace_m87107CE6DCB1495651A27C956F8AE79979E4856E (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Xml.XmlCharacterData::set_Data(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlCharacterData_set_Data_mEAE03A49E4926BB70449C502003D030108BF48A2 (XmlCharacterData_t1733676F46934DE88DE8DEC9CF47190ABAE32F07 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F (XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlSignificantWhitespace__ctor_m009EB2BB9965513C483A5E570CF93178F775A51F (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method);
// System.Text.Encoding System.Xml.XmlInputStream::get_ActualEncoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * XmlInputStream_get_ActualEncoding_mCA509F9F54BD687D275B8F71EFC2BF0F762E149F (XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * __this, const RuntimeMethod* method);
// System.Void System.Xml.NonBlockingStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void NonBlockingStreamReader__ctor_m091AC093CCB2A3A14F333F110D4475A29964BB2A (NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8 * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___stream0, Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding1, const RuntimeMethod* method);
// System.Void System.Xml.XmlInputStream::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XmlInputStream__ctor_mCA179648377905C883781B738236EBCDE900C5A7 (XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___stream0, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader__ctor_mBBBCCBC38391D62388B968C857FE4A05DF418244 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * ___input0, const RuntimeMethod* method);
// System.Void System.Xml.XmlException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981 (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Xml.NonBlockingStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NonBlockingStreamReader_Read_m138A2BB961321D0CFF4261C5CC6CD5675863C910 (NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8 * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.Xml.NonBlockingStreamReader::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void NonBlockingStreamReader_Dispose_m582611A28CB111FDB1D9E7E981ED184A28687290 (NonBlockingStreamReader_tCD1035F526FC01E59384659F6AF39B6DEA3365D8 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___input0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m013061FAED66FFF5D06F67E10FAA0FF73EFF84C7 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input0, const RuntimeMethod* method);
// System.Void System.Xml.NameTable::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NameTable__ctor_m16C33853FABBF271CFB3A526899C52DB73DC39E8 (NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m6FE7D1AA93163BD80F274D04FA9C6AD376123391 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input0, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___url0, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input1, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt2, const RuntimeMethod* method);
// System.Void System.Xml.XmlReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m5483CE3178294E0689F7034939CBEEAD4D737D02 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, String_t* ___url0, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input1, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt2, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mE8F181BD64BE31AD4D873F8AF0F35D60A8C6EC65 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * ___context2, const RuntimeMethod* method);
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" IL2CPP_METHOD_ATTR XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" IL2CPP_METHOD_ATTR XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * XmlReader_get_Settings_mBD4B79479EB87C79B6D7993457A81AC939239DA0 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CharacterChecking_m8DE766C9A7BE2CC133D0E69A3E1C25189BDBF736 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Xml2.XmlTextReader::get_CharacterChecking()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CharacterChecking_m0124F7F367A175C2D23087C3C677E54BFA614313 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CharacterChecking_mCD86EE7C78DFFF38F9DE80BE8A30FBB63EBE96E7 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CharacterChecking_mFD7C0FDB7B4E6FC7D170243BA4D7AC65CF175DC7 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CloseInput_mCDEDF9B9E1E18F311DEEAF447B7E6B9FDD934D31 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Xml2.XmlTextReader::get_CloseInput()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CloseInput_mCC7CB852EAC4686ABD9036201404F19CC528F1D7 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CloseInput_mD1864B483E8ACCC465D7AFA9FEBF097D2F02D7D3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CloseInput_mB1BEAFBCF4C1ABE6F9E3DBF1C7526C679964B68C (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Conformance_m0EDC6E56F95710D0E016485AC156511A71A8D818 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Conformance_mC152B79DE9D3B40B17B5F62BE1E3623572AFA272 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlTextReader_get_Resolver_m804DC27110CB41BC32A72ED225AB4FE06B604A0A (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_ConformanceLevel_m6C96D6CFBE2B888D9BA398A1B89AFE8573319196 (XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * __this, const RuntimeMethod* method);
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlTextReader_get_Resolver_mA42CC375B33F9290A9B07A068142EEB3B5DF32B3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_XmlResolver_mB24DF3265A207627EA347046E94BB36CCA966BCC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___value0, const RuntimeMethod* method);
// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::get_EntityHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_EntityHandling_mB67024E1A8EBBEBA6B4B684BBDB542170773D288 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LineNumber_m83839A4130FCEF211C44FF403911BFFD4B92A9C8 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Xml2.XmlTextReader::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LineNumber_m05271A469147C607FCBAB2B7B2DB41627D85EB35 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LinePosition_mF4DCC218CAEC7C9BDD6C404AEDA605986C0C4286 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Xml2.XmlTextReader::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LinePosition_m760535767BEAEB16B90108993FDEBE2B8354DB55 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Normalization_mAD06D1F9288414BE856973A19FE69D79FB2BA1DF (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_Normalization(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Normalization_m0746011EB8199D87E55BEC4FE8139B7BDBFC5D6A (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, bool ___value0, const RuntimeMethod* method);
// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::get_WhitespaceHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_WhitespaceHandling_m4189943E69D6605957F9418F0ADD5ABD1AA6B3A6 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_WhitespaceHandling_mC93247BFAF887B0E49CBBEB1FC2E651C72856CFD (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_WhitespaceHandling_m944A282375844979020839B15758167880EED14E (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_XmlResolver_mC0C542DF11D12261B3293056FD62466F78D4CC52 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___value0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_SkipTextDeclaration_m7C78238A914771EAD60ECD9166A134CAB53AE8AC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Void Mono.Xml2.XmlTextReader::SkipTextDeclaration()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_SkipTextDeclaration_m35B8E4C069EDA7CA850D2AE166150F639C0751A8 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_EntityHandling_m4D112BAD32031E39325D1281D6911CFC6F2B3130 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlReader::ReadString()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_ReadString_m91D4D72FC4017ABBD357051B96701465848FB3F1 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9 (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * __this, String_t* p0, const RuntimeMethod* method);
// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::get_Dtd()
extern "C" IL2CPP_METHOD_ATTR DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * XmlParserContext_get_Dtd_m44E018E647AD93ADE59DB4D13E7D1C6933027EB4 (XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * __this, const RuntimeMethod* method);
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" IL2CPP_METHOD_ATTR XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * DTDObjectModel_GenerateEntityContentReader_m3F92D6D2CA453CC25D356526C2152C0CDD56B6EB (DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * __this, String_t* ___entityName0, XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * ___context1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.String>::.ctor()
inline void Stack_1__ctor_m6FC59676E1FBAD7919330DDB58328A0EC4A21E24 (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 *, const RuntimeMethod*))Stack_1__ctor_mD0E32FFEA8E13AF0454470323C18CA9475986570_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Stack`1<System.String>::Contains(!0)
inline bool Stack_1_Contains_mD3AD4AB2026F952196797FD6B824DD40C2B102A8 (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 *, String_t*, const RuntimeMethod*))Stack_1_Contains_m14AEF6681686C4128E6FE2580C32A6D1FD273494_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.String>::Push(!0)
inline void Stack_1_Push_mC513DE9969A3775192FD4415162DC838134275B7 (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 *, String_t*, const RuntimeMethod*))Stack_1_Push_m37B071735755DFDACCBD15B90883504F838E91EC_gshared)(__this, p0, method);
}
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mF934EE3057B2B2774B22A6EE67CC2795895501E9 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * ___entityContainer0, bool ___insideAttribute1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_CopyProperties_mA1B2ACB3519AE72735ADC989D2F9AE957C18EFDD (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___other0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.String>::Pop()
inline String_t* Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 *, const RuntimeMethod*))Stack_1_Pop_m775FE83F320DC74FC2D399ECACBAFB4C1E91E6FD_gshared)(__this, method);
}
// System.Void System.Xml.XmlReader::Skip()
extern "C" IL2CPP_METHOD_ATTR void XmlReader_Skip_m53A2B8040644E5C4071EA9FBB1481DF7F4D5CCF9 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method);
// System.IO.TextReader Mono.Xml2.XmlTextReader::GetRemainder()
extern "C" IL2CPP_METHOD_ATTR TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * XmlTextReader_GetRemainder_m1D6E059960202549688D7A28169C46A2CF1B84A6 (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void StreamWriter__ctor_mBFE544C29936738D5D150E9A90BBC83965328EAE (StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * p0, Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, const RuntimeMethod* method);
// System.Void System.Collections.Stack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack__ctor_m1A5FCEB63068C7F26EA260514319C0CADB7A4263 (Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter__ctor_m6421000552F7848BBF449952D217BCD58295399D (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_ConformanceLevel_m0A3DF70786E009CC5E12DAD2C16B592485064C41 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWriterSettings::get_OmitXmlDeclaration()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_OmitXmlDeclaration_mEFA103DA74EDB8143F2C81EF60391893AEFA8649 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWriterSettings::get_Indent()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_Indent_mC6E449921027BB72E6BA59D68838085A55A0325A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_set_Formatting_m395A2A58FB1ACB93A5BCDD34521005BA82921ADD (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.Xml.XmlWriterSettings::get_IndentChars()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriterSettings_get_IndentChars_m8BACCD027F8C08ED998C1007B64B2F4117531A08 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlWriterSettings::get_NewLineChars()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriterSettings_get_NewLineChars_m4FAA407F667D3B2B84690E5C9E6E38C5EF336574 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWriterSettings::get_NewLineOnAttributes()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_NewLineOnAttributes_mA8C994579A7A7B61899E55B2140A2DA2D359A8CC (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWriterSettings::get_CheckCharacters()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_CheckCharacters_m68E3D6657A618FE667F37CDEE629F17E1940AE7A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::get_NewLineHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NewLineHandling_m125E232A5C45104F0CE92E47E342BE8360DDB206 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::get_NamespaceHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NamespaceHandling_m6DFD42170BE968257A9455F0ED07587CBA794AD0 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m9812E4C1AFE975AEC2CA7A6A346FBC4834B15902 (UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15 * __this, bool p0, bool p1, const RuntimeMethod* method);
// System.Void System.Xml.XmlNamespaceManager::.ctor(System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlNamespaceManager__ctor_mD676E18261B7F75D5DD026491766E5389889CC1F (XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * __this, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nameTable0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m30641073F263B5F108E2CFA92FC054AE66BA986F (RuntimeArray * p0, RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703  p1, const RuntimeMethod* method);
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.String System.Xml.XmlNamespaceManager::LookupPrefixExclusive(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlNamespaceManager_LookupPrefixExclusive_m3714B4A832EE6BD846128D7D35E934BCCE68262B (XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * __this, String_t* ___uri0, bool ___atomizedName1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method);
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, const RuntimeMethod* method);
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlChar::IsName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlChar_IsName_mBA7DCC15CA4C77F3A03870180FB460EEE0B1E0AA (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA (XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * __this, String_t* ___prefix0, bool ___atomizedNames1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_mD689E98055DD68EF7F0D889EC09CF0A1C79C2020 (RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlNodeInfo__ctor_mC958324E311A3286C2A0ADD03A656D8DEDBEFFDA (XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, bool ___full0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndentEndElement_m455B818F02F4F45A9528254EA056BC5FCA938118 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_DetermineAttributePrefix_m0AA33E68BF4562FAE20D6C41AEF7DD3CB72F4863 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndentAttribute_m12062B8804B70631F934681C60A8D6F03DD8F841 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method);
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985 (String_t* ___format0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m1A2BA80BB42BE237C6B282689178EE43BD1196CA_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m6B49CBBA9928D53786A1710B97F9899523B6ED2D_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * __this, String_t* p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mDEBB7F195FFD40D68FF87F23F7D5D3E111C0B13D_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33 (String_t* ___src0, String_t* ___target1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlChar::IndexOfNonWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlChar_IndexOfNonWhitespace_mE1270DD3661A13CD6D24A73B186A50991C984F3D (String_t* ___str0, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlChar::IsNCName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlChar_IsNCName_mEE9616CCF2E07F7B96AAF1C31404E484D46F3FE9 (String_t* ___str0, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextWriter_WriteIndentCore_m4CF4B9B7165DFBD45890C2C94C185EA358E65976 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method);
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOfAny_m22415D1C28B9042B4AD18DAA09C3D0DFA03E38F2 (String_t* __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* p0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* String_ToCharArray_mFA1EDE7383559B3A99C926341C9AC2822918E8F5 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEscapedBuffer_m38588032EFF7A916070DCF1312EE73B5A7201ADA (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlChar_IndexOfInvalid_m15A70F23F76037047A33731642DBFA8CC9307BBA (String_t* ___s0, bool ___allowSurrogate1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA04011EFEDBBD517510B51C0D035C87C8A079592 (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m6373C1AFD7C8DE39720131FFE7E164861C1EDB1E (int32_t* __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Int32 System.Xml.XmlChar::IndexOfInvalid(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlChar_IndexOfInvalid_m855C56E4703FE2483E77010B1D1FBD0054371AE9 (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___s0, int32_t ___start1, int32_t ___length2, bool ___allowSurrogate3, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m370C20A66261F43FCDF2E104772F22EE8CC0E3B2 (RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p2, const RuntimeMethod* method);
// System.Void System.Xml.XmlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlResolver__ctor_mB32167F90F738DA3CD20C839054391C8F8262254 (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73 (RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  p0, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_LocalPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_LocalPath_m40FBFECE2E19CBF9DC9565A4008668F35E8F4246 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, String_t* ___src0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" IL2CPP_METHOD_ATTR void FileStream__ctor_mEBDC7830FFEE997544BDA0B10DFCD8D7F28F13B3 (FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" IL2CPP_METHOD_ATTR WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * WebRequest_Create_m443EBD17EC628818C7FAEBFB4BD733F945CD19FF (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, const RuntimeMethod* method);
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method);
// System.Boolean System.Xml.XmlWriterSettings::get_CloseOutput()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_CloseOutput_m90901B4599AF160284A79F784B62F28A816A467A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Xml.XmlWriter System.Xml.XmlWriter::CreateTextWriter(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * XmlWriter_CreateTextWriter_m413FBF72A94A50BEA4D60E8DA36D1CB2A053536F (TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, bool ___closeOutput2, const RuntimeMethod* method);
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m7CFDC19FBE18FC80C5D4908DD982E3369E93CFA0 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, bool ___closeOutput2, const RuntimeMethod* method);
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.Xml.XmlWriter,System.Xml.XmlWriterSettings)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * XmlWriter_Create_mE9BDE0B36DA4CD5A5B7E1CFF412299C7EAE4733A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_mB07DBF652398180743DA95E1DDA9DAC704B75167 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, const RuntimeMethod* method);
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlConvert_VerifyNCName_m5801CD7B5CC6B153E1F9CEEC61122472FF47E57F (String_t* ___ncname0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1 (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* p0, const RuntimeMethod* method);
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_Reset_mA213D873CE0AE502086C9B4A517448176F0D8E60 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845 (const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
extern "C" IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mE2007839F78B01EFFEE101DAD64A21C72B9A79BB (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::.ctor(System.IO.TextReader,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlParserInputSource__ctor_m5B432DA596643F8C4A5090417CDA967854A088FE (XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC * __this, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___reader0, String_t* ___baseUri1, bool ___pe2, int32_t ___line3, int32_t ___column4, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___baseUri1;
		__this->set_BaseURI_0(L_0);
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_1 = ___reader0;
		__this->set_reader_1(L_1);
		bool L_2 = ___pe2;
		__this->set_isPE_3(L_2);
		int32_t L_3 = ___line3;
		__this->set_line_4(L_3);
		int32_t L_4 = ___column4;
		__this->set_column_5(L_4);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlParserInputSource_get_LineNumber_mD0874DB25CAB6B134A583093587EB31F8631C41D (XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_4();
		return L_0;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlParserInputSource_get_LinePosition_mC3ED7B97F0CB5FD19C2979B18AB9B57C2E58E7F4 (XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_column_5();
		return L_0;
	}
}
// System.Void System.Xml.XmlParserInput/XmlParserInputSource::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlParserInputSource_Close_mAFCEB87B7E65EE8287817551200EDA8630C6944A (XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC * __this, const RuntimeMethod* method)
{
	{
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_0 = __this->get_reader_1();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.TextReader::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlParserInput/XmlParserInputSource::Read()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlParserInputSource_Read_m3C8B35572FF5669D857FEEF6B89C7EE25F798B39 (XmlParserInputSource_t91A9158D94809823091460776ED5C8688D6D54CC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000e;
		}
	}
	{
		return (-1);
	}

IL_000e:
	{
		bool L_1 = __this->get_isPE_3();
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = __this->get_state_2();
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		__this->set_state_2(1);
		return ((int32_t)32);
	}

IL_002e:
	{
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_3 = __this->get_reader_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.TextReader::Read() */, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_6 = __this->get_line_4();
		__this->set_line_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		__this->set_column_5(1);
		goto IL_0071;
	}

IL_005c:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_8 = __this->get_column_5();
		__this->set_column_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_0071:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_10 = __this->get_state_2();
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		__this->set_state_2(2);
		return ((int32_t)32);
	}

IL_008e:
	{
		int32_t L_11 = V_0;
		return L_11;
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
// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlProcessingInstruction__ctor_m0A68E4685B65C462E10AF881D6DD2CE4CCAED58C (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, String_t* ___target0, String_t* ___data1, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction__ctor_m0A68E4685B65C462E10AF881D6DD2CE4CCAED58C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_0 = ___doc2;
		XmlLinkedNode__ctor_m24D58E75C54A2150C8E0FD8D16A063E2DAB8AB7E(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t3BB1C81D3A39888DBF9262B91B4AA4BF4BF44D84_il2cpp_TypeInfo_var);
		XmlConvert_VerifyName_m98078FEB6A8C00F41900A94E6949DC14BA73039D(L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___data1;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___data1 = L_3;
	}

IL_001b:
	{
		String_t* L_4 = ___target0;
		__this->set_target_7(L_4);
		String_t* L_5 = ___data1;
		__this->set_data_8(L_5);
		return;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Data_m31C257EFA758E02B60207D0CC4C22732C7B33AD2 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_8();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_InnerText_m8D0CC08C5F6AEE31EEE895D22A532C31F48170F0 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = XmlProcessingInstruction_get_Data_m31C257EFA758E02B60207D0CC4C22732C7B33AD2(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_LocalName_m0E200574511627B2AAC8350497AE59214E842F3B (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_7();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Name_mA30EF342544D20222AE03933D9EA16C1E6B3E311 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_7();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlProcessingInstruction_get_NodeType_m51625A3CF5BA17E4C418FECF08CB855F49A8EE31 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(7);
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Target_m691CFCE888C0769925A071AC4CEAE68D23428E41 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_7();
		return L_0;
	}
}
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlProcessingInstruction_get_Value_mB4497D6E14CD32A88854D4B570EB26C4D46E7B32 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_8();
		return L_0;
	}
}
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlProcessingInstruction_set_Value_m329778F6B2F2795173A4CAAD6A72C0F88AE925F2 (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction_set_Value_m329778F6B2F2795173A4CAAD6A72C0F88AE925F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlNode::get_IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_1 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_1, _stringLiteralBCEFE8050A4051FBC90433E2AB029328BC454FA2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlProcessingInstruction_set_Value_m329778F6B2F2795173A4CAAD6A72C0F88AE925F2_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_2 = ___value0;
		__this->set_data_8(L_2);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlProcessingInstruction_CloneNode_m8599164A5F5EA5E040E07230A5C94CF0B0641C5B (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlProcessingInstruction_CloneNode_m8599164A5F5EA5E040E07230A5C94CF0B0641C5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * V_0 = NULL;
	{
		String_t* L_0 = __this->get_target_7();
		String_t* L_1 = __this->get_data_8();
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_2 = VirtFuncInvoker0< XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF * L_3 = (XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF *)il2cpp_codegen_object_new(XmlProcessingInstruction_tD4965C66FE3BF9B2AB08C8EE5AD339F1F51FBBEF_il2cpp_TypeInfo_var);
		XmlProcessingInstruction__ctor_m0A68E4685B65C462E10AF881D6DD2CE4CCAED58C(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_4 = V_0;
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
// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_mF5CFE41E1317FF763F319AC91F9CD7F6C9AE746B (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_mF5CFE41E1317FF763F319AC91F9CD7F6C9AE746B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_m587F31DB0131E0C3A1600E7D5C0FA58B0AF46BB3 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_m587F31DB0131E0C3A1600E7D5C0FA58B0AF46BB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, String_t* ___name0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B2_0 = NULL;
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B3_1 = NULL;
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B5_0 = NULL;
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * G_B6_1 = NULL;
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_2 = ___name0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_name_1(G_B3_0);
		String_t* L_3 = ___ns1;
		G_B4_0 = __this;
		if (L_3)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_4;
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		String_t* L_5 = ___ns1;
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_ns_2(G_B6_0);
		String_t* L_6 = __this->get_name_1();
		NullCheck(L_6);
		int32_t L_7 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_ns_2();
		NullCheck(L_8);
		int32_t L_9 = String_GetHashCode_mD3308B7BBDBBA8491D427035EE6570F52787AA2D(L_8, /*hidden argument*/NULL);
		__this->set_hash_3(((int32_t)((int32_t)L_7^(int32_t)L_9)));
		return;
	}
}
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XmlQualifiedName__cctor_m27460544F29BE41F77A5D953D4FD901F3E3BB70B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName__cctor_m27460544F29BE41F77A5D953D4FD901F3E3BB70B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_0 = (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)il2cpp_codegen_object_new(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_mF5CFE41E1317FF763F319AC91F9CD7F6C9AE746B(L_0, /*hidden argument*/NULL);
		((XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_StaticFields*)il2cpp_codegen_static_fields_for(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var))->set_Empty_0(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C" IL2CPP_METHOD_ATTR bool XmlQualifiedName_get_IsEmpty_m4B67D96C5B0F332486E3E5402B360FBF8B00BC3C (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = __this->get_name_1();
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = __this->get_ns_2();
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Name_m3A25FE476EBF76EA5EBCCBE160E2DCCC19D98737 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_1();
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_get_Namespace_m89FDC52F093DFABACAF9FD14F1B4AB65730A9B0F (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ns_2();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XmlQualifiedName_Equals_m09211F15B7D2A358D35B9BA50E323057BB94669D (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_Equals_m09211F15B7D2A358D35B9BA50E323057BB94669D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var);
		bool L_1 = XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57(__this, ((XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)IsInstClass((RuntimeObject*)L_0, XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlQualifiedName_GetHashCode_m2B5F1990A22B222ABF35C8BC117A911572B5F796 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_hash_3();
		return L_0;
	}
}
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlQualifiedName_ToString_mE692286107F61C7F6F6EF4CAAF992BD18F9138DC (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_ToString_mE692286107F61C7F6F6EF4CAAF992BD18F9138DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_ns_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = __this->get_name_1();
		return L_3;
	}

IL_001c:
	{
		String_t* L_4 = __this->get_ns_2();
		String_t* L_5 = __this->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_4, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Parse(System.String,System.Xml.IXmlNamespaceResolver,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * XmlQualifiedName_Parse_mB9C998D00F8F51CB56C6C8D3BB8245ED3C26F513 (String_t* ___name0, RuntimeObject* ___resolver1, bool ___considerDefaultNamespace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_Parse_mB9C998D00F8F51CB56C6C8D3BB8245ED3C26F513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_mBA988EC314B9FFC319F5F7745377B4556FF3CF21(L_0, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___considerDefaultNamespace2;
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_4 = ___name0;
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_5 = (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)il2cpp_codegen_object_new(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_m587F31DB0131E0C3A1600E7D5C0FA58B0AF46BB3(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_7;
		goto IL_0036;
	}

IL_002e:
	{
		String_t* L_8 = ___name0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m10F7B491B6627E6C5A2725C466DB3F3E7414BC0B(L_8, 0, L_9, /*hidden argument*/NULL);
		G_B6_0 = L_10;
	}

IL_0036:
	{
		V_1 = G_B6_0;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_12 = ___name0;
		G_B9_0 = L_12;
		goto IL_004d;
	}

IL_0044:
	{
		String_t* L_13 = ___name0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m57FDC697BFC054AD210D35CE4825B770DF760F12(L_13, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		G_B9_0 = L_15;
	}

IL_004d:
	{
		V_2 = G_B9_0;
		RuntimeObject* L_16 = ___resolver1;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		String_t* L_18 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* System.String System.Xml.IXmlNamespaceResolver::LookupNamespace(System.String) */, IXmlNamespaceResolver_tDB505F93FA770FCD1D11A52E37E473B9144318BD_il2cpp_TypeInfo_var, L_16, L_17);
		V_3 = L_18;
		String_t* L_19 = V_3;
		if (L_19)
		{
			goto IL_0067;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_20 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_20, _stringLiteral4A9B7BCD8B5FFA809C971678AAB5405D5A38D43D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XmlQualifiedName_Parse_mB9C998D00F8F51CB56C6C8D3BB8245ED3C26F513_RuntimeMethod_var);
	}

IL_0067:
	{
		String_t* L_21 = V_2;
		String_t* L_22 = V_3;
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_23 = (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)il2cpp_codegen_object_new(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var);
		XmlQualifiedName__ctor_mE9F33818BD47572383240D2728D63D0E3105A875(L_23, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" IL2CPP_METHOD_ATTR bool XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___a0, XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_0 = ___a0;
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_1 = ___b1;
		if ((!(((RuntimeObject*)(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)L_0) == ((RuntimeObject*)(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_2 = ___a0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_3 = ___b1;
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return (bool)0;
	}

IL_0017:
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_4 = ___a0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_hash_3();
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_6 = ___b1;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_hash_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_8 = ___a0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_name_1();
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_10 = ___b1;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0051;
		}
	}
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_13 = ___a0;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_ns_2();
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_15 = ___b1;
		NullCheck(L_15);
		String_t* L_16 = L_15->get_ns_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_14, L_16, /*hidden argument*/NULL);
		G_B9_0 = ((int32_t)(L_17));
		goto IL_0052;
	}

IL_0051:
	{
		G_B9_0 = 0;
	}

IL_0052:
	{
		return (bool)G_B9_0;
	}
}
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" IL2CPP_METHOD_ATTR bool XmlQualifiedName_op_Inequality_m06659EEA1E729269DE04459236B11A4A3C5F55B7 (XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___a0, XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlQualifiedName_op_Inequality_m06659EEA1E729269DE04459236B11A4A3C5F55B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_0 = ___a0;
		XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004 * L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(XmlQualifiedName_t473CA6BDDCC80E24626C6741FC40EFE9EA9E7004_il2cpp_TypeInfo_var);
		bool L_2 = XmlQualifiedName_op_Equality_m653FA143A325228DA76C333CC2FDC39704D61B57(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Xml.XmlReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void XmlReader_System_IDisposable_Dispose_m1DE4B6654148139ED5F638540C5C2AE04CC76756 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(28 /* System.Void System.Xml.XmlReader::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" IL2CPP_METHOD_ATTR XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * XmlReader_get_Binary_mCC5D1170AFF6F4DCB65212A8AAE7DF920098ECCE (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * L_0 = __this->get_binary_1();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_get_CanResolveEntity_m792FEF5D618A1E5BE765A4B577EAC11AFA7FE601 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_get_HasAttributes_mD6FF9C5CE17F16AA5E9938FCD1E665658765FD4C (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_get_IsDefault_mC49221890CA4F9293EFE3E69E14705E247B2478C (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_get_Item_m482CC4FD7E9DFBFD71383CD6F618CAE66B0C94C3 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		String_t* L_1 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, __this, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlReader::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_get_Name_m8B58FFEECED4C50E46A4A250022F18AE1562AEC2 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_get_Name_m8B58FFEECED4C50E46A4A250022F18AE1562AEC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, __this);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_2, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		G_B3_0 = L_5;
	}

IL_0032:
	{
		return G_B3_0;
	}
}
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* XmlReader_get_SchemaInfo_m55E01BC5AABDC49B482DE55996A34C7522DD4429 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * XmlReader_get_Settings_mBD4B79479EB87C79B6D7993457A81AC939239DA0 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_0 = __this->get_settings_2();
		return L_0;
	}
}
// System.String System.Xml.XmlReader::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_get_XmlLang_m4AB87E40136DD57F75A1C2E8A058A4E6300899DB (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_get_XmlLang_m4AB87E40136DD57F75A1C2E8A058A4E6300899DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlReader_get_XmlSpace_m53C7CC3C98AA913C818BAC7570BDFF118E1AB992 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlReader_Dispose_m61D1A473180F02C10ADC9434EAB23D18D593A91A (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlReader::Close() */, __this);
	}

IL_0012:
	{
		return;
	}
}
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlReader_MoveToAttribute_m47E34140CF38B24E8D8D57E35329956F210D4710 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_MoveToAttribute_m47E34140CF38B24E8D8D57E35329956F210D4710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, __this);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 * L_2 = (ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t34548D25A41CBE2BC60196610CCE14D9D56892D4_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mD212AC21F408A5A3D37D99529D71B87DBE2D57F1(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlReader_MoveToAttribute_m47E34140CF38B24E8D8D57E35329956F210D4710_RuntimeMethod_var);
	}

IL_0012:
	{
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, __this);
		V_0 = 0;
		goto IL_002b;
	}

IL_0020:
	{
		VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, __this);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___i0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" IL2CPP_METHOD_ATTR bool XmlReader_IsContent_m290FADD036255F8CB10E4B5DCC95B09287A9CEDB (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, int32_t ___nodeType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___nodeType0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_003b;
			}
		}
	}

IL_001e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)15))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_003f;
	}

IL_0033:
	{
		return (bool)1;
	}

IL_0035:
	{
		return (bool)1;
	}

IL_0037:
	{
		return (bool)1;
	}

IL_0039:
	{
		return (bool)1;
	}

IL_003b:
	{
		return (bool)1;
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
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlReader_MoveToContent_mD822A91E66A2764F3BAED39A82BD3799CCEAB57A (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_001e;
	}

IL_0019:
	{
		goto IL_0025;
	}

IL_001e:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_3;
	}

IL_0025:
	{
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0038;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
	}

IL_0038:
	{
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		bool L_6 = XmlReader_IsContent_m290FADD036255F8CB10E4B5DCC95B09287A9CEDB(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		return L_7;
	}

IL_0050:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, __this);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (int32_t)(0);
	}
}
// System.String System.Xml.XmlReader::ReadElementString()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_7 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248_RuntimeMethod_var);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_1 = L_8;
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (L_9)
		{
			goto IL_007e;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String System.Xml.XmlReader::ReadString() */, __this);
		V_1 = L_10;
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((((int32_t)L_11) == ((int32_t)((int32_t)15))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_13);
		NullCheck((Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		String_t* L_17 = V_2;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_18 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, XmlReader_ReadElementString_mAF86D7163C24075DD8D421BB4ABED2186A7BF248_RuntimeMethod_var);
	}

IL_007e:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		String_t* L_19 = V_1;
		return L_19;
	}
}
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlReader_ReadEndElement_mBF6B3B74EF169CE5E2A48684F10855286E3E1468 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadEndElement_mBF6B3B74EF169CE5E2A48684F10855286E3E1468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)15))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_7 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XmlReader_ReadEndElement_mBF6B3B74EF169CE5E2A48684F10855286E3E1468_RuntimeMethod_var);
	}

IL_0030:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.String System.Xml.XmlReader::ReadInnerXml()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_ReadInnerXml_m2A48FC95CC20E26FEB1DD3AEA0062004EE009D50 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadInnerXml_m2A48FC95CC20E26FEB1DD3AEA0062004EE009D50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * V_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_001f:
	{
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_4;
	}

IL_0037:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_5 = (StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D *)il2cpp_codegen_object_new(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D_il2cpp_TypeInfo_var);
		StringWriter__ctor_m6A203053C6A91BBF97C1BCD4EE438EFDC53BAC99(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_6 = V_0;
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_7 = (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 *)il2cpp_codegen_object_new(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		V_2 = L_9;
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		goto IL_0083;
	}

IL_0063:
	{
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_11 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, _stringLiteral34A1EBDCD233F31853A982CEF6C974393C6ADFA5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XmlReader_ReadInnerXml_m2A48FC95CC20E26FEB1DD3AEA0062004EE009D50_RuntimeMethod_var);
	}

IL_007b:
	{
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_12 = V_1;
		NullCheck(L_12);
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_12, __this, (bool)0);
	}

IL_0083:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0063;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		goto IL_00a3;
	}

IL_009b:
	{
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_15 = V_1;
		NullCheck(L_15);
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_15, __this, (bool)0);
	}

IL_00a3:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_16);
		return L_17;
	}
}
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_ReadOuterXml_m9B5D78EA308E7F44898DFB20CC24B4DB3B3BE56C (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadOuterXml_m9B5D78EA308E7F44898DFB20CC24B4DB3B3BE56C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * V_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001f;
		}
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_2;
	}

IL_001f:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0055;
	}

IL_0039:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_6 = (StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D *)il2cpp_codegen_object_new(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D_il2cpp_TypeInfo_var);
		StringWriter__ctor_m6A203053C6A91BBF97C1BCD4EE438EFDC53BAC99(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_7 = V_0;
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_8 = (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 *)il2cpp_codegen_object_new(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, L_9, __this, (bool)0);
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_10);
		return L_11;
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(49 /* System.Void System.Xml.XmlReader::Skip() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_12;
	}
}
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C" IL2CPP_METHOD_ATTR void XmlReader_ReadStartElement_mDE09CB61DEEB3B06A31E1B0F7B003206CCDE8B9B (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadStartElement_mDE09CB61DEEB3B06A31E1B0F7B003206CCDE8B9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_7 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XmlReader_ReadStartElement_mDE09CB61DEEB3B06A31E1B0F7B003206CCDE8B9B_RuntimeMethod_var);
	}

IL_002f:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlReader::ReadStartElement(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_2);
		NullCheck((Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral11BDEA67C033DF7BB54D76953E89C1B8AB8DA263, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_7 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C_RuntimeMethod_var);
	}

IL_002f:
	{
		String_t* L_8 = ___localName0;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, __this);
		String_t* L_12 = ___namespaceName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0084;
		}
	}

IL_0051:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_14 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_15 = L_14;
		String_t* L_16 = ___localName0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_17 = L_15;
		String_t* L_18 = ___namespaceName1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_19 = L_17;
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, __this);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_21 = L_19;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Format_m5B45EF5C70673C3B5D702E402B815134CC22AB84(_stringLiteralE4C65AFC352CFB9B55C37194E3F3FA4873144869, L_21, /*hidden argument*/NULL);
		V_1 = L_23;
		String_t* L_24 = V_1;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_25 = XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB(__this, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, XmlReader_ReadStartElement_m864FA92E442B7BC9E2A0547D8073A087FDAD623C_RuntimeMethod_var);
	}

IL_0084:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}
}
// System.String System.Xml.XmlReader::ReadString()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlReader_ReadString_m91D4D72FC4017ABBD357051B96701465848FB3F1 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_ReadString_m91D4D72FC4017ABBD357051B96701465848FB3F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		StringBuilder_t * L_0 = __this->get_readStringBuffer_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1E28545009F6227C8FEF73E8E74B9CFC5A97BF97(L_1, /*hidden argument*/NULL);
		__this->set_readStringBuffer_0(L_1);
	}

IL_0016:
	{
		StringBuilder_t * L_2 = __this->get_readStringBuffer_0();
		NullCheck(L_2);
		StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818(L_2, 0, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_00cb;
			}
			case 3:
			{
				goto IL_00cb;
			}
		}
	}

IL_0048:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)13))))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)14))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_7;
	}

IL_0063:
	{
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_9;
	}

IL_0074:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)4)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)13))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)14))))
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_00bc;
	}

IL_00a5:
	{
		StringBuilder_t * L_15 = __this->get_readStringBuffer_0();
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, __this);
		NullCheck(L_15);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_15, L_16, /*hidden argument*/NULL);
		goto IL_00c1;
	}

IL_00bc:
	{
		goto IL_00c6;
	}

IL_00c1:
	{
		goto IL_0074;
	}

IL_00c6:
	{
		goto IL_0122;
	}

IL_00cb:
	{
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)3)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)4)))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)13))))
		{
			goto IL_00f5;
		}
	}
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)14))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0113;
	}

IL_00f5:
	{
		StringBuilder_t * L_22 = __this->get_readStringBuffer_0();
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, __this);
		NullCheck(L_22);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_22, L_23, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		goto IL_0118;
	}

IL_0113:
	{
		goto IL_011d;
	}

IL_0118:
	{
		goto IL_00cb;
	}

IL_011d:
	{
		goto IL_0122;
	}

IL_0122:
	{
		StringBuilder_t * L_24 = __this->get_readStringBuffer_0();
		NullCheck(L_24);
		String_t* L_25 = StringBuilder_ToString_mD4C6AC273A5E792C65602E2CC71505C985B8CD6D(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		StringBuilder_t * L_26 = __this->get_readStringBuffer_0();
		NullCheck(L_26);
		StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818(L_26, 0, /*hidden argument*/NULL);
		String_t* L_27 = V_0;
		return L_27;
	}
}
// System.Void System.Xml.XmlReader::Skip()
extern "C" IL2CPP_METHOD_ATTR void XmlReader_Skip_m53A2B8040644E5C4071EA9FBB1481DF7F4D5CCF9 (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, __this);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}
	{
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, __this);
		if (!L_2)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		return;
	}

IL_0033:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		V_0 = L_3;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003f;
		}
	}

IL_0056:
	{
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, __this);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_006a;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, __this);
	}

IL_006a:
	{
		return;
	}
}
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB (XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlReader_XmlError_m255680C3355DD394F521BACCD2DEF8EC4E1BEEAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, __this);
		String_t* L_1 = ___message0;
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_2 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mFDFBD42328AE40DF093C947246265F7F3142D2AC(L_2, ((RuntimeObject*)IsInst((RuntimeObject*)__this, IXmlLineInfo_t4DFB3B0D35B53EFBE9B6D120BEA11AD88DA2F3F3_il2cpp_TypeInfo_var)), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void System.Xml.XmlReaderBinarySupport::Reset()
extern "C" IL2CPP_METHOD_ATTR void XmlReaderBinarySupport_Reset_m42E16155EDF56201D7E62168DE519D157611BF05 (XmlReaderBinarySupport_tACAE9D001BCEE8E7C0DCA0FE1D378CCE44D18F3A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_dontReset_4();
		if (L_0)
		{
			goto IL_00aa;
		}
	}
	{
		__this->set_dontReset_4((bool)1);
		bool L_1 = __this->get_hasCache_3();
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = __this->get_reader_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)13))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)14))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_005d;
	}

IL_004c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_8 = __this->get_reader_0();
		NullCheck(L_8);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_8);
		goto IL_005d;
	}

IL_005d:
	{
		int32_t L_9 = __this->get_state_2();
		V_1 = L_9;
		int32_t L_10 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_007d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_11 = __this->get_reader_0();
		NullCheck(L_11);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_11);
		goto IL_008e;
	}

IL_008e:
	{
		__this->set_base64CacheStartsAt_1((-1));
		__this->set_state_2(0);
		__this->set_hasCache_3((bool)0);
		__this->set_dontReset_4((bool)0);
	}

IL_00aa:
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
extern "C"  int32_t DelegatePInvokeWrapper_CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___buffer0' to native representation
	uint8_t* ____buffer0_marshaled = NULL;
	if (___buffer0 != NULL)
	{
		il2cpp_array_size_t ____buffer0_Length = (___buffer0)->max_length;
		____buffer0_marshaled = il2cpp_codegen_marshal_allocate_array<uint8_t>(____buffer0_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____buffer0_Length); i++)
		{
			(____buffer0_marshaled)[i] = static_cast<uint8_t>((___buffer0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____buffer0_marshaled = NULL;
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____buffer0_marshaled, ___offset1, ___length2);

	// Marshaling cleanup of parameter '___buffer0' native representation
	if (____buffer0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____buffer0_marshaled);
		____buffer0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Xml.XmlReaderBinarySupport/CharGetter::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CharGetter__ctor_mD2B94CE0B9BA333D83ABBC9B289ED2D4B59E2D2D (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::Invoke(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t CharGetter_Invoke_m4363FFA4B8D12AB72CEC5404432071CD1C5FF289 (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___buffer0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t result = 0;
	if(__this->get_prev_9() != NULL)
	{
		CharGetter_Invoke_m4363FFA4B8D12AB72CEC5404432071CD1C5FF289((CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B *)__this->get_prev_9(), ___buffer0, ___offset1, ___length2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
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
			typedef int32_t (*FunctionPointerType) (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___offset1, ___length2, targetMethod);
		}
		else
		{
			// closed
			typedef int32_t (*FunctionPointerType) (void*, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___offset1, ___length2, targetMethod);
		}
	}
	else if (___parameterCount != 3)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___buffer0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(targetMethod, ___buffer0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___buffer0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___buffer0, ___offset1, ___length2);
				}
			}
		}
		else
		{
			typedef int32_t (*FunctionPointerType) (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___offset1, ___length2, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___buffer0, ___offset1, ___length2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< int32_t, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___buffer0, ___offset1, ___length2);
					else
						result = GenericVirtFuncInvoker3< int32_t, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___buffer0, ___offset1, ___length2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___buffer0, ___offset1, ___length2);
					else
						result = VirtFuncInvoker3< int32_t, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___buffer0, ___offset1, ___length2);
				}
			}
		}
		else
		{
			typedef int32_t (*FunctionPointerType) (void*, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___buffer0, ___offset1, ___length2, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult System.Xml.XmlReaderBinarySupport/CharGetter::BeginInvoke(System.Char[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* CharGetter_BeginInvoke_m7DE0078B7CE7153F30B69175FBA9D0B2BBD4FD9D (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___buffer0, int32_t ___offset1, int32_t ___length2, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharGetter_BeginInvoke_m7DE0078B7CE7153F30B69175FBA9D0B2BBD4FD9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___buffer0;
	__d_args[1] = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &___offset1);
	__d_args[2] = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &___length2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 System.Xml.XmlReaderBinarySupport/CharGetter::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t CharGetter_EndInvoke_mDB7C6182F26EE71E4627E9D6B2BB7B1A917C0501 (CharGetter_t41F2B070679160162013D7D2B99DF5A72133136B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
// System.Boolean System.Xml.XmlReaderSettings::get_CheckCharacters()
extern "C" IL2CPP_METHOD_ATTR bool XmlReaderSettings_get_CheckCharacters_m3757930489DCD37BE252614B229A635C9C3962CB (XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_checkCharacters_0();
		return L_0;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlReaderSettings::get_ConformanceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlReaderSettings_get_ConformanceLevel_m6C96D6CFBE2B888D9BA398A1B89AFE8573319196 (XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_conformance_1();
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
// System.Void System.Xml.XmlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlResolver__ctor_mB32167F90F738DA3CD20C839054391C8F8262254 (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri System.Xml.XmlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___baseUri0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_0, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_2 = ___relativeUri1;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_3 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_3, _stringLiteral226348BA417E81E001FC53B778A579F7ABA91F3A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_4 = ___relativeUri1;
		NullCheck(L_4);
		bool L_5 = String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F(L_4, _stringLiteral57B84A87FA55E27F5FA44BC5B92658441F8074DF, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_6 = ___relativeUri1;
		NullCheck(L_6);
		bool L_7 = String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F(L_6, _stringLiteralF939F03112FE1E980F484E1313A516E9B653F137, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___relativeUri1;
		NullCheck(L_8);
		bool L_9 = String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F(L_8, _stringLiteralD45C28652972F2BD3F8592508FB44AD1EBDC696B, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_10 = ___relativeUri1;
		NullCheck(L_10);
		bool L_11 = String_StartsWith_m7B83E0D4961FE9321291479F87C4160079C1774F(L_10, _stringLiteralD0998110D4F271571EA799F05B153504A56056C0, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}

IL_005d:
	{
		String_t* L_12 = ___relativeUri1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_13 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C(L_13, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0064:
	{
		String_t* L_14 = ___relativeUri1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t27AEEE0980E2C91F7F806BC8E9FC73A540BADC55_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m6080A19375BD4C662988C19C07C9E5866E388203(L_14, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_16 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C(L_16, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0070:
	{
		String_t* L_17 = ___relativeUri1;
		if (L_17)
		{
			goto IL_0078;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_18 = ___baseUri0;
		return L_18;
	}

IL_0078:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_19 = ___baseUri0;
		String_t* L_20 = ___relativeUri1;
		String_t* L_21 = XmlResolver_EscapeRelativeUriBody_m811FB445CF02DF57C84252F06BEA78810D834AB3(__this, L_20, /*hidden argument*/NULL);
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_22 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E(L_22, L_19, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String System.Xml.XmlResolver::EscapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlResolver_EscapeRelativeUriBody_m811FB445CF02DF57C84252F06BEA78810D834AB3 (XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlResolver_EscapeRelativeUriBody_m811FB445CF02DF57C84252F06BEA78810D834AB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_0, _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29, _stringLiteralB7800DD7F410CCD049697701C24028B425C31C9F, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_1, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194, _stringLiteralCB51439F4D8087A7A3BCE2CD95A8898C8A32D028, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_2, _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841, _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_3, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_4, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, _stringLiteral8BCDCE41BEE002F11C8CF51B698D461BE3BD3797, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XmlSignificantWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlSignificantWhitespace__ctor_m009EB2BB9965513C483A5E570CF93178F775A51F (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_LocalName_m690B0BE93474C2B5CD56F896601F066FC8186BE0 (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_get_LocalName_m690B0BE93474C2B5CD56F896601F066FC8186BE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBBA3CE1157AD92B2A799DE4ACFF949792B409ABE;
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_Name_m5CE54D81FA48080F13A7441D7F3277D7F80C231F (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_get_Name_m5CE54D81FA48080F13A7441D7F3277D7F80C231F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBBA3CE1157AD92B2A799DE4ACFF949792B409ABE;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlSignificantWhitespace::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlSignificantWhitespace_get_NodeType_m4BDFD377FC1BE3DCC17E961B2EDC0F64896A845B (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)14));
	}
}
// System.String System.Xml.XmlSignificantWhitespace::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlSignificantWhitespace_get_Value_m290B7CC13BB0528B703BE73EB296D428CE0E2CCB (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlSignificantWhitespace::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlSignificantWhitespace_set_Value_mC4DF8C86BCB7828A040A72797F9C49950ED0B7CD (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_set_Value_mC4DF8C86BCB7828A040A72797F9C49950ED0B7CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m87107CE6DCB1495651A27C956F8AE79979E4856E(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_2 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_2, _stringLiteralBA860FD430FDBB5379A377B6ABE5473ADE841521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlSignificantWhitespace_set_Value_mC4DF8C86BCB7828A040A72797F9C49950ED0B7CD_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		XmlCharacterData_set_Data_mEAE03A49E4926BB70449C502003D030108BF48A2(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlSignificantWhitespace_get_ParentNode_mC905A4DADD0164A8E063A57B944DA7707EB11E63 (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_0 = XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlSignificantWhitespace::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlSignificantWhitespace_CloneNode_m5B96734CFC41A7EEB9FFA84EA2AE9CCBF66C2CD3 (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignificantWhitespace_CloneNode_m5B96734CFC41A7EEB9FFA84EA2AE9CCBF66C2CD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * V_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = VirtFuncInvoker0< XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 * L_2 = (XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103 *)il2cpp_codegen_object_new(XmlSignificantWhitespace_t7E151A744639F09EDE3057CA5B18C4E1F6A50103_il2cpp_TypeInfo_var);
		XmlSignificantWhitespace__ctor_m009EB2BB9965513C483A5E570CF93178F775A51F(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_3 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlStreamReader::.ctor(System.Xml.XmlInputStream)
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader__ctor_mBBBCCBC38391D62388B968C857FE4A05DF418244 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__ctor_mBBBCCBC38391D62388B968C857FE4A05DF418244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * G_B2_0 = NULL;
	XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * G_B2_1 = NULL;
	XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * G_B1_0 = NULL;
	XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * G_B1_1 = NULL;
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * G_B3_0 = NULL;
	XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * G_B3_1 = NULL;
	XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * G_B3_2 = NULL;
	{
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_0 = ___input0;
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_1 = ___input0;
		NullCheck(L_1);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_2 = XmlInputStream_get_ActualEncoding_mCA509F9F54BD687D275B8F71EFC2BF0F762E149F(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (!L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0018;
		}
	}
	{
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_3 = ___input0;
		NullCheck(L_3);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_4 = XmlInputStream_get_ActualEncoding_mCA509F9F54BD687D275B8F71EFC2BF0F762E149F(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_5 = ((XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_StaticFields*)il2cpp_codegen_static_fields_for(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_il2cpp_TypeInfo_var))->get_StrictUTF8_1();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001d:
	{
		NullCheck(G_B3_2);
		NonBlockingStreamReader__ctor_m091AC093CCB2A3A14F333F110D4475A29964BB2A(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_6 = ___input0;
		__this->set_input_12(L_6);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_0 = ___input0;
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_1 = (XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 *)il2cpp_codegen_object_new(XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629_il2cpp_TypeInfo_var);
		XmlInputStream__ctor_mCA179648377905C883781B738236EBCDE900C5A7(L_1, L_0, /*hidden argument*/NULL);
		XmlStreamReader__ctor_mBBBCCBC38391D62388B968C857FE4A05DF418244(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader__cctor_mFE2BF24C39F6111653630B156836D3B98968FE09 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader__cctor_mFE2BF24C39F6111653630B156836D3B98968FE09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_0 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_0, _stringLiteral1EA4AEE64A9348306AAD4BB0877E2FF6D36F7689, /*hidden argument*/NULL);
		((XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_StaticFields*)il2cpp_codegen_static_fields_for(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var))->set_invalidDataException_13(L_0);
		return;
	}
}
// System.Void System.Xml.XmlStreamReader::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader_Close_mBBDB812FBB2E962F8D4B161D5FECC7736E26FB22 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, const RuntimeMethod* method)
{
	{
		XmlInputStream_tD179743E3D4482E2297EEC3A71D082F2F2B2F629 * L_0 = __this->get_input_12();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Xml.XmlInputStream::Close() */, L_0);
		return;
	}
}
// System.Int32 System.Xml.XmlStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t XmlStreamReader_Read_m157D2E0A7B427461A32F486DF3AEA308BF55437F (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___dest_buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlStreamReader_Read_m157D2E0A7B427461A32F486DF3AEA308BF55437F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_0 = ___dest_buffer0;
			int32_t L_1 = ___index1;
			int32_t L_2 = ___count2;
			int32_t L_3 = NonBlockingStreamReader_Read_m138A2BB961321D0CFF4261C5CC6CD5675863C910(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			goto IL_0020;
		}

IL_000f:
		{
			; // IL_000f: leave IL_0020
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0014;
		throw e;
	}

CATCH_0014:
	{ // begin catch(System.ArgumentException)
		{
			IL2CPP_RUNTIME_CLASS_INIT(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var);
			XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_4 = ((XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_StaticFields*)il2cpp_codegen_static_fields_for(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var))->get_invalidDataException_13();
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlStreamReader_Read_m157D2E0A7B427461A32F486DF3AEA308BF55437F_RuntimeMethod_var);
		}

IL_001b:
		{
			goto IL_0020;
		}
	} // end catch (depth: 1)

IL_0020:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Xml.XmlStreamReader::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlStreamReader_Dispose_mAD58389971E4001EFEDF30DE9B39313CAEF2F841 (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		NonBlockingStreamReader_Dispose_m582611A28CB111FDB1D9E7E981ED184A28687290(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void System.Xml.XmlStreamReader::Close() */, __this);
	}

IL_0013:
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
// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlText__ctor_mF0FB58B9F9E0D48E972654136E45E5DFBD923D67 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlText::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlText_get_LocalName_mF534D142DB83BDAAD93BE554F10505A293988BF7 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlText_get_LocalName_mF534D142DB83BDAAD93BE554F10505A293988BF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA591A242289A352E3BDA962DCE20B666296ED93;
	}
}
// System.String System.Xml.XmlText::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlText_get_Name_m6844BE1F6226741564A719938EC7B7688C7E0ABF (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlText_get_Name_m6844BE1F6226741564A719938EC7B7688C7E0ABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA591A242289A352E3BDA962DCE20B666296ED93;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlText_get_NodeType_mBE0F3BBC20A84FACE3BBB2F5EA575999090DCFF0 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.XmlText::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlText_get_Value_m20AEFDA55EF4319D9A68F3BFF54AB33EADB14877 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlText_set_Value_m5D74660C21B4949EC5EDDD5D0898D574CB4C7F43 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(40 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_0);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlText_get_ParentNode_mD897DAD7106C0456EB9843298A13D56B9E23C852 (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_0 = XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlText_CloneNode_m9DD8F6D0D3A6A0AA2C954B153699A2230CFE8C1C (XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * __this, bool ___deep0, const RuntimeMethod* method)
{
	XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * V_0 = NULL;
	{
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_0 = VirtFuncInvoker0< XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		NullCheck(L_0);
		XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * L_2 = VirtFuncInvoker1< XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 *, String_t* >::Invoke(52 /* System.Xml.XmlText System.Xml.XmlDocument::CreateTextNode(System.String) */, L_0, L_1);
		V_0 = L_2;
		XmlText_t5F596B3ED20FB449A77E07BFA11CCE56E36E9D89 * L_3 = V_0;
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
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m10E2AD5F02C28DE1AB9C9FA66E370CB7C8398CE9 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m10E2AD5F02C28DE1AB9C9FA66E370CB7C8398CE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_0 = ___input0;
		XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * L_1 = (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F *)il2cpp_codegen_object_new(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470(L_1, L_0, /*hidden argument*/NULL);
		XmlTextReader__ctor_m013061FAED66FFF5D06F67E10FAA0FF73EFF84C7(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m013061FAED66FFF5D06F67E10FAA0FF73EFF84C7 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m013061FAED66FFF5D06F67E10FAA0FF73EFF84C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_0 = ___input0;
		NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * L_1 = (NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 *)il2cpp_codegen_object_new(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_il2cpp_TypeInfo_var);
		NameTable__ctor_m16C33853FABBF271CFB3A526899C52DB73DC39E8(L_1, /*hidden argument*/NULL);
		XmlTextReader__ctor_m6FE7D1AA93163BD80F274D04FA9C6AD376123391(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m6FE7D1AA93163BD80F274D04FA9C6AD376123391 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input0, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m6FE7D1AA93163BD80F274D04FA9C6AD376123391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_1 = ___input0;
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_2 = ___nt1;
		XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.Stream,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mCFA2D802CE9995F0698F06A4A651603A6EF25973 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___url0, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___input1, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_mCFA2D802CE9995F0698F06A4A651603A6EF25973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_1 = ___input1;
		XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F * L_2 = (XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F *)il2cpp_codegen_object_new(XmlStreamReader_t86B59C766839F8959042F327B7D4A2A3DBF9E27F_il2cpp_TypeInfo_var);
		XmlStreamReader__ctor_m071A7AA6907CA8B6D062B1D2650BB13EAB7C2470(L_2, L_1, /*hidden argument*/NULL);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_3 = ___nt2;
		XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810(__this, L_0, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___url0, TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * ___input1, XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * ___nt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_m090C5C9B418B7C222937EAD79AF3EA5BD6233810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_1 = ___input1;
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_2 = ___nt2;
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD *)il2cpp_codegen_object_new(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m5483CE3178294E0689F7034939CBEEAD4D737D02(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_source_4(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mE24476169339BBE7C899BA76087A58DF3D9AA139 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___xmlFragment0, int32_t ___fragType1, XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader__ctor_mE24476169339BBE7C899BA76087A58DF3D9AA139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___xmlFragment0;
		int32_t L_1 = ___fragType1;
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_2 = ___context2;
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD *)il2cpp_codegen_object_new(XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_mE8F181BD64BE31AD4D873F8AF0F35D60A8C6EC65(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_source_4(L_3);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mF934EE3057B2B2774B22A6EE67CC2795895501E9 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * ___entityContainer0, bool ___insideAttribute1, const RuntimeMethod* method)
{
	{
		XmlReader__ctor_m2F96CE4C46DA97E10CDACC72C2EC859CCECE6A0D(__this, /*hidden argument*/NULL);
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_0 = ___entityContainer0;
		__this->set_source_4(L_0);
		bool L_1 = ___insideAttribute1;
		__this->set_entityInsideAttribute_5(L_1);
		return;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" IL2CPP_METHOD_ATTR XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m3EC3F18290FF4A3B57F02070165C38AFE1CD3898 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_0 = XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" IL2CPP_METHOD_ATTR XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * G_B4_0 = NULL;
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_3 = __this->get_entity_3();
		G_B4_0 = L_3;
		goto IL_002c;
	}

IL_0026:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_4 = __this->get_source_4();
		G_B4_0 = ((XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 *)(L_4));
	}

IL_002c:
	{
		return G_B4_0;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_AttributeCount_m66BC4467A9552959849627B3FBA56C3E36B7955E (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_BaseURI_m838694287CBFF1A71BD99DCC85230B3C5456170E (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CanResolveEntity_m6B32F25B950BC6B6030EC797FD364BED29FE0C57 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_Depth_m5880B5D2043B71D718CCBA04FADEB7CDC9D1BB87 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0036;
		}
	}
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_3);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_5 = __this->get_entity_3();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlTextReader::get_Depth() */, L_5);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_6)), (int32_t)1));
	}

IL_0036:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_7 = __this->get_source_4();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Mono.Xml2.XmlTextReader::get_Depth() */, L_7);
		return L_8;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_EOF_mE56428F40DBF301A4E5C7B28BE05EC195792BFDC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_0 = __this->get_source_4();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean Mono.Xml2.XmlTextReader::get_EOF() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_HasValue_mA8985223447B1ABD0D15FCD8CD756CD84FF24745 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.Xml.XmlReader::get_HasValue() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_IsDefault_m18FCD9870C69002B0313961100FA3334276E0937 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_IsEmptyElement_m5E89CA0F6EFA65546575004579DF46B1A46BA699 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_LocalName_mED788109E36A2ED336ADDAE56F7E922CA0A637F0 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_Name_mE5CF3DAB4FE3251CEDB94883D5671914C154D60A (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_NamespaceURI_mFED2D2A239A2B256B38FB9C0B8006DA6CFC88149 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" IL2CPP_METHOD_ATTR XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * XmlTextReader_get_NameTable_m04D1E5E0F6E5C4D42C68F7D3EAF101E4604BD332 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_1 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(18 /* System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_NodeType_mA653CF137DB8030ADBE718CBC80E43BC5C0387D3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState() */, L_1);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_3);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_004d;
	}

IL_002b:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_5 = __this->get_entity_3();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		G_B6_0 = ((int32_t)16);
		goto IL_004d;
	}

IL_0042:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_7 = __this->get_entity_3();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType() */, L_7);
		G_B6_0 = ((int32_t)(L_8));
	}

IL_004d:
	{
		return (int32_t)(G_B6_0);
	}

IL_004e:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_9 = __this->get_source_4();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_9);
		return L_10;
	}
}
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" IL2CPP_METHOD_ATTR XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var)));
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_1 = InterfaceFuncInvoker0< XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * >::Invoke(0 /* System.Xml.XmlParserContext Mono.Xml.IHasXmlParserContext::get_ParserContext() */, IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IHasXmlParserContext_t11B1501A380FB040C1CA507CEDF0013C48C7BB31_il2cpp_TypeInfo_var)));
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_Prefix_m5B3597A61395B32B932475C74973A094E3AC9C28 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_0);
		return L_1;
	}
}
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_ReadState_mC0C0269B9CD7725E8B2820D905974CD1CC8C0A4E (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_001c;
	}

IL_0011:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_1 = __this->get_source_4();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState Mono.Xml2.XmlTextReader::get_ReadState() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_001c:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * XmlTextReader_get_Settings_m1C508D8436BBFD8AEF6D3F6478136890FE008184 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_0 = XmlReader_get_Settings_mBD4B79479EB87C79B6D7993457A81AC939239DA0(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_Value_mFD317DC3F00F78D382EF3BAC0544D57D13AA38E7 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.String System.Xml.XmlTextReader::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_get_XmlLang_mD3B3393E385C5C1712E73E764A563CB977F05D11 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_XmlLang() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_XmlSpace_mF15BFE289732595903833322336245F11D9A408C (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(26 /* System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CharacterChecking_m8DE766C9A7BE2CC133D0E69A3E1C25189BDBF736 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CharacterChecking_m8DE766C9A7BE2CC133D0E69A3E1C25189BDBF736(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CharacterChecking_m0124F7F367A175C2D23087C3C677E54BFA614313(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CharacterChecking_mCD86EE7C78DFFF38F9DE80BE8A30FBB63EBE96E7 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		bool L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_CharacterChecking_mCD86EE7C78DFFF38F9DE80BE8A30FBB63EBE96E7(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		bool L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_CharacterChecking_mFD7C0FDB7B4E6FC7D170243BA4D7AC65CF175DC7(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_get_CloseInput_mCDEDF9B9E1E18F311DEEAF447B7E6B9FDD934D31 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		bool L_2 = XmlTextReader_get_CloseInput_mCDEDF9B9E1E18F311DEEAF447B7E6B9FDD934D31(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		bool L_4 = XmlTextReader_get_CloseInput_mCC7CB852EAC4686ABD9036201404F19CC528F1D7(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_CloseInput_mD1864B483E8ACCC465D7AFA9FEBF097D2F02D7D3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		bool L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_CloseInput_mD1864B483E8ACCC465D7AFA9FEBF097D2F02D7D3(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		bool L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_CloseInput_mB1BEAFBCF4C1ABE6F9E3DBF1C7526C679964B68C(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Conformance_m0EDC6E56F95710D0E016485AC156511A71A8D818 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_Conformance_m0EDC6E56F95710D0E016485AC156511A71A8D818(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_Conformance_mC152B79DE9D3B40B17B5F62BE1E3623572AFA272(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" IL2CPP_METHOD_ATTR XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * XmlTextReader_get_Resolver_mA42CC375B33F9290A9B07A068142EEB3B5DF32B3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_0 = __this->get_source_4();
		NullCheck(L_0);
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_1 = XmlTextReader_get_Resolver_m804DC27110CB41BC32A72ED225AB4FE06B604A0A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_CopyProperties_mA1B2ACB3519AE72735ADC989D2F9AE957C18EFDD (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * ___other0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = ___other0;
		NullCheck(L_0);
		bool L_1 = XmlTextReader_get_CharacterChecking_m8DE766C9A7BE2CC133D0E69A3E1C25189BDBF736(L_0, /*hidden argument*/NULL);
		XmlTextReader_set_CharacterChecking_mCD86EE7C78DFFF38F9DE80BE8A30FBB63EBE96E7(__this, L_1, /*hidden argument*/NULL);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = XmlTextReader_get_CloseInput_mCDEDF9B9E1E18F311DEEAF447B7E6B9FDD934D31(L_2, /*hidden argument*/NULL);
		XmlTextReader_set_CloseInput_mD1864B483E8ACCC465D7AFA9FEBF097D2F02D7D3(__this, L_3, /*hidden argument*/NULL);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_4 = ___other0;
		NullCheck(L_4);
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_5 = VirtFuncInvoker0< XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_4);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_6 = ___other0;
		NullCheck(L_6);
		XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * L_7 = VirtFuncInvoker0< XmlReaderSettings_tCBE994FD28559C5C6CD166EF7CAF43C9E8CC65AB * >::Invoke(23 /* System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings() */, L_6);
		NullCheck(L_7);
		int32_t L_8 = XmlReaderSettings_get_ConformanceLevel_m6C96D6CFBE2B888D9BA398A1B89AFE8573319196(L_7, /*hidden argument*/NULL);
		XmlTextReader_set_Conformance_m0EDC6E56F95710D0E016485AC156511A71A8D818(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_9 = ___other0;
		NullCheck(L_9);
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_10 = XmlTextReader_get_Resolver_mA42CC375B33F9290A9B07A068142EEB3B5DF32B3(L_9, /*hidden argument*/NULL);
		XmlTextReader_set_XmlResolver_mB24DF3265A207627EA347046E94BB36CCA966BCC(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_EntityHandling_m4D112BAD32031E39325D1281D6911CFC6F2B3130 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_0 = __this->get_source_4();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReader_get_EntityHandling_mB67024E1A8EBBEBA6B4B684BBDB542170773D288(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LineNumber_m83839A4130FCEF211C44FF403911BFFD4B92A9C8 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		int32_t L_2 = XmlTextReader_get_LineNumber_m83839A4130FCEF211C44FF403911BFFD4B92A9C8(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		int32_t L_4 = XmlTextReader_get_LineNumber_m05271A469147C607FCBAB2B7B2DB41627D85EB35(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_LinePosition_mF4DCC218CAEC7C9BDD6C404AEDA605986C0C4286 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		int32_t L_2 = XmlTextReader_get_LinePosition_mF4DCC218CAEC7C9BDD6C404AEDA605986C0C4286(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		int32_t L_4 = XmlTextReader_get_LinePosition_m760535767BEAEB16B90108993FDEBE2B8354DB55(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_Normalization_mAD06D1F9288414BE856973A19FE69D79FB2BA1DF (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		bool L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_Normalization_mAD06D1F9288414BE856973A19FE69D79FB2BA1DF(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		bool L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_Normalization_m0746011EB8199D87E55BEC4FE8139B7BDBFC5D6A(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextReader_get_WhitespaceHandling_mB349F8B96A2051EFF905BF5C617A46CBD49E6C37 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_0 = __this->get_source_4();
		NullCheck(L_0);
		int32_t L_1 = XmlTextReader_get_WhitespaceHandling_m4189943E69D6605957F9418F0ADD5ABD1AA6B3A6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_WhitespaceHandling_mC93247BFAF887B0E49CBBEB1FC2E651C72856CFD (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_WhitespaceHandling_mC93247BFAF887B0E49CBBEB1FC2E651C72856CFD(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_WhitespaceHandling_m944A282375844979020839B15758167880EED14E(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_set_XmlResolver_mB24DF3265A207627EA347046E94BB36CCA966BCC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * ___value0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_2 = ___value0;
		NullCheck(L_1);
		XmlTextReader_set_XmlResolver_mB24DF3265A207627EA347046E94BB36CCA966BCC(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		XmlResolver_tF417EFBE696C3A5E7656C0FA477260AFF8AA252C * L_4 = ___value0;
		NullCheck(L_3);
		XmlTextReader_set_XmlResolver_mC0C542DF11D12261B3293056FD62466F78D4CC52(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_SkipTextDeclaration_m7C78238A914771EAD60ECD9166A134CAB53AE8AC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		XmlTextReader_SkipTextDeclaration_m7C78238A914771EAD60ECD9166A134CAB53AE8AC(L_1, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_001b:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_2 = __this->get_source_4();
		NullCheck(L_2);
		XmlTextReader_SkipTextDeclaration_m35B8E4C069EDA7CA850D2AE166150F639C0751A8(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_Close_mD5498B54113F40B0D632DE1F0EC3355C094EA05B (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
	}

IL_0016:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_2 = __this->get_source_4();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(27 /* System.Void Mono.Xml2.XmlTextReader::Close() */, L_2);
		return;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_GetAttribute_mA8F4A896B55D431AC19E47467FD9CA1B5781ACC3 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(29 /* System.String System.Xml.XmlReader::GetAttribute(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_GetAttribute_mBADD55EA62A09A8F0CAD288FD62DDC82E752B334 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_GetAttribute_m7480142BB6642C634633940222125E100E7A8FC6 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___namespaceURI1;
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(31 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_LookupNamespace_mCFB7B2A327B531E7197EE9ED60EA345C46462FCF (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prefix0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(32 /* System.String System.Xml.XmlReader::LookupNamespace(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_MoveToAttribute_mF997A40D3C1B586D800771E1042EE4F4C6EF2B65 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___i0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_2, L_3);
		__this->set_insideAttribute_6((bool)1);
		return;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_MoveToAttribute_mB0FED316F1F207D50BE4A580CD9017805B313FBE (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_entity_3();
		String_t* L_3 = ___localName0;
		String_t* L_4 = ___namespaceName1;
		NullCheck(L_2);
		bool L_5 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(34 /* System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_2, L_3, L_4);
		return L_5;
	}

IL_0024:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_6 = __this->get_source_4();
		String_t* L_7 = ___localName0;
		String_t* L_8 = ___namespaceName1;
		NullCheck(L_6);
		bool L_9 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(34 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToAttribute(System.String,System.String) */, L_6, L_7, L_8);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_10 = __this->get_entity_3();
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		bool L_11 = __this->get_entityInsideAttribute_5();
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		__this->set_insideAttribute_6((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_MoveToElement_m252BBAE6BCB7A4054AF2FEEBF8FD57B5D72915D0 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_2);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->set_insideAttribute_6((bool)0);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_MoveToFirstAttribute_mFA7A327F360679CC241E1A5AD1FD5B6E4C146C30 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_entity_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_4 = __this->get_source_4();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToFirstAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_6 = __this->get_entity_3();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = __this->get_entityInsideAttribute_5();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set_insideAttribute_6((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_MoveToNextAttribute_m79E444FE2D1BA9A6D8284EFEBBABAA80CFB0E4BC (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_entity_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute() */, L_2);
		return L_3;
	}

IL_0022:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_4 = __this->get_source_4();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean Mono.Xml2.XmlTextReader::MoveToNextAttribute() */, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_6 = __this->get_entity_3();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		bool L_7 = __this->get_entityInsideAttribute_5();
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_0050:
	{
		__this->set_insideAttribute_6((bool)1);
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_Read_m644D95480AC5F015B12AF103CD74074246985B0D (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_insideAttribute_6((bool)0);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_entity_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_4 = __this->get_entity_3();
		if (!L_4)
		{
			goto IL_006b;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_5 = __this->get_entity_3();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_5);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		return (bool)1;
	}

IL_0050:
	{
		int32_t L_7 = XmlTextReader_get_EntityHandling_m4D112BAD32031E39325D1281D6911CFC6F2B3130(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0069;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_8;
	}

IL_0069:
	{
		return (bool)1;
	}

IL_006b:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_9 = __this->get_source_4();
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean Mono.Xml2.XmlTextReader::Read() */, L_9);
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		return (bool)0;
	}

IL_007d:
	{
		int32_t L_11 = XmlTextReader_get_EntityHandling_m4D112BAD32031E39325D1281D6911CFC6F2B3130(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_00a7;
		}
	}
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_12 = __this->get_source_4();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)5))))
		{
			goto IL_00a7;
		}
	}
	{
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, __this);
		bool L_14 = VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlTextReader::Read() */, __this);
		return L_14;
	}

IL_00a7:
	{
		return (bool)1;
	}
}
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_ReadAttributeValue_m8F5D175DD41ED3017BE3FA4C5573F79B9CF02435 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		bool L_1 = __this->get_entityInsideAttribute_5();
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_2 = __this->get_entity_3();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlTextReader::get_EOF() */, L_2);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C(__this, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0031:
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_4 = __this->get_entity_3();
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlTextReader::Read() */, L_4);
		return (bool)1;
	}

IL_003f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = XmlTextReader_get_Current_m707F94ACB2623F21679AE85324490232FE505284(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_5);
		return L_6;
	}
}
// System.String System.Xml.XmlTextReader::ReadString()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextReader_ReadString_mAFDA9C635397F4471EEEF1D9EE1374DE45DFAAFA (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = XmlReader_ReadString_m91D4D72FC4017ABBD357051B96701465848FB3F1(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * V_0 = NULL;
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(48 /* System.Void System.Xml.XmlTextReader::ResolveEntity() */, L_1);
		goto IL_011a;
	}

IL_001b:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_2 = __this->get_source_4();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::get_NodeType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0037;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_4 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_4, _stringLiteralCAB9D571652E78DFCAC0100ACB0F2C4078B9FCFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_RuntimeMethod_var);
	}

IL_0037:
	{
		V_0 = (XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD *)NULL;
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_5 = XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * L_6 = XmlParserContext_get_Dtd_m44E018E647AD93ADE59DB4D13E7D1C6933027EB4(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_7 = XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		DTDObjectModel_t1F8566CF41C2964FF7D10C0F00255A1A2EA1682E * L_8 = XmlParserContext_get_Dtd_m44E018E647AD93ADE59DB4D13E7D1C6933027EB4(L_7, /*hidden argument*/NULL);
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_9 = __this->get_source_4();
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_9);
		XmlParserContext_tFCFB3C705A296076573E3517AAD1F1C187DACB14 * L_11 = XmlTextReader_get_ParserContext_mA9AF45E4A389DAC0D0B85D1FE78979FC49558903(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_12 = DTDObjectModel_GenerateEntityContentReader_m3F92D6D2CA453CC25D356526C2152C0CDD56B6EB(L_8, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_006b:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_13 = V_0;
		if (L_13)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlTextReader::get_BaseURI() */, __this);
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_15 = __this->get_source_4();
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Xml2.XmlTextReader::get_Name() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteralC9FCA1EFD8FB162E1D25614618D292DF8ABCF050, L_16, /*hidden argument*/NULL);
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_18 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mFDFBD42328AE40DF093C947246265F7F3142D2AC(L_18, __this, L_14, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_RuntimeMethod_var);
	}

IL_0093:
	{
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_19 = __this->get_entityNameStack_7();
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_20 = (Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 *)il2cpp_codegen_object_new(Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45_il2cpp_TypeInfo_var);
		Stack_1__ctor_m6FC59676E1FBAD7919330DDB58328A0EC4A21E24(L_20, /*hidden argument*/Stack_1__ctor_m6FC59676E1FBAD7919330DDB58328A0EC4A21E24_RuntimeMethod_var);
		__this->set_entityNameStack_7(L_20);
		goto IL_00da;
	}

IL_00ae:
	{
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_21 = __this->get_entityNameStack_7();
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_21);
		bool L_23 = Stack_1_Contains_mD3AD4AB2026F952196797FD6B824DD40C2B102A8(L_21, L_22, /*hidden argument*/Stack_1_Contains_mD3AD4AB2026F952196797FD6B824DD40C2B102A8_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral34E3C39BBF56CE446C610972B76C14A8E34DF050, L_24, /*hidden argument*/NULL);
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_26 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, XmlTextReader_ResolveEntity_m9A8D9D4ADFA238C90AB360B6E5F7D41B10BE6E6F_RuntimeMethod_var);
	}

IL_00da:
	{
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_27 = __this->get_entityNameStack_7();
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlTextReader::get_Name() */, __this);
		NullCheck(L_27);
		Stack_1_Push_mC513DE9969A3775192FD4415162DC838134275B7(L_27, L_28, /*hidden argument*/Stack_1_Push_mC513DE9969A3775192FD4415162DC838134275B7_RuntimeMethod_var);
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_29 = V_0;
		bool L_30 = __this->get_insideAttribute_6();
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_31 = (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 *)il2cpp_codegen_object_new(XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_mF934EE3057B2B2774B22A6EE67CC2795895501E9(L_31, L_29, L_30, /*hidden argument*/NULL);
		__this->set_entity_3(L_31);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_32 = __this->get_entity_3();
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_33 = __this->get_entityNameStack_7();
		NullCheck(L_32);
		L_32->set_entityNameStack_7(L_33);
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_34 = __this->get_entity_3();
		NullCheck(L_34);
		XmlTextReader_CopyProperties_mA1B2ACB3519AE72735ADC989D2F9AE957C18EFDD(L_34, __this, /*hidden argument*/NULL);
	}

IL_011a:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_CloseEntity_mEA88FB6E4400FB486D63CF9F783E6A9D0C4CBC1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlTextReader::Close() */, L_0);
		__this->set_entity_3((XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 *)NULL);
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_1 = __this->get_entityNameStack_7();
		NullCheck(L_1);
		Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A(L_1, /*hidden argument*/Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" IL2CPP_METHOD_ATTR void XmlTextReader_Skip_m89478C3F8D9642F9ABD4BF14879ADA4B7D5ABEF9 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		XmlReader_Skip_m53A2B8040644E5C4071EA9FBB1481DF7F4D5CCF9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C" IL2CPP_METHOD_ATTR TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * XmlTextReader_GetRemainder_m36054D3E4B513A1BAC42A62D68980CE56CAAB2B6 (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextReader_GetRemainder_m36054D3E4B513A1BAC42A62D68980CE56CAAB2B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_0 = __this->get_entity_3();
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * L_1 = __this->get_entity_3();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Xml.XmlTextReader::Close() */, L_1);
		__this->set_entity_3((XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 *)NULL);
		Stack_1_t36D6DE3CB7FEC6EDF6EA749E72AD210F334D8F45 * L_2 = __this->get_entityNameStack_7();
		NullCheck(L_2);
		Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A(L_2, /*hidden argument*/Stack_1_Pop_mEDB5178B1417F272D69DA2D91BCFE660CB95EC6A_RuntimeMethod_var);
	}

IL_0029:
	{
		XmlTextReader_tD979FF6B5FEF83373F4D669070FDD627F2447BCD * L_3 = __this->get_source_4();
		NullCheck(L_3);
		TextReader_tC6C39132CD1389E729FA893F06C34EE351D24520 * L_4 = XmlTextReader_GetRemainder_m1D6E059960202549688D7A28169C46A2CF1B84A6(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Xml.XmlTextReader::HasLineInfo()
extern "C" IL2CPP_METHOD_ATTR bool XmlTextReader_HasLineInfo_m404557898A9EDBD8913E6F1B677FA8C6BA33B73F (XmlTextReader_t3A388ABDDBD41FA8B4266A49D00CB7A8C5DC4BE3 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
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
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m1748A6857532C4B7429B578F3E813AF6B62CA492 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___stream0, Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___encoding1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m1748A6857532C4B7429B578F3E813AF6B62CA492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * G_B2_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B2_1 = NULL;
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * G_B1_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B1_1 = NULL;
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * G_B3_0 = NULL;
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * G_B3_1 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B3_2 = NULL;
	{
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_0 = ___stream0;
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_1 = ___encoding1;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_2 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_unmarked_utf8encoding_1();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0013;
	}

IL_0012:
	{
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_3 = ___encoding1;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0013:
	{
		StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C * L_4 = (StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C *)il2cpp_codegen_object_new(StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mBFE544C29936738D5D150E9A90BBC83965328EAE(L_4, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_2);
		XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F(G_B3_2, L_4, /*hidden argument*/NULL);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_5 = ___encoding1;
		__this->set_ignore_encoding_12((bool)((((RuntimeObject*)(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_6 = __this->get_writer_6();
		XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08(__this, L_6, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_10((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_close_output_stream_11((bool)1);
		__this->set_namespaces_13((bool)1);
		__this->set_newline_handling_16(2);
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_0 = (XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D*)SZArrayNew(XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_elements_22(L_0);
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_1 = (Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 *)il2cpp_codegen_object_new(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_il2cpp_TypeInfo_var);
		Stack__ctor_m1A5FCEB63068C7F26EA260514319C0CADB7A4263(L_1, /*hidden argument*/NULL);
		__this->set_new_local_namespaces_23(L_1);
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
		ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_2, /*hidden argument*/NULL);
		__this->set_explicit_nsdecls_24(L_2);
		__this->set_indent_count_27(2);
		__this->set_indent_char_28(((int32_t)32));
		__this->set_indent_string_29(_stringLiteral099600A10A944114AAC406D136B625FB416DD779);
		__this->set_quote_char_32(((int32_t)34));
		XmlWriter__ctor_m6421000552F7848BBF449952D217BCD58295399D(__this, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_3 = ___writer0;
		if (L_3)
		{
			goto IL_0071;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_4 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_4, _stringLiteralFE28F10D2C6DAB4E315F2659ADAA6A4F16B5E4B8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter__ctor_m6552AE4198B7E5287C000A472409F8E9C909606F_RuntimeMethod_var);
	}

IL_0071:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = ___writer0;
		NullCheck(L_5);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_6 = VirtFuncInvoker0< Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_5);
		__this->set_ignore_encoding_12((bool)((((RuntimeObject*)(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_7 = ___writer0;
		XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08(__this, L_7, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_10((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m7CFDC19FBE18FC80C5D4908DD982E3369E93CFA0 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, bool ___closeOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__ctor_m7CFDC19FBE18FC80C5D4908DD982E3369E93CFA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B6_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B7_1 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B10_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B11_1 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B17_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B16_0 = NULL;
	String_t* G_B18_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B18_1 = NULL;
	{
		__this->set_close_output_stream_11((bool)1);
		__this->set_namespaces_13((bool)1);
		__this->set_newline_handling_16(2);
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_0 = (XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D*)SZArrayNew(XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_elements_22(L_0);
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_1 = (Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 *)il2cpp_codegen_object_new(Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5_il2cpp_TypeInfo_var);
		Stack__ctor_m1A5FCEB63068C7F26EA260514319C0CADB7A4263(L_1, /*hidden argument*/NULL);
		__this->set_new_local_namespaces_23(L_1);
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_2 = (ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F *)il2cpp_codegen_object_new(ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F_il2cpp_TypeInfo_var);
		ArrayList__ctor_m152BD8901EFE6F5D542893FFB4C13186CCE9FD8B(L_2, /*hidden argument*/NULL);
		__this->set_explicit_nsdecls_24(L_2);
		__this->set_indent_count_27(2);
		__this->set_indent_char_28(((int32_t)32));
		__this->set_indent_string_29(_stringLiteral099600A10A944114AAC406D136B625FB416DD779);
		__this->set_quote_char_32(((int32_t)34));
		XmlWriter__ctor_m6421000552F7848BBF449952D217BCD58295399D(__this, /*hidden argument*/NULL);
		__this->set_v2_33((bool)1);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_3 = ___settings1;
		if (L_3)
		{
			goto IL_0074;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_4 = (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD *)il2cpp_codegen_object_new(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C(L_4, /*hidden argument*/NULL);
		___settings1 = L_4;
	}

IL_0074:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = ___writer0;
		XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = ___closeOutput2;
		__this->set_close_output_stream_11(L_6);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_7 = ___settings1;
		NullCheck(L_7);
		int32_t L_8 = XmlWriterSettings_get_ConformanceLevel_m0A3DF70786E009CC5E12DAD2C16B592485064C41(L_7, /*hidden argument*/NULL);
		__this->set_allow_doc_fragment_10((bool)((((int32_t)((((int32_t)L_8) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_9 = ___settings1;
		NullCheck(L_9);
		int32_t L_10 = XmlWriterSettings_get_ConformanceLevel_m0A3DF70786E009CC5E12DAD2C16B592485064C41(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (L_11)
		{
			case 0:
			{
				goto IL_00b2;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_00b2:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_12 = ___settings1;
		NullCheck(L_12);
		bool L_13 = XmlWriterSettings_get_OmitXmlDeclaration_mEFA103DA74EDB8143F2C81EF60391893AEFA8649(L_12, /*hidden argument*/NULL);
		G_B5_0 = __this;
		if (!L_13)
		{
			G_B6_0 = __this;
			goto IL_00c4;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_00c5:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_xmldecl_state_14(G_B7_0);
		goto IL_00f8;
	}

IL_00cf:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_14 = ___settings1;
		NullCheck(L_14);
		bool L_15 = XmlWriterSettings_get_OmitXmlDeclaration_mEFA103DA74EDB8143F2C81EF60391893AEFA8649(L_14, /*hidden argument*/NULL);
		G_B9_0 = __this;
		if (!L_15)
		{
			G_B10_0 = __this;
			goto IL_00e1;
		}
	}
	{
		G_B11_0 = 1;
		G_B11_1 = G_B9_0;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B11_0 = 2;
		G_B11_1 = G_B10_0;
	}

IL_00e2:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_xmldecl_state_14(G_B11_0);
		goto IL_00f8;
	}

IL_00ec:
	{
		__this->set_xmldecl_state_14(3);
		goto IL_00f8;
	}

IL_00f8:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_16 = ___settings1;
		NullCheck(L_16);
		bool L_17 = XmlWriterSettings_get_Indent_mC6E449921027BB72E6BA59D68838085A55A0325A(L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_010a;
		}
	}
	{
		XmlTextWriter_set_Formatting_m395A2A58FB1ACB93A5BCDD34521005BA82921ADD(__this, 1, /*hidden argument*/NULL);
	}

IL_010a:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_18 = ___settings1;
		NullCheck(L_18);
		String_t* L_19 = XmlWriterSettings_get_IndentChars_m8BACCD027F8C08ED998C1007B64B2F4117531A08(L_18, /*hidden argument*/NULL);
		G_B16_0 = __this;
		if (L_19)
		{
			G_B17_0 = __this;
			goto IL_0120;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B18_0 = L_20;
		G_B18_1 = G_B16_0;
		goto IL_0126;
	}

IL_0120:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_21 = ___settings1;
		NullCheck(L_21);
		String_t* L_22 = XmlWriterSettings_get_IndentChars_m8BACCD027F8C08ED998C1007B64B2F4117531A08(L_21, /*hidden argument*/NULL);
		G_B18_0 = L_22;
		G_B18_1 = G_B17_0;
	}

IL_0126:
	{
		NullCheck(G_B18_1);
		G_B18_1->set_indent_string_29(G_B18_0);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_23 = ___settings1;
		NullCheck(L_23);
		String_t* L_24 = XmlWriterSettings_get_NewLineChars_m4FAA407F667D3B2B84690E5C9E6E38C5EF336574(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0142;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_25 = ___settings1;
		NullCheck(L_25);
		String_t* L_26 = XmlWriterSettings_get_NewLineChars_m4FAA407F667D3B2B84690E5C9E6E38C5EF336574(L_25, /*hidden argument*/NULL);
		__this->set_newline_30(L_26);
	}

IL_0142:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_27 = ___settings1;
		NullCheck(L_27);
		bool L_28 = XmlWriterSettings_get_NewLineOnAttributes_mA8C994579A7A7B61899E55B2140A2DA2D359A8CC(L_27, /*hidden argument*/NULL);
		__this->set_indent_attributes_31(L_28);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_29 = ___settings1;
		NullCheck(L_29);
		bool L_30 = XmlWriterSettings_get_CheckCharacters_m68E3D6657A618FE667F37CDEE629F17E1940AE7A(L_29, /*hidden argument*/NULL);
		__this->set_check_character_validity_15(L_30);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_31 = ___settings1;
		NullCheck(L_31);
		int32_t L_32 = XmlWriterSettings_get_NewLineHandling_m125E232A5C45104F0CE92E47E342BE8360DDB206(L_31, /*hidden argument*/NULL);
		__this->set_newline_handling_16(L_32);
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_33 = ___settings1;
		NullCheck(L_33);
		int32_t L_34 = XmlWriterSettings_get_NamespaceHandling_m6DFD42170BE968257A9455F0ED07587CBA794AD0(L_33, /*hidden argument*/NULL);
		__this->set_namespace_handling_25(L_34);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter__cctor_m2BB4CABDEA65C3E4607D8BB0AADC670510A44630 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter__cctor_m2BB4CABDEA65C3E4607D8BB0AADC670510A44630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15 * L_0 = (UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15 *)il2cpp_codegen_object_new(UTF8Encoding_t4FD1C5DCBC2F470E97BDFDC2BB1518BB208C1D15_il2cpp_TypeInfo_var);
		UTF8Encoding__ctor_m9812E4C1AFE975AEC2CA7A6A346FBC4834B15902(L_0, (bool)0, (bool)0, /*hidden argument*/NULL);
		((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->set_unmarked_utf8encoding_1(L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * V_0 = NULL;
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* G_B7_0 = NULL;
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 * L_1 = (ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4 *)il2cpp_codegen_object_new(ArgumentNullException_t13371A2F3CCBD85A2B3614AAC1798FAC3E6F66B4_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mBA1072348F0861F80512F3BB2BE685EDBB02F740(L_1, _stringLiteralFE28F10D2C6DAB4E315F2659ADAA6A4F16B5E4B8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_Initialize_m98281BA531218DEFEAA4973CD16C90DDA201EB08_RuntimeMethod_var);
	}

IL_0011:
	{
		NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 * L_2 = (NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6 *)il2cpp_codegen_object_new(NameTable_tE47F4B558F0AA75A29E063658B7BCB3CE6E482E6_il2cpp_TypeInfo_var);
		NameTable__ctor_m16C33853FABBF271CFB3A526899C52DB73DC39E8(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_3 = ___writer0;
		__this->set_writer_6(L_3);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_4 = ___writer0;
		if (!((StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C *)IsInstClass((RuntimeObject*)L_4, StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = ___writer0;
		NullCheck(((StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C *)CastclassClass((RuntimeObject*)L_5, StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_il2cpp_TypeInfo_var)));
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_6 = VirtFuncInvoker0< Stream_tCFD27E43C18381861212C0288CACF467FB602009 * >::Invoke(22 /* System.IO.Stream System.IO.StreamWriter::get_BaseStream() */, ((StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C *)CastclassClass((RuntimeObject*)L_5, StreamWriter_t8043D136B6EE2E79326056FDD0810A9132A9DC0C_il2cpp_TypeInfo_var)));
		__this->set_base_stream_4(L_6);
	}

IL_003a:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_7 = ___writer0;
		__this->set_source_5(L_7);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_8 = V_0;
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_9 = (XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 *)il2cpp_codegen_object_new(XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86_il2cpp_TypeInfo_var);
		XmlNamespaceManager__ctor_mD676E18261B7F75D5DD026491766E5389889CC1F(L_9, L_8, /*hidden argument*/NULL);
		__this->set_nsmanager_20(L_9);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_10 = ___writer0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.IO.TextWriter::get_NewLine() */, L_10);
		__this->set_newline_30(L_11);
		int32_t L_12 = __this->get_newline_handling_16();
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_13 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)5);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_14 = L_13;
		RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4____U24U24fieldU2D43_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m30641073F263B5F108E2CFA92FC054AE66BA986F((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		G_B7_0 = L_14;
		goto IL_0090;
	}

IL_007b:
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_16 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)3);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)38));
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)60));
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_19 = L_18;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)((int32_t)62));
		G_B7_0 = L_19;
	}

IL_0090:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->set_escaped_text_chars_2(G_B7_0);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_20 = (CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*)SZArrayNew(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744_il2cpp_TypeInfo_var, (uint32_t)6);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_21 = L_20;
		RuntimeFieldHandle_tDDEB9F6EC2C3875C313750A5C3C33488A2F7A703  L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tABCDEB03D02815D5F6F33FF21BBF0880559C9DA4____U24U24fieldU2D44_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m30641073F263B5F108E2CFA92FC054AE66BA986F((RuntimeArray *)(RuntimeArray *)L_21, L_22, /*hidden argument*/NULL);
		((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->set_escaped_attr_chars_3(L_21);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_set_Formatting_m395A2A58FB1ACB93A5BCDD34521005BA82921ADD (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_indent_26((bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0));
		return;
	}
}
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_get_XmlLang_m9C924E622C0E9E924609A55109FBCB94820D0148 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_open_count_21();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5 = L_4->get_XmlLang_5();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_get_XmlSpace_mBE48CBAB7AF4EF2E4FDFF4CD2EE63E7CEC741EF4 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_open_count_21();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		int32_t L_5 = L_4->get_XmlSpace_6();
		G_B3_0 = ((int32_t)(L_5));
	}

IL_0025:
	{
		return (int32_t)(G_B3_0);
	}
}
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlTextWriter_get_WriteState_mE2CBDB6D2B005C95C711535EE713D1DD1CB6A8F9 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		return L_0;
	}
}
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_LookupPrefix_m2F832CF80793997E4751E563696B4218874EE461 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___namespaceUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_LookupPrefix_m2F832CF80793997E4751E563696B4218874EE461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___namespaceUri0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___namespaceUri0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}

IL_0016:
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral162ABF240B6251D3A62D6C55F97F733A1658D32C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_LookupPrefix_m2F832CF80793997E4751E563696B4218874EE461_RuntimeMethod_var);
	}

IL_0022:
	{
		String_t* L_5 = ___namespaceUri0;
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_6 = __this->get_nsmanager_20();
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlNamespaceManager::get_DefaultNamespace() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_9;
	}

IL_003e:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_10 = __this->get_nsmanager_20();
		String_t* L_11 = ___namespaceUri0;
		NullCheck(L_10);
		String_t* L_12 = XmlNamespaceManager_LookupPrefixExclusive_m3714B4A832EE6BD846128D7D35E934BCCE68262B(L_10, L_11, (bool)0, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Close_m7C73013641F68E6F3812248597BA2453D0C79015 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001e;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_001e:
	{
		goto IL_0029;
	}

IL_0023:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, __this);
	}

IL_0029:
	{
		int32_t L_2 = __this->get_open_count_21();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0035:
	{
		bool L_3 = __this->get_close_output_stream_11();
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_4 = __this->get_writer_6();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextWriter::Close() */, L_4);
		goto IL_005b;
	}

IL_0050:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = __this->get_writer_6();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_5);
	}

IL_005b:
	{
		__this->set_state_18(5);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::Flush()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_Flush_m0B694083D71E7472E17EE062103328A289428CB6 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_0 = __this->get_writer_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void System.IO.TextWriter::Flush() */, L_0);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartDocument_m145A0A8A953BB7F300559032C808B757B9738F72 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set_is_document_entity_17((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocument(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartDocument_mB3D186661F8784512B1860F8CE1B43DDA7858632 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, bool ___standalone0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___standalone0;
		XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D(__this, (bool)1, L_0, /*hidden argument*/NULL);
		__this->set_is_document_entity_17((bool)1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, bool ___outputStd0, bool ___standalone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B11_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B12_1 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteral6FA4048355E8ABAC44412AD0ADABC7A2CEE12F65, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = __this->get_xmldecl_state_14();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0044;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0037:
	{
		return;
	}

IL_0038:
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F(__this, _stringLiteral658A22E6E30710D4E8E85B2181B79554D764E240, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D_RuntimeMethod_var);
	}

IL_0044:
	{
		__this->set_state_18(1);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = __this->get_writer_6();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral30DF1DD51B0450B0C391FA8E369FCB37A9BC4559);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_6 = __this->get_writer_6();
		Il2CppChar L_7 = __this->get_quote_char_32();
		NullCheck(L_6);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, L_7);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_8 = __this->get_writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralE8DC057D3346E56AED7CF252185DBE1FA6454411);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_9 = __this->get_writer_6();
		Il2CppChar L_10 = __this->get_quote_char_32();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, L_10);
		bool L_11 = __this->get_ignore_encoding_12();
		if (L_11)
		{
			goto IL_00e5;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_12 = __this->get_writer_6();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteralB7A5148DDACFB05E9B7C6F1B3A5B319F1B8705F1);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_13 = __this->get_writer_6();
		Il2CppChar L_14 = __this->get_quote_char_32();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_15 = __this->get_writer_6();
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_16 = __this->get_writer_6();
		NullCheck(L_16);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_17 = VirtFuncInvoker0< Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * >::Invoke(5 /* System.Text.Encoding System.IO.TextWriter::get_Encoding() */, L_16);
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Text.Encoding::get_WebName() */, L_17);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_18);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_19 = __this->get_writer_6();
		Il2CppChar L_20 = __this->get_quote_char_32();
		NullCheck(L_19);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, L_20);
	}

IL_00e5:
	{
		bool L_21 = ___outputStd0;
		if (!L_21)
		{
			goto IL_013d;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_22 = __this->get_writer_6();
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteral0127B47C24A678B54F68BED1F5388F18CD6CD43F);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_23 = __this->get_writer_6();
		Il2CppChar L_24 = __this->get_quote_char_32();
		NullCheck(L_23);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_23, L_24);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_25 = __this->get_writer_6();
		bool L_26 = ___standalone1;
		G_B10_0 = L_25;
		if (!L_26)
		{
			G_B11_0 = L_25;
			goto IL_0122;
		}
	}
	{
		G_B12_0 = _stringLiteralFB360F9C09AC8C5EDB2F18BE5DE4E80EA4C430D0;
		G_B12_1 = G_B10_0;
		goto IL_0127;
	}

IL_0122:
	{
		G_B12_0 = _stringLiteralFD1286353570C5703799BA76999323B7C7447B06;
		G_B12_1 = G_B11_0;
	}

IL_0127:
	{
		NullCheck(G_B12_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B12_1, G_B12_0);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_27 = __this->get_writer_6();
		Il2CppChar L_28 = __this->get_quote_char_32();
		NullCheck(L_27);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, L_28);
	}

IL_013d:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_29 = __this->get_writer_6();
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_29, _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE);
		__this->set_xmldecl_state_14(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___name0, String_t* ___pubid1, String_t* ___sysid2, String_t* ___subset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_mBA7DCC15CA4C77F3A03870180FB460EEE0B1E0AA(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_RuntimeMethod_var);
	}

IL_0029:
	{
		int32_t L_5 = __this->get_node_state_19();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteralF27745EAC549C664A0DFD3BCE825F7AFD87019CD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteDocType_mEEE0CB1551589D807C3402D17AE1A9C84A27A3DB_RuntimeMethod_var);
	}

IL_0040:
	{
		__this->set_node_state_19(((int32_t)10));
		int32_t L_7 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1(__this, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_8 = __this->get_writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteral9C248427E4A045BB61C863530445561BD0D138E0);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_9 = __this->get_writer_6();
		String_t* L_10 = ___name0;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		String_t* L_11 = ___pubid1;
		if (!L_11)
		{
			goto IL_0106;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_12 = __this->get_writer_6();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteralF938069BCBD4BCC740711B1C07E31288F7829797);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_13 = __this->get_writer_6();
		Il2CppChar L_14 = __this->get_quote_char_32();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, L_14);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_15 = __this->get_writer_6();
		String_t* L_16 = ___pubid1;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_17 = __this->get_writer_6();
		Il2CppChar L_18 = __this->get_quote_char_32();
		NullCheck(L_17);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, L_18);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_19 = __this->get_writer_6();
		NullCheck(L_19);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_19, ((int32_t)32));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_20 = __this->get_writer_6();
		Il2CppChar L_21 = __this->get_quote_char_32();
		NullCheck(L_20);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_20, L_21);
		String_t* L_22 = ___sysid2;
		if (!L_22)
		{
			goto IL_00f0;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_23 = __this->get_writer_6();
		String_t* L_24 = ___sysid2;
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_24);
	}

IL_00f0:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_25 = __this->get_writer_6();
		Il2CppChar L_26 = __this->get_quote_char_32();
		NullCheck(L_25);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_25, L_26);
		goto IL_014a;
	}

IL_0106:
	{
		String_t* L_27 = ___sysid2;
		if (!L_27)
		{
			goto IL_014a;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_28 = __this->get_writer_6();
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteralD00B54396BED68CBF959970D395E2DAE36C90217);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_29 = __this->get_writer_6();
		Il2CppChar L_30 = __this->get_quote_char_32();
		NullCheck(L_29);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_29, L_30);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_31 = __this->get_writer_6();
		String_t* L_32 = ___sysid2;
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_31, L_32);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_33 = __this->get_writer_6();
		Il2CppChar L_34 = __this->get_quote_char_32();
		NullCheck(L_33);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_33, L_34);
	}

IL_014a:
	{
		String_t* L_35 = ___subset3;
		if (!L_35)
		{
			goto IL_017e;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_36 = __this->get_writer_6();
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_37 = __this->get_writer_6();
		String_t* L_38 = ___subset3;
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, L_38);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_39 = __this->get_writer_6();
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_39, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
	}

IL_017e:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_40 = __this->get_writer_6();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)62));
		__this->set_state_18(1);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* V_1 = NULL;
	XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteralE1CA8C073F0F4B3BBF6E9D1C49867D6B1C49EC1E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var);
	}

IL_0024:
	{
		__this->set_node_state_19(1);
		String_t* L_3 = ___prefix0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_003d:
	{
		bool L_6 = __this->get_namespaces_13();
		if (L_6)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_7 = ___namespaceUri2;
		if (!L_7)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_8 = ___namespaceUri2;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		Exception_t * L_10 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteralC9E45AA9177CB61B95B8468A972DE4AA387CE20B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var);
	}

IL_0066:
	{
		bool L_11 = __this->get_namespaces_13();
		if (L_11)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_12 = ___prefix0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0089;
		}
	}
	{
		Exception_t * L_14 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral186B3ECE6D1F6FD3555A1C225DFEB8A9DEEB3BDF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var);
	}

IL_0089:
	{
		String_t* L_15 = ___prefix0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_17 = ___namespaceUri2;
		if (L_17)
		{
			goto IL_00c7;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_18 = __this->get_nsmanager_20();
		String_t* L_19 = ___prefix0;
		NullCheck(L_18);
		String_t* L_20 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_18, L_19, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_20;
		String_t* L_21 = ___namespaceUri2;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_22 = ___namespaceUri2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00c7;
		}
	}

IL_00bb:
	{
		Exception_t * L_24 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral947EBC5EF2F0E5D8650771141D095733C0616838, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var);
	}

IL_00c7:
	{
		bool L_25 = __this->get_namespaces_13();
		if (!L_25)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_26 = ___prefix0;
		if (!L_26)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_27 = ___prefix0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_27, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_29 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_29, _stringLiteral7859E7AFFA569B5D7ACA069908DBD2ED9F05629B, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_31 = ___prefix0;
		NullCheck(L_31);
		Il2CppChar L_32 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_31, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)120))))
		{
			goto IL_0110;
		}
	}
	{
		String_t* L_33 = ___prefix0;
		NullCheck(L_33);
		Il2CppChar L_34 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_33, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)88)))))
		{
			goto IL_0153;
		}
	}

IL_0110:
	{
		String_t* L_35 = ___prefix0;
		NullCheck(L_35);
		Il2CppChar L_36 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_35, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)109))))
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_37 = ___prefix0;
		NullCheck(L_37);
		Il2CppChar L_38 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_37, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_0153;
		}
	}

IL_012c:
	{
		String_t* L_39 = ___prefix0;
		NullCheck(L_39);
		Il2CppChar L_40 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_39, 2, /*hidden argument*/NULL);
		if ((((int32_t)L_40) == ((int32_t)((int32_t)108))))
		{
			goto IL_0148;
		}
	}
	{
		String_t* L_41 = ___prefix0;
		NullCheck(L_41);
		Il2CppChar L_42 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_41, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)76)))))
		{
			goto IL_0153;
		}
	}

IL_0148:
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_43 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_43, _stringLiteralFC10B29CDDED26401EE7BC8EB6FDB0E440CCDEDC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, XmlTextWriter_WriteStartElement_mF17B5488F68456368BC0D4E432EB2DF7C3744590_RuntimeMethod_var);
	}

IL_0153:
	{
		int32_t L_44 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45(__this, /*hidden argument*/NULL);
	}

IL_0165:
	{
		int32_t L_45 = __this->get_state_18();
		if ((!(((uint32_t)L_45) == ((uint32_t)2))))
		{
			goto IL_0177;
		}
	}
	{
		XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6(__this, /*hidden argument*/NULL);
	}

IL_0177:
	{
		int32_t L_46 = __this->get_open_count_21();
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_47 = __this->get_elements_22();
		int32_t L_48 = __this->get_open_count_21();
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_50);
		L_50->set_HasElements_4((bool)1);
	}

IL_0198:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_51 = __this->get_nsmanager_20();
		NullCheck(L_51);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Xml.XmlNamespaceManager::PushScope() */, L_51);
		bool L_52 = __this->get_namespaces_13();
		if (!L_52)
		{
			goto IL_01e7;
		}
	}
	{
		String_t* L_53 = ___namespaceUri2;
		if (!L_53)
		{
			goto IL_01e7;
		}
	}
	{
		bool L_54 = V_0;
		if (!L_54)
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_55 = ___namespaceUri2;
		NullCheck(L_55);
		int32_t L_56 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cf;
		}
	}
	{
		String_t* L_57 = ___namespaceUri2;
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_57);
		___prefix0 = L_58;
	}

IL_01cf:
	{
		String_t* L_59 = ___prefix0;
		if (!L_59)
		{
			goto IL_01e0;
		}
	}
	{
		String_t* L_60 = ___namespaceUri2;
		NullCheck(L_60);
		int32_t L_61 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_01e7;
		}
	}

IL_01e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_62 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_62;
	}

IL_01e7:
	{
		XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1(__this, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_63 = __this->get_writer_6();
		NullCheck(L_63);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_63, _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29);
		String_t* L_64 = ___prefix0;
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_64, /*hidden argument*/NULL);
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0222;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_66 = __this->get_writer_6();
		String_t* L_67 = ___prefix0;
		NullCheck(L_66);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_66, L_67);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_68 = __this->get_writer_6();
		NullCheck(L_68);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_68, ((int32_t)58));
	}

IL_0222:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_69 = __this->get_writer_6();
		String_t* L_70 = ___localName1;
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, L_70);
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_71 = __this->get_elements_22();
		NullCheck(L_71);
		int32_t L_72 = __this->get_open_count_21();
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length))))) == ((uint32_t)L_72))))
		{
			goto IL_0268;
		}
	}
	{
		int32_t L_73 = __this->get_open_count_21();
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_74 = (XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D*)SZArrayNew(XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_73<<(int32_t)1)));
		V_1 = L_74;
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_75 = __this->get_elements_22();
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_76 = V_1;
		int32_t L_77 = __this->get_open_count_21();
		Array_Copy_mD689E98055DD68EF7F0D889EC09CF0A1C79C2020((RuntimeArray *)(RuntimeArray *)L_75, (RuntimeArray *)(RuntimeArray *)L_76, L_77, /*hidden argument*/NULL);
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_78 = V_1;
		__this->set_elements_22(L_78);
	}

IL_0268:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_79 = __this->get_elements_22();
		int32_t L_80 = __this->get_open_count_21();
		NullCheck(L_79);
		int32_t L_81 = L_80;
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		if (L_82)
		{
			goto IL_028c;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_83 = __this->get_elements_22();
		int32_t L_84 = __this->get_open_count_21();
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_85 = (XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 *)il2cpp_codegen_object_new(XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3_il2cpp_TypeInfo_var);
		XmlNodeInfo__ctor_mC958324E311A3286C2A0ADD03A656D8DEDBEFFDA(L_85, /*hidden argument*/NULL);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_85);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_84), (XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 *)L_85);
	}

IL_028c:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_86 = __this->get_elements_22();
		int32_t L_87 = __this->get_open_count_21();
		NullCheck(L_86);
		int32_t L_88 = L_87;
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_2 = L_89;
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_90 = V_2;
		String_t* L_91 = ___prefix0;
		NullCheck(L_90);
		L_90->set_Prefix_0(L_91);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_92 = V_2;
		String_t* L_93 = ___localName1;
		NullCheck(L_92);
		L_92->set_LocalName_1(L_93);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_94 = V_2;
		String_t* L_95 = ___namespaceUri2;
		NullCheck(L_94);
		L_94->set_NS_2(L_95);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_96 = V_2;
		NullCheck(L_96);
		L_96->set_HasSimple_3((bool)0);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_97 = V_2;
		NullCheck(L_97);
		L_97->set_HasElements_4((bool)0);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_98 = V_2;
		String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlTextWriter::get_XmlLang() */, __this);
		NullCheck(L_98);
		L_98->set_XmlLang_5(L_99);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_100 = V_2;
		int32_t L_101 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace() */, __this);
		NullCheck(L_100);
		L_100->set_XmlSpace_6(L_101);
		int32_t L_102 = __this->get_open_count_21();
		__this->set_open_count_21(((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1)));
		bool L_103 = __this->get_namespaces_13();
		if (!L_103)
		{
			goto IL_0327;
		}
	}
	{
		String_t* L_104 = ___namespaceUri2;
		if (!L_104)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_105 = __this->get_nsmanager_20();
		String_t* L_106 = ___prefix0;
		NullCheck(L_105);
		String_t* L_107 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_105, L_106, (bool)0, /*hidden argument*/NULL);
		V_3 = L_107;
		String_t* L_108 = V_3;
		String_t* L_109 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_110 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_108, L_109, /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_0327;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_111 = __this->get_nsmanager_20();
		String_t* L_112 = ___prefix0;
		String_t* L_113 = ___namespaceUri2;
		NullCheck(L_111);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_111, L_112, L_113);
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_114 = __this->get_new_local_namespaces_23();
		String_t* L_115 = ___prefix0;
		NullCheck(L_114);
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_114, L_115);
	}

IL_0327:
	{
		__this->set_state_18(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_1 = __this->get_writer_6();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)62));
	}

IL_001f:
	{
		__this->set_state_18(4);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_1 = __this->get_new_local_namespaces_23();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_3 = __this->get_explicit_nsdecls_24();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_5 = __this->get_explicit_nsdecls_24();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_6 = __this->get_explicit_nsdecls_24();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		V_0 = L_7;
		goto IL_00ba;
	}

IL_0050:
	{
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_8 = __this->get_new_local_namespaces_23();
		NullCheck(L_8);
		RuntimeObject * L_9 = VirtFuncInvoker0< RuntimeObject * >::Invoke(19 /* System.Object System.Collections.Stack::Pop() */, L_8);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var));
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_0091;
	}

IL_006a:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_10 = __this->get_explicit_nsdecls_24();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		RuntimeObject * L_12 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_10, L_11);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00a2;
	}

IL_008d:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0091:
	{
		int32_t L_16 = V_3;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_17 = __this->get_explicit_nsdecls_24();
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_006a;
		}
	}

IL_00a2:
	{
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00ba;
	}

IL_00ad:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_20 = __this->get_explicit_nsdecls_24();
		String_t* L_21 = V_1;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00ba:
	{
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_22 = __this->get_new_local_namespaces_23();
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Stack::get_Count() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_24 = V_0;
		V_4 = L_24;
		goto IL_0180;
	}

IL_00d3:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_25 = __this->get_explicit_nsdecls_24();
		int32_t L_26 = V_4;
		NullCheck(L_25);
		RuntimeObject * L_27 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_25, L_26);
		V_5 = ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var));
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_28 = __this->get_nsmanager_20();
		String_t* L_29 = V_5;
		NullCheck(L_28);
		String_t* L_30 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_28, L_29, (bool)0, /*hidden argument*/NULL);
		V_6 = L_30;
		String_t* L_31 = V_6;
		if (L_31)
		{
			goto IL_0103;
		}
	}
	{
		goto IL_017a;
	}

IL_0103:
	{
		String_t* L_32 = V_5;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_34 = __this->get_writer_6();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralEA9A94C5DAEE77E5AFB3EDEDAE3E09CBA26D4FCC);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_35 = __this->get_writer_6();
		String_t* L_36 = V_5;
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_35, L_36);
		goto IL_0142;
	}

IL_0132:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_37 = __this->get_writer_6();
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_37, _stringLiteralEB8431F8E06C8492F2806E7A7EAA8A4A288D55D1);
	}

IL_0142:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_38 = __this->get_writer_6();
		NullCheck(L_38);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_38, ((int32_t)61));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_39 = __this->get_writer_6();
		Il2CppChar L_40 = __this->get_quote_char_32();
		NullCheck(L_39);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_39, L_40);
		String_t* L_41 = V_6;
		XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1(__this, L_41, (bool)1, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_42 = __this->get_writer_6();
		Il2CppChar L_43 = __this->get_quote_char_32();
		NullCheck(L_42);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_42, L_43);
	}

IL_017a:
	{
		int32_t L_44 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0180:
	{
		int32_t L_45 = V_4;
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_46 = __this->get_explicit_nsdecls_24();
		NullCheck(L_46);
		int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00d3;
		}
	}
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_48 = __this->get_explicit_nsdecls_24();
		NullCheck(L_48);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_48);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndElement_m80A0EB462D1AF6F66E7C97D828A8A5E519E2ED42 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteFullEndElement_mF26FDA596CCC2A35BA35BF7439C8D2428CA232A2 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, bool ___full0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_state_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}

IL_0018:
	{
		Exception_t * L_2 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteral6BDB3C5694D4A738A5ED7467CC26DEF7664323A6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9_RuntimeMethod_var);
	}

IL_0024:
	{
		int32_t L_3 = __this->get_open_count_21();
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F(__this, _stringLiteral28020C12AA0B6BFDD59787318EE70FF83FE6D232, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteEndElementCore_mEC9DC01F03CC45B4BA467EA5E5ACF212A84846C9_RuntimeMethod_var);
	}

IL_003b:
	{
		XmlTextWriter_CloseStartElementCore_m7F9ACCCA95663C2060C0EE1AF12E80A08D1FD33E(__this, /*hidden argument*/NULL);
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_5 = __this->get_nsmanager_20();
		NullCheck(L_5);
		VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlNamespaceManager::PopScope() */, L_5);
		int32_t L_6 = __this->get_state_18();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0081;
		}
	}
	{
		bool L_7 = ___full0;
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_8 = __this->get_writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)62));
		goto IL_0081;
	}

IL_0071:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_9 = __this->get_writer_6();
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, _stringLiteralDE797FFB1A4E00CD7AF4F5B2FDC0F6EFA2CFC66B);
	}

IL_0081:
	{
		bool L_10 = ___full0;
		if (L_10)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_11 = __this->get_state_18();
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0099;
		}
	}

IL_0093:
	{
		XmlTextWriter_WriteIndentEndElement_m455B818F02F4F45A9528254EA056BC5FCA938118(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_12 = __this->get_elements_22();
		int32_t L_13 = __this->get_open_count_21();
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		V_1 = L_14;
		__this->set_open_count_21(L_14);
		int32_t L_15 = V_1;
		NullCheck(L_12);
		int32_t L_16 = L_15;
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		bool L_18 = ___full0;
		if (L_18)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_19 = __this->get_state_18();
		if ((!(((uint32_t)L_19) == ((uint32_t)4))))
		{
			goto IL_0121;
		}
	}

IL_00c4:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_20 = __this->get_writer_6();
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_20, _stringLiteral148AD7EB924EA204A6D3EA8E34EF9AAD04C02287);
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_Prefix_0();
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_24 = __this->get_writer_6();
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_Prefix_0();
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, L_26);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_27 = __this->get_writer_6();
		NullCheck(L_27);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_27, ((int32_t)58));
	}

IL_0103:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_28 = __this->get_writer_6();
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_LocalName_1();
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, L_30);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_31 = __this->get_writer_6();
		NullCheck(L_31);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_31, ((int32_t)62));
	}

IL_0121:
	{
		__this->set_state_18(4);
		int32_t L_32 = __this->get_open_count_21();
		if (L_32)
		{
			goto IL_013b;
		}
	}
	{
		__this->set_node_state_19(((int32_t)15));
	}

IL_013b:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___namespaceUri2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B52_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B51_0 = NULL;
	String_t* G_B53_0 = NULL;
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * G_B53_1 = NULL;
	{
		int32_t L_0 = __this->get_state_18();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlTextWriter::WriteEndAttribute() */, __this);
	}

IL_0012:
	{
		int32_t L_1 = __this->get_state_18();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->get_state_18();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteralA086D942884A301B827479029BA19C2746237425, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_RuntimeMethod_var);
	}

IL_0035:
	{
		String_t* L_4 = ___prefix0;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___prefix0 = L_5;
	}

IL_0042:
	{
		V_0 = (bool)0;
		String_t* L_6 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_6, _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		V_0 = (bool)1;
		String_t* L_8 = ___prefix0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_10 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_10, _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		___prefix0 = _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA;
	}

IL_0078:
	{
		goto IL_00ad;
	}

IL_007d:
	{
		String_t* L_12 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_12, _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00ab;
		}
	}
	{
		String_t* L_14 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_14, _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a8;
		}
	}
	{
		String_t* L_16 = ___prefix0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_16, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 0;
	}

IL_00a9:
	{
		G_B18_0 = G_B16_0;
		goto IL_00ac;
	}

IL_00ab:
	{
		G_B18_0 = 1;
	}

IL_00ac:
	{
		V_0 = (bool)G_B18_0;
	}

IL_00ad:
	{
		bool L_18 = __this->get_namespaces_13();
		if (!L_18)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_19 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_19, _stringLiteral42F7B70ED71B02780AEA1639F4E24485753CE736, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		___namespaceUri2 = _stringLiteral7859E7AFFA569B5D7ACA069908DBD2ED9F05629B;
		goto IL_00f3;
	}

IL_00d4:
	{
		String_t* L_21 = ___namespaceUri2;
		if (L_21)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_22 = V_0;
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		___namespaceUri2 = _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130;
		goto IL_00f3;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___namespaceUri2 = L_23;
	}

IL_00f3:
	{
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_25 = ___namespaceUri2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_25, _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral0E7D45A89FBE43241F6EC32EAAA6BC29E9D24EDF, _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130, /*hidden argument*/NULL);
		Exception_t * L_28 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_RuntimeMethod_var);
	}

IL_011f:
	{
		String_t* L_29 = ___prefix0;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_31 = ___namespaceUri2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0162;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_33 = __this->get_nsmanager_20();
		String_t* L_34 = ___prefix0;
		NullCheck(L_33);
		String_t* L_35 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_33, L_34, (bool)0, /*hidden argument*/NULL);
		___namespaceUri2 = L_35;
		String_t* L_36 = ___namespaceUri2;
		if (!L_36)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_37 = ___namespaceUri2;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0162;
		}
	}

IL_0156:
	{
		Exception_t * L_39 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral947EBC5EF2F0E5D8650771141D095733C0616838, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, NULL, XmlTextWriter_WriteStartAttribute_mFB6DD8CCE1E4F6F7EA9006B047DDB54B1C9E7B21_RuntimeMethod_var);
	}

IL_0162:
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_41 = ___namespaceUri2;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_017f;
		}
	}
	{
		String_t* L_43 = ___prefix0;
		String_t* L_44 = ___localName1;
		String_t* L_45 = ___namespaceUri2;
		String_t* L_46 = XmlTextWriter_DetermineAttributePrefix_m0AA33E68BF4562FAE20D6C41AEF7DD3CB72F4863(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		___prefix0 = L_46;
	}

IL_017f:
	{
		bool L_47 = __this->get_indent_attributes_31();
		if (!L_47)
		{
			goto IL_0195;
		}
	}
	{
		XmlTextWriter_WriteIndentAttribute_m12062B8804B70631F934681C60A8D6F03DD8F841(__this, /*hidden argument*/NULL);
		goto IL_01ad;
	}

IL_0195:
	{
		int32_t L_48 = __this->get_state_18();
		if (!L_48)
		{
			goto IL_01ad;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_49 = __this->get_writer_6();
		NullCheck(L_49);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_49, ((int32_t)32));
	}

IL_01ad:
	{
		String_t* L_50 = ___prefix0;
		NullCheck(L_50);
		int32_t L_51 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_50, /*hidden argument*/NULL);
		if ((((int32_t)L_51) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_52 = __this->get_writer_6();
		String_t* L_53 = ___prefix0;
		NullCheck(L_52);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_52, L_53);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_54 = __this->get_writer_6();
		NullCheck(L_54);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_54, ((int32_t)58));
	}

IL_01d2:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_55 = __this->get_writer_6();
		String_t* L_56 = ___localName1;
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_55, L_56);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_57 = __this->get_writer_6();
		NullCheck(L_57);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_57, ((int32_t)61));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_58 = __this->get_writer_6();
		Il2CppChar L_59 = __this->get_quote_char_32();
		NullCheck(L_58);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_58, L_59);
		bool L_60 = V_0;
		if (L_60)
		{
			goto IL_0212;
		}
	}
	{
		String_t* L_61 = ___prefix0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_61, _stringLiteral42F7B70ED71B02780AEA1639F4E24485753CE736, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_028b;
		}
	}

IL_0212:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_63 = __this->get_preserver_7();
		if (L_63)
		{
			goto IL_022d;
		}
	}
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_64 = (StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D *)il2cpp_codegen_object_new(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D_il2cpp_TypeInfo_var);
		StringWriter__ctor_m6A203053C6A91BBF97C1BCD4EE438EFDC53BAC99(L_64, /*hidden argument*/NULL);
		__this->set_preserver_7(L_64);
		goto IL_023e;
	}

IL_022d:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_65 = __this->get_preserver_7();
		NullCheck(L_65);
		StringBuilder_t * L_66 = VirtFuncInvoker0< StringBuilder_t * >::Invoke(21 /* System.Text.StringBuilder System.IO.StringWriter::GetStringBuilder() */, L_65);
		NullCheck(L_66);
		StringBuilder_set_Length_m8865F1FDBE49082D17BABCEAE62D8BDFC0311818(L_66, 0, /*hidden argument*/NULL);
	}

IL_023e:
	{
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_67 = __this->get_preserver_7();
		__this->set_writer_6(L_67);
		bool L_68 = V_0;
		if (L_68)
		{
			goto IL_0263;
		}
	}
	{
		__this->set_is_preserved_xmlns_9((bool)0);
		String_t* L_69 = ___localName1;
		__this->set_preserved_name_8(L_69);
		goto IL_028b;
	}

IL_0263:
	{
		__this->set_is_preserved_xmlns_9((bool)1);
		String_t* L_70 = ___localName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_71 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_70, _stringLiteral417937288FDEE75EA79B1648FDB20AE19A1B35EA, /*hidden argument*/NULL);
		G_B51_0 = __this;
		if (!L_71)
		{
			G_B52_0 = __this;
			goto IL_0285;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B53_0 = L_72;
		G_B53_1 = G_B51_0;
		goto IL_0286;
	}

IL_0285:
	{
		String_t* L_73 = ___localName1;
		G_B53_0 = L_73;
		G_B53_1 = G_B52_0;
	}

IL_0286:
	{
		NullCheck(G_B53_1);
		G_B53_1->set_preserved_name_8(G_B53_0);
	}

IL_028b:
	{
		__this->set_state_18(3);
		return;
	}
}
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_DetermineAttributePrefix_m0AA33E68BF4562FAE20D6C41AEF7DD3CB72F4863 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___prefix0, String_t* ___local1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_DetermineAttributePrefix_m0AA33E68BF4562FAE20D6C41AEF7DD3CB72F4863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___prefix0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = ___ns2;
		String_t* L_3 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_2);
		___prefix0 = L_3;
		String_t* L_4 = ___prefix0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = ___prefix0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_7 = ___prefix0;
		return L_7;
	}

IL_002a:
	{
		V_0 = (bool)1;
		goto IL_009a;
	}

IL_0031:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_8 = __this->get_nsmanager_20();
		NullCheck(L_8);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_9 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_8);
		String_t* L_10 = ___prefix0;
		NullCheck(L_9);
		String_t* L_11 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(4 /* System.String System.Xml.XmlNameTable::Add(System.String) */, L_9, L_10);
		___prefix0 = L_11;
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_12 = __this->get_nsmanager_20();
		String_t* L_13 = ___prefix0;
		NullCheck(L_12);
		String_t* L_14 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_12, L_13, (bool)1, /*hidden argument*/NULL);
		V_1 = L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_18 = ___prefix0;
		return L_18;
	}

IL_0060:
	{
		String_t* L_19 = V_1;
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_20 = __this->get_nsmanager_20();
		String_t* L_21 = ___prefix0;
		String_t* L_22 = V_1;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void System.Xml.XmlNamespaceManager::RemoveNamespace(System.String,System.String) */, L_20, L_21, L_22);
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_23 = __this->get_nsmanager_20();
		String_t* L_24 = ___prefix0;
		NullCheck(L_23);
		String_t* L_25 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_23, L_24, (bool)1, /*hidden argument*/NULL);
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		V_0 = (bool)1;
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_28 = __this->get_nsmanager_20();
		String_t* L_29 = ___prefix0;
		String_t* L_30 = V_1;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_28, L_29, L_30);
	}

IL_009a:
	{
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00aa;
		}
	}
	{
		String_t* L_32 = ___ns2;
		String_t* L_33 = XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D(__this, L_32, (bool)1, /*hidden argument*/NULL);
		___prefix0 = L_33;
	}

IL_00aa:
	{
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_34 = __this->get_new_local_namespaces_23();
		String_t* L_35 = ___prefix0;
		NullCheck(L_34);
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_34, L_35);
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_36 = __this->get_nsmanager_20();
		String_t* L_37 = ___prefix0;
		String_t* L_38 = ___ns2;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_36, L_37, L_38);
		String_t* L_39 = ___prefix0;
		return L_39;
	}
}
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___ns0, bool ___skipLookup1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B3_0 = NULL;
	{
		bool L_0 = ___skipLookup1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_1 = ___ns0;
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_1);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_00b2;
	}

IL_002f:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_7 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_8 = L_7;
		int32_t L_9 = __this->get_open_count_21();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_12 = L_8;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		String_t* L_16 = StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985(_stringLiteral4CB7A257A87B43D73800487B7F57EB27CBBB5C07, L_12, /*hidden argument*/NULL);
		V_0 = L_16;
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_17 = __this->get_new_local_namespaces_23();
		String_t* L_18 = V_0;
		NullCheck(L_17);
		bool L_19 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(15 /* System.Boolean System.Collections.Stack::Contains(System.Object) */, L_17, L_18);
		if (!L_19)
		{
			goto IL_006d;
		}
	}
	{
		goto IL_00ae;
	}

IL_006d:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_20 = __this->get_nsmanager_20();
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_21 = __this->get_nsmanager_20();
		NullCheck(L_21);
		XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * L_22 = VirtFuncInvoker0< XmlNameTable_tAA4F116720DEE4495552DD594D090390F342894B * >::Invoke(7 /* System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::get_NameTable() */, L_21);
		String_t* L_23 = V_0;
		NullCheck(L_22);
		String_t* L_24 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(6 /* System.String System.Xml.XmlNameTable::Get(System.String) */, L_22, L_23);
		NullCheck(L_20);
		String_t* L_25 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String System.Xml.XmlNamespaceManager::LookupNamespace(System.String) */, L_20, L_24);
		if (!L_25)
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00ae;
	}

IL_0093:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_26 = __this->get_nsmanager_20();
		String_t* L_27 = V_0;
		String_t* L_28 = ___ns0;
		NullCheck(L_26);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_26, L_27, L_28);
		Stack_t7384B3BC16406A09DCD2C2D2EA591D34ACBFDBA5 * L_29 = __this->get_new_local_namespaces_23();
		String_t* L_30 = V_0;
		NullCheck(L_29);
		VirtActionInvoker1< RuntimeObject * >::Invoke(20 /* System.Void System.Collections.Stack::Push(System.Object) */, L_29, L_30);
		String_t* L_31 = V_0;
		return L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00b2:
	{
		goto IL_002f;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, _stringLiteral26419611CAC6B146C81C560C579F6750ABC20526, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_RuntimeMethod_var);
	}

IL_0018:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_2 = __this->get_writer_6();
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_3 = __this->get_preserver_7();
		if ((!(((RuntimeObject*)(TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 *)L_2) == ((RuntimeObject*)(StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D *)L_3))))
		{
			goto IL_02e2;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_4 = __this->get_source_5();
		__this->set_writer_6(L_4);
		StringWriter_t3C72AF79544098A9167A3748E65721DB7ED2960D * L_5 = __this->get_preserver_7();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_5);
		V_0 = L_6;
		bool L_7 = __this->get_is_preserved_xmlns_9();
		if (!L_7)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_8 = __this->get_preserved_name_8();
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0074;
		}
	}
	{
		Exception_t * L_12 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral19135B60BB317176833558266D07E27A0ECA8924, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_RuntimeMethod_var);
	}

IL_0074:
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_13 = __this->get_nsmanager_20();
		String_t* L_14 = __this->get_preserved_name_8();
		NullCheck(L_13);
		String_t* L_15 = XmlNamespaceManager_LookupNamespace_mB1A9B6274DEC6704D543373FC590BC04C0D98ADA(L_13, L_14, (bool)0, /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = __this->get_namespace_handling_25();
		if (!((int32_t)((int32_t)L_16&(int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}

IL_00a0:
	{
		ArrayList_t438A4032A4FBAF49F565FAD10C546E26CFBD847F * L_20 = __this->get_explicit_nsdecls_24();
		String_t* L_21 = __this->get_preserved_name_8();
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_00b2:
	{
		int32_t L_22 = __this->get_open_count_21();
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_018c;
		}
	}
	{
		bool L_23 = __this->get_v2_33();
		if (!L_23)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_24 = __this->get_elements_22();
		int32_t L_25 = __this->get_open_count_21();
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = L_27->get_Prefix_0();
		String_t* L_29 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_31 = __this->get_elements_22();
		int32_t L_32 = __this->get_open_count_21();
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		String_t* L_35 = L_34->get_NS_2();
		String_t* L_36 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_38 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral90AA1810DE5F0A23C768CF496EC7C8BCA73D80A5, L_38, /*hidden argument*/NULL);
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_40 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_40, L_39, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, NULL, XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_RuntimeMethod_var);
	}

IL_0122:
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_41 = __this->get_elements_22();
		int32_t L_42 = __this->get_open_count_21();
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		String_t* L_45 = L_44->get_NS_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_47 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_48 = __this->get_elements_22();
		int32_t L_49 = __this->get_open_count_21();
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52 = L_51->get_Prefix_0();
		String_t* L_53 = __this->get_preserved_name_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_54 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_52, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016e;
		}
	}
	{
		goto IL_018c;
	}

IL_016e:
	{
		String_t* L_55 = V_1;
		String_t* L_56 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		XmlNamespaceManager_t638B0C086B7716A1FE071BF9611C4CE780717F86 * L_58 = __this->get_nsmanager_20();
		String_t* L_59 = __this->get_preserved_name_8();
		String_t* L_60 = V_0;
		NullCheck(L_58);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void System.Xml.XmlNamespaceManager::AddNamespace(System.String,System.String) */, L_58, L_59, L_60);
	}

IL_018c:
	{
		goto IL_02d6;
	}

IL_0191:
	{
		String_t* L_61 = __this->get_preserved_name_8();
		V_2 = L_61;
		String_t* L_62 = V_2;
		if (!L_62)
		{
			goto IL_02d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_63 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_35();
		if (L_63)
		{
			goto IL_01cd;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_64 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_64, 2, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_3 = L_64;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_65 = V_3;
		NullCheck(L_65);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_65, _stringLiteral7A2F85497548F3DB88542025E6F75908B8716C12, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_66 = V_3;
		NullCheck(L_66);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_66, _stringLiteral0803DF4FF1650933D2FFE6BE04D4B21432134252, 1, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_67 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map54_35(L_67);
	}

IL_01cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_68 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map54_35();
		String_t* L_69 = V_2;
		NullCheck(L_68);
		bool L_70 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_68, L_69, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_70)
		{
			goto IL_02d6;
		}
	}
	{
		int32_t L_71 = V_4;
		if (!L_71)
		{
			goto IL_01f3;
		}
	}
	{
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) == ((int32_t)1)))
		{
			goto IL_0219;
		}
	}
	{
		goto IL_02d6;
	}

IL_01f3:
	{
		int32_t L_73 = __this->get_open_count_21();
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_0214;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_74 = __this->get_elements_22();
		int32_t L_75 = __this->get_open_count_21();
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		String_t* L_78 = V_0;
		NullCheck(L_77);
		L_77->set_XmlLang_5(L_78);
	}

IL_0214:
	{
		goto IL_02d6;
	}

IL_0219:
	{
		String_t* L_79 = V_0;
		V_5 = L_79;
		String_t* L_80 = V_5;
		if (!L_80)
		{
			goto IL_02c5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_81 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_34();
		if (L_81)
		{
			goto IL_0252;
		}
	}
	{
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_82 = (Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 *)il2cpp_codegen_object_new(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF(L_82, 2, /*hidden argument*/Dictionary_2__ctor_m6FE5F177AC0E406A7D8E0ED92D2254062B8B62EF_RuntimeMethod_var);
		V_3 = L_82;
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_83 = V_3;
		NullCheck(L_83);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_83, _stringLiteral7505D64A54E061B7ACD54CCD58B49DC43500B635, 0, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_84 = V_3;
		NullCheck(L_84);
		Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E(L_84, _stringLiteralE900984DC91DC9C7F107CA96EA386473DA13D8F8, 1, /*hidden argument*/Dictionary_2_Add_m5DFF4756C6D7890CA5347E9F29BB5B652298E74E_RuntimeMethod_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_85 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map53_34(L_85);
	}

IL_0252:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * L_86 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map53_34();
		String_t* L_87 = V_5;
		NullCheck(L_86);
		bool L_88 = Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF(L_86, L_87, (int32_t*)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m02F60CE92FF5819C471DE461A925C95B780AECAF_RuntimeMethod_var);
		if (!L_88)
		{
			goto IL_02c5;
		}
	}
	{
		int32_t L_89 = V_6;
		if (!L_89)
		{
			goto IL_0279;
		}
	}
	{
		int32_t L_90 = V_6;
		if ((((int32_t)L_90) == ((int32_t)1)))
		{
			goto IL_029f;
		}
	}
	{
		goto IL_02c5;
	}

IL_0279:
	{
		int32_t L_91 = __this->get_open_count_21();
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_92 = __this->get_elements_22();
		int32_t L_93 = __this->get_open_count_21();
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		L_95->set_XmlSpace_6(1);
	}

IL_029a:
	{
		goto IL_02d1;
	}

IL_029f:
	{
		int32_t L_96 = __this->get_open_count_21();
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_02c0;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_97 = __this->get_elements_22();
		int32_t L_98 = __this->get_open_count_21();
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_98, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		L_100->set_XmlSpace_6(2);
	}

IL_02c0:
	{
		goto IL_02d1;
	}

IL_02c5:
	{
		Exception_t * L_101 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral594A29ECD2DC85F003F5214D279CCD4A1755547E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, NULL, XmlTextWriter_WriteEndAttribute_m132BE3B89D2185CA8FDA3B2C02B2D8E9E0D2DB97_RuntimeMethod_var);
	}

IL_02d1:
	{
		goto IL_02d6;
	}

IL_02d6:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_102 = __this->get_writer_6();
		String_t* L_103 = V_0;
		NullCheck(L_102);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_102, L_103);
	}

IL_02e2:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_104 = __this->get_writer_6();
		Il2CppChar L_105 = __this->get_quote_char_32();
		NullCheck(L_104);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_104, L_105);
		__this->set_state_18(2);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral372EA08CAB33E71C02C651DBC83A474D32C676EA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = ___text0;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Il2CppChar L_7 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003f;
		}
	}
	{
		Exception_t * L_8 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral30DCA830ABB1D0D789EA96F200E93C1BC8B28C8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_RuntimeMethod_var);
	}

IL_003f:
	{
		String_t* L_9 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		int32_t L_10 = StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33(L_9, _stringLiteralE6A9FC04320A924F46C7C737432BB0389D9DD095, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		Exception_t * L_11 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral19A0A25B2E57E92791A7EF5F7D161FFBFA48572F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, XmlTextWriter_WriteComment_m46DD410940352E6CB14D9A6ECA1500FE225311AB_RuntimeMethod_var);
	}

IL_005c:
	{
		int32_t L_12 = __this->get_state_18();
		if ((((int32_t)L_12) == ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_13 = __this->get_state_18();
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_007a;
		}
	}

IL_0074:
	{
		XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1(__this, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B(__this, _stringLiteral153D7A58B3A3E898FCBDD04C462AF308414BD09D, (bool)0, (bool)0, (bool)0, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_14 = __this->get_writer_6();
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_14, _stringLiteralD8EE00948E54927B094D93E3BED821BA2E3DE652);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_15 = __this->get_writer_6();
		String_t* L_16 = ___text0;
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_15, L_16);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_17 = __this->get_writer_6();
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_17, _stringLiteralF58D61BB454E3A553B31ED2AB291EF5AE4937D1B);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text1;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Exception_t * L_3 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral372EA08CAB33E71C02C651DBC83A474D32C676EA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_RuntimeMethod_var);
	}

IL_0024:
	{
		XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_5 = XmlChar_IsName_mBA7DCC15CA4C77F3A03870180FB460EEE0B1E0AA(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteralF19A9AEDA23581D5C24CF50840B0581BEA1EF76F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_RuntimeMethod_var);
	}

IL_0041:
	{
		String_t* L_7 = ___text1;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		int32_t L_8 = StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33(L_7, _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Exception_t * L_9 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral9D88E36FD8224B9B1AC201FE9C2B3C8C0E5280D1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlTextWriter_WriteProcessingInstruction_m7F3CA39F96B35A87558E92E66D742F5285B45D98_RuntimeMethod_var);
	}

IL_005e:
	{
		String_t* L_10 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_10, _stringLiteral42F7B70ED71B02780AEA1639F4E24485753CE736, /*hidden argument*/NULL);
		XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B(__this, _stringLiteralABA919879A84497010BF1F530146F2C6C41D3822, (bool)0, L_11, (bool)0, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_12 = __this->get_writer_6();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral57EB32E3FEEA4AD960C405E7B00439A3CEA75764);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_13 = __this->get_writer_6();
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_15 = __this->get_writer_6();
		NullCheck(L_15);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, ((int32_t)32));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_16 = __this->get_writer_6();
		String_t* L_17 = ___text1;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_16, L_17);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_18 = __this->get_writer_6();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral48EE9FDB6490AADC28BBB90CEE75350BE54532DE);
		int32_t L_19 = __this->get_state_18();
		if (L_19)
		{
			goto IL_00cd;
		}
	}
	{
		__this->set_state_18(1);
	}

IL_00cd:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral372EA08CAB33E71C02C651DBC83A474D32C676EA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___text0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		int32_t L_5 = XmlChar_IndexOfNonWhitespace_mE1270DD3661A13CD6D24A73B186A50991C984F3D(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral23CA53467188C6E3B3B6DDDCF70CC405235CE99C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteWhitespace_mF9F3220242ACFF6A36EA2476185A64051ABFBBA4_RuntimeMethod_var);
	}

IL_0035:
	{
		XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B(__this, _stringLiteral47B13CDB0607925057B8E9D36B0386D1A11EB54C, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_7 = __this->get_writer_6();
		String_t* L_8 = ___text0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCData_m31BB72028A47864B52B2D241DAA42A3D3069D860 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCData_m31BB72028A47864B52B2D241DAA42A3D3069D860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___text0 = L_1;
	}

IL_000d:
	{
		XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368(__this, _stringLiteralB4F3203E222557090E52A70DF590EC32DB60D176, (bool)0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		int32_t L_3 = StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33(L_2, _stringLiteral56FA24FEE01DA5669E54DB9397ACDD38325B48F9, /*hidden argument*/NULL);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral64B12C6E60389A38F3EF51564AF59891C57C064C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteCData_m31BB72028A47864B52B2D241DAA42A3D3069D860_RuntimeMethod_var);
	}

IL_0036:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = __this->get_writer_6();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_5, _stringLiteral49BD947F0EFAA57DE923B73532B5B03ADBE29DA2);
		String_t* L_6 = ___text0;
		XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C(__this, L_6, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_7 = __this->get_writer_6();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteral56FA24FEE01DA5669E54DB9397ACDD38325B48F9);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteString_m6F22ECD31C1D4F035BD1B6AB088224B643CED54F (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteString_m6F22ECD31C1D4F035BD1B6AB088224B643CED54F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_v2_33();
		if (L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368(__this, _stringLiteralC3328C39B0E29F78E9FF45DB674248B1D245887D, (bool)1, /*hidden argument*/NULL);
		String_t* L_4 = ___text0;
		int32_t L_5 = __this->get_state_18();
		XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1(__this, L_4, (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_3 = XmlChar_IsName_mBA7DCC15CA4C77F3A03870180FB460EEE0B1E0AA(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		Exception_t * L_4 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteralE96E9FDACB927E5F7D760927B7CEEA7A381622BA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlTextWriter_WriteEntityRef_m20578E3AF51F02A52533E52E11291034FE0B3BBF_RuntimeMethod_var);
	}

IL_0029:
	{
		XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368(__this, _stringLiteral33019C3C63FB15BBD709A6B0798E32FC20D74EED, (bool)1, /*hidden argument*/NULL);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = __this->get_writer_6();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)38));
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_6 = __this->get_writer_6();
		String_t* L_7 = ___name0;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_6, L_7);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_8 = __this->get_writer_6();
		NullCheck(L_8);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_8, ((int32_t)59));
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteQualifiedName(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B11_0 = NULL;
	{
		String_t* L_0 = ___localName0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_1 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral9DCAB17267766230B5CD23C1864DAFBCB1AECA9C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___ns1;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___ns1 = L_3;
	}

IL_001f:
	{
		String_t* L_4 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_4, _stringLiteralA27E2E9EF6A0C7CC58D71302FCA9E93BA677C130, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		Exception_t * L_6 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral84B2966FCA1DAA208D0427F242D1783971A693AB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_RuntimeMethod_var);
	}

IL_003b:
	{
		String_t* L_7 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_8 = XmlChar_IsNCName_mEE9616CCF2E07F7B96AAF1C31404E484D46F3FE9(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		Exception_t * L_9 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, _stringLiteral246B64512FAAF84DFE7E353F0E802265CA54EB6C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_RuntimeMethod_var);
	}

IL_0052:
	{
		XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368(__this, _stringLiteralAACF433E5A037C45B6FA28E60D34A52D319DBA0E, (bool)1, /*hidden argument*/NULL);
		String_t* L_10 = ___ns1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_12 = ___ns1;
		String_t* L_13 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlTextWriter::LookupPrefix(System.String) */, __this, L_12);
		G_B11_0 = L_13;
		goto IL_007b;
	}

IL_0076:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B11_0 = L_14;
	}

IL_007b:
	{
		V_0 = G_B11_0;
		String_t* L_15 = V_0;
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_16 = __this->get_state_18();
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}
	{
		String_t* L_17 = ___ns1;
		String_t* L_18 = XmlTextWriter_MockupPrefix_mBC7989D2DE87E02F30A973E2C2EC352EEC068C0D(__this, L_17, (bool)0, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00ae;
	}

IL_009c:
	{
		String_t* L_19 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral285F7602FA1B1C77986903AA7F6CAE5EDB867CBE, L_19, /*hidden argument*/NULL);
		Exception_t * L_21 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, XmlTextWriter_WriteQualifiedName_mE0A8A834E3AD0B3AAC6F995FEF859815E0C77CF8_RuntimeMethod_var);
	}

IL_00ae:
	{
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_24 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00da;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_25 = __this->get_writer_6();
		String_t* L_26 = V_0;
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, L_26);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_27 = __this->get_writer_6();
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
	}

IL_00da:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_28 = __this->get_writer_6();
		String_t* L_29 = ___localName0;
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, L_29);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndent_m12B31571896C41405A9E34971E3D554E336C10E1 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m4CF4B9B7165DFBD45890C2C94C185EA358E65976(__this, 0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndentEndElement_m455B818F02F4F45A9528254EA056BC5FCA938118 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		XmlTextWriter_WriteIndentCore_m4CF4B9B7165DFBD45890C2C94C185EA358E65976(__this, (-1), (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteIndentAttribute_m12062B8804B70631F934681C60A8D6F03DD8F841 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = XmlTextWriter_WriteIndentCore_m4CF4B9B7165DFBD45890C2C94C185EA358E65976(__this, 0, (bool)1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_1 = __this->get_writer_6();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)32));
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool XmlTextWriter_WriteIndentCore_m4CF4B9B7165DFBD45890C2C94C185EA358E65976 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, int32_t ___nestFix0, bool ___attribute1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_indent_26();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		int32_t L_1 = __this->get_open_count_21();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		goto IL_0039;
	}

IL_001b:
	{
		bool L_2 = ___attribute1;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_3 = __this->get_elements_22();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		bool L_7 = L_6->get_HasSimple_3();
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_10 = __this->get_state_18();
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_11 = __this->get_writer_6();
		String_t* L_12 = __this->get_newline_30();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_12);
	}

IL_005c:
	{
		V_1 = 0;
		goto IL_0078;
	}

IL_0063:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_13 = __this->get_writer_6();
		String_t* L_14 = __this->get_indent_string_29();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_open_count_21();
		int32_t L_18 = ___nestFix0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)))))
		{
			goto IL_0063;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_state_18();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		XmlTextWriter_WriteStartDocumentCore_mA82AC66BE2D42B72C7A319B1F4E4E7162250B33D(__this, (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, bool ___allowAttribute1, bool ___dontCheckXmlDecl2, bool ___isCharacter3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00a1;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_008f;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_ShiftStateTopLevel_mA27AC33601521AAD46CF19DFF9D712EBDA3BF67B_RuntimeMethod_var);
	}

IL_0036:
	{
		bool L_4 = ___isCharacter3;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		int32_t L_5 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = ___dontCheckXmlDecl2;
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45(__this, /*hidden argument*/NULL);
	}

IL_005b:
	{
		__this->set_state_18(1);
		goto IL_00a1;
	}

IL_0067:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		goto IL_00a1;
	}

IL_0072:
	{
		goto IL_002e;
	}

IL_0077:
	{
		bool L_8 = ___isCharacter3;
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008f:
	{
		bool L_9 = ___isCharacter3;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
	}

IL_009c:
	{
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_open_count_21();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		XmlNodeInfoU5BU5D_tCB7829A10CA8B41C2A87C0CFE790ADD724A1D80D* L_1 = __this->get_elements_22();
		int32_t L_2 = __this->get_open_count_21();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		L_4->set_HasSimple_3((bool)1);
	}

IL_0021:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, bool ___allowAttribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_18();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0096;
			}
			case 5:
			{
				goto IL_002e;
			}
			case 6:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_00a1;
	}

IL_002e:
	{
		String_t* L_2 = ___occured0;
		Exception_t * L_3 = XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723(__this, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, XmlTextWriter_ShiftStateContent_mC5053104663B0806AEF80949375A634A80945368_RuntimeMethod_var);
	}

IL_0036:
	{
		bool L_4 = __this->get_allow_doc_fragment_10();
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->get_is_document_entity_17();
		if (!L_5)
		{
			goto IL_0051;
		}
	}

IL_004c:
	{
		goto IL_002e;
	}

IL_0051:
	{
		int32_t L_6 = __this->get_xmldecl_state_14();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0063;
		}
	}
	{
		XmlTextWriter_OutputAutoStartDocument_mB33AB9507F2C00C8BC7D3F3A7FEEAEE804481B45(__this, /*hidden argument*/NULL);
	}

IL_0063:
	{
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
		__this->set_state_18(4);
		goto IL_00a1;
	}

IL_0075:
	{
		bool L_7 = ___allowAttribute1;
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a1;
	}

IL_0080:
	{
		goto IL_002e;
	}

IL_0085:
	{
		XmlTextWriter_CloseStartElement_mA8D35B2D6D4ADF696CD208675BFD41C87D4324B6(__this, /*hidden argument*/NULL);
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0096:
	{
		XmlTextWriter_CheckMixedContentState_mB3CD50C4F478CEE10C664BF654E2F239BACF8065(__this, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_00a1:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___text0, bool ___isAttribute1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedString_m2CFA723EACC41ED891870E57985719B2153B9CF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* V_0 = NULL;
	int32_t V_1 = 0;
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* V_2 = NULL;
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* G_B3_0 = NULL;
	{
		bool L_0 = ___isAttribute1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_1 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_escaped_attr_chars_3();
		G_B3_0 = L_1;
		goto IL_0015;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_2 = ((XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_StaticFields*)il2cpp_codegen_static_fields_for(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var))->get_escaped_text_chars_2();
		G_B3_0 = L_2;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		String_t* L_3 = ___text0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m22415D1C28B9042B4AD18DAA09C3D0DFA03E38F2(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_7 = ___text0;
		NullCheck(L_7);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_8 = String_ToCharArray_mFA1EDE7383559B3A99C926341C9AC2822918E8F5(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_9 = V_2;
		int32_t L_10 = V_1;
		XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70(__this, L_9, 0, L_10, /*hidden argument*/NULL);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_11 = V_2;
		int32_t L_12 = V_1;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = V_1;
		bool L_15 = ___isAttribute1;
		XmlTextWriter_WriteEscapedBuffer_m38588032EFF7A916070DCF1312EE73B5A7201ADA(__this, L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)L_14)), L_15, /*hidden argument*/NULL);
		goto IL_004f;
	}

IL_0048:
	{
		String_t* L_16 = ___text0;
		XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C(__this, L_16, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedString_mB835D0EED81FD53D0DBD9E7F7EFDFFC54BE3DA1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* V_1 = NULL;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		int32_t L_1 = XmlChar_IndexOfInvalid_m15A70F23F76037047A33731642DBFA8CC9307BBA(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = String_ToCharArray_mFA1EDE7383559B3A99C926341C9AC2822918E8F5(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_5 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		VirtActionInvoker3< CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_8 = V_1;
		int32_t L_9 = V_0;
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = V_0;
		XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70(__this, L_8, L_9, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), (int32_t)L_11)), /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_0036:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_12 = __this->get_writer_6();
		String_t* L_13 = ___s0;
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, L_13);
	}

IL_0042:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___text0, int32_t ___idx1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___idx1;
		V_0 = L_0;
		int32_t L_1 = ___idx1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		goto IL_0096;
	}

IL_000b:
	{
		bool L_3 = __this->get_check_character_validity_15();
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = ___idx1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_5);
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_7 = ___text0;
		int32_t L_8 = ___idx1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = ((int32_t)L_10);
		RuntimeObject * L_12 = Box(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_mA04011EFEDBBD517510B51C0D035C87C8A079592(_stringLiteral485A84A2B5716468C77FE916857151A0353B95BE, L_6, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194(__this, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70_RuntimeMethod_var);
	}

IL_0035:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___idx1;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_004c;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_17 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_18 = ___text0;
		int32_t L_19 = V_0;
		int32_t L_20 = ___idx1;
		int32_t L_21 = V_0;
		NullCheck(L_17);
		VirtActionInvoker3< CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_17, L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
	}

IL_004c:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_22 = __this->get_writer_6();
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_22, _stringLiteralFD7A2B83CB0BA8522402983CB3068C33624C6687);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_23 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_24 = ___text0;
		int32_t L_25 = ___idx1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint16_t L_27 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_28 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		String_t* L_29 = Int32_ToString_m6373C1AFD7C8DE39720131FFE7E164861C1EDB1E((int32_t*)(&V_2), _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_23, L_29);
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_30 = __this->get_writer_6();
		NullCheck(L_30);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_30, ((int32_t)59));
		int32_t L_31 = ___length2;
		int32_t L_32 = ___idx1;
		int32_t L_33 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)1))));
		int32_t L_34 = ___idx1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0096:
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_35 = ___text0;
		int32_t L_36 = V_0;
		int32_t L_37 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		int32_t L_38 = XmlChar_IndexOfInvalid_m855C56E4703FE2483E77010B1D1FBD0054371AE9(L_35, L_36, L_37, (bool)1, /*hidden argument*/NULL);
		int32_t L_39 = L_38;
		___idx1 = L_39;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_00bf;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_42 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_43 = ___text0;
		int32_t L_44 = V_0;
		int32_t L_45 = V_1;
		int32_t L_46 = V_0;
		NullCheck(L_42);
		VirtActionInvoker3< CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744*, int32_t, int32_t >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_42, L_43, L_44, ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
	}

IL_00bf:
	{
		return;
	}
}
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlTextWriter_WriteEscapedBuffer_m38588032EFF7A916070DCF1312EE73B5A7201ADA (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___text0, int32_t ___index1, int32_t ___length2, bool ___isAttribute3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_WriteEscapedBuffer_m38588032EFF7A916070DCF1312EE73B5A7201ADA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B30_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B31_1 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B37_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B36_0 = NULL;
	String_t* G_B38_0 = NULL;
	TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * G_B38_1 = NULL;
	{
		int32_t L_0 = ___index1;
		V_0 = L_0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = L_3;
		goto IL_0231;
	}

IL_000d:
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_4 = ___text0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Il2CppChar L_8 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_0139;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_006a;
			}
			case 5:
			{
				goto IL_0139;
			}
		}
	}

IL_0032:
	{
		Il2CppChar L_9 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0174;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0158;
			}
		}
	}

IL_004b:
	{
		Il2CppChar L_10 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_022d;
	}

IL_006a:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_007c;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_13 = ___text0;
		int32_t L_14 = V_0;
		int32_t L_15 = V_2;
		int32_t L_16 = V_0;
		XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70(__this, L_13, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
	}

IL_007c:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_17 = __this->get_writer_6();
		NullCheck(L_17);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_17, ((int32_t)38));
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_18 = ___text0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		Il2CppChar L_22 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_011f;
			}
			case 1:
			{
				goto IL_00b0;
			}
			case 2:
			{
				goto IL_00b0;
			}
			case 3:
			{
				goto IL_00b0;
			}
			case 4:
			{
				goto IL_00cb;
			}
			case 5:
			{
				goto IL_010a;
			}
		}
	}

IL_00b0:
	{
		Il2CppChar L_23 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_00e0;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_00cb:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_24 = __this->get_writer_6();
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_24, _stringLiteral67E9FDA3BA98305778D5F1BAF16110335B444C5D);
		goto IL_0134;
	}

IL_00e0:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_25 = __this->get_writer_6();
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_25, _stringLiteral99D003C0355C9A2D9E2ACF23D923CB91D367952F);
		goto IL_0134;
	}

IL_00f5:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_26 = __this->get_writer_6();
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, _stringLiteral891B65282C2FA38C6F63A4842A9048DEFD6415EC);
		goto IL_0134;
	}

IL_010a:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_27 = __this->get_writer_6();
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_27, _stringLiteral4D484D27B8B903C9DDEC779942A2F4BEA9081946);
		goto IL_0134;
	}

IL_011f:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_28 = __this->get_writer_6();
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_28, _stringLiteral752E13194FEE33B9BD6D1D0D406082C5FCAB0C99);
		goto IL_0134;
	}

IL_0134:
	{
		goto IL_0229;
	}

IL_0139:
	{
		bool L_29 = ___isAttribute3;
		if (!L_29)
		{
			goto IL_0153;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_30 = ___text0;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint16_t L_33 = (uint16_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Il2CppChar L_34 = __this->get_quote_char_32();
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0153;
		}
	}
	{
		goto IL_006a;
	}

IL_0153:
	{
		goto IL_022d;
	}

IL_0158:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))) >= ((int32_t)L_36)))
		{
			goto IL_016f;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_37 = ___text0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_016f;
		}
	}
	{
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_016f:
	{
		goto IL_0174;
	}

IL_0174:
	{
		int32_t L_42 = V_0;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) >= ((int32_t)L_43)))
		{
			goto IL_0186;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_44 = ___text0;
		int32_t L_45 = V_0;
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70(__this, L_44, L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
	}

IL_0186:
	{
		bool L_48 = ___isAttribute3;
		if (!L_48)
		{
			goto IL_01b6;
		}
	}
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_49 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_50 = ___text0;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B29_0 = L_49;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)13)))))
		{
			G_B30_0 = L_49;
			goto IL_01a7;
		}
	}
	{
		G_B31_0 = _stringLiteral195173658C45A7956733CE6245E286888F948E4D;
		G_B31_1 = G_B29_0;
		goto IL_01ac;
	}

IL_01a7:
	{
		G_B31_0 = _stringLiteral773B6930C7A1363936BE02B3D627E2CC79F0A12C;
		G_B31_1 = G_B30_0;
	}

IL_01ac:
	{
		NullCheck(G_B31_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B31_1, G_B31_0);
		goto IL_0229;
	}

IL_01b6:
	{
		int32_t L_54 = __this->get_newline_handling_16();
		V_5 = L_54;
		int32_t L_55 = V_5;
		if (!L_55)
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) == ((int32_t)1)))
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_0211;
	}

IL_01d2:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_57 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_58 = ___text0;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B36_0 = L_57;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)13)))))
		{
			G_B37_0 = L_57;
			goto IL_01ec;
		}
	}
	{
		G_B38_0 = _stringLiteral195173658C45A7956733CE6245E286888F948E4D;
		G_B38_1 = G_B36_0;
		goto IL_01f1;
	}

IL_01ec:
	{
		G_B38_0 = _stringLiteral773B6930C7A1363936BE02B3D627E2CC79F0A12C;
		G_B38_1 = G_B37_0;
	}

IL_01f1:
	{
		NullCheck(G_B38_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, G_B38_1, G_B38_0);
		goto IL_0224;
	}

IL_01fb:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_62 = __this->get_writer_6();
		String_t* L_63 = __this->get_newline_30();
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_62, L_63);
		goto IL_0224;
	}

IL_0211:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_64 = __this->get_writer_6();
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_65 = ___text0;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint16_t L_68 = (uint16_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_64);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_64, L_68);
		goto IL_0224;
	}

IL_0224:
	{
		goto IL_0229;
	}

IL_0229:
	{
		int32_t L_69 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1));
	}

IL_022d:
	{
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0231:
	{
		int32_t L_71 = V_2;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_73 = V_0;
		int32_t L_74 = V_1;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_024a;
		}
	}
	{
		CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* L_75 = ___text0;
		int32_t L_76 = V_0;
		int32_t L_77 = V_1;
		int32_t L_78 = V_0;
		XmlTextWriter_WriteCheckedBuffer_mAA1FB4CB7CD571C34018FD7ACFA19BCA649C5F70(__this, L_75, L_76, ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)L_78)), /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}
}
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_ArgumentError_mE0B0C4603961EA0040CF9D3C142CB57F506A0194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_18(6);
		String_t* L_0 = ___msg0;
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_1 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_state_18(6);
		String_t* L_0 = ___msg0;
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C" IL2CPP_METHOD_ATTR Exception_t * XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723 (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * __this, String_t* ___occured0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlTextWriter_StateError_mD6EE530BC43E960AA5E350EC6D5BD1DFC89D3723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___occured0;
		int32_t L_1 = __this->get_state_18();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(WriteState_t77FFF7A78C6BEB469AF5904B89980997CDC8735F_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_mA04011EFEDBBD517510B51C0D035C87C8A079592(_stringLiteralCCABA513C2A2BADD6230F57CC478F8272596F90B, L_0, L_3, /*hidden argument*/NULL);
		Exception_t * L_5 = XmlTextWriter_InvalidOperation_m1AAE9A1B8B392D404CC1F73BB16D687074DE981F(__this, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.Xml.XmlTextWriter/StringUtil::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil__cctor_m6EC96521C681EAC4DE279D333C79885DAE497D5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_0 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->set_cul_0(L_0);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_1 = CultureInfo_get_InvariantCulture_mC3D1AE4739EDD185D33883D326C375EB71D9A3BE(/*hidden argument*/NULL);
		NullCheck(L_1);
		CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * L_2 = VirtFuncInvoker0< CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * >::Invoke(11 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_1);
		((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->set_cmp_1(L_2);
		return;
	}
}
// System.Int32 System.Xml.XmlTextWriter/StringUtil::IndexOf(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33 (String_t* ___src0, String_t* ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_IndexOf_m550438AD8C010266D9E27F7C2CC3DA4B2E978C33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		CompareInfo_t704FFB923C9EF69DFAE63C1950E5B466A94C0F4B * L_0 = ((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->get_cmp_1();
		String_t* L_1 = ___src0;
		String_t* L_2 = ___target1;
		NullCheck(L_0);
		int32_t L_3 = VirtFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(9 /* System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.String System.Xml.XmlTextWriter/StringUtil::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985 (String_t* ___format0, ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtil_Format_m82BBBE4618F2E10B76EFB04C21C1ECAF642C2985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var);
		CultureInfo_t2089C879B1CBB363EF1CF59D058AD2D2B0C9D28D * L_0 = ((StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_StaticFields*)il2cpp_codegen_static_fields_for(StringUtil_t6B1C7DC3B724BD6FC51242BBACBCC786751CA110_il2cpp_TypeInfo_var))->get_cul_0();
		String_t* L_1 = ___format0;
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_2 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m370C20A66261F43FCDF2E104772F22EE8CC0E3B2(L_0, L_1, L_2, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.XmlTextWriter/XmlNodeInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlNodeInfo__ctor_mC958324E311A3286C2A0ADD03A656D8DEDBEFFDA (XmlNodeInfo_tB8D848A4673F9F3EE6D7CAA6673A9446B8FFF5F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
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
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlUrlResolver__ctor_mFBD45959BBD1A0F86D140D21ACB6A6511062F8D4 (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver__ctor_mB32167F90F738DA3CD20C839054391C8F8262254(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.XmlUrlResolver::GetEntity(System.Uri,System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___absoluteUri0, String_t* ___role1, Type_t * ___ofObjectToReturn2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * V_0 = NULL;
	{
		Type_t * L_0 = ___ofObjectToReturn2;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_1 = { reinterpret_cast<intptr_t> (Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_1, /*hidden argument*/NULL);
		___ofObjectToReturn2 = L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___ofObjectToReturn2;
		RuntimeTypeHandle_t58BB862EF56F46A9518F8ACA413EF7D70238F1AD  L_4 = { reinterpret_cast<intptr_t> (Stream_tCFD27E43C18381861212C0288CACF467FB602009_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8326E3405B647C99882C2E411C459944B0598D73(L_4, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_6 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_6, _stringLiteralD8280FE80D9AEB9C128D4DA3FBEC21DF0E4BECE7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_002d:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_7 = ___absoluteUri0;
		NullCheck(L_7);
		bool L_8 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_9 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346(L_9, _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F, _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_0048:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_10 = ___absoluteUri0;
		NullCheck(L_10);
		String_t* L_11 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_11, _stringLiteral971C419DD609331343DEE105FFFD0F4608DC0BF2, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0097;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_13 = ___absoluteUri0;
		NullCheck(L_13);
		String_t* L_14 = Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_16 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0082;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_17 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m21D365CF42848C29CCAA2898DF17B47E7224D346(L_17, _stringLiteralD2ED73F0826651C4F2B70E48C6DC780CB9CBF93F, _stringLiteralB82E1120FAA671E759C3B20F058DB73F0BC2CAC6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, XmlUrlResolver_GetEntity_mDFE9EA7AD481985C08C2CE1FB4F765C4FF8EB00A_RuntimeMethod_var);
	}

IL_0082:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_18 = ___absoluteUri0;
		NullCheck(L_18);
		String_t* L_19 = Uri_get_LocalPath_m40FBFECE2E19CBF9DC9565A4008668F35E8F4246(L_18, /*hidden argument*/NULL);
		String_t* L_20 = XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F(__this, L_19, /*hidden argument*/NULL);
		FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 * L_21 = (FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4 *)il2cpp_codegen_object_new(FileStream_t7540109F33E9AA6431B9316FD268BA7E9F012AF4_il2cpp_TypeInfo_var);
		FileStream__ctor_mEBDC7830FFEE997544BDA0B10DFCD8D7F28F13B3(L_21, L_20, 3, 1, 1, /*hidden argument*/NULL);
		return L_21;
	}

IL_0097:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_22 = ___absoluteUri0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399_il2cpp_TypeInfo_var);
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_23 = WebRequest_Create_m443EBD17EC628818C7FAEBFB4BD733F945CD19FF(L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		RuntimeObject* L_24 = __this->get_credential_0();
		if (!L_24)
		{
			goto IL_00b5;
		}
	}
	{
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_25 = V_0;
		RuntimeObject* L_26 = __this->get_credential_0();
		NullCheck(L_25);
		VirtActionInvoker1< RuntimeObject* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials) */, L_25, L_26);
	}

IL_00b5:
	{
		WebRequest_t079731BC640578743ADC705570EAC33A9BCFB399 * L_27 = V_0;
		NullCheck(L_27);
		WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325 * L_28 = VirtFuncInvoker0< WebResponse_t5E9F05BAC005D2105A122CD5973E1D70B9B45325 * >::Invoke(18 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_27);
		NullCheck(L_28);
		Stream_tCFD27E43C18381861212C0288CACF467FB602009 * L_29 = VirtFuncInvoker0< Stream_tCFD27E43C18381861212C0288CACF467FB602009 * >::Invoke(10 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_28);
		return L_29;
	}
}
// System.Uri System.Xml.XmlUrlResolver::ResolveUri(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * XmlUrlResolver_ResolveUri_mC14D6C1722711AE218653E04DB0F763D248CF44B (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method)
{
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___baseUri0;
		String_t* L_1 = ___relativeUri1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_2 = XmlResolver_ResolveUri_m867DE32ACBDDF3A445507717B6E7B7EA7E2040CD(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Xml.XmlUrlResolver::UnescapeRelativeUriBody(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F (XmlUrlResolver_tD3E7BD8A4D69B96E8EB009EA459545CFE399FA83 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlUrlResolver_UnescapeRelativeUriBody_m771AE733B2A9BA1364FBC3F4370F9AFAB6A7021F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___src0;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_0, _stringLiteralB7800DD7F410CCD049697701C24028B425C31C9F, _stringLiteralC4DD3C8CDD8D7C95603DD67F1CD873D5F9148B29, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_1, _stringLiteralCB51439F4D8087A7A3BCE2CD95A8898C8A32D028, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_2, _stringLiteralA344EB862EDAF46575E15EE2886B9096722B09BB, _stringLiteralD08F88DF745FA7950B104E4A707A31CFCE7B5841, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_3, _stringLiteral8BCDCE41BEE002F11C8CF51B698D461BE3BD3797, _stringLiteral2ACE62C1BEFA19E3EA37DD52BE9F6D508C5163E6, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_4, _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = String_Replace_m33665C3789D7C1EC9C261C5EF596817C3A1588CA(L_5, _stringLiteral491250A42D9C426A51B2E0B368ED13A8852DA792, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		return L_6;
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
// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___strData0, XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * ___doc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___strData0;
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = ___doc1;
		XmlCharacterData__ctor_m3001E8B020596810D7E107CF5132ACE77AA87717(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_LocalName_mC40F27FB38BDA761180F878BB046E2D4C1DF0773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
	}
}
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_get_Name_m78FA8EAFAF179B735374E897696D560F0E026855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral86991C898EF9BD4D4DF2405832AC2BBDE5077766;
	}
}
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWhitespace_get_NodeType_m3D12D40D82F0C4743DF91B0B1ABB18F4C7CB12CB (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)13));
	}
}
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWhitespace_get_Value_m6A2E608DC3CF29A4280C8943038B4DCDAA40870B (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		return L_0;
	}
}
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlChar_t987897166A4938284071DFD58FC4594BAB1128A5_il2cpp_TypeInfo_var);
		bool L_1 = XmlChar_IsWhitespace_m87107CE6DCB1495651A27C956F8AE79979E4856E(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_2 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_2, _stringLiteralBA860FD430FDBB5379A377B6ABE5473ADE841521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XmlWhitespace_set_Value_m6C4F66B50F638B144401059733BE8870E62D3B13_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(40 /* System.Void System.Xml.XmlCharacterData::set_Data(System.String) */, __this, L_3);
		return;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlWhitespace_get_ParentNode_m5B7247E790BE6D2913FC95E944B16A80DB5C73A2 (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * L_0 = XmlNode_get_ParentNode_m8CB63DB1EDF0980BD5C0AEA25EE3DA6BA38E7E0F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t2B708D2776777AFF8C95DD2EFB651AA64E57632A * XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * __this, bool ___deep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWhitespace_CloneNode_m8C9825919ED09C8E35FCE1DE7E39F9D5F654986B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(39 /* System.String System.Xml.XmlCharacterData::get_Data() */, __this);
		XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * L_1 = VirtFuncInvoker0< XmlDocument_t4C411CC65B75933374C140FB5737CF2C261CC763 * >::Invoke(20 /* System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument() */, __this);
		XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C * L_2 = (XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C *)il2cpp_codegen_object_new(XmlWhitespace_t94DE163BDCCE5B034799544EE082260E57B4D53C_il2cpp_TypeInfo_var);
		XmlWhitespace__ctor_m13ABB40D42CE7949E2AE7C40AF106D8081FAC763(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void System.Xml.XmlWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter__ctor_m6421000552F7848BBF449952D217BCD58295399D (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_System_IDisposable_Dispose_m6FBD04A1E5A4AF776264E27EE30AACFB911547A4 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Xml.XmlWriter::Dispose(System.Boolean) */, __this, (bool)0);
		return;
	}
}
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C" IL2CPP_METHOD_ATTR XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * XmlWriter_get_Settings_m324FDA9901FB12AD09CFDA5E09FE301450541C74 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_get_Settings_m324FDA9901FB12AD09CFDA5E09FE301450541C74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_0 = __this->get_settings_0();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_1 = (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD *)il2cpp_codegen_object_new(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C(L_1, /*hidden argument*/NULL);
		__this->set_settings_0(L_1);
	}

IL_0016:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_2 = __this->get_settings_0();
		return L_2;
	}
}
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriter_get_XmlLang_mB6E1472D1D95701B41592548B4B882E5DF4DEB9F (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriter_get_XmlSpace_mD8BB6572F71BB3E211E822EA8F8FA3FA2FCDC7C3 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.TextWriter,System.Xml.XmlWriterSettings)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * XmlWriter_Create_mD608046E3A653761C41C1032F571DC75F9845265 (TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_Create_mD608046E3A653761C41C1032F571DC75F9845265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_0 = ___settings1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_1 = (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD *)il2cpp_codegen_object_new(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C(L_1, /*hidden argument*/NULL);
		___settings1 = L_1;
	}

IL_000d:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_2 = ___writer0;
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_3 = ___settings1;
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_4 = ___settings1;
		NullCheck(L_4);
		bool L_5 = XmlWriterSettings_get_CloseOutput_m90901B4599AF160284A79F784B62F28A816A467A(L_4, /*hidden argument*/NULL);
		XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * L_6 = XmlWriter_CreateTextWriter_m413FBF72A94A50BEA4D60E8DA36D1CB2A053536F(L_2, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.Xml.XmlWriter,System.Xml.XmlWriterSettings)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * XmlWriter_Create_mE9BDE0B36DA4CD5A5B7E1CFF412299C7EAE4733A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_Create_mE9BDE0B36DA4CD5A5B7E1CFF412299C7EAE4733A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_0 = ___settings1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_1 = (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD *)il2cpp_codegen_object_new(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C(L_1, /*hidden argument*/NULL);
		___settings1 = L_1;
	}

IL_000d:
	{
		XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * L_2 = ___writer0;
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_3 = ___settings1;
		NullCheck(L_2);
		L_2->set_settings_0(L_3);
		XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * L_4 = ___writer0;
		return L_4;
	}
}
// System.Xml.XmlWriter System.Xml.XmlWriter::CreateTextWriter(System.IO.TextWriter,System.Xml.XmlWriterSettings,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * XmlWriter_CreateTextWriter_m413FBF72A94A50BEA4D60E8DA36D1CB2A053536F (TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * ___writer0, XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * ___settings1, bool ___closeOutput2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_CreateTextWriter_m413FBF72A94A50BEA4D60E8DA36D1CB2A053536F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * V_0 = NULL;
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_0 = ___settings1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_1 = (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD *)il2cpp_codegen_object_new(XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C(L_1, /*hidden argument*/NULL);
		___settings1 = L_1;
	}

IL_000d:
	{
		TextWriter_t584EB24550495420EF2EC2E56D5404D0A0A79A45 * L_2 = ___writer0;
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_3 = ___settings1;
		bool L_4 = ___closeOutput2;
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_5 = (XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 *)il2cpp_codegen_object_new(XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1_il2cpp_TypeInfo_var);
		XmlTextWriter__ctor_m7CFDC19FBE18FC80C5D4908DD982E3369E93CFA0(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		XmlTextWriter_tBFB01CAEE59EB58F0B1DDDA1B96320C568FAECC1 * L_6 = V_0;
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_7 = ___settings1;
		XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * L_8 = XmlWriter_Create_mE9BDE0B36DA4CD5A5B7E1CFF412299C7EAE4733A(L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_Dispose_mE1745DF9681AAFD21BE997950764817627F39664 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlWriter::Close() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = ___defattr1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_1 = ___reader0;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean System.Xml.XmlReader::get_IsDefault() */, L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_3 = ___reader0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_3);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = ___reader0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_5);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_7 = ___reader0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_7);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_4, L_6, L_8);
		goto IL_0071;
	}

IL_002f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)3)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0071;
	}

IL_004f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_13);
		goto IL_0071;
	}

IL_0060:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_14);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_15);
		goto IL_0071;
	}

IL_0071:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_16 = ___reader0;
		NullCheck(L_16);
		bool L_17 = VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::ReadAttributeValue() */, L_16);
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m8F639EDF9DD422BA488995DDEFDF3DEBC67D8693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___value1;
		XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5(__this, L_0, L_1, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m352A7B5F1859CD992EF33CC053D7E0F42CC23E3E (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___ns1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteAttributeString_m352A7B5F1859CD992EF33CC053D7E0F42CC23E3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_1 = ___localName0;
		String_t* L_2 = ___ns1;
		String_t* L_3 = ___value2;
		XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteAttributeString_m9EBBEDDC004D8C5A9640F95085FEDF3BC97251D5 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___prefix0, String_t* ___localName1, String_t* ___ns2, String_t* ___value3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___prefix0;
		String_t* L_1 = ___localName1;
		String_t* L_2 = ___ns2;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, L_0, L_1, L_2);
		String_t* L_3 = ___value3;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = ___value3;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ___value3;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_6);
	}

IL_0025:
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Xml.XmlWriter::WriteEndAttribute() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteElementString_mDED825BDEF24C57D69E1EF0F5D7F4D5F9F1A516B (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___value1;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_4 = ___value1;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_4);
	}

IL_0020:
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedName(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteQualifiedName_mAF87EB501642D866525BB9304ABB07121E8B6B3F (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteQualifiedNameInternal(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B12_0 = NULL;
	{
		String_t* L_0 = ___localName0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_4 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_mB07DBF652398180743DA95E1DDA9DAC704B75167(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_5 = ___ns1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		___ns1 = L_6;
	}

IL_0029:
	{
		XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * L_7 = VirtFuncInvoker0< XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * >::Invoke(5 /* System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings() */, __this);
		NullCheck(L_7);
		int32_t L_8 = XmlWriterSettings_get_ConformanceLevel_m0A3DF70786E009CC5E12DAD2C16B592485064C41(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_0048;
		}
	}
	{
		goto IL_0054;
	}

IL_0048:
	{
		String_t* L_11 = ___localName0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t3BB1C81D3A39888DBF9262B91B4AA4BF4BF44D84_il2cpp_TypeInfo_var);
		XmlConvert_VerifyNCName_m5801CD7B5CC6B153E1F9CEEC61122472FF47E57F(L_11, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0054:
	{
		String_t* L_12 = ___ns1;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_14 = ___ns1;
		String_t* L_15 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlWriter::LookupPrefix(System.String) */, __this, L_14);
		G_B12_0 = L_15;
		goto IL_0071;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B12_0 = L_16;
	}

IL_0071:
	{
		V_0 = G_B12_0;
		String_t* L_17 = V_0;
		if (L_17)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_18 = ___ns1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m5A93B84173E5F919171874AD117D69B93388910A(_stringLiteral285F7602FA1B1C77986903AA7F6CAE5EDB867CBE, L_18, /*hidden argument*/NULL);
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_20 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_20, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, XmlWriter_WriteQualifiedNameInternal_m24F92605C5F64DA962C336A2E668FDA675E0FB1B_RuntimeMethod_var);
	}

IL_0089:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_23 = String_op_Inequality_mFBA7B689F4FFCEE1224F60E7445E7C1A3F2F362B(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_24 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_24);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		String_t* L_25 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_25);
		goto IL_00be;
	}

IL_00b7:
	{
		String_t* L_26 = ___localName0;
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_26);
	}

IL_00be:
	{
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242 (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * ___reader0, bool ___defattr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_1 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_mB07DBF652398180743DA95E1DDA9DAC704B75167(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Xml.ReadState System.Xml.XmlReader::get_ReadState() */, L_2);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_4 = ___reader0;
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_4);
	}

IL_001e:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_5 = ___reader0;
		bool L_6 = ___defattr1;
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_5, L_6);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_7 = ___reader0;
		NullCheck(L_7);
		bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_7);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_0032:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_9 = ___reader0;
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_9);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_01db;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_012c;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_013e;
			}
			case 5:
			{
				goto IL_014f;
			}
			case 6:
			{
				goto IL_01e0;
			}
			case 7:
			{
				goto IL_0160;
			}
			case 8:
			{
				goto IL_0177;
			}
			case 9:
			{
				goto IL_01e0;
			}
			case 10:
			{
				goto IL_0188;
			}
			case 11:
			{
				goto IL_01e0;
			}
			case 12:
			{
				goto IL_01e0;
			}
			case 13:
			{
				goto IL_01ba;
			}
			case 14:
			{
				goto IL_01b5;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_01d6;
			}
			case 17:
			{
				goto IL_0160;
			}
		}
	}
	{
		goto IL_01e0;
	}

IL_008c:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_12 = ___reader0;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlReader::get_Prefix() */, L_12);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_14 = ___reader0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_16 = ___reader0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_16);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, L_13, L_15, L_17);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_18 = ___reader0;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_18);
		if (!L_19)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = 0;
		goto IL_00c9;
	}

IL_00b6:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_20 = ___reader0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< int32_t >::Invoke(33 /* System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32) */, L_20, L_21);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_22 = ___reader0;
		bool L_23 = ___defattr1;
		XmlWriter_WriteAttribute_mF1F3A889443CA2CB881E0208E9FC63C668C0DA90(__this, L_22, L_23, /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c9:
	{
		int32_t L_25 = V_0;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_26 = ___reader0;
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlReader::get_AttributeCount() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_28 = ___reader0;
		NullCheck(L_28);
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_28);
	}

IL_00dc:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_29 = ___reader0;
		NullCheck(L_29);
		bool L_30 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_29);
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, __this);
		goto IL_0127;
	}

IL_00f2:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_31 = ___reader0;
		NullCheck(L_31);
		int32_t L_32 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_31);
		V_1 = L_32;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_33 = ___reader0;
		NullCheck(L_33);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_33);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_34 = ___reader0;
		NullCheck(L_34);
		int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_34);
		if ((((int32_t)L_35) == ((int32_t)((int32_t)15))))
		{
			goto IL_0121;
		}
	}

IL_010d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_36 = ___reader0;
		bool L_37 = ___defattr1;
		VirtActionInvoker2< XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 *, bool >::Invoke(21 /* System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean) */, __this, L_36, L_37);
		int32_t L_38 = V_1;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_39 = ___reader0;
		NullCheck(L_39);
		int32_t L_40 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_39);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010d;
		}
	}

IL_0121:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
	}

IL_0127:
	{
		goto IL_0218;
	}

IL_012c:
	{
		return;
	}

IL_012d:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_41 = ___reader0;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_41);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, __this, L_42);
		goto IL_0218;
	}

IL_013e:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_43 = ___reader0;
		NullCheck(L_43);
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_43);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, __this, L_44);
		goto IL_0218;
	}

IL_014f:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_45 = ___reader0;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_45);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.Xml.XmlWriter::WriteEntityRef(System.String) */, __this, L_46);
		goto IL_0218;
	}

IL_0160:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_47 = ___reader0;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_47);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_49 = ___reader0;
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, __this, L_48, L_50);
		goto IL_0218;
	}

IL_0177:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_51 = ___reader0;
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_51);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, __this, L_52);
		goto IL_0218;
	}

IL_0188:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_53 = ___reader0;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_53);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_55 = ___reader0;
		NullCheck(L_55);
		String_t* L_56 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_55, _stringLiteralD1785CA28C3A4D29A6EDEF1520C544B838A93DB3);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_57 = ___reader0;
		NullCheck(L_57);
		String_t* L_58 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(14 /* System.String System.Xml.XmlReader::get_Item(System.String) */, L_57, _stringLiteral29D43743C43BDA9873FC7A79C99F2EC4B6B442B1);
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_59 = ___reader0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_59);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, __this, L_54, L_56, L_58, L_60);
		goto IL_0218;
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_61 = ___reader0;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(28 /* System.Void System.Xml.XmlWriter::WriteWhitespace(System.String) */, __this, L_62);
		goto IL_0218;
	}

IL_01cb:
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, __this);
		goto IL_0218;
	}

IL_01d6:
	{
		goto IL_0218;
	}

IL_01db:
	{
		goto IL_0218;
	}

IL_01e0:
	{
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_63 = (ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D*)SZArrayNew(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralAE16CDF368B9DB989F62730137C3B58D112CBF73);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_65 = L_64;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_66 = ___reader0;
		NullCheck(L_66);
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_66);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_67);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_68 = L_65;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral24B0DB681A39D72D91C8DBE3EC9EAB3EF2B86761);
		ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* L_69 = L_68;
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_70 = ___reader0;
		NullCheck(L_70);
		int32_t L_71 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_70);
		int32_t L_72 = L_71;
		RuntimeObject * L_73 = Box(XmlNodeType_tF9194E434ED56EA8A4CBE6EB7181252E20BB94FA_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_73);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m2BD818C1A31996400987A990DD23C8629549A2B1(L_69, /*hidden argument*/NULL);
		XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 * L_75 = (XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1 *)il2cpp_codegen_object_new(XmlException_tC3F8843762100626FC686CF0862B5545BCB261A1_il2cpp_TypeInfo_var);
		XmlException__ctor_mA7EC39C22AC5AF216E3AD75001D1D2CDB0835981(L_75, L_74, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, NULL, XmlWriter_WriteNode_mE21F83BDA9F6EF9940DF356581DDB8D371BCF242_RuntimeMethod_var);
	}

IL_0218:
	{
		XmlReader_tC30823FFBFDF75F5ECDE7FA4EB1DBE8358E06293 * L_76 = ___reader0;
		NullCheck(L_76);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_76);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartAttribute_m224FB6BA08625DE162046B5515B7F4D74637E66D (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, String_t* ___ns1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		String_t* L_1 = ___ns1;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(23 /* System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, L_1);
		return;
	}
}
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String)
extern "C" IL2CPP_METHOD_ATTR void XmlWriter_WriteStartElement_m26CA155F552639BC24D4F60810E588E32129C60A (XmlWriter_tF67065A3B83E8B7E2B24D172D8223F4328F437B6 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___localName0;
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, __this, (String_t*)NULL, L_0, (String_t*)NULL);
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
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings__ctor_mBAE3BD4C7C747A7E0F8D761DBC0B8605F585CC2C (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		XmlWriterSettings_Reset_mA213D873CE0AE502086C9B4A517448176F0D8E60(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlWriterSettings::Reset()
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_Reset_mA213D873CE0AE502086C9B4A517448176F0D8E60 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlWriterSettings_Reset_mA213D873CE0AE502086C9B4A517448176F0D8E60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_checkCharacters_0((bool)1);
		__this->set_closeOutput_1((bool)0);
		__this->set_conformance_2(2);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_0 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		__this->set_encoding_3(L_0);
		__this->set_indent_4((bool)0);
		__this->set_indentChars_5(_stringLiteral099600A10A944114AAC406D136B625FB416DD779);
		String_t* L_1 = Environment_get_NewLine_mE2007839F78B01EFFEE101DAD64A21C72B9A79BB(/*hidden argument*/NULL);
		__this->set_newLineChars_6(L_1);
		__this->set_newLineOnAttributes_7((bool)0);
		__this->set_newLineHandling_8(2);
		__this->set_omitXmlDeclaration_9((bool)0);
		__this->set_outputMethod_10(3);
		return;
	}
}
// System.Boolean System.Xml.XmlWriterSettings::get_CheckCharacters()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_CheckCharacters_m68E3D6657A618FE667F37CDEE629F17E1940AE7A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_checkCharacters_0();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlWriterSettings::get_CloseOutput()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_CloseOutput_m90901B4599AF160284A79F784B62F28A816A467A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_closeOutput_1();
		return L_0;
	}
}
// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::get_ConformanceLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_ConformanceLevel_m0A3DF70786E009CC5E12DAD2C16B592485064C41 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_conformance_2();
		return L_0;
	}
}
// System.Void System.Xml.XmlWriterSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_ConformanceLevel_m12D803B39E1D87EBE670E259E4F709D192E17F36 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_conformance_2(L_0);
		return;
	}
}
// System.Boolean System.Xml.XmlWriterSettings::get_Indent()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_Indent_mC6E449921027BB72E6BA59D68838085A55A0325A (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_indent_4();
		return L_0;
	}
}
// System.Void System.Xml.XmlWriterSettings::set_Indent(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XmlWriterSettings_set_Indent_m841699169EEF713A0BBDEB24DD676C4454178DE1 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_indent_4(L_0);
		return;
	}
}
// System.String System.Xml.XmlWriterSettings::get_IndentChars()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriterSettings_get_IndentChars_m8BACCD027F8C08ED998C1007B64B2F4117531A08 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_indentChars_5();
		return L_0;
	}
}
// System.String System.Xml.XmlWriterSettings::get_NewLineChars()
extern "C" IL2CPP_METHOD_ATTR String_t* XmlWriterSettings_get_NewLineChars_m4FAA407F667D3B2B84690E5C9E6E38C5EF336574 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_newLineChars_6();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlWriterSettings::get_NewLineOnAttributes()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_NewLineOnAttributes_mA8C994579A7A7B61899E55B2140A2DA2D359A8CC (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_newLineOnAttributes_7();
		return L_0;
	}
}
// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::get_NewLineHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NewLineHandling_m125E232A5C45104F0CE92E47E342BE8360DDB206 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_newLineHandling_8();
		return L_0;
	}
}
// System.Boolean System.Xml.XmlWriterSettings::get_OmitXmlDeclaration()
extern "C" IL2CPP_METHOD_ATTR bool XmlWriterSettings_get_OmitXmlDeclaration_mEFA103DA74EDB8143F2C81EF60391893AEFA8649 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_omitXmlDeclaration_9();
		return L_0;
	}
}
// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::get_NamespaceHandling()
extern "C" IL2CPP_METHOD_ATTR int32_t XmlWriterSettings_get_NamespaceHandling_m6DFD42170BE968257A9455F0ED07587CBA794AD0 (XmlWriterSettings_tA0B5AAC290DF5E4F1D66F0D10743489CC31500FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CNamespaceHandlingU3Ek__BackingField_11();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
