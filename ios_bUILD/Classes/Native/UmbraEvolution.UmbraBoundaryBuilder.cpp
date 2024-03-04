#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>
struct List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary>
struct Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C;
// System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
// UmbraEvolution.UmbraBoundaryBuilder.Boundary[]
struct BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F;
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode[]
struct BoundaryNodeU5BU5D_t0D782A1BBEB2966C110D99AF0B4802EDE9EDDE97;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UmbraEvolution.UmbraBoundaryBuilder.Boundary
struct Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D;
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder
struct BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4;
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode
struct BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UmbraEvolution.SingleLayerAttribute
struct SingleLayerAttribute_t3DF37F44062B3AE2E1FE24EB4DD12766C90B1116;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c
struct U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9;

IL2CPP_EXTERN_C RuntimeClass* BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t760B937814BBC488676C1E0FE47F359261434D67____830A3D64D389308F0E505B73A09EECDFFEB148B9255A7F68C5D336E819FD06DE_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A20EF952447ABF8BBC1D460BD0574DA30070828;
IL2CPP_EXTERN_C String_t* _stringLiteral42708C2BE61F82AAB808FE8A5BC4765135C8B9EB;
IL2CPP_EXTERN_C String_t* _stringLiteral52B55EBEA883D38B4AB75F335C3CBCECFCDBA76F;
IL2CPP_EXTERN_C String_t* _stringLiteral5A889E9816846E2EABBE22CA23C8752A12EC711B;
IL2CPP_EXTERN_C String_t* _stringLiteral700F8ABFBDBD9B018C92DB51D77701464D8AF6F4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D9252207A5280EDD9121FA3EFF4E44D881EE330;
IL2CPP_EXTERN_C String_t* _stringLiteral907058034EA3DA62D274AB58B0AA8F4D713C49C9;
IL2CPP_EXTERN_C String_t* _stringLiteral970FC6827CC11335800F55F9710014EB7C4DD569;
IL2CPP_EXTERN_C String_t* _stringLiteral9B25E87EFF8E8BAC27D641E1DA7C95E2B9F9BCB7;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF754D60EF3E6DF6A1E07962277358781B46C7F;
IL2CPP_EXTERN_C String_t* _stringLiteralB28CD62EE21D25135310FD03FE67E7EF6759DBA2;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralDBCDE134118BB955CD1655B3F8594861F14BC5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE459C764A088E4658F6EA9D19EBD90E11C698358;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_m7265887CCB73DE378525B0DA4C8C9E94ABD835D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_m8E45857F96F1EB57DACF7A2A246D985622A81F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_m48B8A48ED804D6F96E55719B813381F3CB703F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mA0B8E21F8D3089AD8A299A4E36C28DDABF56DB08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mAFA1434AF1BEFD5E699AF85420A474925835D7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mBABD61582E4671D914C6B22F3D3531680F6BD6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB63E091AE42D4C72066C2AF2AA54B62AD56151A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2CF026EAEBC93D2F61CDCF085ADBB6B96412F1CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_BoundaryPlacingNodesU3Eb__8_0_mE13EC36E6A6A21A1EB5C8957D8FE842DA6512D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC2AEDEDD1BF53DAB19C6AA437CD6F950EE10B195 
{
};

// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>
struct List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoundaryNodeU5BU5D_t0D782A1BBEB2966C110D99AF0B4802EDE9EDDE97* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c
struct U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>
struct Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.PropertyAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144
struct __StaticArrayInitTypeSizeU3D144_t9F08AED1BEBDDAA65FD5E5AE18B83826E11C8D9C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D144_t9F08AED1BEBDDAA65FD5E5AE18B83826E11C8D9C__padding[144];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t760B937814BBC488676C1E0FE47F359261434D67  : public RuntimeObject
{
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UmbraEvolution.SingleLayerAttribute
struct SingleLayerAttribute_t3DF37F44062B3AE2E1FE24EB4DD12766C90B1116  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary>
struct Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UmbraEvolution.UmbraBoundaryBuilder.Boundary
struct Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color UmbraEvolution.UmbraBoundaryBuilder.Boundary::boundaryGizmoColour
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___boundaryGizmoColour_4;
	// UnityEngine.Color UmbraEvolution.UmbraBoundaryBuilder.Boundary::nodeGizmoColour
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___nodeGizmoColour_5;
	// System.Single UmbraEvolution.UmbraBoundaryBuilder.Boundary::nodeGizmoRadius
	float ___nodeGizmoRadius_6;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::closedLoop
	bool ___closedLoop_7;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::useBoxColliders
	bool ___useBoxColliders_8;
	// System.Int32 UmbraEvolution.UmbraBoundaryBuilder.Boundary::physicsLayer
	int32_t ___physicsLayer_9;
	// System.Single UmbraEvolution.UmbraBoundaryBuilder.Boundary::boundaryThickness
	float ___boundaryThickness_10;
	// System.Single UmbraEvolution.UmbraBoundaryBuilder.Boundary::boundaryHeight
	float ___boundaryHeight_11;
	// System.Single UmbraEvolution.UmbraBoundaryBuilder.Boundary::verticalOffset
	float ___verticalOffset_12;
	// UnityEngine.Material UmbraEvolution.UmbraBoundaryBuilder.Boundary::boundaryMeshMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___boundaryMeshMaterial_13;
	// UnityEngine.LayerMask UmbraEvolution.UmbraBoundaryBuilder.Boundary::placeableLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___placeableLayers_14;
	// UnityEngine.QueryTriggerInteraction UmbraEvolution.UmbraBoundaryBuilder.Boundary::queryTriggerInteraction
	int32_t ___queryTriggerInteraction_15;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::updateAtRuntime
	bool ___updateAtRuntime_16;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::<RebuildNodeList>k__BackingField
	bool ___U3CRebuildNodeListU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode> UmbraEvolution.UmbraBoundaryBuilder.Boundary::_boundaryNodes
	List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* ____boundaryNodes_18;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::placingNodes
	bool ___placingNodes_19;
	// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.Boundary::_parent
	BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* ____parent_20;
	// UnityEngine.MeshRenderer UmbraEvolution.UmbraBoundaryBuilder.Boundary::_boundaryMeshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____boundaryMeshRenderer_21;
	// UnityEngine.MeshFilter UmbraEvolution.UmbraBoundaryBuilder.Boundary::_boundaryMeshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____boundaryMeshFilter_22;
};

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder
struct BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::gizmosAlwaysOn
	bool ___gizmosAlwaysOn_6;
	// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::usePhysicalGizmos
	bool ___usePhysicalGizmos_7;
	// UnityEngine.Material UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::physicalGizmoMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___physicalGizmoMaterial_8;
};

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode
struct BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UmbraEvolution.UmbraBoundaryBuilder.Boundary UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::_parent
	Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* ____parent_4;
	// UnityEngine.BoxCollider UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::_myBoxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____myBoxCollider_5;
	// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::<PhysicalNodeGizmo>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CPhysicalNodeGizmoU3Ek__BackingField_6;
	// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::<PhysicalBoundaryGizmo>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7;
	// UnityEngine.Vector3 UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::<LastKnownPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLastKnownPositionU3Ek__BackingField_8;
	// UnityEngine.Quaternion UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::<LastKnownRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLastKnownRotationU3Ek__BackingField_9;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>
struct List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoundaryNodeU5BU5D_t0D782A1BBEB2966C110D99AF0B4802EDE9EDDE97* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Attribute

// System.Attribute

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c
struct U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields
{
	// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::<>9
	U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* ___U3CU3E9_0;
	// System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary> UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::<>9__8_0
	Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* ___U3CU3E9__8_0_1;
};

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c

// System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>

// System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t760B937814BBC488676C1E0FE47F359261434D67_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=144 <PrivateImplementationDetails>::830A3D64D389308F0E505B73A09EECDFFEB148B9255A7F68C5D336E819FD06DE
	__StaticArrayInitTypeSizeU3D144_t9F08AED1BEBDDAA65FD5E5AE18B83826E11C8D9C ___830A3D64D389308F0E505B73A09EECDFFEB148B9255A7F68C5D336E819FD06DE_0;
};

// <PrivateImplementationDetails>

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UmbraEvolution.SingleLayerAttribute

// UmbraEvolution.SingleLayerAttribute

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// System.Type
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

// System.Type

// System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary>

// System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UmbraEvolution.UmbraBoundaryBuilder.Boundary

// UmbraEvolution.UmbraBoundaryBuilder.Boundary

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder
struct BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields
{
	// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::<Reference>k__BackingField
	BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* ___U3CReferenceU3Ek__BackingField_9;
};

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode

// UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// UmbraEvolution.UmbraBoundaryBuilder.Boundary[]
struct BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F  : public RuntimeArray
{
	ALIGN_FIELD (8) Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* m_Items[1];

	inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_m173581815FF84722B49A5E4DE5A2820B5D2DB00E_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Array::Find<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Find_TisIl2CppFullySharedGenericAny_mDABDA3FABFDFD0533A2ABC81AB07F5F2D4A13181_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_match, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_RebuildNodeList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Boundary_get_RebuildNodeList_m70A928A4564BBF585A545A002A1D7886139E977A_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::get_Count()
inline int32_t List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::.ctor()
inline void List_1__ctor_m2CF026EAEBC93D2F61CDCF085ADBB6B96412F1CF (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::MatchPhysicsLayerRecursive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_MatchPhysicsLayerRecursive_mAED14D1A311791189D31CEF616002BDA23B65EEF (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>()
inline BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* Component_GetComponent_TisBoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_m48B8A48ED804D6F96E55719B813381F3CB703F3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::Add(T)
inline void List_1_Add_mB63E091AE42D4C72066C2AF2AA54B62AD56151A8_inline (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_RebuildNodeList(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::RefreshNodeProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_RefreshNodeProperties_m8226EAD3AA5DC21CE42BB361A8504372C2826ECD (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder>()
inline BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* Component_GetComponent_TisBoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_m8E45857F96F1EB57DACF7A2A246D985622A81F94 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_ParentBoundaryBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawGizmos_mFA50D535C834C7375201C2765E7278709259772F (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyPhysicalGizmosImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyPhysicalGizmosImmediate_mC8D772E8AE0E696502AF0061E4917AD356E122CB (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyPhysicalGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyPhysicalGizmos_mDBB3FE62E0C6D5B795554CFDA9A6F97398C7376B (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::HasAnyNodeMovedOrRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_HasAnyNodeMovedOrRotated_m7CB243083B757D0FDA5DB53B460521F6BAE55E32 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::UpdateNodeRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_UpdateNodeRotations_m6DA448105CDFB800615BB4DFB875E080CC7C9A93 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::UpdateNodeColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_UpdateNodeColliders_m3044586A8A0566A18288AB80428EA40F232917D8 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode> UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::get_Item(System.Int32)
inline BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27 (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::CalculateAndSetRotation(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_CalculateAndSetRotation_mFE97164CE4ECC4D0379531CE2D89A82B713199E7 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_nextNode, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::UpdateBoxCollider(System.Single,System.Single,System.Single,UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_UpdateBoxCollider_m811FE6037B9D3DDE329E20E4967174C541F785EF (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, float ___0_boundaryThickness, float ___1_boundaryHeight, float ___2_verticalOffset, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___3_nextNode, bool ___4_useBoxColliders, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DisableBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DisableBoxCollider_m6BE3BB81FFD07F77CAF640D34B58C2A013CE7C57 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawPhysicalGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawPhysicalGizmos_mA234B4C8014B478AFFBBDA80809A845A04F920DF (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawNormalGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawNormalGizmos_mDA88F6A32FDC79DF6EA9F270154D689549FE3352 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_q, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::GetEnumerator()
inline Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8 (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* __this, const RuntimeMethod* method)
{
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::Dispose()
inline void Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F (Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::get_Current()
inline BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline (Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC* __this, const RuntimeMethod* method)
{
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawNodeGizmosManually()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawNodeGizmosManually_m7DA1F6A7B0589C6011C0AF8E82063E843C5A1C87 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode>::MoveNext()
inline bool Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2 (Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawPhysicalBoundaryNodeGizmosManually(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawPhysicalBoundaryNodeGizmosManually_mA9A7D4B75324FBFE677025301D55E8ECC5441A18 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_gizmoSize, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_localCenter, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawPhysicalNodeGizmosManually()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawPhysicalNodeGizmosManually_m73BDBC9F94D23B4C620284DBADCD2CBA46C347FF (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DestroyPhysicalGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DestroyPhysicalGizmos_m9FDA1980E68467F32FBCB87CAEA5DCD0E4AAB4D1 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DestroyPhysicalGizmosImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DestroyPhysicalGizmosImmediate_m6B9782E112DCDA97F1CE87B3535C108433E1EE31 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::HasNodeMovedOrRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundaryNode_HasNodeMovedOrRotated_mFE69896720BADFC9BF1E4874F34092C2DD4FF814 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_components, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyBoundaryMeshImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyBoundaryMeshImmediate_m6123E887EAD90069C8B8EC16563DCCBA59D944D9 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_BoundaryMeshRenderer(UnityEngine.MeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshRenderer_mA4B3151803381256C90C7C7D8669E6BE526FFEA0_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_BoundaryMeshFilter(UnityEngine.MeshFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshFilter_m0AF2464A33CD74D8497E2D759C2460259C5E4935_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.MeshRenderer UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_receiveShadows(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_allowOcclusionWhenDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_allowOcclusionWhenDynamic_mFAF8360D5AEEAE69443738AA7D764CF1E52EFFE7 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.MeshFilter UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector3[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::ReturnVertices(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* BoundaryNode_ReturnVertices_mBA6AC7DAA51A3E5ED3300AA3BA63AC52F3F44415 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, float ___0_heightAdjustment, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_inVertices, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::ReturnTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoundaryNode_ReturnTriangles_m012D8D8B9427E5E67BC5BB5D83598E9525BDB1BD (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_triangles, int32_t ___1_submesh, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::MatchPhysicsLayerRecursive(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_MatchPhysicsLayerRecursive_mDAE29B91B12D5EC9D551468ABEB16F6E302529E7 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UmbraEvolution.UmbraBoundaryBuilder.Boundary>()
inline BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* Component_GetComponentsInChildren_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mAFA1434AF1BEFD5E699AF85420A474925835D7E8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisIl2CppFullySharedGenericAny_m173581815FF84722B49A5E4DE5A2820B5D2DB00E_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, method);
	return (BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F*)il2cppRetVal;
}
// UmbraEvolution.UmbraBoundaryBuilder.Boundary[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::get_Boundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* BoundaryBuilder_get_Boundaries_mACD15C5A14ABD8E9D912ED20F2EFCC2F4F857939 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<UmbraEvolution.UmbraBoundaryBuilder.Boundary>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mE8A846E2F0A6A2206B3F9D8A423E6323D122D9AC (Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_gshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_object, ___1_method, method);
}
// T System.Array::Find<UmbraEvolution.UmbraBoundaryBuilder.Boundary>(T[],System.Predicate`1<T>)
inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* Array_Find_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_m7265887CCB73DE378525B0DA4C8C9E94ABD835D0 (BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* ___0_array, Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* ___1_match, const RuntimeMethod* method)
{
	Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* il2cppRetVal;
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Array_Find_TisIl2CppFullySharedGenericAny_mDABDA3FABFDFD0533A2ABC81AB07F5F2D4A13181_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___0_array, (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)___1_match, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::get_Reference()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* BoundaryBuilder_get_Reference_m14AF30561CF892F673D5E11ADBC4D75BDB37203A_inline (const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::set_Reference(UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryBuilder_set_Reference_m928DC87D76026F3928361AE8072647190BA01820_inline (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UmbraEvolution.UmbraBoundaryBuilder.Boundary>()
inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* GameObject_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mBABD61582E4671D914C6B22F3D3531680F6BD6AE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94B6DAF9348D4CED1301C0137CB4A6634AB5C981 (U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UmbraEvolution.UmbraBoundaryBuilder.Boundary>()
inline Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* Component_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mA0B8E21F8D3089AD8A299A4E36C28DDABF56DB08 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Vector3 UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_LastKnownPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoundaryNode_get_LastKnownPosition_m8C6BB3979F6A776CEB5DB8514446543800A80CCF_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_LastKnownRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoundaryNode_get_LastKnownRotation_m7081ED3D6486555D796BF2E21ECAF6FEC825C447_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_LastKnownPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownPosition_m9178B3EA160AEC3BF55D660DF3BFAF6B04EB822E_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_LastKnownRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownRotation_m277D484A5BA93B819A734FEF5C25536D885C7ABB_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UmbraEvolution.UmbraBoundaryBuilder.Boundary UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_ParentBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_PhysicalNodeGizmo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_PhysicalNodeGizmo(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalNodeGizmo_m136226DEE4001976E320F64437AB86F72D5C900D_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_PhysicalBoundaryGizmo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_PhysicalBoundaryGizmo(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalBoundaryGizmo_m0CD9AF573735D82DB71AF5C6102FE9CD3FBFB7D9_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.BoxCollider UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_MyBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0 (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
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
// System.Void UmbraEvolution.SingleLayerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleLayerAttribute__ctor_m843707DFE9095304DCE48F5B08FBF29295E8B2BE (SingleLayerAttribute_t3DF37F44062B3AE2E1FE24EB4DD12766C90B1116* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_RebuildNodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_get_RebuildNodeList_m70A928A4564BBF585A545A002A1D7886139E977A (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// public bool RebuildNodeList { get; set; }
		bool L_0 = __this->___U3CRebuildNodeListU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_RebuildNodeList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RebuildNodeList { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRebuildNodeListU3Ek__BackingField_17 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode> UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_m48B8A48ED804D6F96E55719B813381F3CB703F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB63E091AE42D4C72066C2AF2AA54B62AD56151A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2CF026EAEBC93D2F61CDCF085ADBB6B96412F1CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D9252207A5280EDD9121FA3EFF4E44D881EE330);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* V_1 = NULL;
	{
		// if (RebuildNodeList || _boundaryNodes == null || _boundaryNodes.Count != transform.childCount)
		bool L_0;
		L_0 = Boundary_get_RebuildNodeList_m70A928A4564BBF585A545A002A1D7886139E977A_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_1 = __this->____boundaryNodes_18;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_2 = __this->____boundaryNodes_18;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_2, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_4, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_008e;
		}
	}

IL_0028:
	{
		// _boundaryNodes = new List<BoundaryNode>();
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_6 = (List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E*)il2cpp_codegen_object_new(List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m2CF026EAEBC93D2F61CDCF085ADBB6B96412F1CF(L_6, List_1__ctor_m2CF026EAEBC93D2F61CDCF085ADBB6B96412F1CF_RuntimeMethod_var);
		__this->____boundaryNodes_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryNodes_18), (void*)L_6);
		// MatchPhysicsLayerRecursive();
		Boundary_MatchPhysicsLayerRecursive_mAED14D1A311791189D31CEF616002BDA23B65EEF(__this, NULL);
		// for (int index = 0; index < transform.childCount; index++)
		V_0 = 0;
		goto IL_0073;
	}

IL_003d:
	{
		// BoundaryNode nextNode = transform.GetChild(index).GetComponent<BoundaryNode>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, L_8, NULL);
		NullCheck(L_9);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_10;
		L_10 = Component_GetComponent_TisBoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_m48B8A48ED804D6F96E55719B813381F3CB703F3A(L_9, Component_GetComponent_TisBoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_m48B8A48ED804D6F96E55719B813381F3CB703F3A_RuntimeMethod_var);
		V_1 = L_10;
		// if (nextNode)
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// _boundaryNodes.Add(nextNode);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_13 = __this->____boundaryNodes_18;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_mB63E091AE42D4C72066C2AF2AA54B62AD56151A8_inline(L_13, L_14, List_1_Add_mB63E091AE42D4C72066C2AF2AA54B62AD56151A8_RuntimeMethod_var);
		goto IL_006f;
	}

IL_0065:
	{
		// Debug.LogWarning("There is a child of a boundary that isn't a node. This causes efficiency issues.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral8D9252207A5280EDD9121FA3EFF4E44D881EE330, NULL);
	}

IL_006f:
	{
		// for (int index = 0; index < transform.childCount; index++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0073:
	{
		// for (int index = 0; index < transform.childCount; index++)
		int32_t L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_17, NULL);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_003d;
		}
	}
	{
		// RebuildNodeList = false;
		Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421_inline(__this, (bool)0, NULL);
		// RefreshNodeProperties();
		Boundary_RefreshNodeProperties_m8226EAD3AA5DC21CE42BB361A8504372C2826ECD(__this, NULL);
	}

IL_008e:
	{
		// return _boundaryNodes;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_19 = __this->____boundaryNodes_18;
		return L_19;
	}
}
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_ParentBoundaryBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_m8E45857F96F1EB57DACF7A2A246D985622A81F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A889E9816846E2EABBE22CA23C8752A12EC711B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_parent == null)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0 = __this->____parent_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// _parent = transform.parent.GetComponent<BoundaryBuilder>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_4;
		L_4 = Component_GetComponent_TisBoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_m8E45857F96F1EB57DACF7A2A246D985622A81F94(L_3, Component_GetComponent_TisBoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_m8E45857F96F1EB57DACF7A2A246D985622A81F94_RuntimeMethod_var);
		__this->____parent_20 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_20), (void*)L_4);
		// if (_parent == null)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_5 = __this->____parent_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogErrorFormat("The Boundary [{0}] does not have a BoundaryBuilder parent. This Boundary will not work correctly.", gameObject.name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral5A889E9816846E2EABBE22CA23C8752A12EC711B, L_8, NULL);
	}

IL_0050:
	{
		// return _parent;
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_11 = __this->____parent_20;
		return L_11;
	}
}
// UnityEngine.MeshRenderer UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryMeshRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_boundaryMeshRenderer == null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->____boundaryMeshRenderer_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _boundaryMeshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->____boundaryMeshRenderer_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshRenderer_21), (void*)L_2);
	}

IL_001a:
	{
		// return _boundaryMeshRenderer;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3 = __this->____boundaryMeshRenderer_21;
		return L_3;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_BoundaryMeshRenderer(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshRenderer_mA4B3151803381256C90C7C7D8669E6BE526FFEA0 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { _boundaryMeshRenderer = value; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_value;
		__this->____boundaryMeshRenderer_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshRenderer_21), (void*)L_0);
		// private set { _boundaryMeshRenderer = value; }
		return;
	}
}
// UnityEngine.MeshFilter UmbraEvolution.UmbraBoundaryBuilder.Boundary::get_BoundaryMeshFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_boundaryMeshFilter == null)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->____boundaryMeshFilter_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _boundaryMeshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2;
		L_2 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->____boundaryMeshFilter_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshFilter_22), (void*)L_2);
	}

IL_001a:
	{
		// return _boundaryMeshFilter;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->____boundaryMeshFilter_22;
		return L_3;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::set_BoundaryMeshFilter(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshFilter_m0AF2464A33CD74D8497E2D759C2460259C5E4935 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { _boundaryMeshFilter = value; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_value;
		__this->____boundaryMeshFilter_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshFilter_22), (void*)L_0);
		// private set { _boundaryMeshFilter = value; }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_OnTransformChildrenChanged_mBBF3C2489A1631465581A6361B55A089478297FC (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// RebuildNodeList = true;
		Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_OnDrawGizmos_mEDA2FA7652A3FA8E28A54D88B11A89968E56993E (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// if (ParentBoundaryBuilder.gizmosAlwaysOn)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0;
		L_0 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___gizmosAlwaysOn_6;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// DrawGizmos();
		Boundary_DrawGizmos_mFA50D535C834C7375201C2765E7278709259772F(__this, (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1*)NULL, NULL);
	}

IL_0014:
	{
		// if (!ParentBoundaryBuilder.usePhysicalGizmos)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_2;
		L_2 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___usePhysicalGizmos_7;
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		// if (Application.isEditor && !Application.isPlaying)
		bool L_4;
		L_4 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5;
		L_5 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// DestroyPhysicalGizmosImmediate();
		Boundary_DestroyPhysicalGizmosImmediate_mC8D772E8AE0E696502AF0061E4917AD356E122CB(__this, NULL);
		return;
	}

IL_0036:
	{
		// DestroyPhysicalGizmos();
		Boundary_DestroyPhysicalGizmos_mDBB3FE62E0C6D5B795554CFDA9A6F97398C7376B(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_OnDrawGizmosSelected_m0606FDE947188B1EE197ECB26FC03E53A2DED06D (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// if (!ParentBoundaryBuilder.gizmosAlwaysOn)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0;
		L_0 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___gizmosAlwaysOn_6;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// DrawGizmos();
		Boundary_DrawGizmos_mFA50D535C834C7375201C2765E7278709259772F(__this, (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1*)NULL, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_Update_m35B0F98D1F735DAC5D8D03E1142BD2FCDD22C100 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// if (updateAtRuntime && HasAnyNodeMovedOrRotated())
		bool L_0 = __this->___updateAtRuntime_16;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Boundary_HasAnyNodeMovedOrRotated_m7CB243083B757D0FDA5DB53B460521F6BAE55E32(__this, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// RefreshNodeProperties();
		Boundary_RefreshNodeProperties_m8226EAD3AA5DC21CE42BB361A8504372C2826ECD(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::RefreshNodeProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_RefreshNodeProperties_m8226EAD3AA5DC21CE42BB361A8504372C2826ECD (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// UpdateNodeRotations();
		Boundary_UpdateNodeRotations_m6DA448105CDFB800615BB4DFB875E080CC7C9A93(__this, NULL);
		// UpdateNodeColliders();
		Boundary_UpdateNodeColliders_m3044586A8A0566A18288AB80428EA40F232917D8(__this, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::UpdateNodeRotations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_UpdateNodeRotations_m6DA448105CDFB800615BB4DFB875E080CC7C9A93 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (BoundaryNodes.Count > 1)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_0;
		L_0 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_0, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		// int indexLimit = closedLoop ? BoundaryNodes.Count : BoundaryNodes.Count - 1;
		bool L_2 = __this->___closedLoop_7;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_3;
		L_3 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_3, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0030;
	}

IL_0025:
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_5;
		L_5 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_5, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B4_0 = L_6;
	}

IL_0030:
	{
		V_0 = G_B4_0;
		// for (int index = 0; index < indexLimit; index++)
		V_1 = 0;
		goto IL_0066;
	}

IL_0035:
	{
		// int nextIndex = (index + 1) % BoundaryNodes.Count;
		int32_t L_7 = V_1;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_8;
		L_8 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_8, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%L_9));
		// BoundaryNodes[index].CalculateAndSetRotation(BoundaryNodes[nextIndex]);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_10;
		L_10 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_12;
		L_12 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_10, L_11, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_13;
		L_13 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_15;
		L_15 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_13, L_14, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_12);
		BoundaryNode_CalculateAndSetRotation_mFE97164CE4ECC4D0379531CE2D89A82B713199E7(L_12, L_15, NULL);
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0066:
	{
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0035;
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::UpdateNodeColliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_UpdateNodeColliders_m3044586A8A0566A18288AB80428EA40F232917D8 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		// if (BoundaryNodes.Count > 1)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_0;
		L_0 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_0, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_00aa;
		}
	}
	{
		// int indexLimit = closedLoop ? BoundaryNodes.Count : BoundaryNodes.Count - 1;
		bool L_2 = __this->___closedLoop_7;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_3;
		L_3 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_3, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		goto IL_0033;
	}

IL_0028:
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_5;
		L_5 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_5, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B4_0 = L_6;
	}

IL_0033:
	{
		V_0 = G_B4_0;
		// for (int index = 0; index < indexLimit; index++)
		V_1 = 0;
		goto IL_0081;
	}

IL_0038:
	{
		// int nextIndex = (index + 1) % BoundaryNodes.Count;
		int32_t L_7 = V_1;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_8;
		L_8 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_8, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_7, 1))%L_9));
		// BoundaryNodes[index].UpdateBoxCollider(boundaryThickness, boundaryHeight, verticalOffset, BoundaryNodes[nextIndex], useBoxColliders);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_10;
		L_10 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_12;
		L_12 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_10, L_11, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		float L_13 = __this->___boundaryThickness_10;
		float L_14 = __this->___boundaryHeight_11;
		float L_15 = __this->___verticalOffset_12;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_16;
		L_16 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_18;
		L_18 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_16, L_17, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		bool L_19 = __this->___useBoxColliders_8;
		NullCheck(L_12);
		BoundaryNode_UpdateBoxCollider_m811FE6037B9D3DDE329E20E4967174C541F785EF(L_12, L_13, L_14, L_15, L_18, L_19, NULL);
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0081:
	{
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0038;
		}
	}
	{
		// if (!closedLoop)
		bool L_23 = __this->___closedLoop_7;
		if (L_23)
		{
			goto IL_00aa;
		}
	}
	{
		// BoundaryNodes[BoundaryNodes.Count - 1].DisableBoxCollider();
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_24;
		L_24 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_25;
		L_25 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_25, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		NullCheck(L_24);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_27;
		L_27 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_24, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_27);
		BoundaryNode_DisableBoxCollider_m6BE3BB81FFD07F77CAF640D34B58C2A013CE7C57(L_27, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawGizmos_mFA50D535C834C7375201C2765E7278709259772F (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) 
{
	{
		// if (ParentBoundaryBuilder.usePhysicalGizmos)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0;
		L_0 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___usePhysicalGizmos_7;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// DrawPhysicalGizmos(triggeringNode);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_2 = ___0_triggeringNode;
		Boundary_DrawPhysicalGizmos_mA234B4C8014B478AFFBBDA80809A845A04F920DF(__this, L_2, NULL);
		goto IL_001d;
	}

IL_0016:
	{
		// DrawNormalGizmos(triggeringNode);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_3 = ___0_triggeringNode;
		Boundary_DrawNormalGizmos_mDA88F6A32FDC79DF6EA9F270154D689549FE3352(__this, L_3, NULL);
	}

IL_001d:
	{
		// if (HasAnyNodeMovedOrRotated())
		bool L_4;
		L_4 = Boundary_HasAnyNodeMovedOrRotated_m7CB243083B757D0FDA5DB53B460521F6BAE55E32(__this, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// RefreshNodeProperties();
		Boundary_RefreshNodeProperties_m8226EAD3AA5DC21CE42BB361A8504372C2826ECD(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawNormalGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawNormalGizmos_mDA88F6A32FDC79DF6EA9F270154D689549FE3352 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC V_10;
	memset((&V_10), 0, sizeof(V_10));
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* V_11 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (triggeringNode != null && ParentBoundaryBuilder.gizmosAlwaysOn)
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_0 = ___0_triggeringNode;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_2;
		L_2 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___gizmosAlwaysOn_6;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (BoundaryNodes.Count > 1)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_4;
		L_4 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_4, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0237;
		}
	}
	{
		// Gizmos.color = boundaryGizmoColour;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___boundaryGizmoColour_4;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_6, NULL);
		// int indexLimit = closedLoop ? BoundaryNodes.Count : BoundaryNodes.Count - 1;
		bool L_7 = __this->___closedLoop_7;
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_8;
		L_8 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_8, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B7_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0055;
	}

IL_004a:
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_10;
		L_10 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_10, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B7_0 = L_11;
	}

IL_0055:
	{
		V_0 = G_B7_0;
		// for (int index = 0; index < indexLimit; index++)
		V_1 = 0;
		goto IL_0230;
	}

IL_005d:
	{
		// int nextIndex = (index + 1) % BoundaryNodes.Count;
		int32_t L_12 = V_1;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_13;
		L_13 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_13, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%L_14));
		// float gizmoCenterX = (BoundaryNodes[index].transform.position.x + BoundaryNodes[nextIndex].transform.position.x) / 2f;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_15;
		L_15 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_17;
		L_17 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_15, L_16, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_21;
		L_21 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_23;
		L_23 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_21, L_22, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		V_3 = ((float)(((float)il2cpp_codegen_add(L_20, L_26))/(2.0f)));
		// float gizmoCenterY = Mathf.Min(BoundaryNodes[index].transform.position.y, BoundaryNodes[nextIndex].transform.position.y) + (boundaryHeight / 2f) + verticalOffset;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_27;
		L_27 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_29;
		L_29 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_27, L_28, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_33;
		L_33 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_35;
		L_35 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_33, L_34, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_32, L_38, NULL);
		float L_40 = __this->___boundaryHeight_11;
		float L_41 = __this->___verticalOffset_12;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_39, ((float)(L_40/(2.0f))))), L_41));
		// float gizmoCenterZ = (BoundaryNodes[index].transform.position.z + BoundaryNodes[nextIndex].transform.position.z) / 2f;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_42;
		L_42 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_43 = V_1;
		NullCheck(L_42);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_44;
		L_44 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_42, L_43, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___z_4;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_48;
		L_48 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_49 = V_2;
		NullCheck(L_48);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_50;
		L_50 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_48, L_49, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___z_4;
		V_5 = ((float)(((float)il2cpp_codegen_add(L_47, L_53))/(2.0f)));
		// Vector3 gizmoCenter = new Vector3(gizmoCenterX, gizmoCenterY, gizmoCenterZ);
		float L_54 = V_3;
		float L_55 = V_4;
		float L_56 = V_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_54, L_55, L_56, NULL);
		// Vector3 nodeOneAdjusted = new Vector3(BoundaryNodes[index].transform.position.x, gizmoCenter.y, BoundaryNodes[index].transform.position.z);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_57;
		L_57 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_58 = V_1;
		NullCheck(L_57);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_59;
		L_59 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_57, L_58, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		float L_62 = L_61.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_6;
		float L_64 = L_63.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_65;
		L_65 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_67;
		L_67 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_65, L_66, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		float L_70 = L_69.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_62, L_64, L_70, NULL);
		// Vector3 nodeTwoAdjusted = new Vector3(BoundaryNodes[nextIndex].transform.position.x, gizmoCenter.y, BoundaryNodes[nextIndex].transform.position.z);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_71;
		L_71 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_72 = V_2;
		NullCheck(L_71);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_73;
		L_73 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_71, L_72, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_74, NULL);
		float L_76 = L_75.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_6;
		float L_78 = L_77.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_79;
		L_79 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_80 = V_2;
		NullCheck(L_79);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_81;
		L_81 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_79, L_80, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_81, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_82, NULL);
		float L_84 = L_83.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), L_76, L_78, L_84, NULL);
		// float gizmoWidth = Vector3.Distance(nodeOneAdjusted, nodeTwoAdjusted) + boundaryThickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_8;
		float L_87;
		L_87 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_85, L_86, NULL);
		float L_88 = __this->___boundaryThickness_10;
		V_9 = ((float)il2cpp_codegen_add(L_87, L_88));
		// Gizmos.matrix = Matrix4x4.TRS(gizmoCenter, Quaternion.LookRotation(nodeTwoAdjusted - nodeOneAdjusted), new Vector3(1f, 1f, 1f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_90, L_91, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_94), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_95;
		L_95 = Matrix4x4_TRS_mCC04FD47347234B451ACC6CCD2CE6D02E1E0E1E3(L_89, L_93, L_94, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_95, NULL);
		// Gizmos.DrawCube(Vector3.zero, new Vector3(boundaryThickness, boundaryHeight, gizmoWidth));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_97 = __this->___boundaryThickness_10;
		float L_98 = __this->___boundaryHeight_11;
		float L_99 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_100), L_97, L_98, L_99, /*hidden argument*/NULL);
		Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_96, L_100, NULL);
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_101 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_0230:
	{
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_102 = V_1;
		int32_t L_103 = V_0;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_005d;
		}
	}

IL_0237:
	{
		// foreach (BoundaryNode node in BoundaryNodes)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_104;
		L_104 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_104);
		Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC L_105;
		L_105 = List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8(L_104, List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		V_10 = L_105;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F((&V_10), Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0260_1;
			}

IL_0246_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_106;
				L_106 = Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline((&V_10), Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
				V_11 = L_106;
				// if (node != triggeringNode)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_107 = V_11;
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_108 = ___0_triggeringNode;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_109;
				L_109 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_107, L_108, NULL);
				if (!L_109)
				{
					goto IL_0260_1;
				}
			}
			{
				// node.DrawNodeGizmosManually();
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_110 = V_11;
				NullCheck(L_110);
				BoundaryNode_DrawNodeGizmosManually_m7DA1F6A7B0589C6011C0AF8E82063E843C5A1C87(L_110, NULL);
			}

IL_0260_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				bool L_111;
				L_111 = Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2((&V_10), Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
				if (L_111)
				{
					goto IL_0246_1;
				}
			}
			{
				goto IL_0279;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0279:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DrawPhysicalGizmos(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DrawPhysicalGizmos_mA234B4C8014B478AFFBBDA80809A845A04F920DF (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_triggeringNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC V_12;
	memset((&V_12), 0, sizeof(V_12));
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* V_13 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (triggeringNode != null && ParentBoundaryBuilder.gizmosAlwaysOn)
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_0 = ___0_triggeringNode;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_2;
		L_2 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(__this, NULL);
		NullCheck(L_2);
		bool L_3 = L_2->___gizmosAlwaysOn_6;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (BoundaryNodes.Count > 1)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_4;
		L_4 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_4, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0254;
		}
	}
	{
		// Gizmos.color = boundaryGizmoColour;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___boundaryGizmoColour_4;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_6, NULL);
		// int indexLimit = closedLoop ? BoundaryNodes.Count : BoundaryNodes.Count - 1;
		bool L_7 = __this->___closedLoop_7;
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_8;
		L_8 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_8, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B7_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_0055;
	}

IL_004a:
	{
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_10;
		L_10 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_10, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		G_B7_0 = L_11;
	}

IL_0055:
	{
		V_0 = G_B7_0;
		// for (int index = 0; index < indexLimit; index++)
		V_1 = 0;
		goto IL_024d;
	}

IL_005d:
	{
		// int nextIndex = (index + 1) % BoundaryNodes.Count;
		int32_t L_12 = V_1;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_13;
		L_13 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_13, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%L_14));
		// float gizmoCenterX = (BoundaryNodes[index].transform.position.x + BoundaryNodes[nextIndex].transform.position.x) / 2f;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_15;
		L_15 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_17;
		L_17 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_15, L_16, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_21;
		L_21 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_23;
		L_23 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_21, L_22, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		V_3 = ((float)(((float)il2cpp_codegen_add(L_20, L_26))/(2.0f)));
		// float gizmoCenterY = Mathf.Min(BoundaryNodes[index].transform.position.y, BoundaryNodes[nextIndex].transform.position.y) + (boundaryHeight / 2f) + verticalOffset;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_27;
		L_27 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_28 = V_1;
		NullCheck(L_27);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_29;
		L_29 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_27, L_28, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_33;
		L_33 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_35;
		L_35 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_33, L_34, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_32, L_38, NULL);
		float L_40 = __this->___boundaryHeight_11;
		float L_41 = __this->___verticalOffset_12;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_39, ((float)(L_40/(2.0f))))), L_41));
		// float gizmoCenterZ = (BoundaryNodes[index].transform.position.z + BoundaryNodes[nextIndex].transform.position.z) / 2f;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_42;
		L_42 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_43 = V_1;
		NullCheck(L_42);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_44;
		L_44 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_42, L_43, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___z_4;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_48;
		L_48 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_49 = V_2;
		NullCheck(L_48);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_50;
		L_50 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_48, L_49, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_50, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___z_4;
		V_5 = ((float)(((float)il2cpp_codegen_add(L_47, L_53))/(2.0f)));
		// Vector3 gizmoCenter = new Vector3(gizmoCenterX, gizmoCenterY, gizmoCenterZ);
		float L_54 = V_3;
		float L_55 = V_4;
		float L_56 = V_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_54, L_55, L_56, NULL);
		// Vector3 nodeOneAdjusted = new Vector3(BoundaryNodes[index].transform.position.x, gizmoCenter.y, BoundaryNodes[index].transform.position.z);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_57;
		L_57 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_58 = V_1;
		NullCheck(L_57);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_59;
		L_59 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_57, L_58, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		float L_62 = L_61.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_6;
		float L_64 = L_63.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_65;
		L_65 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_67;
		L_67 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_65, L_66, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		float L_70 = L_69.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_62, L_64, L_70, NULL);
		// Vector3 nodeTwoAdjusted = new Vector3(BoundaryNodes[nextIndex].transform.position.x, gizmoCenter.y, BoundaryNodes[nextIndex].transform.position.z);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_71;
		L_71 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_72 = V_2;
		NullCheck(L_71);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_73;
		L_73 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_71, L_72, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_73, NULL);
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_74, NULL);
		float L_76 = L_75.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_6;
		float L_78 = L_77.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_79;
		L_79 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_80 = V_2;
		NullCheck(L_79);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_81;
		L_81 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_79, L_80, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_81, NULL);
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_82, NULL);
		float L_84 = L_83.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), L_76, L_78, L_84, NULL);
		// float gizmoWidth = Vector3.Distance(nodeOneAdjusted, nodeTwoAdjusted) + boundaryThickness;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_8;
		float L_87;
		L_87 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_85, L_86, NULL);
		float L_88 = __this->___boundaryThickness_10;
		V_9 = ((float)il2cpp_codegen_add(L_87, L_88));
		// Vector3 gizmoSize = new Vector3(boundaryThickness, boundaryHeight, gizmoWidth);
		float L_89 = __this->___boundaryThickness_10;
		float L_90 = __this->___boundaryHeight_11;
		float L_91 = V_9;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), L_89, L_90, L_91, NULL);
		// Vector3 gizmoLocalCenter = new Vector3(0f, gizmoCenter.y - BoundaryNodes[index].transform.position.y, Vector3.Distance(nodeOneAdjusted, nodeTwoAdjusted) / 2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_6;
		float L_93 = L_92.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_94;
		L_94 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_95 = V_1;
		NullCheck(L_94);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_96;
		L_96 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_94, L_95, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_96);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_96, NULL);
		NullCheck(L_97);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_8;
		float L_102;
		L_102 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_100, L_101, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_11), (0.0f), ((float)il2cpp_codegen_subtract(L_93, L_99)), ((float)(L_102/(2.0f))), NULL);
		// BoundaryNodes[index].DrawPhysicalBoundaryNodeGizmosManually(gizmoSize, gizmoLocalCenter);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_103;
		L_103 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_104 = V_1;
		NullCheck(L_103);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_105;
		L_105 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_103, L_104, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_11;
		NullCheck(L_105);
		BoundaryNode_DrawPhysicalBoundaryNodeGizmosManually_mA9A7D4B75324FBFE677025301D55E8ECC5441A18(L_105, L_106, L_107, NULL);
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_108 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_024d:
	{
		// for (int index = 0; index < indexLimit; index++)
		int32_t L_109 = V_1;
		int32_t L_110 = V_0;
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_005d;
		}
	}

IL_0254:
	{
		// foreach (BoundaryNode node in BoundaryNodes)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_111;
		L_111 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_111);
		Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC L_112;
		L_112 = List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8(L_111, List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		V_12 = L_112;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0288:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F((&V_12), Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_027d_1;
			}

IL_0263_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_113;
				L_113 = Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline((&V_12), Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
				V_13 = L_113;
				// if (node != triggeringNode)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_114 = V_13;
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_115 = ___0_triggeringNode;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_116;
				L_116 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_114, L_115, NULL);
				if (!L_116)
				{
					goto IL_027d_1;
				}
			}
			{
				// node.DrawPhysicalNodeGizmosManually();
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_117 = V_13;
				NullCheck(L_117);
				BoundaryNode_DrawPhysicalNodeGizmosManually_m73BDBC9F94D23B4C620284DBADCD2CBA46C347FF(L_117, NULL);
			}

IL_027d_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				bool L_118;
				L_118 = Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2((&V_12), Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
				if (L_118)
				{
					goto IL_0263_1;
				}
			}
			{
				goto IL_0296;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0296:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyPhysicalGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyPhysicalGizmos_mDBB3FE62E0C6D5B795554CFDA9A6F97398C7376B (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (BoundaryNode node in BoundaryNodes)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_0;
		L_0 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_0);
		Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC L_1;
		L_1 = List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8(L_0, List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F((&V_0), Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_2;
				L_2 = Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline((&V_0), Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
				// node.DestroyPhysicalGizmos();
				NullCheck(L_2);
				BoundaryNode_DestroyPhysicalGizmos_m9FDA1980E68467F32FBCB87CAEA5DCD0E4AAB4D1(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				bool L_3;
				L_3 = Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2((&V_0), Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyPhysicalGizmosImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyPhysicalGizmosImmediate_mC8D772E8AE0E696502AF0061E4917AD356E122CB (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (BoundaryNode node in BoundaryNodes)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_0;
		L_0 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_0);
		Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC L_1;
		L_1 = List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8(L_0, List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F((&V_0), Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_2;
				L_2 = Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline((&V_0), Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
				// node.DestroyPhysicalGizmosImmediate();
				NullCheck(L_2);
				BoundaryNode_DestroyPhysicalGizmosImmediate_m6B9782E112DCDA97F1CE87B3535C108433E1EE31(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				bool L_3;
				L_3 = Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2((&V_0), Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.Boundary::HasAnyNodeMovedOrRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_HasAnyNodeMovedOrRotated_m7CB243083B757D0FDA5DB53B460521F6BAE55E32 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// bool result = false;
		V_0 = (bool)0;
		// foreach (BoundaryNode node in BoundaryNodes)
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_0;
		L_0 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_0);
		Enumerator_t2FCA853429D01EEE7400E916B08B9541080E7DEC L_1;
		L_1 = List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8(L_0, List_1_GetEnumerator_m0BD3C1C07E89BF829B26B1D655F43ACF968DDFC8_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F((&V_1), Enumerator_Dispose_mE7D8673947565BDEFE011AC357FE8FB85216846F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0010_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_2;
				L_2 = Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_inline((&V_1), Enumerator_get_Current_mC3063AFE377B2305AB90DA06A118FF7C4B9D9487_RuntimeMethod_var);
				// if (node.HasNodeMovedOrRotated())
				NullCheck(L_2);
				bool L_3;
				L_3 = BoundaryNode_HasNodeMovedOrRotated_mFE69896720BADFC9BF1E4874F34092C2DD4FF814(L_2, NULL);
				if (!L_3)
				{
					goto IL_0020_1;
				}
			}
			{
				// result = true;
				V_0 = (bool)1;
			}

IL_0020_1:
			{
				// foreach (BoundaryNode node in BoundaryNodes)
				bool L_4;
				L_4 = Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2((&V_1), Enumerator_MoveNext_m8490B829555273D0D4165687B0AD62EB0BE587B2_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// return result;
		bool L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.Boundary::AddNode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Boundary_AddNode_mEE2A368B82C3CBEACD0A0CBDEB79C43DCCC1E478 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42708C2BE61F82AAB808FE8A5BC4765135C8B9EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameObject newNode = new GameObject("Node(" + (transform.childCount + 1) + ")", typeof(BoundaryNode));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral42708C2BE61F82AAB808FE8A5BC4765135C8B9EB, L_2, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_8, L_3, L_5, NULL);
		// newNode.transform.position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_position;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// newNode.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_9;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_13, L_14, NULL);
		// newNode.layer = physicsLayer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_12;
		int32_t L_16 = __this->___physicsLayer_9;
		NullCheck(L_15);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_15, L_16, NULL);
		// RebuildNodeList = true;
		Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421_inline(__this, (bool)1, NULL);
		// return newNode;
		return L_15;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::GenerateMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_GenerateMesh_m1F20AD2407BBED8D4E96A142ED5FD603AA5E8304 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBCDE134118BB955CD1655B3F8594861F14BC5DF);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// DestroyBoundaryMeshImmediate();
		Boundary_DestroyBoundaryMeshImmediate_m6123E887EAD90069C8B8EC16563DCCBA59D944D9(__this, NULL);
		// BoundaryMeshRenderer = gameObject.AddComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D(L_0, GameObject_AddComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mCDD3E77673305199F52C772AE8C7952F3864740D_RuntimeMethod_var);
		Boundary_set_BoundaryMeshRenderer_mA4B3151803381256C90C7C7D8669E6BE526FFEA0_inline(__this, L_1, NULL);
		// BoundaryMeshFilter = gameObject.AddComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94(L_2, GameObject_AddComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mEAB8177A64DF1A50BB7996ACEEEADCD65358AC94_RuntimeMethod_var);
		Boundary_set_BoundaryMeshFilter_m0AF2464A33CD74D8497E2D759C2460259C5E4935_inline(__this, L_3, NULL);
		// BoundaryMeshRenderer.receiveShadows = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		NullCheck(L_4);
		Renderer_set_receiveShadows_mABEB4C72E96E65117B7FFFD4180247565D0C1A09(L_4, (bool)0, NULL);
		// BoundaryMeshRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5;
		L_5 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		NullCheck(L_5);
		Renderer_set_shadowCastingMode_mB0CD3D153E43044388AEFF7AEFDA93E80EB36D11(L_5, 0, NULL);
		// BoundaryMeshRenderer.lightProbeUsage = UnityEngine.Rendering.LightProbeUsage.Off;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6;
		L_6 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		NullCheck(L_6);
		Renderer_set_lightProbeUsage_mDCCD970DAC3546B32EF58876BABBD3353624F703(L_6, 0, NULL);
		// BoundaryMeshRenderer.reflectionProbeUsage = UnityEngine.Rendering.ReflectionProbeUsage.Off;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_7;
		L_7 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		NullCheck(L_7);
		Renderer_set_reflectionProbeUsage_m54A268EACA655AC3C66C4CD7F8C1EF3B41F3E008(L_7, 0, NULL);
		// BoundaryMeshRenderer.allowOcclusionWhenDynamic = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8;
		L_8 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		NullCheck(L_8);
		Renderer_set_allowOcclusionWhenDynamic_mFAF8360D5AEEAE69443738AA7D764CF1E52EFFE7(L_8, (bool)0, NULL);
		// BoundaryMeshRenderer.sharedMaterial = boundaryMeshMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9;
		L_9 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___boundaryMeshMaterial_13;
		NullCheck(L_9);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_9, L_10, NULL);
		// BoundaryMeshFilter.sharedMesh = new Mesh();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_11;
		L_11 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_12, NULL);
		NullCheck(L_11);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_11, L_12, NULL);
		// List<Vector3> meshVertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_13, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_13;
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		V_3 = 0;
		goto IL_0116;
	}

IL_0092:
	{
		// float offset = Mathf.Min(0f, BoundaryNodes[index + 1].transform.position.y - BoundaryNodes[index].transform.position.y);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_14;
		L_14 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_15 = V_3;
		NullCheck(L_14);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_16;
		L_16 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_20;
		L_20 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_22;
		L_22 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_20, L_21, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25 = L_24.___y_3;
		float L_26;
		L_26 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), ((float)il2cpp_codegen_subtract(L_19, L_25)), NULL);
		V_4 = L_26;
		// foreach (Vector3 vertex in BoundaryNodes[index].ReturnVertices(offset))
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_27;
		L_27 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_28 = V_3;
		NullCheck(L_27);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_29;
		L_29 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_27, L_28, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		float L_30 = V_4;
		NullCheck(L_29);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31;
		L_31 = BoundaryNode_ReturnVertices_mBA6AC7DAA51A3E5ED3300AA3BA63AC52F3F44415(L_29, L_30, NULL);
		V_5 = L_31;
		V_6 = 0;
		goto IL_010a;
	}

IL_00f1:
	{
		// foreach (Vector3 vertex in BoundaryNodes[index].ReturnVertices(offset))
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = V_5;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_7 = L_35;
		// meshVertices.Add(vertex);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_7;
		NullCheck(L_36);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_36, L_37, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		int32_t L_38 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_010a:
	{
		// foreach (Vector3 vertex in BoundaryNodes[index].ReturnVertices(offset))
		int32_t L_39 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = V_5;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00f1;
		}
	}
	{
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0116:
	{
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		int32_t L_42 = V_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_43;
		L_43 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_43, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_44, 1)))))
		{
			goto IL_0092;
		}
	}
	{
		// if (closedLoop)
		bool L_45 = __this->___closedLoop_7;
		if (!L_45)
		{
			goto IL_01ca;
		}
	}
	{
		// float offset = Mathf.Min(0f, BoundaryNodes[0].transform.position.y - BoundaryNodes[BoundaryNodes.Count - 1].transform.position.y);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_46;
		L_46 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_46);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_47;
		L_47 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_46, 0, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		float L_50 = L_49.___y_3;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_51;
		L_51 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_52;
		L_52 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_52, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		NullCheck(L_51);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_54;
		L_54 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_51, ((int32_t)il2cpp_codegen_subtract(L_53, 1)), List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_54, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___y_3;
		float L_58;
		L_58 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), ((float)il2cpp_codegen_subtract(L_50, L_57)), NULL);
		V_8 = L_58;
		// foreach (Vector3 vertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnVertices(offset))
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_59;
		L_59 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_60;
		L_60 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_60);
		int32_t L_61;
		L_61 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_60, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		NullCheck(L_59);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_62;
		L_62 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_59, ((int32_t)il2cpp_codegen_subtract(L_61, 1)), List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		float L_63 = V_8;
		NullCheck(L_62);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64;
		L_64 = BoundaryNode_ReturnVertices_mBA6AC7DAA51A3E5ED3300AA3BA63AC52F3F44415(L_62, L_63, NULL);
		V_5 = L_64;
		V_6 = 0;
		goto IL_01c2;
	}

IL_01a9:
	{
		// foreach (Vector3 vertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnVertices(offset))
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = V_5;
		int32_t L_66 = V_6;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_9 = L_68;
		// meshVertices.Add(vertex);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_69 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_9;
		NullCheck(L_69);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_69, L_70, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		int32_t L_71 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01c2:
	{
		// foreach (Vector3 vertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnVertices(offset))
		int32_t L_72 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_5;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_01a9;
		}
	}

IL_01ca:
	{
		// BoundaryMeshFilter.sharedMesh.SetVertices(meshVertices);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_74;
		L_74 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		NullCheck(L_74);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_75;
		L_75 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_74, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_76 = V_0;
		NullCheck(L_75);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_75, L_76, NULL);
		// List<int> meshTriangles = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_77 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_77, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_1 = L_77;
		// int counter = 0;
		V_2 = 0;
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		V_10 = 0;
		goto IL_022c;
	}

IL_01e8:
	{
		// foreach (int triangleVertex in BoundaryNodes[index].ReturnTriangles())
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_78;
		L_78 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		int32_t L_79 = V_10;
		NullCheck(L_78);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_80;
		L_80 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_78, L_79, List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_80);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81;
		L_81 = BoundaryNode_ReturnTriangles_m012D8D8B9427E5E67BC5BB5D83598E9525BDB1BD(L_80, NULL);
		V_11 = L_81;
		V_6 = 0;
		goto IL_021a;
	}

IL_0201:
	{
		// foreach (int triangleVertex in BoundaryNodes[index].ReturnTriangles())
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_11;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		int32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_12 = L_85;
		// meshTriangles.Add(triangleVertex + counter * 8);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_86 = V_1;
		int32_t L_87 = V_12;
		int32_t L_88 = V_2;
		NullCheck(L_86);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_86, ((int32_t)il2cpp_codegen_add(L_87, ((int32_t)il2cpp_codegen_multiply(L_88, 8)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		int32_t L_89 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_021a:
	{
		// foreach (int triangleVertex in BoundaryNodes[index].ReturnTriangles())
		int32_t L_90 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = V_11;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_0201;
		}
	}
	{
		// counter++;
		int32_t L_92 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		int32_t L_93 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_022c:
	{
		// for (int index = 0; index < BoundaryNodes.Count - 1; index++)
		int32_t L_94 = V_10;
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_95;
		L_95 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_95);
		int32_t L_96;
		L_96 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_95, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_96, 1)))))
		{
			goto IL_01e8;
		}
	}
	{
		// if (closedLoop)
		bool L_97 = __this->___closedLoop_7;
		if (!L_97)
		{
			goto IL_028a;
		}
	}
	{
		// foreach (int triangleVertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnTriangles())
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_98;
		L_98 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		List_1_tADF2E71074DE869E47CA9CC18C6257E726BEA09E* L_99;
		L_99 = Boundary_get_BoundaryNodes_mF9A64D4BF7E12AB9C1705CFAF1D1FE11F92C8891(__this, NULL);
		NullCheck(L_99);
		int32_t L_100;
		L_100 = List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_inline(L_99, List_1_get_Count_mD922DCEE2ADD63A2C23BF33CE769D8831E523F84_RuntimeMethod_var);
		NullCheck(L_98);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_101;
		L_101 = List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27(L_98, ((int32_t)il2cpp_codegen_subtract(L_100, 1)), List_1_get_Item_mB7B54976BB4044362B7904911929413A667D1D27_RuntimeMethod_var);
		NullCheck(L_101);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102;
		L_102 = BoundaryNode_ReturnTriangles_m012D8D8B9427E5E67BC5BB5D83598E9525BDB1BD(L_101, NULL);
		V_11 = L_102;
		V_6 = 0;
		goto IL_0282;
	}

IL_0269:
	{
		// foreach (int triangleVertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnTriangles())
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_11;
		int32_t L_104 = V_6;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		int32_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		V_13 = L_106;
		// meshTriangles.Add(triangleVertex + counter * 8);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_107 = V_1;
		int32_t L_108 = V_13;
		int32_t L_109 = V_2;
		NullCheck(L_107);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_107, ((int32_t)il2cpp_codegen_add(L_108, ((int32_t)il2cpp_codegen_multiply(L_109, 8)))), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		int32_t L_110 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_0282:
	{
		// foreach (int triangleVertex in BoundaryNodes[BoundaryNodes.Count - 1].ReturnTriangles())
		int32_t L_111 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_11;
		NullCheck(L_112);
		if ((((int32_t)L_111) < ((int32_t)((int32_t)(((RuntimeArray*)L_112)->max_length)))))
		{
			goto IL_0269;
		}
	}

IL_028a:
	{
		// BoundaryMeshFilter.sharedMesh.SetTriangles(meshTriangles, 0);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_113;
		L_113 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		NullCheck(L_113);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_114;
		L_114 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_113, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_115 = V_1;
		NullCheck(L_114);
		Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB(L_114, L_115, 0, NULL);
		// BoundaryMeshFilter.sharedMesh.name = gameObject.name + " Mesh";
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_116;
		L_116 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		NullCheck(L_116);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_117;
		L_117 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_116, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118;
		L_118 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_118);
		String_t* L_119;
		L_119 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_118, NULL);
		String_t* L_120;
		L_120 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_119, _stringLiteralDBCDE134118BB955CD1655B3F8594861F14BC5DF, NULL);
		NullCheck(L_117);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_117, L_120, NULL);
		// var o_198_12_636270693662772814 = BoundaryMeshFilter.sharedMesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_121;
		L_121 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		NullCheck(L_121);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_122;
		L_122 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_121, NULL);
		// BoundaryMeshFilter.sharedMesh.RecalculateBounds();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_123;
		L_123 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		NullCheck(L_123);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_124;
		L_124 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_123, NULL);
		NullCheck(L_124);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_124, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyBoundaryMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyBoundaryMesh_m27D8A166686180AAF6EB8D745F58CD05D3439A0C (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28CD62EE21D25135310FD03FE67E7EF6759DBA2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor && !Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Debug.LogError("DestroyBoundaryMesh() will not work in the editor, outside of play mode.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB28CD62EE21D25135310FD03FE67E7EF6759DBA2, NULL);
		// return;
		return;
	}

IL_0019:
	{
		// if (BoundaryMeshRenderer)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Destroy(BoundaryMeshRenderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
		L_4 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0031:
	{
		// if (BoundaryMeshFilter)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5;
		L_5 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// Destroy(BoundaryMeshFilter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_7;
		L_7 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::DestroyBoundaryMeshImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_DestroyBoundaryMeshImmediate_m6123E887EAD90069C8B8EC16563DCCBA59D944D9 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (BoundaryMeshRenderer)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(BoundaryMeshRenderer);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Boundary_get_BoundaryMeshRenderer_mB53B6C695D266440A5DA5F6F8CA64E0510E7C039(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// if (BoundaryMeshFilter)
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3;
		L_3 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// DestroyImmediate(BoundaryMeshFilter);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5;
		L_5 = Boundary_get_BoundaryMeshFilter_m97DDFFAC454E2CF2112B2EC46E78E8602E4F027B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::MatchPhysicsLayerRecursive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_MatchPhysicsLayerRecursive_mAED14D1A311791189D31CEF616002BDA23B65EEF (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// MatchPhysicsLayerRecursive(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Boundary_MatchPhysicsLayerRecursive_mDAE29B91B12D5EC9D551468ABEB16F6E302529E7(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::MatchPhysicsLayerRecursive(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_MatchPhysicsLayerRecursive_mDAE29B91B12D5EC9D551468ABEB16F6E302529E7 (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// go.layer = physicsLayer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		int32_t L_1 = __this->___physicsLayer_9;
		NullCheck(L_0);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_0, L_1, NULL);
		// foreach (Transform child in go.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_go;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_2;
					if (!L_6)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0032_1;
			}

IL_001a_1:
			{
				// foreach (Transform child in go.transform)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_9, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// MatchPhysicsLayerRecursive(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				Boundary_MatchPhysicsLayerRecursive_mDAE29B91B12D5EC9D551468ABEB16F6E302529E7(__this, L_11, NULL);
			}

IL_0032_1:
			{
				// foreach (Transform child in go.transform)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.Boundary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary__ctor_mE94A49B772D564C185E98646090E7AE40551202B (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// public Color boundaryGizmoColour = new Color(0f, 1f, 0.5f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.5f), (0.600000024f), /*hidden argument*/NULL);
		__this->___boundaryGizmoColour_4 = L_0;
		// public Color nodeGizmoColour = new Color(1f, 0f, 0f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (0.0f), (0.0f), (0.600000024f), /*hidden argument*/NULL);
		__this->___nodeGizmoColour_5 = L_1;
		// public float nodeGizmoRadius = 1f;
		__this->___nodeGizmoRadius_6 = (1.0f);
		// public bool closedLoop = true;
		__this->___closedLoop_7 = (bool)1;
		// public bool useBoxColliders = true;
		__this->___useBoxColliders_8 = (bool)1;
		// public float boundaryThickness = 1;
		__this->___boundaryThickness_10 = (1.0f);
		// public float boundaryHeight = 10;
		__this->___boundaryHeight_11 = (10.0f);
		// public LayerMask placeableLayers = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2;
		L_2 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___placeableLayers_14 = L_2;
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
// UmbraEvolution.UmbraBoundaryBuilder.Boundary[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::get_Boundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* BoundaryBuilder_get_Boundaries_mACD15C5A14ABD8E9D912ED20F2EFCC2F4F857939 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mAFA1434AF1BEFD5E699AF85420A474925835D7E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return GetComponentsInChildren<Boundary>(); }
		BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* L_0;
		L_0 = Component_GetComponentsInChildren_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mAFA1434AF1BEFD5E699AF85420A474925835D7E8(__this, Component_GetComponentsInChildren_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mAFA1434AF1BEFD5E699AF85420A474925835D7E8_RuntimeMethod_var);
		return L_0;
	}
}
// UmbraEvolution.UmbraBoundaryBuilder.Boundary UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::get_BoundaryPlacingNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* BoundaryBuilder_get_BoundaryPlacingNodes_m21F0219D82DFFDA0538214D6361BB4F2786417F6 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_m7265887CCB73DE378525B0DA4C8C9E94ABD835D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_BoundaryPlacingNodesU3Eb__8_0_mE13EC36E6A6A21A1EB5C8957D8FE842DA6512D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* G_B2_0 = NULL;
	BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* G_B2_1 = NULL;
	Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* G_B1_0 = NULL;
	BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* G_B1_1 = NULL;
	{
		// get { return Array.Find(Boundaries, x => x.placingNodes); }
		BoundaryU5BU5D_t6136BF3909F4F8F58512631EED454AFD4C0E8D7F* L_0;
		L_0 = BoundaryBuilder_get_Boundaries_mACD15C5A14ABD8E9D912ED20F2EFCC2F4F857939(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var);
		Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* L_1 = ((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var);
		U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* L_3 = ((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* L_4 = (Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C*)il2cpp_codegen_object_new(Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mE8A846E2F0A6A2206B3F9D8A423E6323D122D9AC(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_BoundaryPlacingNodesU3Eb__8_0_mE13EC36E6A6A21A1EB5C8957D8FE842DA6512D7C_RuntimeMethod_var), NULL);
		Predicate_1_t7BEE73FFCDFD73498D70B52B15DC4E04DF2F559C* L_5 = L_4;
		((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_6;
		L_6 = Array_Find_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_m7265887CCB73DE378525B0DA4C8C9E94ABD835D0(G_B2_1, G_B2_0, Array_Find_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_m7265887CCB73DE378525B0DA4C8C9E94ABD835D0_RuntimeMethod_var);
		return L_6;
	}
}
// UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::get_Reference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* BoundaryBuilder_get_Reference_m14AF30561CF892F673D5E11ADBC4D75BDB37203A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundaryBuilder Reference { get; set; }
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0 = ((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::set_Reference(UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryBuilder_set_Reference_m928DC87D76026F3928361AE8072647190BA01820 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundaryBuilder Reference { get; set; }
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0 = ___0_value;
		((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryBuilder_OnEnable_mB985DFCD2F39F8469DD97A2D7C99A105D8682CB9 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF754D60EF3E6DF6A1E07962277358781B46C7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Reference == null)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0;
		L_0 = BoundaryBuilder_get_Reference_m14AF30561CF892F673D5E11ADBC4D75BDB37203A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Reference = this;
		BoundaryBuilder_set_Reference_m928DC87D76026F3928361AE8072647190BA01820_inline(__this, NULL);
		return;
	}

IL_0014:
	{
		// else if (Reference != this)
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_2;
		L_2 = BoundaryBuilder_get_Reference_m14AF30561CF892F673D5E11ADBC4D75BDB37203A_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogError("There is more than one BoundaryBuilder in the scene. Please delete one.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9FF754D60EF3E6DF6A1E07962277358781B46C7F, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::AddBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryBuilder_AddBoundary_mC6CD148A3A7C4D073DE19A7C77572F397F627A62 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mBABD61582E4671D914C6B22F3D3531680F6BD6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700F8ABFBDBD9B018C92DB51D77701464D8AF6F4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject newBoundary = new GameObject("New Boundary", typeof(Boundary));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_4, _stringLiteral700F8ABFBDBD9B018C92DB51D77701464D8AF6F4, L_1, NULL);
		V_0 = L_4;
		// newBoundary.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_7, NULL);
		// newBoundary.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// newBoundary.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// newBoundary.GetComponent<Boundary>().physicsLayer = newBoundary.layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_16;
		L_16 = GameObject_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mBABD61582E4671D914C6B22F3D3531680F6BD6AE(L_15, GameObject_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mBABD61582E4671D914C6B22F3D3531680F6BD6AE_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_17, NULL);
		NullCheck(L_16);
		L_16->___physicsLayer_9 = L_18;
		// return newBoundary;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		return L_19;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryBuilder__ctor_m83FD2635DDCB22AD91998FFC16B68302FCF8D3C4 (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* __this, const RuntimeMethod* method) 
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
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m057421BC80F22BADEAA1E9BFD105395EF3AF7BD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* L_0 = (U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9*)il2cpp_codegen_object_new(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m94B6DAF9348D4CED1301C0137CB4A6634AB5C981(L_0, NULL);
		((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m94B6DAF9348D4CED1301C0137CB4A6634AB5C981 (U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.BoundaryBuilder/<>c::<get_BoundaryPlacingNodes>b__8_0(UmbraEvolution.UmbraBoundaryBuilder.Boundary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_BoundaryPlacingNodesU3Eb__8_0_mE13EC36E6A6A21A1EB5C8957D8FE842DA6512D7C (U3CU3Ec_tE7A806F3864A3DB38BC5636A4B1DFF14C6F1ABD9* __this, Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* ___0_x, const RuntimeMethod* method) 
{
	{
		// get { return Array.Find(Boundaries, x => x.placingNodes); }
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_0 = ___0_x;
		NullCheck(L_0);
		bool L_1 = L_0->___placingNodes_19;
		return L_1;
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
// UmbraEvolution.UmbraBoundaryBuilder.Boundary UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_ParentBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mA0B8E21F8D3089AD8A299A4E36C28DDABF56DB08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A20EF952447ABF8BBC1D460BD0574DA30070828);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_parent == null)
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_0 = __this->____parent_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// _parent = transform.parent.GetComponent<Boundary>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_4;
		L_4 = Component_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mA0B8E21F8D3089AD8A299A4E36C28DDABF56DB08(L_3, Component_GetComponent_TisBoundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D_mA0B8E21F8D3089AD8A299A4E36C28DDABF56DB08_RuntimeMethod_var);
		__this->____parent_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____parent_4), (void*)L_4);
		// if (_parent == null)
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_5 = __this->____parent_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogErrorFormat("The BoundaryNode [{0}] does not have a Boundary parent. This BoundaryNode will not work correctly.", gameObject.name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral1A20EF952447ABF8BBC1D460BD0574DA30070828, L_8, NULL);
	}

IL_0050:
	{
		// return _parent;
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_11 = __this->____parent_4;
		return L_11;
	}
}
// UnityEngine.BoxCollider UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_MyBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_myBoxCollider == null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0 = __this->____myBoxCollider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// _myBoxCollider = GetComponent<BoxCollider>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2;
		L_2 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		__this->____myBoxCollider_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myBoxCollider_5), (void*)L_2);
		// if (_myBoxCollider == null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_3 = __this->____myBoxCollider_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// _myBoxCollider = gameObject.AddComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6;
		L_6 = GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23(L_5, GameObject_AddComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m655518C8454E418FE8CF0E4770881B7A2B12BB23_RuntimeMethod_var);
		__this->____myBoxCollider_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myBoxCollider_5), (void*)L_6);
	}

IL_0039:
	{
		// return _myBoxCollider;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_7 = __this->____myBoxCollider_5;
		return L_7;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_MyBoxCollider(UnityEngine.BoxCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_set_MyBoxCollider_mB86618789502D65A4CD6FDF27179426A50E04F3A (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _myBoxCollider = value; }
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0 = ___0_value;
		__this->____myBoxCollider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myBoxCollider_5), (void*)L_0);
		// set { _myBoxCollider = value; }
		return;
	}
}
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_PhysicalNodeGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalNodeGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_PhysicalNodeGizmo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalNodeGizmo_m136226DEE4001976E320F64437AB86F72D5C900D (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalNodeGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_PhysicalBoundaryGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalBoundaryGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_PhysicalBoundaryGizmo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalBoundaryGizmo_m0CD9AF573735D82DB71AF5C6102FE9CD3FBFB7D9 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalBoundaryGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_LastKnownPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoundaryNode_get_LastKnownPosition_m8C6BB3979F6A776CEB5DB8514446543800A80CCF (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 LastKnownPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLastKnownPositionU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_LastKnownPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownPosition_m9178B3EA160AEC3BF55D660DF3BFAF6B04EB822E (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// private Vector3 LastKnownPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CLastKnownPositionU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.Quaternion UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::get_LastKnownRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoundaryNode_get_LastKnownRotation_m7081ED3D6486555D796BF2E21ECAF6FEC825C447 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion LastKnownRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLastKnownRotationU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::set_LastKnownRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownRotation_m277D484A5BA93B819A734FEF5C25536D885C7ABB (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// private Quaternion LastKnownRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CLastKnownRotationU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::HasNodeMovedOrRotated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundaryNode_HasNodeMovedOrRotated_mFE69896720BADFC9BF1E4874F34092C2DD4FF814 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// if (LastKnownPosition != transform.position || LastKnownRotation != transform.rotation)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = BoundaryNode_get_LastKnownPosition_m8C6BB3979F6A776CEB5DB8514446543800A80CCF_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		bool L_3;
		L_3 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = BoundaryNode_get_LastKnownRotation_m7081ED3D6486555D796BF2E21ECAF6FEC825C447_inline(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		bool L_7;
		L_7 = Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}

IL_0030:
	{
		// LastKnownPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		BoundaryNode_set_LastKnownPosition_m9178B3EA160AEC3BF55D660DF3BFAF6B04EB822E_inline(__this, L_9, NULL);
		// LastKnownRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		BoundaryNode_set_LastKnownRotation_m277D484A5BA93B819A734FEF5C25536D885C7ABB_inline(__this, L_11, NULL);
		// return true;
		return (bool)1;
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawNodeGizmosManually()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawNodeGizmosManually_m7DA1F6A7B0589C6011C0AF8E82063E843C5A1C87 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Gizmos.matrix = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_0, NULL);
		// if (ParentBoundary)
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_1;
		L_1 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// Gizmos.color = ParentBoundary.nodeGizmoColour;
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_3;
		L_3 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___nodeGizmoColour_5;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_4, NULL);
		// Gizmos.DrawSphere(transform.position, ParentBoundary.nodeGizmoRadius);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_7;
		L_7 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_7);
		float L_8 = L_7->___nodeGizmoRadius_6;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_6, L_8, NULL);
		return;
	}

IL_0043:
	{
		// Gizmos.color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_9, NULL);
		// Gizmos.DrawSphere(transform.position, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_11, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawPhysicalNodeGizmosManually()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawPhysicalNodeGizmosManually_m73BDBC9F94D23B4C620284DBADCD2CBA46C347FF (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B55EBEA883D38B4AB75F335C3CBCECFCDBA76F);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B3_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B4_1 = NULL;
	{
		// if (!PhysicalNodeGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// Transform gizmoTransform = transform.Find(BoundaryBuilder.PHYSICAL_NODE_GIZMO_NAME);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral52B55EBEA883D38B4AB75F335C3CBCECFCDBA76F, NULL);
		V_0 = L_3;
		// PhysicalNodeGizmo = gizmoTransform != null ? gizmoTransform.gameObject : null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = __this;
		if (L_5)
		{
			G_B3_0 = __this;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		BoundaryNode_set_PhysicalNodeGizmo_m136226DEE4001976E320F64437AB86F72D5C900D_inline(G_B4_1, G_B4_0, NULL);
	}

IL_0036:
	{
		// if (!PhysicalNodeGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (L_9)
		{
			goto IL_00e3;
		}
	}
	{
		// PhysicalNodeGizmo = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		BoundaryNode_set_PhysicalNodeGizmo_m136226DEE4001976E320F64437AB86F72D5C900D_inline(__this, L_10, NULL);
		// PhysicalNodeGizmo.name = BoundaryBuilder.PHYSICAL_NODE_GIZMO_NAME;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_11);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_11, _stringLiteral52B55EBEA883D38B4AB75F335C3CBCECFCDBA76F, NULL);
		// DestroyImmediate(PhysicalNodeGizmo.GetComponent<Collider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_12);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_12, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_13, NULL);
		// PhysicalNodeGizmo.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
		// PhysicalNodeGizmo.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_20, NULL);
		// PhysicalNodeGizmo.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_24, NULL);
		// Renderer tempRenderer = PhysicalNodeGizmo.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_25);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26;
		L_26 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_25, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// tempRenderer.sharedMaterial = new Material(ParentBoundary.ParentBoundaryBuilder.physicalGizmoMaterial);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_27;
		L_27 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_27);
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_28;
		L_28 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(L_27, NULL);
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = L_28->___physicalGizmoMaterial_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_30, L_29, NULL);
		NullCheck(L_26);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_26, L_30, NULL);
	}

IL_00e3:
	{
		// if (ParentBoundary)
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_31;
		L_31 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_0140;
		}
	}
	{
		// PhysicalNodeGizmo.GetComponent<Renderer>().sharedMaterial.color = ParentBoundary.nodeGizmoColour;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_33);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_33, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_34, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_36;
		L_36 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___nodeGizmoColour_5;
		NullCheck(L_35);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_35, L_37, NULL);
		// PhysicalNodeGizmo.transform.localScale = Vector3.one * 2f * ParentBoundary.nodeGizmoRadius;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, (2.0f), NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_42;
		L_42 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_42);
		float L_43 = L_42->___nodeGizmoRadius_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_43, NULL);
		NullCheck(L_39);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_39, L_44, NULL);
		return;
	}

IL_0140:
	{
		// PhysicalNodeGizmo.GetComponent<Renderer>().sharedMaterial.color = Color.black;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_45);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_46;
		L_46 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_45, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_46);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47;
		L_47 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_46, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		L_48 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_47);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_47, L_48, NULL);
		// PhysicalNodeGizmo.transform.localScale = Vector3.one * 2f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_51, (2.0f), NULL);
		NullCheck(L_50);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_52, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DrawPhysicalBoundaryNodeGizmosManually(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DrawPhysicalBoundaryNodeGizmosManually_mA9A7D4B75324FBFE677025301D55E8ECC5441A18 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_gizmoSize, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_localCenter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE459C764A088E4658F6EA9D19EBD90E11C698358);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B3_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* G_B4_1 = NULL;
	{
		// if (!PhysicalBoundaryGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		// Transform gizmoTransform = transform.Find(BoundaryBuilder.PHYSICAL_BOUNDARY_GIZMO_NAME);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralE459C764A088E4658F6EA9D19EBD90E11C698358, NULL);
		V_0 = L_3;
		// PhysicalBoundaryGizmo = gizmoTransform != null ? gizmoTransform.gameObject : null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = __this;
		if (L_5)
		{
			G_B3_0 = __this;
			goto IL_002b;
		}
	}
	{
		G_B4_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		NullCheck(G_B4_1);
		BoundaryNode_set_PhysicalBoundaryGizmo_m0CD9AF573735D82DB71AF5C6102FE9CD3FBFB7D9_inline(G_B4_1, G_B4_0, NULL);
	}

IL_0036:
	{
		// if (!PhysicalBoundaryGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (L_9)
		{
			goto IL_00e3;
		}
	}
	{
		// PhysicalBoundaryGizmo = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		BoundaryNode_set_PhysicalBoundaryGizmo_m0CD9AF573735D82DB71AF5C6102FE9CD3FBFB7D9_inline(__this, L_10, NULL);
		// PhysicalBoundaryGizmo.name = BoundaryBuilder.PHYSICAL_BOUNDARY_GIZMO_NAME;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_11);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_11, _stringLiteralE459C764A088E4658F6EA9D19EBD90E11C698358, NULL);
		// DestroyImmediate(PhysicalBoundaryGizmo.GetComponent<Collider>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_12);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13;
		L_13 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_12, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_13, NULL);
		// PhysicalBoundaryGizmo.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_15, L_16, NULL);
		// PhysicalBoundaryGizmo.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_20, NULL);
		// PhysicalBoundaryGizmo.transform.rotation = transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_24, NULL);
		// Renderer tempRenderer = PhysicalBoundaryGizmo.GetComponent<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_25);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26;
		L_26 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_25, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// tempRenderer.sharedMaterial = new Material(ParentBoundary.ParentBoundaryBuilder.physicalGizmoMaterial);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_27;
		L_27 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_27);
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_28;
		L_28 = Boundary_get_ParentBoundaryBuilder_m87A6294FEF2463454E052089536DE7A9AD4E6FCB(L_27, NULL);
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = L_28->___physicalGizmoMaterial_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_30, L_29, NULL);
		NullCheck(L_26);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_26, L_30, NULL);
	}

IL_00e3:
	{
		// if (ParentBoundary)
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_31;
		L_31 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_0112;
		}
	}
	{
		// PhysicalBoundaryGizmo.GetComponent<Renderer>().sharedMaterial.color = ParentBoundary.boundaryGizmoColour;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_33);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34;
		L_34 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_33, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_34, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_36;
		L_36 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___boundaryGizmoColour_4;
		NullCheck(L_35);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_35, L_37, NULL);
		goto IL_012c;
	}

IL_0112:
	{
		// PhysicalBoundaryGizmo.GetComponent<Renderer>().sharedMaterial.color = Color.black;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_38);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_39;
		L_39 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_38, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_39);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40;
		L_40 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_39, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_40);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_40, L_41, NULL);
	}

IL_012c:
	{
		// transform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_42);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_42, L_43, NULL);
		// PhysicalBoundaryGizmo.transform.localPosition = localCenter;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___1_localCenter;
		NullCheck(L_45);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_45, L_46, NULL);
		// PhysicalBoundaryGizmo.transform.localScale = gizmoSize;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ___0_gizmoSize;
		NullCheck(L_48);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_48, L_49, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DestroyPhysicalGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DestroyPhysicalGizmos_m9FDA1980E68467F32FBCB87CAEA5DCD0E4AAB4D1 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhysicalNodeGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(PhysicalNodeGizmo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// if (PhysicalBoundaryGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// Destroy(PhysicalBoundaryGizmo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DestroyPhysicalGizmosImmediate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DestroyPhysicalGizmosImmediate_m6B9782E112DCDA97F1CE87B3535C108433E1EE31 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PhysicalNodeGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DestroyImmediate(PhysicalNodeGizmo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
	}

IL_0018:
	{
		// if (PhysicalBoundaryGizmo)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// DestroyImmediate(PhysicalBoundaryGizmo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::UpdateBoxCollider(System.Single,System.Single,System.Single,UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_UpdateBoxCollider_m811FE6037B9D3DDE329E20E4967174C541F785EF (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, float ___0_boundaryThickness, float ___1_boundaryHeight, float ___2_verticalOffset, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___3_nextNode, bool ___4_useBoxColliders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B25E87EFF8E8BAC27D641E1DA7C95E2B9F9BCB7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (nextNode == null)
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_0 = ___3_nextNode;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogError("A null node was passed to BoundaryNode.UpdateBoxCollider(...). Returning.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral9B25E87EFF8E8BAC27D641E1DA7C95E2B9F9BCB7, NULL);
		// return;
		return;
	}

IL_0015:
	{
		// float distanceBetweenNodes = Vector3.Distance(transform.position, new Vector3(nextNode.transform.position.x, transform.position.y, nextNode.transform.position.z)) + boundaryThickness;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_4 = ___3_nextNode;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_11 = ___3_nextNode;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_7, L_10, L_14, /*hidden argument*/NULL);
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_15, NULL);
		float L_17 = ___0_boundaryThickness;
		V_0 = ((float)il2cpp_codegen_add(L_16, L_17));
		// float colliderYPos = Mathf.Min(transform.position.y, nextNode.transform.position.y) + (boundaryHeight / 2f) + verticalOffset - transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___y_3;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_21 = ___3_nextNode;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		float L_25;
		L_25 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_20, L_24, NULL);
		float L_26 = ___1_boundaryHeight;
		float L_27 = ___2_verticalOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_25, ((float)(L_26/(2.0f))))), L_27)), L_30));
		// Vector3 size = new Vector3(boundaryThickness, boundaryHeight, distanceBetweenNodes);
		float L_31 = ___0_boundaryThickness;
		float L_32 = ___1_boundaryHeight;
		float L_33 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_31, L_32, L_33, NULL);
		// Vector3 center = new Vector3(0f, colliderYPos, distanceBetweenNodes / 2f);
		float L_34 = V_1;
		float L_35 = V_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (0.0f), L_34, ((float)(L_35/(2.0f))), NULL);
		// MyBoxCollider.size = size;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_36;
		L_36 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_2;
		NullCheck(L_36);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_36, L_37, NULL);
		// MyBoxCollider.center = center;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_38;
		L_38 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		NullCheck(L_38);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_38, L_39, NULL);
		// MyBoxCollider.enabled = useBoxColliders;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_40;
		L_40 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		bool L_41 = ___4_useBoxColliders;
		NullCheck(L_40);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_40, L_41, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::DisableBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_DisableBoxCollider_m6BE3BB81FFD07F77CAF640D34B58C2A013CE7C57 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// MyBoxCollider.size = Vector3.zero;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0;
		L_0 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_0);
		BoxCollider_set_size_m8374267FDE5DD628973E0E5E1331E781552B855A(L_0, L_1, NULL);
		// MyBoxCollider.center = Vector3.zero;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2;
		L_2 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_2);
		BoxCollider_set_center_m0AB0482699735FEE8306A7FCAAE66A76C479F0F0(L_2, L_3, NULL);
		// MyBoxCollider.enabled = false;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_4;
		L_4 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		NullCheck(L_4);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::CalculateAndSetRotation(UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode_CalculateAndSetRotation_mFE97164CE4ECC4D0379531CE2D89A82B713199E7 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* ___0_nextNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral907058034EA3DA62D274AB58B0AA8F4D713C49C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970FC6827CC11335800F55F9710014EB7C4DD569);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nextNode == null)
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_0 = ___0_nextNode;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError("A null node was passed to BoundaryNode.CalculateAndSetRotation(...). Returning.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral970FC6827CC11335800F55F9710014EB7C4DD569, NULL);
		// return;
		return;
	}

IL_0014:
	{
		// if (transform.position.x == nextNode.transform.position.x && transform.position.z == nextNode.transform.position.z)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_5 = ___0_nextNode;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___x_2;
		if ((!(((float)L_4) == ((float)L_8))))
		{
			goto IL_008f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___z_4;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_12 = ___0_nextNode;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		if ((!(((float)L_11) == ((float)L_15))))
		{
			goto IL_008f;
		}
	}
	{
		// Debug.LogErrorFormat("Two connected nodes are stacked on top of each other at [{0}] and [{1}]. A proper boundary segment cannot be created if the X and Z coordinates are the same.", transform.position, nextNode.transform.position);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		RuntimeObject* L_21 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_17;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_23 = ___0_nextNode;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25;
		RuntimeObject* L_27 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral907058034EA3DA62D274AB58B0AA8F4D713C49C9, L_22, NULL);
		// return;
		return;
	}

IL_008f:
	{
		// transform.rotation = Quaternion.LookRotation(new Vector3(nextNode.transform.position.x, transform.position.y, nextNode.transform.position.z) - transform.position, Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_29 = ___0_nextNode;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32 = L_31.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___y_3;
		BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* L_36 = ___0_nextNode;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_32, L_35, L_39, /*hidden argument*/NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_43, L_44, NULL);
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_45, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::ReturnVertices(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* BoundaryNode_ReturnVertices_mBA6AC7DAA51A3E5ED3300AA3BA63AC52F3F44415 (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, float ___0_heightAdjustment, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	{
		// Vector3[] vertices = new Vector3[8];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		// vertices[0] = transform.position + (-transform.forward * ParentBoundary.boundaryThickness / 2f) + (transform.right * ParentBoundary.boundaryThickness / 2f) + (transform.up * (ParentBoundary.verticalOffset + heightAdjustment));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_5, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_7;
		L_7 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_7);
		float L_8 = L_7->___boundaryThickness_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_9, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_12, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_14;
		L_14 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_14);
		float L_15 = L_14->___boundaryThickness_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_16, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_19, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_21;
		L_21 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_21);
		float L_22 = L_21->___verticalOffset_12;
		float L_23 = ___0_heightAdjustment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, ((float)il2cpp_codegen_add(L_22, L_23)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_24, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// vertices[1] = transform.position + (-transform.forward * ParentBoundary.boundaryThickness / 2f) + (-transform.right * ParentBoundary.boundaryThickness / 2f) + (transform.up * (ParentBoundary.verticalOffset + heightAdjustment));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_30, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_32;
		L_32 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_32);
		float L_33 = L_32->___boundaryThickness_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_34, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_38, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_40;
		L_40 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_40);
		float L_41 = L_40->___boundaryThickness_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_42, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_43, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_45, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_47;
		L_47 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_47);
		float L_48 = L_47->___verticalOffset_12;
		float L_49 = ___0_heightAdjustment;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_46, ((float)il2cpp_codegen_add(L_48, L_49)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_44, L_50, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_51);
		// vertices[2] = vertices[0] + (transform.up * ParentBoundary.boundaryHeight);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_52 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_56, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_58;
		L_58 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_58);
		float L_59 = L_58->___boundaryHeight_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_57, L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_55, L_60, NULL);
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_61);
		// vertices[3] = vertices[1] + (transform.up * ParentBoundary.boundaryHeight);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_66, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_68;
		L_68 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_68);
		float L_69 = L_68->___boundaryHeight_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_70, NULL);
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_71);
		// vertices[4] = vertices[0] + transform.forward * MyBoxCollider.size.z;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_72 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_76, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_78;
		L_78 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_78, NULL);
		float L_80 = L_79.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_75, L_81, NULL);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_82);
		// vertices[5] = vertices[1] + transform.forward * MyBoxCollider.size.z;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_87, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_89;
		L_89 = BoundaryNode_get_MyBoxCollider_m31B171B2BEE2CBC287C3B8BDC490CFAB8DAA0C2E(__this, NULL);
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = BoxCollider_get_size_mC1A2DD270B04DFF5961F9F90DC147C271F72258E(L_89, NULL);
		float L_91 = L_90.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_88, L_91, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_86, L_92, NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_93);
		// vertices[6] = vertices[4] + transform.up * ParentBoundary.boundaryHeight;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_98, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_100;
		L_100 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_100);
		float L_101 = L_100->___boundaryHeight_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_99, L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_97, L_102, NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_103);
		// vertices[7] = vertices[5] + transform.up * ParentBoundary.boundaryHeight;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = 5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108;
		L_108 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_108, NULL);
		Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* L_110;
		L_110 = BoundaryNode_get_ParentBoundary_mA70DA00AD76B62E71412C4102517018E6BB04DF2(__this, NULL);
		NullCheck(L_110);
		float L_111 = L_110->___boundaryHeight_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_109, L_111, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_107, L_112, NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_113);
		// return vertices;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_114 = V_0;
		return L_114;
	}
}
// System.Int32[] UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::ReturnTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BoundaryNode_ReturnTriangles_m012D8D8B9427E5E67BC5BB5D83598E9525BDB1BD (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t760B937814BBC488676C1E0FE47F359261434D67____830A3D64D389308F0E505B73A09EECDFFEB148B9255A7F68C5D336E819FD06DE_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new int[]
		// {
		//     0, 1, 2,
		//     1, 3, 2,
		//     1, 0, 4,
		//     4, 5, 1,
		//     0, 2, 6,
		//     6, 4, 0,
		//     3, 1, 7,
		//     7, 1, 5,
		//     7, 6, 3,
		//     3, 6, 2,
		//     5, 4, 6,
		//     6, 7, 5
		// };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t760B937814BBC488676C1E0FE47F359261434D67____830A3D64D389308F0E505B73A09EECDFFEB148B9255A7F68C5D336E819FD06DE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		return L_1;
	}
}
// System.Void UmbraEvolution.UmbraBoundaryBuilder.BoundaryNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundaryNode__ctor_m2DBA636CBEBC2EAFDDD7EAC4042EB3BB3522958A (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Boundary_get_RebuildNodeList_m70A928A4564BBF585A545A002A1D7886139E977A_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, const RuntimeMethod* method) 
{
	{
		// public bool RebuildNodeList { get; set; }
		bool L_0 = __this->___U3CRebuildNodeListU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_RebuildNodeList_m38A41564354A2B2EF50FB19839DF6FF01F761421_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool RebuildNodeList { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CRebuildNodeListU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshRenderer_mA4B3151803381256C90C7C7D8669E6BE526FFEA0_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { _boundaryMeshRenderer = value; }
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___0_value;
		__this->____boundaryMeshRenderer_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshRenderer_21), (void*)L_0);
		// private set { _boundaryMeshRenderer = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Boundary_set_BoundaryMeshFilter_m0AF2464A33CD74D8497E2D759C2460259C5E4935_inline (Boundary_t677BA9EB35AB3DD07998937C17B07A65DE12907D* __this, MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { _boundaryMeshFilter = value; }
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = ___0_value;
		__this->____boundaryMeshFilter_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____boundaryMeshFilter_22), (void*)L_0);
		// private set { _boundaryMeshFilter = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* BoundaryBuilder_get_Reference_m14AF30561CF892F673D5E11ADBC4D75BDB37203A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundaryBuilder Reference { get; set; }
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0 = ((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryBuilder_set_Reference_m928DC87D76026F3928361AE8072647190BA01820_inline (BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundaryBuilder Reference { get; set; }
		BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4* L_0 = ___0_value;
		((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_StaticFields*)il2cpp_codegen_static_fields_for(BoundaryBuilder_t1F53674AF289022833A9D0C802FDD51AFF7916D4_il2cpp_TypeInfo_var))->___U3CReferenceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoundaryNode_get_LastKnownPosition_m8C6BB3979F6A776CEB5DB8514446543800A80CCF_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 LastKnownPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLastKnownPositionU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BoundaryNode_get_LastKnownRotation_m7081ED3D6486555D796BF2E21ECAF6FEC825C447_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private Quaternion LastKnownRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLastKnownRotationU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m4EC1EF263D0E42432A301F85CB52028D2973F5DA_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownPosition_m9178B3EA160AEC3BF55D660DF3BFAF6B04EB822E_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// private Vector3 LastKnownPosition { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CLastKnownPositionU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_LastKnownRotation_m277D484A5BA93B819A734FEF5C25536D885C7ABB_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// private Quaternion LastKnownRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CLastKnownRotationU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalNodeGizmo_m083DD0FAD2F2EB9CAF12DACD8DB2FE8BC85C34C6_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalNodeGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalNodeGizmo_m136226DEE4001976E320F64437AB86F72D5C900D_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalNodeGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPhysicalNodeGizmoU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BoundaryNode_get_PhysicalBoundaryGizmo_m09C3170F79CDA181C5687A5F31965E54F85095E8_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalBoundaryGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BoundaryNode_set_PhysicalBoundaryGizmo_m0CD9AF573735D82DB71AF5C6102FE9CD3FBFB7D9_inline (BoundaryNode_t9F77940FA8A2B1EA9D797E09FC4CAE4B9120C1D1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// private GameObject PhysicalBoundaryGizmo { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPhysicalBoundaryGizmoU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rhs;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___0_dot;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
