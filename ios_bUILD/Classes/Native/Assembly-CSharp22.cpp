#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<DialogueQuests.QuestData>
struct Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<DialogueQuests.NarrativeData>
struct Func_1_t8908CEDE124498D6FA36EE2E31EAFA4651381994;
// System.Func`1<System.Single>
struct Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<DialogueQuests.DialogueMessageData>
struct List_1_tCF09534B59E9200DB8C6AE1F6D8563F9DA5FED96;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<DialogueQuests.NarrativeEvent>
struct List_1_tCCC1808698022AE044DD807D9694CA6D3ED08621;
// System.Collections.Generic.List`1<DialogueQuests.QuestData>
struct List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4;
// System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>
struct List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Queue`1<DialogueQuests.NarrativeEventLine>
struct Queue_1_t7309B85F0DC7D842561DCF233DAED5895FB268A5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<DialogueQuests.NarrativeEvent>
struct UnityAction_1_t3F166A7214C398F41E00144F1578C5D581B878A7;
// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData>
struct UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityAction`2<DialogueQuests.NarrativeEventLine,DialogueQuests.DialogueMessage>
struct UnityAction_2_tB0B4A15F7F1D8507CB56DE41E803CCE7DD045181;
// UnityEngine.Events.UnityAction`2<System.String,System.Single>
struct UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1;
// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F;
// UnityEngine.Events.UnityAction`3<System.String,UnityEngine.AudioClip,System.Single>
struct UnityAction_3_t5F2A2781A9F306525C07D0C30AB9FF2CE1D0BC06;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DialogueQuests.DialogueChoiceButton[]
struct DialogueChoiceButtonU5BU5D_t21E2439C199A9CF9140A322B0C8F11E88A9FFAD1;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DialogueQuests.QuestData[]
struct QuestDataU5BU5D_t338B97BCCC6BC591B12F684699241683DCE8B866;
// DialogueQuests.QuestPanelLine[]
struct QuestPanelLineU5BU5D_t58A073B0B528A95AFE360A268139D648027B6A2C;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// DialogueQuests.ActorData
struct ActorData_tCFC10CBC2E9893BDA83551C0F532657CDC05B935;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DialogueQuests.Demo.DemoUI
struct DemoUI_t981DD9E8B6E0C3D91D0BFE9FA50374E06A42FB9D;
// DialogueQuests.DialogueMessage
struct DialogueMessage_tC8DA5778E2D5F439C41F595D029597DBF896E00C;
// DialogueQuests.DialoguePanel
struct DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// DialogueQuests.Demo.ExitZoneDemo
struct ExitZoneDemo_t54F7B0D9004B0D96C3D5A223039E3C0630B167FA;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// DialogueQuests.NarrativeControls
struct NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2;
// DialogueQuests.NarrativeData
struct NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035;
// DialogueQuests.NarrativeEvent
struct NarrativeEvent_tE1BEE176CD7CB0247E821F311810C7CDD98FCD0C;
// DialogueQuests.NarrativeEventLine
struct NarrativeEventLine_t72C54C2A1CD5263D15B8F4DADF3D8603E3C86515;
// DialogueQuests.NarrativeManager
struct NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// DialogueQuests.Demo.PlayerCharacterAnimDemo
struct PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97;
// DialogueQuests.Demo.PlayerCharacterDemo
struct PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750;
// DialogueQuests.Demo.PlayerControlsDemo
struct PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF;
// DialogueQuests.Demo.PlayerControlsMouseDemo
struct PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// DialogueQuests.QuestBox
struct QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189;
// DialogueQuests.QuestData
struct QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588;
// DialogueQuests.QuestPanel
struct QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1;
// DialogueQuests.QuestPanelFilter
struct QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325;
// DialogueQuests.QuestPanelLine
struct QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// DialogueQuests.Demo.TheCameraDemo
struct TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D;
// DialogueQuests.TheUI
struct TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DialogueQuests.UIPanel
struct UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// DialogueQuests.DialoguePanel/<AnimateText>d__28
struct U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// DialogueQuests.NarrativeControls/MoveAction
struct MoveAction_t63244F5A44CFE743642A25939085A9FDAFB24177;
// DialogueQuests.NarrativeControls/PressAction
struct PressAction_tF3E41A584DD3A2CC7B455380072183C4262074CF;
// DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30
struct U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F;
// DialogueQuests.Demo.PlayerControlsDemo/MoveAction
struct MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF;
// DialogueQuests.Demo.PlayerControlsDemo/PressAction
struct PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82;
// DialogueQuests.QuestPanel/<>c
struct U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral59835463557DE8AC444311112EC05645D84A7039;
IL2CPP_EXTERN_C String_t* _stringLiteral5E6BF48FCAACB8F94B405326F922CBD2CAD14EFC;
IL2CPP_EXTERN_C String_t* _stringLiteral67325AA3E36B1501DAD8B5C9A7261C038F70C753;
IL2CPP_EXTERN_C String_t* _stringLiteral6FD81ED2C1377462F6BB4ADC7BCB4AC114BF2B79;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE443FC56A5597970EC5361635196189AC859C68A;
IL2CPP_EXTERN_C String_t* _stringLiteralF83D3CF4F0870FC5E18AC6E7B80F6D1EE43FE830;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisQuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_m3294FA4A0CDB4E41113084E87A159AD3280E1E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisQuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300_m918D75E2F91BEB3CAFA5E11B45D9598A0562768D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1A7304239A53274FC564A88DBDD3796741A8361D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0253E9BD65D9F841FBC4961834A00E333AC9F54E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m0401489FA06EC86F40E989B6E8A25D2399348D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF56C0BE2C87CBF61B9788397881DA2A4BE5E7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1820A1F851481229612F9E924FF421394D5A45E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m61A556E38901010495D4D55CC890193D963D78F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8722F122071B929A03DB7A8326B533B0933F6332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerCharacterAnimDemo_OnTriggerAnim_m4DE1884391F95BCBFC4F160112A48A945F68AEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerCharacterDemo_OnClickFloor_mBED3F5EDBC03C3C1DFD14139D04C29AFC386D3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerCharacterDemo_OnClick_m9D0BE2A13FD5E24AF19D969201265A6E6541352D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerCharacterDemo_OnRightClick_m6F42D836237F5E06FAD56CF696491BB3B5D042C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerControlsDemo_U3CStartU3Eb__16_0_m3C6B12B60706A10862902168786C80451863BA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerControlsDemo_U3CStartU3Eb__16_1_mC5B8BDA331D6871E46867EFFD8555DF797FD98CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerControlsMouseDemo_U3CStartU3Eb__17_0_mFCAB2F4BDB1D4FAC83A88D2C7920B2D823586EF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerControlsMouseDemo_U3CStartU3Eb__17_1_mD9CA774E12588E3EBD37BB7CEB6A02378C06111D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestBox_U3CStartU3Eb__9_0_mA2EB96A10E74B97AF9BEB4505512B029CA7BC4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestBox_U3CStartU3Eb__9_1_m194B222B46BFD22561E99031169CDC22C390C0C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestBox_U3CStartU3Eb__9_2_m4949CB83828D38D50189148F478D0FA334820DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestPanelFilter_OnClick_m67A67D71CB0EE662D7F7068AAD9E138E8CBC170F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestPanel_HidePanel_mCCC6AED959CF02C69B19BCCA6DA90D3CFEB5948D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestPanel_OnPressArrow_m6A9A7D900969922A98F1C057E5D5804F5BF65C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuestPanel_TogglePanel_mDC44A3A986D47C3F9A898B2602F067EF66CF1658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateTextU3Ed__28_System_Collections_IEnumerator_Reset_m34D829D49B47A574B95281435352774CE05B630E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunActionU3Ed__30_System_Collections_IEnumerator_Reset_m598A4B1610DA3D30985E7FA25624D5997E41A3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRefreshPanelU3Eb__13_0_m7F5FE64FA7B45C389A384BFCF9CCF7039D76915D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<DialogueQuests.QuestData>
struct List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuestDataU5BU5D_t338B97BCCC6BC591B12F684699241683DCE8B866* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>
struct List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuestPanelLineU5BU5D_t58A073B0B528A95AFE360A268139D648027B6A2C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DialogueQuests.DialoguePanel/<AnimateText>d__28
struct U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF  : public RuntimeObject
{
	// System.Int32 DialogueQuests.DialoguePanel/<AnimateText>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueQuests.DialoguePanel/<AnimateText>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DialogueQuests.DialoguePanel DialogueQuests.DialoguePanel/<AnimateText>d__28::<>4__this
	DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* ___U3CU3E4__this_2;
	// System.Int32 DialogueQuests.DialoguePanel/<AnimateText>d__28::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30
struct U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F  : public RuntimeObject
{
	// System.Int32 DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DialogueQuests.Demo.PlayerCharacterDemo DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::<>4__this
	PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* ___U3CU3E4__this_2;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::action_duration
	float ___action_duration_3;
	// UnityEngine.Events.UnityAction DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::callback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_4;
};

// DialogueQuests.QuestPanel/<>c
struct U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>
struct Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
struct __StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE__padding[88];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// DialogueQuests.NarrativeData
struct NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035  : public RuntimeObject
{
	// System.String DialogueQuests.NarrativeData::filename
	String_t* ___filename_0;
	// System.String DialogueQuests.NarrativeData::version
	String_t* ___version_1;
	// System.DateTime DialogueQuests.NarrativeData::last_save
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___last_save_2;
	// System.Single DialogueQuests.NarrativeData::time
	float ___time_3;
	// System.Collections.Generic.List`1<DialogueQuests.DialogueMessageData> DialogueQuests.NarrativeData::dialogue_history
	List_1_tCF09534B59E9200DB8C6AE1F6D8563F9DA5FED96* ___dialogue_history_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeData::trigger_counts
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___trigger_counts_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> DialogueQuests.NarrativeData::trigger_interval
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___trigger_interval_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeData::quests_status
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___quests_status_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeData::quests_progress
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___quests_progress_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeData::custom_values_int
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___custom_values_int_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> DialogueQuests.NarrativeData::custom_values_float
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ___custom_values_float_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> DialogueQuests.NarrativeData::custom_values_str
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___custom_values_str_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeData::actor_values
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___actor_values_12;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Comparison`1<DialogueQuests.QuestData>
struct Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData>
struct UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<System.String,System.Single>
struct UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// DialogueQuests.QuestData
struct QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String DialogueQuests.QuestData::quest_id
	String_t* ___quest_id_4;
	// System.String DialogueQuests.QuestData::title
	String_t* ___title_5;
	// UnityEngine.Sprite DialogueQuests.QuestData::icon
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___icon_6;
	// System.String DialogueQuests.QuestData::desc
	String_t* ___desc_7;
	// System.Int32 DialogueQuests.QuestData::sort_order
	int32_t ___sort_order_8;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// DialogueQuests.Demo.PlayerControlsDemo/MoveAction
struct MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF  : public MulticastDelegate_t
{
};

// DialogueQuests.Demo.PlayerControlsDemo/PressAction
struct PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// DialogueQuests.Demo.DemoUI
struct DemoUI_t981DD9E8B6E0C3D91D0BFE9FA50374E06A42FB9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DialogueQuests.Demo.ExitZoneDemo
struct ExitZoneDemo_t54F7B0D9004B0D96C3D5A223039E3C0630B167FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DialogueQuests.Demo.ExitZoneDemo::scene
	String_t* ___scene_4;
	// System.Single DialogueQuests.Demo.ExitZoneDemo::timer
	float ___timer_5;
	// System.Boolean DialogueQuests.Demo.ExitZoneDemo::transition
	bool ___transition_6;
};

// DialogueQuests.NarrativeControls
struct NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode DialogueQuests.NarrativeControls::talk_key
	int32_t ___talk_key_4;
	// UnityEngine.KeyCode DialogueQuests.NarrativeControls::journal_key
	int32_t ___journal_key_5;
	// UnityEngine.KeyCode DialogueQuests.NarrativeControls::cancel_key
	int32_t ___cancel_key_6;
	// System.Boolean DialogueQuests.NarrativeControls::mouse_controls
	bool ___mouse_controls_7;
	// System.Boolean DialogueQuests.NarrativeControls::keyboard_controls
	bool ___keyboard_controls_8;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeControls::onPressTalk
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPressTalk_9;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeControls::onPressJournal
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPressJournal_10;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeControls::onPressCancel
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPressCancel_11;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeControls::onPressTalkMouse
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPressTalkMouse_12;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeControls::onPressCancelMouse
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPressCancelMouse_13;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2> DialogueQuests.NarrativeControls::onPressArrow
	UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* ___onPressArrow_14;
	// System.Boolean DialogueQuests.NarrativeControls::gamepad_linked
	bool ___gamepad_linked_15;
	// DialogueQuests.NarrativeControls/MoveAction DialogueQuests.NarrativeControls::gamepad_menu
	MoveAction_t63244F5A44CFE743642A25939085A9FDAFB24177* ___gamepad_menu_16;
	// DialogueQuests.NarrativeControls/PressAction DialogueQuests.NarrativeControls::gamepad_talk
	PressAction_tF3E41A584DD3A2CC7B455380072183C4262074CF* ___gamepad_talk_17;
	// DialogueQuests.NarrativeControls/PressAction DialogueQuests.NarrativeControls::gamepad_journal
	PressAction_tF3E41A584DD3A2CC7B455380072183C4262074CF* ___gamepad_journal_18;
	// DialogueQuests.NarrativeControls/PressAction DialogueQuests.NarrativeControls::gamepad_cancel
	PressAction_tF3E41A584DD3A2CC7B455380072183C4262074CF* ___gamepad_cancel_19;
	// System.Action DialogueQuests.NarrativeControls::gamepad_update
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___gamepad_update_20;
	// UnityEngine.Vector2 DialogueQuests.NarrativeControls::ui_move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ui_move_21;
	// System.Boolean DialogueQuests.NarrativeControls::ui_moved
	bool ___ui_moved_22;
};

// DialogueQuests.NarrativeManager
struct NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction`1<DialogueQuests.NarrativeEvent> DialogueQuests.NarrativeManager::onEventStart
	UnityAction_1_t3F166A7214C398F41E00144F1578C5D581B878A7* ___onEventStart_4;
	// UnityEngine.Events.UnityAction`1<DialogueQuests.NarrativeEvent> DialogueQuests.NarrativeManager::onEventEnd
	UnityAction_1_t3F166A7214C398F41E00144F1578C5D581B878A7* ___onEventEnd_5;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeManager::onRefresh
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onRefresh_6;
	// UnityEngine.Events.UnityAction`2<DialogueQuests.NarrativeEventLine,DialogueQuests.DialogueMessage> DialogueQuests.NarrativeManager::onDialogueMessageStart
	UnityAction_2_tB0B4A15F7F1D8507CB56DE41E803CCE7DD045181* ___onDialogueMessageStart_7;
	// UnityEngine.Events.UnityAction`2<DialogueQuests.NarrativeEventLine,DialogueQuests.DialogueMessage> DialogueQuests.NarrativeManager::onDialogueMessageEnd
	UnityAction_2_tB0B4A15F7F1D8507CB56DE41E803CCE7DD045181* ___onDialogueMessageEnd_8;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeManager::onPauseGameplay
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onPauseGameplay_9;
	// UnityEngine.Events.UnityAction DialogueQuests.NarrativeManager::onUnpauseGameplay
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onUnpauseGameplay_10;
	// UnityEngine.Events.UnityAction`3<System.String,UnityEngine.AudioClip,System.Single> DialogueQuests.NarrativeManager::onPlaySFX
	UnityAction_3_t5F2A2781A9F306525C07D0C30AB9FF2CE1D0BC06* ___onPlaySFX_11;
	// UnityEngine.Events.UnityAction`3<System.String,UnityEngine.AudioClip,System.Single> DialogueQuests.NarrativeManager::onPlayMusic
	UnityAction_3_t5F2A2781A9F306525C07D0C30AB9FF2CE1D0BC06* ___onPlayMusic_12;
	// UnityEngine.Events.UnityAction`1<System.String> DialogueQuests.NarrativeManager::onStopMusic
	UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___onStopMusic_13;
	// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData> DialogueQuests.NarrativeManager::onQuestStart
	UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* ___onQuestStart_14;
	// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData> DialogueQuests.NarrativeManager::onQuestComplete
	UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* ___onQuestComplete_15;
	// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData> DialogueQuests.NarrativeManager::onQuestFail
	UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* ___onQuestFail_16;
	// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData> DialogueQuests.NarrativeManager::onQuestCancel
	UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* ___onQuestCancel_17;
	// System.Func`1<System.Single> DialogueQuests.NarrativeManager::getTimestamp
	Func_1_t11C3830580201E0A3A3A2C76523B7905EF40BCF7* ___getTimestamp_18;
	// System.Boolean DialogueQuests.NarrativeManager::use_custom_audio
	bool ___use_custom_audio_19;
	// DialogueQuests.NarrativeEvent DialogueQuests.NarrativeManager::current_event
	NarrativeEvent_tE1BEE176CD7CB0247E821F311810C7CDD98FCD0C* ___current_event_20;
	// DialogueQuests.NarrativeEventLine DialogueQuests.NarrativeManager::current_event_line
	NarrativeEventLine_t72C54C2A1CD5263D15B8F4DADF3D8603E3C86515* ___current_event_line_21;
	// DialogueQuests.DialogueMessage DialogueQuests.NarrativeManager::current_message
	DialogueMessage_tC8DA5778E2D5F439C41F595D029597DBF896E00C* ___current_message_22;
	// DialogueQuests.ActorData DialogueQuests.NarrativeManager::current_actor
	ActorData_tCFC10CBC2E9893BDA83551C0F532657CDC05B935* ___current_actor_23;
	// System.Collections.Generic.List`1<DialogueQuests.NarrativeEvent> DialogueQuests.NarrativeManager::trigger_list
	List_1_tCCC1808698022AE044DD807D9694CA6D3ED08621* ___trigger_list_24;
	// System.Collections.Generic.Queue`1<DialogueQuests.NarrativeEventLine> DialogueQuests.NarrativeManager::event_line_queue
	Queue_1_t7309B85F0DC7D842561DCF233DAED5895FB268A5* ___event_line_queue_25;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DialogueQuests.NarrativeManager::random_values
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___random_values_26;
	// System.Single DialogueQuests.NarrativeManager::event_timer
	float ___event_timer_27;
	// System.Single DialogueQuests.NarrativeManager::pause_duration
	float ___pause_duration_28;
	// System.Boolean DialogueQuests.NarrativeManager::is_paused
	bool ___is_paused_29;
	// System.Boolean DialogueQuests.NarrativeManager::should_unpause
	bool ___should_unpause_30;
};

// DialogueQuests.Demo.PlayerCharacterAnimDemo
struct PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DialogueQuests.Demo.PlayerCharacterAnimDemo::move_anim
	String_t* ___move_anim_4;
	// DialogueQuests.Demo.PlayerCharacterDemo DialogueQuests.Demo.PlayerCharacterAnimDemo::character
	PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* ___character_5;
	// UnityEngine.Animator DialogueQuests.Demo.PlayerCharacterAnimDemo::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

// DialogueQuests.Demo.PlayerCharacterDemo
struct PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::move_speed
	float ___move_speed_4;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::move_accel
	float ___move_accel_5;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::rotate_speed
	float ___rotate_speed_6;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::fall_speed
	float ___fall_speed_7;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::ground_detect_dist
	float ___ground_detect_dist_8;
	// UnityEngine.LayerMask DialogueQuests.Demo.PlayerCharacterDemo::ground_layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___ground_layer_9;
	// UnityEngine.Events.UnityAction`2<System.String,System.Single> DialogueQuests.Demo.PlayerCharacterDemo::onTriggerAnim
	UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* ___onTriggerAnim_10;
	// UnityEngine.Rigidbody DialogueQuests.Demo.PlayerCharacterDemo::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_11;
	// UnityEngine.CapsuleCollider DialogueQuests.Demo.PlayerCharacterDemo::collide
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___collide_12;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::move
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_13;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::facing
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___facing_14;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::move_average
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___move_average_15;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::prev_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prev_pos_16;
	// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::auto_move
	bool ___auto_move_17;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::auto_move_target
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___auto_move_target_18;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::auto_move_target_next
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___auto_move_target_next_19;
	// System.Single DialogueQuests.Demo.PlayerCharacterDemo::auto_move_timer
	float ___auto_move_timer_20;
	// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::is_grounded
	bool ___is_grounded_21;
	// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::is_fronted
	bool ___is_fronted_22;
	// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::is_action
	bool ___is_action_23;
};

// DialogueQuests.Demo.PlayerControlsDemo
struct PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode DialogueQuests.Demo.PlayerControlsDemo::action_key1
	int32_t ___action_key1_4;
	// UnityEngine.KeyCode DialogueQuests.Demo.PlayerControlsDemo::action_key2
	int32_t ___action_key2_5;
	// UnityEngine.KeyCode DialogueQuests.Demo.PlayerControlsDemo::cam_rotate_left
	int32_t ___cam_rotate_left_6;
	// UnityEngine.KeyCode DialogueQuests.Demo.PlayerControlsDemo::cam_rotate_right
	int32_t ___cam_rotate_right_7;
	// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::gamepad_linked
	bool ___gamepad_linked_8;
	// DialogueQuests.Demo.PlayerControlsDemo/MoveAction DialogueQuests.Demo.PlayerControlsDemo::gamepad_move
	MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* ___gamepad_move_9;
	// DialogueQuests.Demo.PlayerControlsDemo/MoveAction DialogueQuests.Demo.PlayerControlsDemo::gamepad_camera
	MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* ___gamepad_camera_10;
	// DialogueQuests.Demo.PlayerControlsDemo/PressAction DialogueQuests.Demo.PlayerControlsDemo::gamepad_action
	PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* ___gamepad_action_11;
	// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo::move
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___move_12;
	// System.Single DialogueQuests.Demo.PlayerControlsDemo::rotate_cam
	float ___rotate_cam_13;
	// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::press_action
	bool ___press_action_14;
	// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::paused
	bool ___paused_15;
};

// DialogueQuests.Demo.PlayerControlsMouseDemo
struct PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask DialogueQuests.Demo.PlayerControlsMouseDemo::selectable_layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___selectable_layer_4;
	// UnityEngine.LayerMask DialogueQuests.Demo.PlayerControlsMouseDemo::floor_layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___floor_layer_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3> DialogueQuests.Demo.PlayerControlsMouseDemo::onClick
	UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* ___onClick_6;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3> DialogueQuests.Demo.PlayerControlsMouseDemo::onRightClick
	UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* ___onRightClick_7;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3> DialogueQuests.Demo.PlayerControlsMouseDemo::onClickFloor
	UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* ___onClickFloor_8;
	// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::using_mouse
	bool ___using_mouse_9;
	// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::mouse_scroll
	float ___mouse_scroll_10;
	// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsMouseDemo::mouse_delta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mouse_delta_11;
	// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::mouse_hold_left
	bool ___mouse_hold_left_12;
	// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::mouse_hold_right
	bool ___mouse_hold_right_13;
	// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::paused
	bool ___paused_14;
	// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::using_timer
	float ___using_timer_15;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerControlsMouseDemo::last_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___last_pos_16;
	// UnityEngine.Vector3 DialogueQuests.Demo.PlayerControlsMouseDemo::floor_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___floor_pos_17;
	// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::zoom_value
	float ___zoom_value_18;
};

// DialogueQuests.QuestPanelFilter
struct QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DialogueQuests.QuestFilter DialogueQuests.QuestPanelFilter::filter
	int32_t ___filter_4;
	// UnityEngine.UI.Image DialogueQuests.QuestPanelFilter::highlight
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___highlight_5;
	// DialogueQuests.QuestPanel DialogueQuests.QuestPanelFilter::quest_panel
	QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* ___quest_panel_6;
};

// DialogueQuests.QuestPanelLine
struct QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text DialogueQuests.QuestPanelLine::quest_title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___quest_title_4;
	// UnityEngine.UI.Text DialogueQuests.QuestPanelLine::quest_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___quest_text_5;
	// UnityEngine.UI.Image DialogueQuests.QuestPanelLine::quest_icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___quest_icon_6;
	// UnityEngine.UI.Image DialogueQuests.QuestPanelLine::quest_completed
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___quest_completed_7;
	// UnityEngine.Sprite DialogueQuests.QuestPanelLine::success_sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___success_sprite_8;
	// UnityEngine.Sprite DialogueQuests.QuestPanelLine::fail_sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___fail_sprite_9;
};

// DialogueQuests.Demo.TheCameraDemo
struct TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DialogueQuests.Demo.TheCameraDemo::move_speed
	float ___move_speed_4;
	// System.Single DialogueQuests.Demo.TheCameraDemo::rotate_speed
	float ___rotate_speed_5;
	// System.Single DialogueQuests.Demo.TheCameraDemo::zoom_speed
	float ___zoom_speed_6;
	// System.Single DialogueQuests.Demo.TheCameraDemo::zoom_in_max
	float ___zoom_in_max_7;
	// System.Single DialogueQuests.Demo.TheCameraDemo::zoom_out_max
	float ___zoom_out_max_8;
	// UnityEngine.GameObject DialogueQuests.Demo.TheCameraDemo::follow_target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___follow_target_9;
	// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::follow_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___follow_offset_10;
	// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::current_vel
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_vel_11;
	// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::rotated_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotated_offset_12;
	// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::current_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_offset_13;
	// System.Single DialogueQuests.Demo.TheCameraDemo::current_rotate
	float ___current_rotate_14;
	// System.Single DialogueQuests.Demo.TheCameraDemo::current_zoom
	float ___current_zoom_15;
	// UnityEngine.Transform DialogueQuests.Demo.TheCameraDemo::target_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_transform_16;
	// UnityEngine.Camera DialogueQuests.Demo.TheCameraDemo::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_17;
};

// DialogueQuests.TheUI
struct TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas DialogueQuests.TheUI::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.RectTransform DialogueQuests.TheUI::rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DialogueQuests.UIPanel
struct UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DialogueQuests.UIPanel::display_speed
	float ___display_speed_4;
	// UnityEngine.Events.UnityAction DialogueQuests.UIPanel::onShow
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onShow_5;
	// UnityEngine.Events.UnityAction DialogueQuests.UIPanel::onHide
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onHide_6;
	// UnityEngine.CanvasGroup DialogueQuests.UIPanel::canvas_group
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvas_group_7;
	// System.Boolean DialogueQuests.UIPanel::visible
	bool ___visible_8;
};

// DialogueQuests.DialoguePanel
struct DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86  : public UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554
{
	// DialogueQuests.DialogueMessageType DialogueQuests.DialoguePanel::type
	int32_t ___type_9;
	// UnityEngine.UI.Image DialogueQuests.DialoguePanel::portrait
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___portrait_10;
	// UnityEngine.Animator DialogueQuests.DialoguePanel::portrait_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___portrait_animator_11;
	// UnityEngine.UI.Image DialogueQuests.DialoguePanel::title_box
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___title_box_12;
	// UnityEngine.UI.Text DialogueQuests.DialoguePanel::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_13;
	// UnityEngine.UI.Text DialogueQuests.DialoguePanel::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_14;
	// UnityEngine.UI.Image DialogueQuests.DialoguePanel::arrow
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___arrow_15;
	// System.Boolean DialogueQuests.DialoguePanel::type_fx
	bool ___type_fx_16;
	// System.Single DialogueQuests.DialoguePanel::type_fx_speed
	float ___type_fx_speed_17;
	// DialogueQuests.DialogueChoiceButton[] DialogueQuests.DialoguePanel::choices
	DialogueChoiceButtonU5BU5D_t21E2439C199A9CF9140A322B0C8F11E88A9FFAD1* ___choices_18;
	// DialogueQuests.NarrativeEventLine DialogueQuests.DialoguePanel::current_line
	NarrativeEventLine_t72C54C2A1CD5263D15B8F4DADF3D8603E3C86515* ___current_line_19;
	// System.String DialogueQuests.DialoguePanel::current_text
	String_t* ___current_text_20;
	// System.Boolean DialogueQuests.DialoguePanel::text_skipable
	bool ___text_skipable_21;
	// System.Boolean DialogueQuests.DialoguePanel::event_skipable
	bool ___event_skipable_22;
	// System.String DialogueQuests.DialoguePanel::set_anim
	String_t* ___set_anim_23;
	// System.Boolean DialogueQuests.DialoguePanel::should_hide
	bool ___should_hide_24;
	// System.Single DialogueQuests.DialoguePanel::hide_timer
	float ___hide_timer_25;
	// System.Int32 DialogueQuests.DialoguePanel::selected_arrow
	int32_t ___selected_arrow_26;
	// UnityEngine.RectTransform DialogueQuests.DialoguePanel::arrow_rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___arrow_rect_27;
	// UnityEngine.Coroutine DialogueQuests.DialoguePanel::text_anim
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___text_anim_28;
	// System.Boolean DialogueQuests.DialoguePanel::text_anim_completed
	bool ___text_anim_completed_29;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// DialogueQuests.QuestBox
struct QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189  : public UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554
{
	// UnityEngine.UI.Text DialogueQuests.QuestBox::box_title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___box_title_9;
	// UnityEngine.UI.Text DialogueQuests.QuestBox::quest_title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___quest_title_10;
	// UnityEngine.UI.Image DialogueQuests.QuestBox::quest_icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___quest_icon_11;
	// UnityEngine.AudioClip DialogueQuests.QuestBox::show_audio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___show_audio_12;
	// System.Single DialogueQuests.QuestBox::timer
	float ___timer_13;
	// UnityEngine.Animator DialogueQuests.QuestBox::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
};

// DialogueQuests.QuestPanel
struct QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1  : public UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554
{
	// System.Boolean DialogueQuests.QuestPanel::show_failed
	bool ___show_failed_9;
	// System.Boolean DialogueQuests.QuestPanel::show_completed
	bool ___show_completed_10;
	// UnityEngine.RectTransform DialogueQuests.QuestPanel::content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___content_11;
	// UnityEngine.UI.GridLayoutGroup DialogueQuests.QuestPanel::grid
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ___grid_12;
	// DialogueQuests.QuestPanelLine DialogueQuests.QuestPanel::line_template
	QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* ___line_template_13;
	// System.Int32 DialogueQuests.QuestPanel::nb_per_row
	int32_t ___nb_per_row_14;
	// System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine> DialogueQuests.QuestPanel::lines
	List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* ___lines_15;
	// DialogueQuests.QuestFilter DialogueQuests.QuestPanel::filter
	int32_t ___filter_16;
	// System.Int32 DialogueQuests.QuestPanel::filter_index
	int32_t ___filter_index_17;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// System.Collections.Generic.List`1<DialogueQuests.QuestData>
struct List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuestDataU5BU5D_t338B97BCCC6BC591B12F684699241683DCE8B866* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DialogueQuests.QuestData>

// System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>
struct List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuestPanelLineU5BU5D_t58A073B0B528A95AFE360A268139D648027B6A2C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// DialogueQuests.DialoguePanel/<AnimateText>d__28

// DialogueQuests.DialoguePanel/<AnimateText>d__28

// DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30

// DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30

// DialogueQuests.QuestPanel/<>c
struct U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields
{
	// DialogueQuests.QuestPanel/<>c DialogueQuests.QuestPanel/<>c::<>9
	U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* ___U3CU3E9_0;
	// System.Comparison`1<DialogueQuests.QuestData> DialogueQuests.QuestPanel/<>c::<>9__13_0
	Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* ___U3CU3E9__13_0_1;
};

// DialogueQuests.QuestPanel/<>c

// System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>

// System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

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

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

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

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::09D4968E827C4D6ACD339D6DE6BF541A430B92326D6CFA33E2E722BBC50B8C6E
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___09D4968E827C4D6ACD339D6DE6BF541A430B92326D6CFA33E2E722BBC50B8C6E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0AD6CA551DC63F32A74A6E84B339F15D3A5E6063EB3C1CBD6EB700E005950269
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___0AD6CA551DC63F32A74A6E84B339F15D3A5E6063EB3C1CBD6EB700E005950269_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::2CE7CCE3C170C1F0C6470496187D1D488AA18C369B7A1F2146AE977DCF48B416
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___2CE7CCE3C170C1F0C6470496187D1D488AA18C369B7A1F2146AE977DCF48B416_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::31F723E39482582AF154C222CBE70C6FA1BE1CBDD391A80C410EEBD960C6AD10
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___31F723E39482582AF154C222CBE70C6FA1BE1CBDD391A80C410EEBD960C6AD10_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88 <PrivateImplementationDetails>::7E856BC6790A63607D4E9DADA584613205424567C7C21C4F59702342880D25F1
	__StaticArrayInitTypeSizeU3D88_t65BF68A956A9F2B6A6A963A48EBFFFB69B60BAEE ___7E856BC6790A63607D4E9DADA584613205424567C7C21C4F59702342880D25F1_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::8AFDDA54360724A4B1FDC926F302229C2FB6DFC5891C57FD334A1A63FAE0349C
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___8AFDDA54360724A4B1FDC926F302229C2FB6DFC5891C57FD334A1A63FAE0349C_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::8F7EEB07CF2A9E78F510CCB1044268C5EF1C06655E68BE175A96639CCAFFF6A5
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___8F7EEB07CF2A9E78F510CCB1044268C5EF1C06655E68BE175A96639CCAFFF6A5_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A9E47E832D6F7C74B6202E4CC8190BFE88B1FE66B991E29C90F78623B71FB662
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___A9E47E832D6F7C74B6202E4CC8190BFE88B1FE66B991E29C90F78623B71FB662_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F444F91505F99AEE74BF25DB97C04353F46226E1B82B7CEED34537165E1F9C52
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___F444F91505F99AEE74BF25DB97C04353F46226E1B82B7CEED34537165E1F9C52_8;
};

// <PrivateImplementationDetails>

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// DialogueQuests.NarrativeData
struct NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035_StaticFields
{
	// System.Func`1<DialogueQuests.NarrativeData> DialogueQuests.NarrativeData::getData
	Func_1_t8908CEDE124498D6FA36EE2E31EAFA4651381994* ___getData_13;
	// System.String DialogueQuests.NarrativeData::file_loaded
	String_t* ___file_loaded_14;
	// DialogueQuests.NarrativeData DialogueQuests.NarrativeData::narrative_data
	NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* ___narrative_data_15;
};

// DialogueQuests.NarrativeData

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// System.Comparison`1<DialogueQuests.QuestData>

// System.Comparison`1<DialogueQuests.QuestData>

// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData>

// UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData>

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityAction`2<System.String,System.Single>

// UnityEngine.Events.UnityAction`2<System.String,System.Single>

// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// DialogueQuests.QuestData
struct QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_StaticFields
{
	// System.Collections.Generic.List`1<DialogueQuests.QuestData> DialogueQuests.QuestData::quest_list
	List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* ___quest_list_9;
};

// DialogueQuests.QuestData

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// DialogueQuests.Demo.PlayerControlsDemo/MoveAction

// DialogueQuests.Demo.PlayerControlsDemo/MoveAction

// DialogueQuests.Demo.PlayerControlsDemo/PressAction

// DialogueQuests.Demo.PlayerControlsDemo/PressAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.CapsuleCollider

// UnityEngine.CapsuleCollider

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// DialogueQuests.Demo.DemoUI

// DialogueQuests.Demo.DemoUI

// DialogueQuests.Demo.ExitZoneDemo

// DialogueQuests.Demo.ExitZoneDemo

// DialogueQuests.NarrativeControls
struct NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2_StaticFields
{
	// DialogueQuests.NarrativeControls DialogueQuests.NarrativeControls::_instance
	NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* ____instance_23;
};

// DialogueQuests.NarrativeControls

// DialogueQuests.NarrativeManager
struct NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE_StaticFields
{
	// DialogueQuests.NarrativeManager DialogueQuests.NarrativeManager::_instance
	NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* ____instance_31;
};

// DialogueQuests.NarrativeManager

// DialogueQuests.Demo.PlayerCharacterAnimDemo
struct PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_StaticFields
{
	// DialogueQuests.Demo.PlayerCharacterAnimDemo DialogueQuests.Demo.PlayerCharacterAnimDemo::_instance
	PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* ____instance_7;
};

// DialogueQuests.Demo.PlayerCharacterAnimDemo

// DialogueQuests.Demo.PlayerCharacterDemo
struct PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_StaticFields
{
	// DialogueQuests.Demo.PlayerCharacterDemo DialogueQuests.Demo.PlayerCharacterDemo::_instance
	PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* ____instance_24;
};

// DialogueQuests.Demo.PlayerCharacterDemo

// DialogueQuests.Demo.PlayerControlsDemo
struct PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_StaticFields
{
	// DialogueQuests.Demo.PlayerControlsDemo DialogueQuests.Demo.PlayerControlsDemo::_instance
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* ____instance_16;
};

// DialogueQuests.Demo.PlayerControlsDemo

// DialogueQuests.Demo.PlayerControlsMouseDemo
struct PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_StaticFields
{
	// DialogueQuests.Demo.PlayerControlsMouseDemo DialogueQuests.Demo.PlayerControlsMouseDemo::_instance
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* ____instance_19;
};

// DialogueQuests.Demo.PlayerControlsMouseDemo

// DialogueQuests.QuestPanelFilter

// DialogueQuests.QuestPanelFilter

// DialogueQuests.QuestPanelLine

// DialogueQuests.QuestPanelLine

// DialogueQuests.Demo.TheCameraDemo
struct TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields
{
	// DialogueQuests.Demo.TheCameraDemo DialogueQuests.Demo.TheCameraDemo::_instance
	TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* ____instance_18;
};

// DialogueQuests.Demo.TheCameraDemo

// DialogueQuests.TheUI
struct TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_StaticFields
{
	// DialogueQuests.TheUI DialogueQuests.TheUI::_instance
	TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* ____instance_6;
};

// DialogueQuests.TheUI

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// DialogueQuests.UIPanel

// DialogueQuests.UIPanel

// DialogueQuests.DialoguePanel
struct DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86_StaticFields
{
	// DialogueQuests.DialoguePanel DialogueQuests.DialoguePanel::_instance
	DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* ____instance_30;
};

// DialogueQuests.DialoguePanel

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.EventSystem

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.LayoutGroup

// UnityEngine.UI.LayoutGroup

// DialogueQuests.QuestBox
struct QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_StaticFields
{
	// DialogueQuests.QuestBox DialogueQuests.QuestBox::_instance
	QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* ____instance_15;
};

// DialogueQuests.QuestBox

// DialogueQuests.QuestPanel
struct QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_StaticFields
{
	// DialogueQuests.QuestPanel DialogueQuests.QuestPanel::_instance
	QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* ____instance_18;
};

// DialogueQuests.QuestPanel

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.GridLayoutGroup

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T0,T1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m05FE3765125338EF158A176DD190F4CA6DB6F520_gshared_inline (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T0)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3254DE109747B86D31DCAF93A60328870FE05256_gshared_inline (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.UIPanel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Awake_m4309BFA39ED7D2856FB0254666B0CB364EE83CC4 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void DialogueQuests.UIPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Update_mAD4842B93122D2CEBAB00905AFAF7BDAEB941754 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.UIPanel::IsVisible()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428_inline (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void DialogueQuests.UIPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Start_m3795F7BA105EC54EC0C19070262BD3D9E2DD1A6F (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) ;
// DialogueQuests.NarrativeManager DialogueQuests.NarrativeManager::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<DialogueQuests.QuestData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m0CC7F560EA974720A3C4F7F151B5B8A083AAA8F0 (UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.String DialogueQuests.QuestData::GetTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestData_GetTitle_m7B8A86978D98331E12D8D85F9524676571F09722 (QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Rebind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_m853F9E50ACB0A29D4F144FFD851E92F346195F9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.NarrativeManager::PlaySFX(System.String,UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrativeManager_PlaySFX_mC3A2980A6A2A7A98C3C826955EABE7B19E672791 (NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* __this, String_t* ___0_channel, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___1_clip, float ___2_vol, const RuntimeMethod* method) ;
// DialogueQuests.QuestPanel DialogueQuests.QuestPanel::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* QuestPanel_Get_m73C6F0A5E8CA40E770C4B5EED47EDD27D7AAD541_inline (const RuntimeMethod* method) ;
// System.Void DialogueQuests.UIPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel__ctor_m17CF8260E17364FB20866D68CC29E91DA2533EBD (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.QuestBox::ShowBox(DialogueQuests.QuestData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_ShowBox_mADACEEDF4A1BC064D2EF9CFC33B9BDCA35CB459D (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, String_t* ___1_text, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// DialogueQuests.NarrativeControls DialogueQuests.NarrativeControls::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>::GetEnumerator()
inline Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3 (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* __this, const RuntimeMethod* method)
{
	Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>::Dispose()
inline void Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461 (Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>::get_Current()
inline QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_inline (Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88* __this, const RuntimeMethod* method)
{
	QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void DialogueQuests.QuestPanelLine::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine_Hide_m46A605642B5F13001EA08A6B0E84E8E021FEB190 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DialogueQuests.QuestPanelLine>::MoveNext()
inline bool Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442 (Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Collections.Generic.List`1<DialogueQuests.QuestData> DialogueQuests.QuestData::GetAllStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* QuestData_GetAllStarted_m1528B52C7CC457FE99008F880D88D8DC87737B8C (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DialogueQuests.QuestData> DialogueQuests.QuestData::GetAllActiveOrCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* QuestData_GetAllActiveOrCompleted_m5E462646AC0C9F022D1C0A60FEDEF9B306E47CB3 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DialogueQuests.QuestData> DialogueQuests.QuestData::GetAllActiveOrFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* QuestData_GetAllActiveOrFailed_mF2376F1B3D8C495155A3B54CE95C8076CCC8F6A2 (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<DialogueQuests.QuestData> DialogueQuests.QuestData::GetAllActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* QuestData_GetAllActive_mCB8485B0E783CA9D4A5DFF51AE9229F00E479F98 (const RuntimeMethod* method) ;
// System.Void System.Comparison`1<DialogueQuests.QuestData>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m2401A75F9ED1944A53B5BBC8D1F660E772DCA77A (Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m3B594919B20B90AF5727A416D5798BA4468358CC_gshared)((Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)__this, ___0_object, ___1_method, method);
}
// System.Void System.Collections.Generic.List`1<DialogueQuests.QuestData>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m0401489FA06EC86F40E989B6E8A25D2399348D6A (List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* __this, Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* ___0_comparison, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*)___0_comparison, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>::Clear()
inline void List_1_Clear_m0253E9BD65D9F841FBC4961834A00E333AC9F54E_inline (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<DialogueQuests.QuestData>::get_Item(System.Int32)
inline QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* List_1_get_Item_m8722F122071B929A03DB7A8326B533B0933F6332 (List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean DialogueQuests.QuestPanel::MatchFilter(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestPanel_MatchFilter_mF9F8A3E78ED10FDA4460F141C0FC35016B7F8FB0 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<DialogueQuests.QuestPanelLine>()
inline QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* GameObject_GetComponent_TisQuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300_m918D75E2F91BEB3CAFA5E11B45D9598A0562768D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>::Add(T)
inline void List_1_Add_m1A7304239A53274FC564A88DBDD3796741A8361D_inline (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* __this, QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void DialogueQuests.QuestPanelLine::SetLine(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine_SetLine_mACE0AD9013A04E8EDFEC706B86E3A8FDC5D86037 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<DialogueQuests.QuestData>::get_Count()
inline int32_t List_1_get_Count_m1820A1F851481229612F9E924FF421394D5A45E7_inline (List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_spacing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_cellSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>::get_Count()
inline int32_t List_1_get_Count_m61A556E38901010495D4D55CC890193D963D78F8_inline (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void DialogueQuests.QuestPanel::Filter(DialogueQuests.QuestFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, int32_t ___0_filter, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.QuestData::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestData_IsActive_m59CB8A3EA390ABF7F2D837F1443A206DF26E6B33 (QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.QuestData::IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestData_IsCompleted_mD1D6D84C9B2B44A57E93DB697A39828E8CBB4F39 (QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.QuestData::IsFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestData_IsFailed_m97B5D0D983AD30AD70B430975130301DEC9E8386 (QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.QuestPanel::RefreshPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_RefreshPanel_m5E59FBF29721C34732036B1E7B17C2E685A485D2 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.UIPanel::Show(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Show_m9C0F028E478025700C5E9973ABC2169F37D6F091 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, bool ___0_instant, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DialogueQuests.QuestPanelLine>::.ctor()
inline void List_1__ctor_mF56C0BE2C87CBF61B9788397881DA2A4BE5E7638 (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void DialogueQuests.QuestPanel/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m673FED4C74E45D6D897CFE0318A0A9CFA6C0AF39 (U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___0_strB, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<DialogueQuests.QuestPanel>()
inline QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* Component_GetComponentInParent_TisQuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_m3294FA4A0CDB4E41113084E87A159AD3280E1E6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// DialogueQuests.QuestFilter DialogueQuests.QuestPanel::GetFilter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuestPanel_GetFilter_mC540496EE7FD637543C24CC46E0DF7F9BEDEB14B_inline (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String DialogueQuests.QuestData::GetDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestData_GetDesc_mC16CF72FC5727CE1089412AD53CD99E6A3C3734A (QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* __this, const RuntimeMethod* method) ;
// DialogueQuests.NarrativeData DialogueQuests.NarrativeData::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* NarrativeData_Get_mC6E5A31FA37C09C4F8CB4CE13FC978B824B3103D (const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.NarrativeData::IsQuestCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NarrativeData_IsQuestCompleted_m2075C75F26151E4A25FA8CB52CA0D3B2316A47E9 (NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* __this, String_t* ___0_quest_id, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.NarrativeData::IsQuestFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NarrativeData_IsQuestFailed_m1E20E1FDFAE36AAF6642C4EADA0181907662078B (NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* __this, String_t* ___0_quest_id, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<DialogueQuests.Demo.PlayerCharacterDemo>()
inline PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean DialogueQuests.SceneNav::DoSceneExist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneNav_DoSceneExist_m8C02E0EC0CD7D980360C0AE95F7BFCBFC1D39369 (String_t* ___0_scene, const RuntimeMethod* method) ;
// System.Void DialogueQuests.SceneNav::GoTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneNav_GoTo_m6E6E7C58484BC03F2C5017A7876106B788817C42 (String_t* ___0_scene, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mC5C318ECB4A5AB91924E2900BAE3A59A8CA8D305 (UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m17203366119014F4963976DF6B8E83DE49274252_gshared)((UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*)__this, ___0_object, ___1_method, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerCharacterDemo_IsMoving_m4C0F2972DF874FC5DEFD68F56F279EF51639C237 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DialogueQuests.Demo.PlayerControlsMouseDemo DialogueQuests.Demo.PlayerControlsMouseDemo::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m9C4E9F90A4680E4423C859C1AD285F473ABBC596 (UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___0_object, ___1_method, method);
}
// DialogueQuests.Demo.PlayerControlsDemo DialogueQuests.Demo.PlayerControlsDemo::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo::GetMove()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerControlsDemo_GetMove_mA636C81662919E253A0D069754FD0FEA2AAF6C0D_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) ;
// DialogueQuests.Demo.TheCameraDemo DialogueQuests.Demo.TheCameraDemo::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* TheCameraDemo_Get_m1810660AEB8CBD4764B846572F57407AEEA9B8F5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion DialogueQuests.Demo.TheCameraDemo::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TheCameraDemo_GetRotation_m2E4EB33E602743B37313E4EFF53B2FBFB14C23E3 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::DetectGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_DetectGrounded_mDA7DD97D504110B7740A56ECC70BC05840E31156 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::RotateTowards(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::DetectFronted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_DetectFronted_mCC4F9BF10AA3586296B4F841E79947D6C3BC0C15 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsMoving_mA1887F51CD11927B0AF0BD9E75FC1777638753F3 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::IsPressAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsPressAction_m16C6F90F1AD6A15AFF0B3AAD3D91DC3176750F5C_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.String,System.Single>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m1AF611E96C26F8336E65B998639DFE53977F4FA0_inline (UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* __this, String_t* ___0_arg0, float ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))UnityAction_2_Invoke_m05FE3765125338EF158A176DD190F4CA6DB6F520_gshared_inline)((UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F*)__this, (Il2CppFullySharedGenericAny)___0_arg0, (Il2CppFullySharedGenericAny)&___1_arg1, method);
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::FaceTorward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_FaceTorward_m54B538B206A4C392C35708944F2B5B224C9DD451 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::TriggerAnim(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_TriggerAnim_m4F7E7D8C1B6B1D1200252B84AB30E8B9A57C8F61 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, String_t* ___0_anim, float ___1_duration, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DialogueQuests.Demo.PlayerCharacterDemo::RunAction(System.Single,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCharacterDemo_RunAction_m9DD8E00EC77B21FF06C4F6D2B69A93B08BDAACDF (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, float ___0_action_duration, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___1_callback, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunActionU3Ed__30__ctor_mA39ABD773C4F2F6738800EA96C7B0ED4F2E3AAD1 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::MoveTo(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_MoveTo_mF827885398BE49A52E61E50C5A4F4D6A9A79A59C (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445 (int32_t ___0_keyCode, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetKeyDown_m9F7118D95F7A4993252AC9DF3AD123A6D5ED13EE (int32_t ___0_keyCode, const RuntimeMethod* method) ;
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo/MoveAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_inline (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo/PressAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_inline (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControlFreak2.CF2Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1 (const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::RaycastFloorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_RaycastFloorPos_m4A6DD183453D4EA5B56F077D1A4271F95A291F27 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetMouseButtonDown_mD57D4AFEFFA541FF30A9E8364DBA0CE1B64E94BA (int32_t ___0_mouseButton, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::OnMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_OnMouseClick_mCBEAE8B007260172D114C290FD4DAF0A7DD69FF8 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::OnRightMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_OnRightMouseClick_m2124403CAD067C3E8E207021A336E382DDC023AD (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ControlFreak2.CF2Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CF2Input_get_mouseScrollDelta_m66A9C4DF6414C992E81BE8B5E3F1DD4F455F192B (const RuntimeMethod* method) ;
// System.Single ControlFreak2.CF2Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CF2Input_GetAxis_mBC501F2F8D59700FD6E1357ACDE0540CAD752396 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean ControlFreak2.CF2Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CF2Input_GetMouseButton_m5DE7971A99D4CA68A5F3557F66D1E0184F499570 (int32_t ___0_mouseButton, const RuntimeMethod* method) ;
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsMouseOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// UnityEngine.Ray DialogueQuests.Demo.PlayerControlsMouseDemo::GetMouseCameraRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PlayerControlsMouseDemo_GetMouseCameraRay_m9BA4E8594C1B20703E286EC7D79A554145D381FA (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, float ___0_distance, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_mACA7F957A13DD97953808B8E0CF95EAD7D39463E (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, float ___1_d, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_enter, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>::Invoke(T0)
inline void UnityAction_1_Invoke_mD9E7BF97775170B2945AD038A4291B76A1EE43EB_inline (UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))UnityAction_1_Invoke_m3254DE109747B86D31DCAF93A60328870FE05256_gshared_inline)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, (Il2CppFullySharedGenericAny)&___0_arg0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Camera DialogueQuests.Demo.TheCameraDemo::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* TheCameraDemo_GetCamera_mC50F262B6848C4D8031E78C127AAEF3D295C54AB (const RuntimeMethod* method) ;
// UnityEngine.Vector3 DialogueQuests.Demo.PlayerControlsMouseDemo::GetClampMousePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerControlsMouseDemo_GetClampMousePos_m8A3D1D8A0B112953CD9026A2F8A148392B2A02CE (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___0_eventSystem, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___1_raycastResults, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// DialogueQuests.Demo.PlayerCharacterDemo DialogueQuests.Demo.PlayerCharacterDemo::Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* PlayerCharacterDemo_Get_mF84A4B1D8AC00872D52333311DBBF4F4EDD20D24_inline (const RuntimeMethod* method) ;
// System.Single DialogueQuests.Demo.PlayerControlsDemo::GetRotateCam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerControlsDemo_GetRotateCam_m4365A7D2F1482B7AA4E6E55ADDA98EABEF32893C_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) ;
// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::GetMouseScroll()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerControlsMouseDemo_GetMouseScroll_mF6F75069B57088178A9F6992F058E63B40C3B2DE_inline (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, float ___2_angle, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::GetFacingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TheCameraDemo_GetFacingFront_m71A3D176117D6C3003A5DB889F26D8551978F5B1 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera DialogueQuests.Demo.TheCameraDemo::GetCam()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* TheCameraDemo_GetCam_mDF572A115F0980145B570CB36D77B1D88D26E302_inline (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___0_dot, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueQuests.DialoguePanel/<AnimateText>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__28__ctor_mAC9B4F9EE0B09F213A45538DB7E31E810882B735 (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogueQuests.DialoguePanel/<AnimateText>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__28_System_IDisposable_Dispose_m3C8F93FD26D91BD902ECB5D6B7B98AB85DACD031 (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogueQuests.DialoguePanel/<AnimateText>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateTextU3Ed__28_MoveNext_m132348C7BC8E1E1745039D3ADBC781FB5C9DBCB4 (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < (current_text.Length + 1); i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_007b;
	}

IL_0027:
	{
		// this.text.text = current_text.Substring(0, i);
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_4 = V_1;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___text_14;
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___current_text_20;
		int32_t L_8 = __this->___U3CiU3E5__2_3;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// yield return new WaitForSeconds(1f/type_fx_speed);
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___type_fx_speed_17;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, ((float)((1.0f)/L_11)), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < (current_text.Length + 1); i++)
		int32_t L_13 = __this->___U3CiU3E5__2_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < (current_text.Length + 1); i++)
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = L_16->___current_text_20;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_add(L_18, 1)))))
		{
			goto IL_0027;
		}
	}
	{
		// text_anim_completed = true;
		DialoguePanel_t532DABFD1AD9BED6EEDED184F51B92B0948CBD86* L_19 = V_1;
		NullCheck(L_19);
		L_19->___text_anim_completed_29 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object DialogueQuests.DialoguePanel/<AnimateText>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateTextU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24D348F588FD75ECAA35A8FA490745E70D143F65 (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogueQuests.DialoguePanel/<AnimateText>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateTextU3Ed__28_System_Collections_IEnumerator_Reset_m34D829D49B47A574B95281435352774CE05B630E (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateTextU3Ed__28_System_Collections_IEnumerator_Reset_m34D829D49B47A574B95281435352774CE05B630E_RuntimeMethod_var)));
	}
}
// System.Object DialogueQuests.DialoguePanel/<AnimateText>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateTextU3Ed__28_System_Collections_IEnumerator_get_Current_mEE83DD9922436465B96A8574E3D43E5877E8067A (U3CAnimateTextU3Ed__28_t689DF12AEC325CDFA7A6749D59401219EEB551FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DialogueQuests.QuestBox::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_Awake_m5CCD0702827618CB57E93F7D490DB7DCA950A028 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIPanel_Awake_m4309BFA39ED7D2856FB0254666B0CB364EE83CC4(__this, NULL);
		// _instance = this;
		((QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_StaticFields*)il2cpp_codegen_static_fields_for(QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var))->____instance_15 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_StaticFields*)il2cpp_codegen_static_fields_for(QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var))->____instance_15), (void*)__this);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_14), (void*)L_0);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestBox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_Update_m134EC32503F8C789D3E7CF16FB839C7EBCAF530E (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		UIPanel_Update_mAD4842B93122D2CEBAB00905AFAF7BDAEB941754(__this, NULL);
		// if (IsVisible())
		bool L_0;
		L_0 = UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// timer += Time.deltaTime;
		float L_1 = __this->___timer_13;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_13 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (timer > 4f)
		float L_3 = __this->___timer_13;
		if ((!(((float)L_3) > ((float)(4.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// Hide();
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void DialogueQuests.UIPanel::Hide(System.Boolean) */, __this, (bool)0);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_Start_mFBE6C781785E604795D157D6A427E7F0FCB1B190 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestBox_U3CStartU3Eb__9_0_mA2EB96A10E74B97AF9BEB4505512B029CA7BC4D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestBox_U3CStartU3Eb__9_1_m194B222B46BFD22561E99031169CDC22C390C0C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestBox_U3CStartU3Eb__9_2_m4949CB83828D38D50189148F478D0FA334820DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		UIPanel_Start_m3795F7BA105EC54EC0C19070262BD3D9E2DD1A6F(__this, NULL);
		// NarrativeManager.Get().onQuestStart += (QuestData quest) => { ShowBox(quest, "New Quest"); };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_0;
		L_0 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_1 = L_0;
		NullCheck(L_1);
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_2 = L_1->___onQuestStart_14;
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_3 = (UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)il2cpp_codegen_object_new(UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m0CC7F560EA974720A3C4F7F151B5B8A083AAA8F0(L_3, __this, (intptr_t)((void*)QuestBox_U3CStartU3Eb__9_0_mA2EB96A10E74B97AF9BEB4505512B029CA7BC4D1_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___onQuestStart_14 = ((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_4, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___onQuestStart_14), (void*)((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_4, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var)));
		// NarrativeManager.Get().onQuestComplete += (QuestData quest) => { ShowBox(quest, "Quest Completed!"); };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_5;
		L_5 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_6 = L_5;
		NullCheck(L_6);
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_7 = L_6->___onQuestComplete_15;
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_8 = (UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)il2cpp_codegen_object_new(UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m0CC7F560EA974720A3C4F7F151B5B8A083AAA8F0(L_8, __this, (intptr_t)((void*)QuestBox_U3CStartU3Eb__9_1_m194B222B46BFD22561E99031169CDC22C390C0C9_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___onQuestComplete_15 = ((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_9, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___onQuestComplete_15), (void*)((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_9, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var)));
		// NarrativeManager.Get().onQuestFail += (QuestData quest) => { ShowBox(quest, "Quest Failed!"); };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_10;
		L_10 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_11 = L_10;
		NullCheck(L_11);
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_12 = L_11->___onQuestFail_16;
		UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E* L_13 = (UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)il2cpp_codegen_object_new(UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m0CC7F560EA974720A3C4F7F151B5B8A083AAA8F0(L_13, __this, (intptr_t)((void*)QuestBox_U3CStartU3Eb__9_2_m4949CB83828D38D50189148F478D0FA334820DD8_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		NullCheck(L_11);
		L_11->___onQuestFail_16 = ((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_14, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___onQuestFail_16), (void*)((UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E*)Castclass((RuntimeObject*)L_14, UnityAction_1_t48D4CDF9E549AEB60CD01BC693CC1E1AB4EFB34E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestBox::ShowBox(DialogueQuests.QuestData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_ShowBox_mADACEEDF4A1BC064D2EF9CFC33B9BDCA35CB459D (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59835463557DE8AC444311112EC05645D84A7039);
		s_Il2CppMethodInitialized = true;
	}
	{
		// box_title.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___box_title_9;
		String_t* L_1 = ___1_text;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// quest_title.text = quest.GetTitle();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___quest_title_10;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_3 = ___0_quest;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = QuestData_GetTitle_m7B8A86978D98331E12D8D85F9524676571F09722(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (quest_icon != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___quest_icon_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// quest_icon.sprite = quest.icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___quest_icon_11;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_8 = ___0_quest;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = L_8->___icon_6;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_9, NULL);
		// quest_icon.enabled = quest.icon != null;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___quest_icon_11;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_11 = ___0_quest;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11->___icon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, L_13, NULL);
	}

IL_0053:
	{
		// timer = 0f;
		__this->___timer_13 = (0.0f);
		// Show();
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, __this, (bool)0);
		// if(animator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___animator_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// animator.Rebind();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_14;
		NullCheck(L_16);
		Animator_Rebind_m853F9E50ACB0A29D4F144FFD851E92F346195F9F(L_16, NULL);
	}

IL_007e:
	{
		// if (show_audio != null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_17 = __this->___show_audio_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// NarrativeManager.Get().PlaySFX("quest", show_audio);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_19;
		L_19 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20 = __this->___show_audio_12;
		NullCheck(L_19);
		NarrativeManager_PlaySFX_mC3A2980A6A2A7A98C3C826955EABE7B19E672791(L_19, _stringLiteral59835463557DE8AC444311112EC05645D84A7039, L_20, (0.800000012f), NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestBox::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_OnClick_m9D86B7CFA7ACE99A6515393A4AAD9774B01D1A84 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, const RuntimeMethod* method) 
{
	{
		// QuestPanel.Get().Show();
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0;
		L_0 = QuestPanel_Get_m73C6F0A5E8CA40E770C4B5EED47EDD27D7AAD541_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, L_0, (bool)0);
		// }
		return;
	}
}
// DialogueQuests.QuestBox DialogueQuests.QuestBox::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* QuestBox_Get_m8AEFD309521786FA7E9ABFE476E33DAE03E23380 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* L_0 = ((QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_StaticFields*)il2cpp_codegen_static_fields_for(QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189_il2cpp_TypeInfo_var))->____instance_15;
		return L_0;
	}
}
// System.Void DialogueQuests.QuestBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox__ctor_mE799ECB346A8BD6038F73976F8C34F1DDE9505EB (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, const RuntimeMethod* method) 
{
	{
		UIPanel__ctor_m17CF8260E17364FB20866D68CC29E91DA2533EBD(__this, NULL);
		return;
	}
}
// System.Void DialogueQuests.QuestBox::<Start>b__9_0(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_U3CStartU3Eb__9_0_mA2EB96A10E74B97AF9BEB4505512B029CA7BC4D1 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67325AA3E36B1501DAD8B5C9A7261C038F70C753);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NarrativeManager.Get().onQuestStart += (QuestData quest) => { ShowBox(quest, "New Quest"); };
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_0 = ___0_quest;
		QuestBox_ShowBox_mADACEEDF4A1BC064D2EF9CFC33B9BDCA35CB459D(__this, L_0, _stringLiteral67325AA3E36B1501DAD8B5C9A7261C038F70C753, NULL);
		// NarrativeManager.Get().onQuestStart += (QuestData quest) => { ShowBox(quest, "New Quest"); };
		return;
	}
}
// System.Void DialogueQuests.QuestBox::<Start>b__9_1(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_U3CStartU3Eb__9_1_m194B222B46BFD22561E99031169CDC22C390C0C9 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE443FC56A5597970EC5361635196189AC859C68A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NarrativeManager.Get().onQuestComplete += (QuestData quest) => { ShowBox(quest, "Quest Completed!"); };
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_0 = ___0_quest;
		QuestBox_ShowBox_mADACEEDF4A1BC064D2EF9CFC33B9BDCA35CB459D(__this, L_0, _stringLiteralE443FC56A5597970EC5361635196189AC859C68A, NULL);
		// NarrativeManager.Get().onQuestComplete += (QuestData quest) => { ShowBox(quest, "Quest Completed!"); };
		return;
	}
}
// System.Void DialogueQuests.QuestBox::<Start>b__9_2(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestBox_U3CStartU3Eb__9_2_m4949CB83828D38D50189148F478D0FA334820DD8 (QuestBox_t72E4E68A799463544776A09BC68D987EB2F41189* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E6BF48FCAACB8F94B405326F922CBD2CAD14EFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NarrativeManager.Get().onQuestFail += (QuestData quest) => { ShowBox(quest, "Quest Failed!"); };
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_0 = ___0_quest;
		QuestBox_ShowBox_mADACEEDF4A1BC064D2EF9CFC33B9BDCA35CB459D(__this, L_0, _stringLiteral5E6BF48FCAACB8F94B405326F922CBD2CAD14EFC, NULL);
		// NarrativeManager.Get().onQuestFail += (QuestData quest) => { ShowBox(quest, "Quest Failed!"); };
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
// System.Void DialogueQuests.QuestPanel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Awake_m3A8F6909173A9BD3FFF866F34CC75E746BD5AB4E (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIPanel_Awake_m4309BFA39ED7D2856FB0254666B0CB364EE83CC4(__this, NULL);
		// _instance = this;
		((QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_StaticFields*)il2cpp_codegen_static_fields_for(QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var))->____instance_18 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_StaticFields*)il2cpp_codegen_static_fields_for(QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var))->____instance_18), (void*)__this);
		// line_template.gameObject.SetActive(false);
		QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_0 = __this->___line_template_13;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Start_m76DCBF8DCA603A180A83F3B454886B2EFAE08152 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_HidePanel_mCCC6AED959CF02C69B19BCCA6DA90D3CFEB5948D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_OnPressArrow_m6A9A7D900969922A98F1C057E5D5804F5BF65C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_TogglePanel_mDC44A3A986D47C3F9A898B2602F067EF66CF1658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		UIPanel_Start_m3795F7BA105EC54EC0C19070262BD3D9E2DD1A6F(__this, NULL);
		// if (NarrativeControls.Get())
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_0;
		L_0 = NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		// NarrativeControls.Get().onPressJournal += TogglePanel;
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_2;
		L_2 = NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline(NULL);
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_3 = L_2;
		NullCheck(L_3);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = L_3->___onPressJournal_10;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)QuestPanel_TogglePanel_mDC44A3A986D47C3F9A898B2602F067EF66CF1658_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onPressJournal_10 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onPressJournal_10), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// NarrativeControls.Get().onPressCancel += HidePanel;
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_7;
		L_7 = NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline(NULL);
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_8 = L_7;
		NullCheck(L_8);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = L_8->___onPressCancel_11;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)QuestPanel_HidePanel_mCCC6AED959CF02C69B19BCCA6DA90D3CFEB5948D_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___onPressCancel_11 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onPressCancel_11), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// NarrativeControls.Get().onPressArrow += OnPressArrow;
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_12;
		L_12 = NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline(NULL);
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_13 = L_12;
		NullCheck(L_13);
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_14 = L_13->___onPressArrow_14;
		UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669* L_15 = (UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)il2cpp_codegen_object_new(UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnityAction_1__ctor_m71C125B79EE35648CFC416CA7DBBC27C8DBAD45A(L_15, __this, (intptr_t)((void*)QuestPanel_OnPressArrow_m6A9A7D900969922A98F1C057E5D5804F5BF65C75_RuntimeMethod_var), NULL);
		Delegate_t* L_16;
		L_16 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_14, L_15, NULL);
		NullCheck(L_13);
		L_13->___onPressArrow_14 = ((UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)Castclass((RuntimeObject*)L_16, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___onPressArrow_14), (void*)((UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669*)Castclass((RuntimeObject*)L_16, UnityAction_1_t8FBFBC01962B7293F0E33F9D6F1CEAF2896D8669_il2cpp_TypeInfo_var)));
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Update_m3CC88E0B46817AB3F961582E39667F911D5844AC (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// base.Update();
		UIPanel_Update_mAD4842B93122D2CEBAB00905AFAF7BDAEB941754(__this, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::RefreshPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_RefreshPanel_m5E59FBF29721C34732036B1E7B17C2E685A485D2 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisQuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300_m918D75E2F91BEB3CAFA5E11B45D9598A0562768D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1A7304239A53274FC564A88DBDD3796741A8361D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0253E9BD65D9F841FBC4961834A00E333AC9F54E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m0401489FA06EC86F40E989B6E8A25D2399348D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1820A1F851481229612F9E924FF421394D5A45E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m61A556E38901010495D4D55CC890193D963D78F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8722F122071B929A03DB7A8326B533B0933F6332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRefreshPanelU3Eb__13_0_m7F5FE64FA7B45C389A384BFCF9CCF7039D76915D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* V_0 = NULL;
	float V_1 = 0.0f;
	Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* V_4 = NULL;
	QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* V_5 = NULL;
	Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* G_B16_0 = NULL;
	List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* G_B16_1 = NULL;
	Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* G_B15_0 = NULL;
	List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* G_B15_1 = NULL;
	{
		// foreach (QuestPanelLine line in lines)
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_0 = __this->___lines_15;
		NullCheck(L_0);
		Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 L_1;
		L_1 = List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3(L_0, List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461((&V_2), Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461_RuntimeMethod_var);
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
				// foreach (QuestPanelLine line in lines)
				QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_2;
				L_2 = Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_inline((&V_2), Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_RuntimeMethod_var);
				// line.Hide();
				NullCheck(L_2);
				QuestPanelLine_Hide_m46A605642B5F13001EA08A6B0E84E8E021FEB190(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (QuestPanelLine line in lines)
				bool L_3;
				L_3 = Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442((&V_2), Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442_RuntimeMethod_var);
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
		// if (show_failed && show_completed)
		bool L_4 = __this->___show_failed_9;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		bool L_5 = __this->___show_completed_10;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// all_quest = QuestData.GetAllStarted();
		il2cpp_codegen_runtime_class_init_inline(QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var);
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_6;
		L_6 = QuestData_GetAllStarted_m1528B52C7CC457FE99008F880D88D8DC87737B8C(NULL);
		V_0 = L_6;
		goto IL_0071;
	}

IL_004b:
	{
		// else if (show_completed)
		bool L_7 = __this->___show_completed_10;
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// all_quest = QuestData.GetAllActiveOrCompleted();
		il2cpp_codegen_runtime_class_init_inline(QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var);
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_8;
		L_8 = QuestData_GetAllActiveOrCompleted_m5E462646AC0C9F022D1C0A60FEDEF9B306E47CB3(NULL);
		V_0 = L_8;
		goto IL_0071;
	}

IL_005b:
	{
		// else if (show_failed)
		bool L_9 = __this->___show_failed_9;
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		// all_quest = QuestData.GetAllActiveOrFailed();
		il2cpp_codegen_runtime_class_init_inline(QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var);
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_10;
		L_10 = QuestData_GetAllActiveOrFailed_mF2376F1B3D8C495155A3B54CE95C8076CCC8F6A2(NULL);
		V_0 = L_10;
		goto IL_0071;
	}

IL_006b:
	{
		// all_quest = QuestData.GetAllActive();
		il2cpp_codegen_runtime_class_init_inline(QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588_il2cpp_TypeInfo_var);
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_11;
		L_11 = QuestData_GetAllActive_mCB8485B0E783CA9D4A5DFF51AE9229F00E479F98(NULL);
		V_0 = L_11;
	}

IL_0071:
	{
		// all_quest.Sort((p1, p2) =>
		// {
		//     return (p1.sort_order == p2.sort_order)
		//         ? p1.title.CompareTo(p2.title) : p1.sort_order.CompareTo(p2.sort_order);
		// });
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var);
		Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* L_13 = ((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1;
		Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* L_14 = L_13;
		G_B15_0 = L_14;
		G_B15_1 = L_12;
		if (L_14)
		{
			G_B16_0 = L_14;
			G_B16_1 = L_12;
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var);
		U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* L_15 = ((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* L_16 = (Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8*)il2cpp_codegen_object_new(Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Comparison_1__ctor_m2401A75F9ED1944A53B5BBC8D1F660E772DCA77A(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CRefreshPanelU3Eb__13_0_m7F5FE64FA7B45C389A384BFCF9CCF7039D76915D_RuntimeMethod_var), NULL);
		Comparison_1_tF8D9C7ACF65C6B015AD270CA9129E9104F39E7E8* L_17 = L_16;
		((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9__13_0_1), (void*)L_17);
		G_B16_0 = L_17;
		G_B16_1 = G_B15_1;
	}

IL_0091:
	{
		NullCheck(G_B16_1);
		List_1_Sort_m0401489FA06EC86F40E989B6E8A25D2399348D6A(G_B16_1, G_B16_0, List_1_Sort_m0401489FA06EC86F40E989B6E8A25D2399348D6A_RuntimeMethod_var);
		// foreach (QuestPanelLine line in lines)
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_18 = __this->___lines_15;
		NullCheck(L_18);
		Enumerator_tC241EE12DE0BFC055436195D2B65312B33995A88 L_19;
		L_19 = List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3(L_18, List_1_GetEnumerator_m261FDCFDD0D7418BE03512F2AC9746ED461A26A3_RuntimeMethod_var);
		V_2 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461((&V_2), Enumerator_Dispose_m3614FF89A63C2C5E747D93373D52A29DD3E59461_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b5_1;
			}

IL_00a4_1:
			{
				// foreach (QuestPanelLine line in lines)
				QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_20;
				L_20 = Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_inline((&V_2), Enumerator_get_Current_m93A5BBBABC8F4EC3AF54F0E0BD8102F9CB9707D2_RuntimeMethod_var);
				// Destroy(line.gameObject);
				NullCheck(L_20);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_21, NULL);
			}

IL_00b5_1:
			{
				// foreach (QuestPanelLine line in lines)
				bool L_22;
				L_22 = Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442((&V_2), Enumerator_MoveNext_mAA0C958CE024B296B3539B0DF5E5E3D5379D9442_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_00a4_1;
				}
			}
			{
				goto IL_00ce;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// lines.Clear();
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_23 = __this->___lines_15;
		NullCheck(L_23);
		List_1_Clear_m0253E9BD65D9F841FBC4961834A00E333AC9F54E_inline(L_23, List_1_Clear_m0253E9BD65D9F841FBC4961834A00E333AC9F54E_RuntimeMethod_var);
		// for (int i = 0; i < all_quest.Count; i++)
		V_3 = 0;
		goto IL_012c;
	}

IL_00dd:
	{
		// QuestData quest = all_quest[i];
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_26;
		L_26 = List_1_get_Item_m8722F122071B929A03DB7A8326B533B0933F6332(L_24, L_25, List_1_get_Item_m8722F122071B929A03DB7A8326B533B0933F6332_RuntimeMethod_var);
		V_4 = L_26;
		// if (MatchFilter(quest))
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_27 = V_4;
		bool L_28;
		L_28 = QuestPanel_MatchFilter_mF9F8A3E78ED10FDA4460F141C0FC35016B7F8FB0(__this, L_27, NULL);
		if (!L_28)
		{
			goto IL_0128;
		}
	}
	{
		// GameObject line_obj = Instantiate(line_template.gameObject, grid.transform);
		QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_29 = __this->___line_template_13;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_31 = __this->___grid_12;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_30, L_32, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// QuestPanelLine line = line_obj.GetComponent<QuestPanelLine>();
		NullCheck(L_33);
		QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_34;
		L_34 = GameObject_GetComponent_TisQuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300_m918D75E2F91BEB3CAFA5E11B45D9598A0562768D(L_33, GameObject_GetComponent_TisQuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300_m918D75E2F91BEB3CAFA5E11B45D9598A0562768D_RuntimeMethod_var);
		V_5 = L_34;
		// lines.Add(line);
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_35 = __this->___lines_15;
		QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_36 = V_5;
		NullCheck(L_35);
		List_1_Add_m1A7304239A53274FC564A88DBDD3796741A8361D_inline(L_35, L_36, List_1_Add_m1A7304239A53274FC564A88DBDD3796741A8361D_RuntimeMethod_var);
		// line.SetLine(quest);
		QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* L_37 = V_5;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_38 = V_4;
		NullCheck(L_37);
		QuestPanelLine_SetLine_mACE0AD9013A04E8EDFEC706B86E3A8FDC5D86037(L_37, L_38, NULL);
	}

IL_0128:
	{
		// for (int i = 0; i < all_quest.Count; i++)
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_012c:
	{
		// for (int i = 0; i < all_quest.Count; i++)
		int32_t L_40 = V_3;
		List_1_t5B11C93690B1FE628231CD3FFF3702FFD9638CD4* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m1820A1F851481229612F9E924FF421394D5A45E7_inline(L_41, List_1_get_Count_m1820A1F851481229612F9E924FF421394D5A45E7_RuntimeMethod_var);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_00dd;
		}
	}
	{
		// float height = (grid.spacing.y + grid.cellSize.y) * Mathf.CeilToInt(lines.Count / (float)nb_per_row) + 20f;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_43 = __this->___grid_12;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline(L_43, NULL);
		float L_45 = L_44.___y_1;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_46 = __this->___grid_12;
		NullCheck(L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline(L_46, NULL);
		float L_48 = L_47.___y_1;
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_49 = __this->___lines_15;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m61A556E38901010495D4D55CC890193D963D78F8_inline(L_49, List_1_get_Count_m61A556E38901010495D4D55CC890193D963D78F8_RuntimeMethod_var);
		int32_t L_51 = __this->___nb_per_row_14;
		int32_t L_52;
		L_52 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)L_50)/((float)L_51))), NULL);
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_45, L_48)), ((float)L_52))), (20.0f)));
		// content.sizeDelta = new Vector2(content.sizeDelta.x, height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = __this->___content_11;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54 = __this->___content_11;
		NullCheck(L_54);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_54, NULL);
		float L_56 = L_55.___x_0;
		float L_57 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_53, L_58, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::OnPressArrow(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_OnPressArrow_m6A9A7D900969922A98F1C057E5D5804F5BF65C75 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_arrow, const RuntimeMethod* method) 
{
	{
		// if (arrow.y < -0.5f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_arrow;
		float L_1 = L_0.___y_1;
		if ((!(((float)L_1) < ((float)(-0.5f)))))
		{
			goto IL_001b;
		}
	}
	{
		// filter_index++;
		int32_t L_2 = __this->___filter_index_17;
		__this->___filter_index_17 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001b:
	{
		// if (arrow.y > 0.5f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_arrow;
		float L_4 = L_3.___y_1;
		if ((!(((float)L_4) > ((float)(0.5f)))))
		{
			goto IL_0036;
		}
	}
	{
		// filter_index--;
		int32_t L_5 = __this->___filter_index_17;
		__this->___filter_index_17 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0036:
	{
		// filter_index = Mathf.Clamp(filter_index, -1, 2);
		int32_t L_6 = __this->___filter_index_17;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_6, (-1), 2, NULL);
		__this->___filter_index_17 = L_7;
		// if (filter_index < 0)
		int32_t L_8 = __this->___filter_index_17;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// Filter(QuestFilter.None);
		QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5(__this, 0, NULL);
	}

IL_0059:
	{
		// if (filter_index == 0 && filter != QuestFilter.Active)
		int32_t L_9 = __this->___filter_index_17;
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = __this->___filter_16;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		// Filter(QuestFilter.Active);
		QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5(__this, ((int32_t)10), NULL);
	}

IL_0073:
	{
		// if (filter_index == 1 && filter != QuestFilter.Completed)
		int32_t L_11 = __this->___filter_index_17;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_12 = __this->___filter_16;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)20))))
		{
			goto IL_008e;
		}
	}
	{
		// Filter(QuestFilter.Completed);
		QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5(__this, ((int32_t)20), NULL);
	}

IL_008e:
	{
		// if (filter_index == 2 && filter != QuestFilter.Failed)
		int32_t L_13 = __this->___filter_index_17;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_14 = __this->___filter_16;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)30))))
		{
			goto IL_00a9;
		}
	}
	{
		// Filter(QuestFilter.Failed);
		QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5(__this, ((int32_t)30), NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Boolean DialogueQuests.QuestPanel::MatchFilter(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuestPanel_MatchFilter_mF9F8A3E78ED10FDA4460F141C0FC35016B7F8FB0 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) 
{
	{
		// if (filter == QuestFilter.Active)
		int32_t L_0 = __this->___filter_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0011;
		}
	}
	{
		// return quest.IsActive();
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_1 = ___0_quest;
		NullCheck(L_1);
		bool L_2;
		L_2 = QuestData_IsActive_m59CB8A3EA390ABF7F2D837F1443A206DF26E6B33(L_1, NULL);
		return L_2;
	}

IL_0011:
	{
		// if (filter == QuestFilter.Completed)
		int32_t L_3 = __this->___filter_16;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0022;
		}
	}
	{
		// return quest.IsCompleted();
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_4 = ___0_quest;
		NullCheck(L_4);
		bool L_5;
		L_5 = QuestData_IsCompleted_mD1D6D84C9B2B44A57E93DB697A39828E8CBB4F39(L_4, NULL);
		return L_5;
	}

IL_0022:
	{
		// if (filter == QuestFilter.Failed)
		int32_t L_6 = __this->___filter_16;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_0033;
		}
	}
	{
		// return quest.IsFailed();
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_7 = ___0_quest;
		NullCheck(L_7);
		bool L_8;
		L_8 = QuestData_IsFailed_m97B5D0D983AD30AD70B430975130301DEC9E8386(L_7, NULL);
		return L_8;
	}

IL_0033:
	{
		// return true; //No filter
		return (bool)1;
	}
}
// System.Void DialogueQuests.QuestPanel::Filter(DialogueQuests.QuestFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, int32_t ___0_filter, const RuntimeMethod* method) 
{
	{
		// if (this.filter == filter)
		int32_t L_0 = __this->___filter_16;
		int32_t L_1 = ___0_filter;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		// this.filter = QuestFilter.None;
		__this->___filter_16 = 0;
		goto IL_0019;
	}

IL_0012:
	{
		// this.filter = filter;
		int32_t L_2 = ___0_filter;
		__this->___filter_16 = L_2;
	}

IL_0019:
	{
		// RefreshPanel();
		QuestPanel_RefreshPanel_m5E59FBF29721C34732036B1E7B17C2E685A485D2(__this, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::Show(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_Show_m3A4ED9D8CBB9DFB87BDC4927821D86BAD3028A7E (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, bool ___0_instant, const RuntimeMethod* method) 
{
	{
		// base.Show(instant);
		bool L_0 = ___0_instant;
		UIPanel_Show_m9C0F028E478025700C5E9973ABC2169F37D6F091(__this, L_0, NULL);
		// filter = QuestFilter.Active;
		__this->___filter_16 = ((int32_t)10);
		// filter_index = 0;
		__this->___filter_index_17 = 0;
		// RefreshPanel();
		QuestPanel_RefreshPanel_m5E59FBF29721C34732036B1E7B17C2E685A485D2(__this, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::TogglePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_TogglePanel_mDC44A3A986D47C3F9A898B2602F067EF66CF1658 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// if (IsVisible())
		bool L_0;
		L_0 = UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Hide();
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void DialogueQuests.UIPanel::Hide(System.Boolean) */, __this, (bool)0);
		return;
	}

IL_0010:
	{
		// Show();
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::HidePanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_HidePanel_mCCC6AED959CF02C69B19BCCA6DA90D3CFEB5948D (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// Hide();
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void DialogueQuests.UIPanel::Hide(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanel::ShowPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel_ShowPanel_m497580023F7179CF66471594A47CFE2733BFA87E (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// Show();
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, __this, (bool)0);
		// }
		return;
	}
}
// DialogueQuests.QuestFilter DialogueQuests.QuestPanel::GetFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuestPanel_GetFilter_mC540496EE7FD637543C24CC46E0DF7F9BEDEB14B (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// return filter;
		int32_t L_0 = __this->___filter_16;
		return L_0;
	}
}
// DialogueQuests.QuestPanel DialogueQuests.QuestPanel::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* QuestPanel_Get_m73C6F0A5E8CA40E770C4B5EED47EDD27D7AAD541 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0 = ((QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_StaticFields*)il2cpp_codegen_static_fields_for(QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var))->____instance_18;
		return L_0;
	}
}
// System.Void DialogueQuests.QuestPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanel__ctor_m637D1AEFDBA5E02E8E62246492E286B8A9F16226 (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF56C0BE2C87CBF61B9788397881DA2A4BE5E7638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool show_failed = true;
		__this->___show_failed_9 = (bool)1;
		// public bool show_completed = true;
		__this->___show_completed_10 = (bool)1;
		// public int nb_per_row = 2;
		__this->___nb_per_row_14 = 2;
		// private List<QuestPanelLine> lines = new List<QuestPanelLine>();
		List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706* L_0 = (List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706*)il2cpp_codegen_object_new(List_1_t6E9C42F5206DACA856BABCACC5587EDA77681706_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF56C0BE2C87CBF61B9788397881DA2A4BE5E7638(L_0, List_1__ctor_mF56C0BE2C87CBF61B9788397881DA2A4BE5E7638_RuntimeMethod_var);
		__this->___lines_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lines_15), (void*)L_0);
		UIPanel__ctor_m17CF8260E17364FB20866D68CC29E91DA2533EBD(__this, NULL);
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
// System.Void DialogueQuests.QuestPanel/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA28C02FC078B1B9A180E3E97488A0B58C1FE31E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* L_0 = (U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0*)il2cpp_codegen_object_new(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m673FED4C74E45D6D897CFE0318A0A9CFA6C0AF39(L_0, NULL);
		((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DialogueQuests.QuestPanel/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m673FED4C74E45D6D897CFE0318A0A9CFA6C0AF39 (U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 DialogueQuests.QuestPanel/<>c::<RefreshPanel>b__13_0(DialogueQuests.QuestData,DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRefreshPanelU3Eb__13_0_m7F5FE64FA7B45C389A384BFCF9CCF7039D76915D (U3CU3Ec_t35D93E4F07983E2CF2A3DD0507DD08B5A4D59BF0* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_p1, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___1_p2, const RuntimeMethod* method) 
{
	{
		// return (p1.sort_order == p2.sort_order)
		//     ? p1.title.CompareTo(p2.title) : p1.sort_order.CompareTo(p2.sort_order);
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_0 = ___0_p1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sort_order_8;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_2 = ___1_p2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___sort_order_8;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_4 = ___0_p1;
		NullCheck(L_4);
		int32_t* L_5 = (&L_4->___sort_order_8);
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_6 = ___1_p2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___sort_order_8;
		int32_t L_8;
		L_8 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586(L_5, L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_9 = ___0_p1;
		NullCheck(L_9);
		String_t* L_10 = L_9->___title_5;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_11 = ___1_p2;
		NullCheck(L_11);
		String_t* L_12 = L_11->___title_5;
		NullCheck(L_10);
		int32_t L_13;
		L_13 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_10, L_12, NULL);
		return L_13;
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
// System.Void DialogueQuests.QuestPanelFilter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelFilter_Start_mF7AFA72CB4AFB84B0674526B9CE0F0E2EAD6F5FB (QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisQuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_m3294FA4A0CDB4E41113084E87A159AD3280E1E6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanelFilter_OnClick_m67A67D71CB0EE662D7F7068AAD9E138E8CBC170F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quest_panel = GetComponentInParent<QuestPanel>();
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0;
		L_0 = Component_GetComponentInParent_TisQuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_m3294FA4A0CDB4E41113084E87A159AD3280E1E6E(__this, Component_GetComponentInParent_TisQuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_m3294FA4A0CDB4E41113084E87A159AD3280E1E6E_RuntimeMethod_var);
		__this->___quest_panel_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quest_panel_6), (void*)L_0);
		// Button button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		// button.onClick.AddListener(OnClick);
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)QuestPanelFilter_OnClick_m67A67D71CB0EE662D7F7068AAD9E138E8CBC170F_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelFilter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelFilter_Update_mDAE8568A6271330F8EBDBD00CD4E6B6A12DFC56E (QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (highlight != null && quest_panel != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___highlight_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_2 = __this->___quest_panel_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// highlight.enabled = quest_panel.GetFilter() == filter;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___highlight_5;
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_5 = __this->___quest_panel_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = QuestPanel_GetFilter_mC540496EE7FD637543C24CC46E0DF7F9BEDEB14B_inline(L_5, NULL);
		int32_t L_7 = __this->___filter_4;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0), NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelFilter::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelFilter_OnClick_m67A67D71CB0EE662D7F7068AAD9E138E8CBC170F (QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(quest_panel != null)
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0 = __this->___quest_panel_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// quest_panel.Filter(filter);
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_2 = __this->___quest_panel_6;
		int32_t L_3 = __this->___filter_4;
		NullCheck(L_2);
		QuestPanel_Filter_m876662A7BC49A135DE7938EA015E522817769EA5(L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelFilter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelFilter__ctor_mBED13CB3361ADE1152AE7ABBF482C9B0A05FE964 (QuestPanelFilter_t1E6B0101F3B1D2C8EAC22F2C0575CE1AAD9C8325* __this, const RuntimeMethod* method) 
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
// System.Void DialogueQuests.QuestPanelLine::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine_Awake_mEDDB70FC0C77255C979B8F2E5B05CDEE8B05CBD0 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelLine::SetLine(DialogueQuests.QuestData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine_SetLine_mACE0AD9013A04E8EDFEC706B86E3A8FDC5D86037 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* ___0_quest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B7_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B6_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B8_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B8_1 = NULL;
	{
		// quest_title.text = quest.GetTitle();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___quest_title_4;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_1 = ___0_quest;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = QuestData_GetTitle_m7B8A86978D98331E12D8D85F9524676571F09722(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if (quest_text != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___quest_text_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// quest_text.text = quest.GetDesc();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___quest_text_5;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_6 = ___0_quest;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = QuestData_GetDesc_mC16CF72FC5727CE1089412AD53CD99E6A3C3734A(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
	}

IL_0030:
	{
		// if (quest_icon != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___quest_icon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		// quest_icon.sprite = quest.icon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___quest_icon_6;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_11 = ___0_quest;
		NullCheck(L_11);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11->___icon_6;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_12, NULL);
		// quest_icon.enabled = quest.icon != null;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___quest_icon_6;
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_14 = ___0_quest;
		NullCheck(L_14);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = L_14->___icon_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, L_16, NULL);
	}

IL_0066:
	{
		// if (quest_completed != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___quest_completed_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00c0;
		}
	}
	{
		// bool completed = NarrativeData.Get().IsQuestCompleted(quest.quest_id);
		il2cpp_codegen_runtime_class_init_inline(NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035_il2cpp_TypeInfo_var);
		NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* L_19;
		L_19 = NarrativeData_Get_mC6E5A31FA37C09C4F8CB4CE13FC978B824B3103D(NULL);
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_20 = ___0_quest;
		NullCheck(L_20);
		String_t* L_21 = L_20->___quest_id_4;
		NullCheck(L_19);
		bool L_22;
		L_22 = NarrativeData_IsQuestCompleted_m2075C75F26151E4A25FA8CB52CA0D3B2316A47E9(L_19, L_21, NULL);
		V_0 = L_22;
		// bool failed = NarrativeData.Get().IsQuestFailed(quest.quest_id);
		NarrativeData_tD1572F383FEB31D863277F515312AB80E05A2035* L_23;
		L_23 = NarrativeData_Get_mC6E5A31FA37C09C4F8CB4CE13FC978B824B3103D(NULL);
		QuestData_t8CF44BF7038DB0BBCD011AB57E385B1C3B7D1588* L_24 = ___0_quest;
		NullCheck(L_24);
		String_t* L_25 = L_24->___quest_id_4;
		NullCheck(L_23);
		bool L_26;
		L_26 = NarrativeData_IsQuestFailed_m1E20E1FDFAE36AAF6642C4EADA0181907662078B(L_23, L_25, NULL);
		V_1 = L_26;
		// quest_completed.enabled = completed || failed;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___quest_completed_7;
		bool L_28 = V_0;
		bool L_29 = V_1;
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)((int32_t)((int32_t)L_28|(int32_t)L_29)), NULL);
		// quest_completed.sprite = completed ? success_sprite : fail_sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = __this->___quest_completed_7;
		bool L_31 = V_0;
		G_B6_0 = L_30;
		if (L_31)
		{
			G_B7_0 = L_30;
			goto IL_00b5;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = __this->___fail_sprite_9;
		G_B8_0 = L_32;
		G_B8_1 = G_B6_0;
		goto IL_00bb;
	}

IL_00b5:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33 = __this->___success_sprite_8;
		G_B8_0 = L_33;
		G_B8_1 = G_B7_0;
	}

IL_00bb:
	{
		NullCheck(G_B8_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B8_1, G_B8_0, NULL);
	}

IL_00c0:
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelLine::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine_Hide_m46A605642B5F13001EA08A6B0E84E8E021FEB190 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.QuestPanelLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestPanelLine__ctor_mF7ED6CE02497E9439CD26DC777EC6D267C77C673 (QuestPanelLine_t476500498DE9A34BD1DEA7F2EEF2F29F452ED300* __this, const RuntimeMethod* method) 
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
// System.Void DialogueQuests.TheUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheUI_Awake_mFF51FA4C303BEC706952693918E8FBFF993B4FA4 (TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_StaticFields*)il2cpp_codegen_static_fields_for(TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var))->____instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_StaticFields*)il2cpp_codegen_static_fields_for(TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var))->____instance_6), (void*)__this);
		// canvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___canvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_4), (void*)L_0);
		// rect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rect_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rect_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DialogueQuests.TheUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheUI_Start_m970E49924259980232B4A5E0BFB85B4E17373060 (TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* __this, const RuntimeMethod* method) 
{
	{
		// canvas.worldCamera = Camera.main;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.TheUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheUI_Update_mDBE909565D6075905A9F1C5A271210F860507DC8 (TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// DialogueQuests.TheUI DialogueQuests.TheUI::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* TheUI_Get_mBC8CF357EB1E43DDE56767D52DABFAFDC85F5FC6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* L_0 = ((TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_StaticFields*)il2cpp_codegen_static_fields_for(TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED_il2cpp_TypeInfo_var))->____instance_6;
		return L_0;
	}
}
// System.Void DialogueQuests.TheUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheUI__ctor_m77DE54D1067F303F04888254DE3C1CAE5DE03D33 (TheUI_t7C4524540F0F0879F958608C0C299BD3BA5F6AED* __this, const RuntimeMethod* method) 
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
// System.Void DialogueQuests.UIPanel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Awake_m4309BFA39ED7D2856FB0254666B0CB364EE83CC4 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas_group = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___canvas_group_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_group_7), (void*)L_0);
		// canvas_group.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->___canvas_group_7;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_1, (0.0f), NULL);
		// visible = false;
		__this->___visible_8 = (bool)0;
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Start_m3795F7BA105EC54EC0C19070262BD3D9E2DD1A6F (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Update_mAD4842B93122D2CEBAB00905AFAF7BDAEB941754 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float add = visible ? display_speed : -display_speed;
		bool L_0 = __this->___visible_8;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = __this->___display_speed_4;
		G_B3_0 = ((-L_1));
		goto IL_0017;
	}

IL_0011:
	{
		float L_2 = __this->___display_speed_4;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		// float alpha = Mathf.Clamp01(canvas_group.alpha + add * Time.deltaTime);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___canvas_group_7;
		NullCheck(L_3);
		float L_4;
		L_4 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_3, NULL);
		float L_5 = V_0;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)))), NULL);
		V_1 = L_7;
		// canvas_group.alpha = alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___canvas_group_7;
		float L_9 = V_1;
		NullCheck(L_8);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_8, L_9, NULL);
		// if (!visible && alpha < 0.01f)
		bool L_10 = __this->___visible_8;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		float L_11 = V_1;
		if ((!(((float)L_11) < ((float)(0.00999999978f)))))
		{
			goto IL_0053;
		}
	}
	{
		// AfterHide();
		VirtualActionInvoker0::Invoke(10 /* System.Void DialogueQuests.UIPanel::AfterHide() */, __this);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::Toggle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Toggle_m9DCE9BD5BFD02670F99203BEA8FEA118E5BEFBB1 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, bool ___0_instant, const RuntimeMethod* method) 
{
	{
		// if (IsVisible())
		bool L_0;
		L_0 = UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// Hide(instant);
		bool L_1 = ___0_instant;
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void DialogueQuests.UIPanel::Hide(System.Boolean) */, __this, L_1);
		return;
	}

IL_0010:
	{
		// Show(instant);
		bool L_2 = ___0_instant;
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, __this, L_2);
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::Show(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Show_m9C0F028E478025700C5E9973ABC2169F37D6F091 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, bool ___0_instant, const RuntimeMethod* method) 
{
	{
		// visible = true;
		__this->___visible_8 = (bool)1;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// if (instant || display_speed < 0.01f)
		bool L_1 = ___0_instant;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = __this->___display_speed_4;
		if ((!(((float)L_2) < ((float)(0.00999999978f)))))
		{
			goto IL_0033;
		}
	}

IL_0023:
	{
		// canvas_group.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___canvas_group_7;
		NullCheck(L_3);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_3, (1.0f), NULL);
	}

IL_0033:
	{
		// if (onShow != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = __this->___onShow_5;
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// onShow.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = __this->___onShow_5;
		NullCheck(L_5);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_5, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_Hide_m89905B7DC3EDA8DF225979FA22D20905170FC42F (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, bool ___0_instant, const RuntimeMethod* method) 
{
	{
		// visible = false;
		__this->___visible_8 = (bool)0;
		// if (instant || display_speed < 0.01f)
		bool L_0 = ___0_instant;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		float L_1 = __this->___display_speed_4;
		if ((!(((float)L_1) < ((float)(0.00999999978f)))))
		{
			goto IL_0027;
		}
	}

IL_0017:
	{
		// canvas_group.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___canvas_group_7;
		NullCheck(L_2);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_2, (0.0f), NULL);
	}

IL_0027:
	{
		// if (onHide != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = __this->___onHide_6;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// onHide.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = __this->___onHide_6;
		NullCheck(L_4);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_4, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::SetVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_SetVisible_mD970BDABCC9ADBCCFB1835E1DA464C9598C6B8F4 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, bool ___0_visi, const RuntimeMethod* method) 
{
	{
		// if (!visible && visi)
		bool L_0 = __this->___visible_8;
		bool L_1 = ___0_visi;
		if (!((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		// Show();
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, __this, (bool)0);
		return;
	}

IL_0015:
	{
		// else if (visible && !visi)
		bool L_2 = __this->___visible_8;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = ___0_visi;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Hide();
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void DialogueQuests.UIPanel::Hide(System.Boolean) */, __this, (bool)0);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.UIPanel::AfterHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel_AfterHide_mFB4039F9A2B1A07A8373E81E906B88A1A48689AF (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean DialogueQuests.UIPanel::IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428 (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// return visible;
		bool L_0 = __this->___visible_8;
		return L_0;
	}
}
// System.Single DialogueQuests.UIPanel::GetAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIPanel_GetAlpha_mAD979B366DB6686E4773774C892DEC25973A2D7F (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// return canvas_group.alpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___canvas_group_7;
		NullCheck(L_0);
		float L_1;
		L_1 = CanvasGroup_get_alpha_mBFEA193D2886B27CC53B31F90F7A1659B67ED6DF(L_0, NULL);
		return L_1;
	}
}
// System.Void DialogueQuests.UIPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPanel__ctor_m17CF8260E17364FB20866D68CC29E91DA2533EBD (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// public float display_speed = 2f;
		__this->___display_speed_4 = (2.0f);
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
// System.Void DialogueQuests.Demo.DemoUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUI_Start_m0B7657ACE52D1DFD2622E222777D0F421514BD3E (DemoUI_t981DD9E8B6E0C3D91D0BFE9FA50374E06A42FB9D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.DemoUI::OnClickJournal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUI_OnClickJournal_m7CAB9AB96A1C4E8038B1CD42D6AB9BD3A046873C (DemoUI_t981DD9E8B6E0C3D91D0BFE9FA50374E06A42FB9D* __this, const RuntimeMethod* method) 
{
	{
		// QuestPanel.Get().Show();
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0;
		L_0 = QuestPanel_Get_m73C6F0A5E8CA40E770C4B5EED47EDD27D7AAD541_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void DialogueQuests.UIPanel::Show(System.Boolean) */, L_0, (bool)0);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.DemoUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoUI__ctor_mFA12DDFC76CA3F32B26A57650D3A83CF5713B9C8 (DemoUI_t981DD9E8B6E0C3D91D0BFE9FA50374E06A42FB9D* __this, const RuntimeMethod* method) 
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
// System.Void DialogueQuests.Demo.ExitZoneDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitZoneDemo_Update_m4ABBFC2B30D0CEE67F40EFE21B7278790F9256EE (ExitZoneDemo_t54F7B0D9004B0D96C3D5A223039E3C0630B167FA* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime;
		float L_0 = __this->___timer_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.ExitZoneDemo::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitZoneDemo_OnTriggerEnter_m7EBAAFE3A4F76C05217936722EC22F244150EBBE (ExitZoneDemo_t54F7B0D9004B0D96C3D5A223039E3C0630B167FA* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FD81ED2C1377462F6BB4ADC7BCB4AC114BF2B79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!transition && timer > 1f && collision.GetComponent<PlayerCharacterDemo>())
		bool L_0 = __this->___transition_6;
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		float L_1 = __this->___timer_5;
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_collision;
		NullCheck(L_2);
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_3;
		L_3 = Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4(L_2, Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		// if (SceneNav.DoSceneExist(scene))
		String_t* L_5 = __this->___scene_4;
		bool L_6;
		L_6 = SceneNav_DoSceneExist_m8C02E0EC0CD7D980360C0AE95F7BFCBFC1D39369(L_5, NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// transition = true;
		__this->___transition_6 = (bool)1;
		// SceneNav.GoTo(scene);
		String_t* L_7 = __this->___scene_4;
		SceneNav_GoTo_m6E6E7C58484BC03F2C5017A7876106B788817C42(L_7, NULL);
		return;
	}

IL_0042:
	{
		// Debug.Log("Scene don't exist: " + scene);
		String_t* L_8 = __this->___scene_4;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6FD81ED2C1377462F6BB4ADC7BCB4AC114BF2B79, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.ExitZoneDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitZoneDemo__ctor_m0013D3B5E2C695D8529C48732A02F323A0D446EF (ExitZoneDemo_t54F7B0D9004B0D96C3D5A223039E3C0630B167FA* __this, const RuntimeMethod* method) 
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
// System.Void DialogueQuests.Demo.PlayerCharacterAnimDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterAnimDemo_Awake_m1B3CCCA880043106F54C3402DAAFEF65B2CAABF0 (PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterAnimDemo_OnTriggerAnim_m4DE1884391F95BCBFC4F160112A48A945F68AEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var))->____instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var))->____instance_7), (void*)__this);
		// character = GetComponent<PlayerCharacterDemo>();
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_0;
		L_0 = Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4(__this, Component_GetComponent_TisPlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_m6085B65B726732FFA34319D7C7695DDC7EABCEF4_RuntimeMethod_var);
		__this->___character_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___character_5), (void*)L_0);
		// animator = GetComponentInChildren<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000(__this, Component_GetComponentInChildren_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mDB9FC26B94B8EE9CF1F88BFEC75DF06CC2E3A000_RuntimeMethod_var);
		__this->___animator_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_1);
		// character.onTriggerAnim += OnTriggerAnim;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_2 = __this->___character_5;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_3 = L_2;
		NullCheck(L_3);
		UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* L_4 = L_3->___onTriggerAnim_10;
		UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* L_5 = (UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1*)il2cpp_codegen_object_new(UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_2__ctor_mC5C318ECB4A5AB91924E2900BAE3A59A8CA8D305(L_5, __this, (intptr_t)((void*)PlayerCharacterAnimDemo_OnTriggerAnim_m4DE1884391F95BCBFC4F160112A48A945F68AEDD_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onTriggerAnim_10 = ((UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1*)Castclass((RuntimeObject*)L_6, UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onTriggerAnim_10), (void*)((UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1*)Castclass((RuntimeObject*)L_6, UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1_il2cpp_TypeInfo_var)));
		// if (animator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterAnimDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterAnimDemo_Update_m281A193487C2FEAFF47B5D2EADB1881614E4BB42 (PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* __this, const RuntimeMethod* method) 
{
	{
		// if (animator.enabled)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// animator.SetBool(move_anim, character.IsMoving());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_6;
		String_t* L_3 = __this->___move_anim_4;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_4 = __this->___character_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = PlayerCharacterDemo_IsMoving_m4C0F2972DF874FC5DEFD68F56F279EF51639C237(L_4, NULL);
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, L_3, L_5, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterAnimDemo::OnTriggerAnim(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterAnimDemo_OnTriggerAnim_m4DE1884391F95BCBFC4F160112A48A945F68AEDD (PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* __this, String_t* ___0_anim, float ___1_duration, const RuntimeMethod* method) 
{
	{
		// if(!string.IsNullOrEmpty(anim))
		String_t* L_0 = ___0_anim;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// animator.SetTrigger(anim);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_6;
		String_t* L_3 = ___0_anim;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, L_3, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// DialogueQuests.Demo.PlayerCharacterAnimDemo DialogueQuests.Demo.PlayerCharacterAnimDemo::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* PlayerCharacterAnimDemo_Get_m1E92C75FBB7B005A04B44002F9396904AD6BE5E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* L_0 = ((PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97_il2cpp_TypeInfo_var))->____instance_7;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterAnimDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterAnimDemo__ctor_mCF08235D3715074B6DCEB613174A9020B7FD3D7F (PlayerCharacterAnimDemo_t4062CA2054E520754607685570600212B6327D97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string move_anim = "Move";
		__this->___move_anim_4 = _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___move_anim_4), (void*)_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
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
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_Awake_m4AC708BFF42B796ADB27C1D31480B400B73D068B (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var))->____instance_24 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var))->____instance_24), (void*)__this);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_11), (void*)L_0);
		// collide = GetComponentInChildren<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_1;
		L_1 = Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB(__this, Component_GetComponentInChildren_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_m1F93042AD3EE0FA7BBC4E1345164738262F23FAB_RuntimeMethod_var);
		__this->___collide_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collide_12), (void*)L_1);
		// facing = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		__this->___facing_14 = L_3;
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_Start_m4F5146DFF01255C5991BDFEDA578720908B38A58 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_OnClickFloor_mBED3F5EDBC03C3C1DFD14139D04C29AFC386D3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_OnClick_m9D0BE2A13FD5E24AF19D969201265A6E6541352D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_OnRightClick_m6F42D836237F5E06FAD56CF696491BB3B5D042C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerControlsMouseDemo mouse_controls = PlayerControlsMouseDemo.Get();
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_0;
		L_0 = PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D_inline(NULL);
		// mouse_controls.onClickFloor += OnClickFloor;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_1 = L_0;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_2 = L_1;
		NullCheck(L_2);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_3 = L_2->___onClickFloor_8;
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_4 = (UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)il2cpp_codegen_object_new(UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m9C4E9F90A4680E4423C859C1AD285F473ABBC596(L_4, __this, (intptr_t)((void*)PlayerCharacterDemo_OnClickFloor_mBED3F5EDBC03C3C1DFD14139D04C29AFC386D3B2_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___onClickFloor_8 = ((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_5, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___onClickFloor_8), (void*)((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_5, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var)));
		// mouse_controls.onClick += OnClick;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_6 = L_1;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_7 = L_6;
		NullCheck(L_7);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_8 = L_7->___onClick_6;
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_9 = (UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)il2cpp_codegen_object_new(UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m9C4E9F90A4680E4423C859C1AD285F473ABBC596(L_9, __this, (intptr_t)((void*)PlayerCharacterDemo_OnClick_m9D0BE2A13FD5E24AF19D969201265A6E6541352D_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		NullCheck(L_7);
		L_7->___onClick_6 = ((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_10, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___onClick_6), (void*)((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_10, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var)));
		// mouse_controls.onRightClick += OnRightClick;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_11 = L_6;
		NullCheck(L_11);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_12 = L_11->___onRightClick_7;
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_13 = (UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)il2cpp_codegen_object_new(UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_1__ctor_m9C4E9F90A4680E4423C859C1AD285F473ABBC596(L_13, __this, (intptr_t)((void*)PlayerCharacterDemo_OnRightClick_m6F42D836237F5E06FAD56CF696491BB3B5D042C6_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		NullCheck(L_11);
		L_11->___onRightClick_7 = ((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_14, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___onRightClick_7), (void*)((UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C*)Castclass((RuntimeObject*)L_14, UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_FixedUpdate_mE541186D8495892399DF2A05FB88EAADD8FA1709 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B14_0 = 0;
	{
		// PlayerControlsDemo controls = PlayerControlsDemo.Get();
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_0;
		L_0 = PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45_inline(NULL);
		V_0 = L_0;
		// PlayerControlsMouseDemo mcontrols = PlayerControlsMouseDemo.Get();
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_1;
		L_1 = PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D_inline(NULL);
		// Vector3 tmove = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_2;
		// auto_move_timer += Time.fixedDeltaTime;
		float L_3 = __this->___auto_move_timer_20;
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___auto_move_timer_20 = ((float)il2cpp_codegen_add(L_3, L_4));
		// if (auto_move && auto_move_timer > 0.02f) //auto_move_timer to let the navmesh time to calculate a path
		bool L_5 = __this->___auto_move_17;
		if (!L_5)
		{
			goto IL_00c5;
		}
	}
	{
		float L_6 = __this->___auto_move_timer_20;
		if ((!(((float)L_6) > ((float)(0.0199999996f)))))
		{
			goto IL_00c5;
		}
	}
	{
		// Vector3 move_dir_total = auto_move_target - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___auto_move_target_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		V_4 = L_10;
		// Vector3 move_dir_next = auto_move_target_next - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___auto_move_target_next_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		V_5 = L_14;
		// Vector3 move_dir = move_dir_next.normalized * Mathf.Min(move_dir_total.magnitude, 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_17;
		L_17 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_16, (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_17, NULL);
		V_6 = L_18;
		// move_dir.y = 0f;
		(&V_6)->___y_3 = (0.0f);
		// float move_dist = Mathf.Min(move_speed , move_dir.magnitude * 10f);
		float L_19 = __this->___move_speed_4;
		float L_20;
		L_20 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		float L_21;
		L_21 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_19, ((float)il2cpp_codegen_multiply(L_20, (10.0f))), NULL);
		V_7 = L_21;
		// tmove = move_dir.normalized * move_dist;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		float L_23 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		V_1 = L_24;
		goto IL_0100;
	}

IL_00c5:
	{
		// Vector2 control_move = controls.GetMove();
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_25 = V_0;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = PlayerControlsDemo_GetMove_mA636C81662919E253A0D069754FD0FEA2AAF6C0D_inline(L_25, NULL);
		V_8 = L_26;
		// Vector3 cam_move = TheCameraDemo.Get().GetRotation() * new Vector3(control_move.x, 0f, control_move.y);
		TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* L_27;
		L_27 = TheCameraDemo_Get_m1810660AEB8CBD4764B846572F57407AEEA9B8F5_inline(NULL);
		NullCheck(L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = TheCameraDemo_GetRotation_m2E4EB33E602743B37313E4EFF53B2FBFB14C23E3(L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_8;
		float L_30 = L_29.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_8;
		float L_32 = L_31.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_30, (0.0f), L_32, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_28, L_33, NULL);
		// tmove = cam_move * move_speed;
		float L_35 = __this->___move_speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		V_1 = L_36;
	}

IL_0100:
	{
		// if (is_action)
		bool L_37 = __this->___is_action_23;
		if (!L_37)
		{
			goto IL_010e;
		}
	}
	{
		// tmove = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_38;
	}

IL_010e:
	{
		// DetectGrounded();
		PlayerCharacterDemo_DetectGrounded_mDA7DD97D504110B7740A56ECC70BC05840E31156(__this, NULL);
		// if (!is_grounded )
		bool L_39 = __this->___is_grounded_21;
		if (L_39)
		{
			goto IL_0133;
		}
	}
	{
		// tmove += Vector3.down * fall_speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_42 = __this->___fall_speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_43, NULL);
		V_1 = L_44;
	}

IL_0133:
	{
		// move = Vector3.Lerp(move, tmove, move_accel * Time.fixedDeltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___move_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		float L_47 = __this->___move_accel_5;
		float L_48;
		L_48 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_45, L_46, ((float)il2cpp_codegen_multiply(L_47, L_48)), NULL);
		__this->___move_13 = L_49;
		// rigid.velocity = move;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_50 = __this->___rigid_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->___move_13;
		NullCheck(L_50);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_50, L_51, NULL);
		// if (!is_action && IsMoving())
		bool L_52 = __this->___is_action_23;
		if (L_52)
		{
			goto IL_01a1;
		}
	}
	{
		bool L_53;
		L_53 = PlayerCharacterDemo_IsMoving_m4C0F2972DF874FC5DEFD68F56F279EF51639C237(__this, NULL);
		if (!L_53)
		{
			goto IL_01a1;
		}
	}
	{
		// facing = new Vector3(move.x, 0f, move.z).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___move_13);
		float L_55 = L_54->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = (&__this->___move_13);
		float L_57 = L_56->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), L_55, (0.0f), L_57, /*hidden argument*/NULL);
		V_9 = L_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_9), NULL);
		__this->___facing_14 = L_59;
	}

IL_01a1:
	{
		// Quaternion targ_rot = Quaternion.LookRotation(facing, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___facing_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_60, L_61, NULL);
		V_2 = L_62;
		// rigid.MoveRotation(Quaternion.RotateTowards(rigid.rotation, targ_rot, rotate_speed * Time.fixedDeltaTime));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_63 = __this->___rigid_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_64 = __this->___rigid_11;
		NullCheck(L_64);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65;
		L_65 = Rigidbody_get_rotation_m07882A7024FB3F96BA13EC577A96163BBB621AA1(L_64, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66 = V_2;
		float L_67 = __this->___rotate_speed_6;
		float L_68;
		L_68 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
		L_69 = Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline(L_65, L_66, ((float)il2cpp_codegen_multiply(L_67, L_68)), NULL);
		NullCheck(L_63);
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_63, L_69, NULL);
		// DetectFronted();
		PlayerCharacterDemo_DetectFronted_mCC4F9BF10AA3586296B4F841E79947D6C3BC0C15(__this, NULL);
		// Vector3 last_frame_travel = transform.position - prev_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___prev_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_71, L_72, NULL);
		V_3 = L_73;
		// move_average = Vector3.MoveTowards(move_average, last_frame_travel, 1f * Time.fixedDeltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = __this->___move_average_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_3;
		float L_76;
		L_76 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_74, L_75, ((float)il2cpp_codegen_multiply((1.0f), L_76)), NULL);
		__this->___move_average_15 = L_77;
		// prev_pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_78, NULL);
		__this->___prev_pos_16 = L_79;
		// bool stuck_somewhere = move_average.magnitude < 0.02f && auto_move_timer > 1f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_80 = (&__this->___move_average_15);
		float L_81;
		L_81 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_80, NULL);
		if ((!(((float)L_81) < ((float)(0.0199999996f)))))
		{
			goto IL_0246;
		}
	}
	{
		float L_82 = __this->___auto_move_timer_20;
		G_B14_0 = ((((float)L_82) > ((float)(1.0f)))? 1 : 0);
		goto IL_0247;
	}

IL_0246:
	{
		G_B14_0 = 0;
	}

IL_0247:
	{
		// if (stuck_somewhere)
		if (!G_B14_0)
		{
			goto IL_0250;
		}
	}
	{
		// auto_move = false;
		__this->___auto_move_17 = (bool)0;
	}

IL_0250:
	{
		// if (controls.IsMoving())
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_83 = V_0;
		NullCheck(L_83);
		bool L_84;
		L_84 = PlayerControlsDemo_IsMoving_mA1887F51CD11927B0AF0BD9E75FC1777638753F3(L_83, NULL);
		if (!L_84)
		{
			goto IL_025f;
		}
	}
	{
		// auto_move = false;
		__this->___auto_move_17 = (bool)0;
	}

IL_025f:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_Update_mF13ABEF0BF068B111B48E6C4FAF420341C921D20 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// PlayerControlsDemo controls = PlayerControlsDemo.Get();
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_0;
		L_0 = PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45_inline(NULL);
		V_0 = L_0;
		// Vector3 move_dir = auto_move_target - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___auto_move_target_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_1 = L_4;
		// if (auto_move && !is_action && move_dir.magnitude < 0.35f)
		bool L_5 = __this->___auto_move_17;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		bool L_6 = __this->___is_action_23;
		if (L_6)
		{
			goto IL_0042;
		}
	}
	{
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		if ((!(((float)L_7) < ((float)(0.349999994f)))))
		{
			goto IL_0042;
		}
	}
	{
		// auto_move = false;
		__this->___auto_move_17 = (bool)0;
	}

IL_0042:
	{
		// if (!is_action)
		bool L_8 = __this->___is_action_23;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (controls.IsPressAction())
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = PlayerControlsDemo_IsPressAction_m16C6F90F1AD6A15AFF0B3AAD3D91DC3176750F5C_inline(L_9, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::DetectGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_DetectGrounded_mDA7DD97D504110B7740A56ECC70BC05840E31156 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_10;
	memset((&V_10), 0, sizeof(V_10));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		// Vector3 scale = transform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		V_0 = L_1;
		// float hradius = collide.height * scale.y * 0.5f + ground_detect_dist; //radius is half the height minus offset
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___collide_12;
		NullCheck(L_2);
		float L_3;
		L_3 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		float L_6 = __this->___ground_detect_dist_8;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_5)), (0.5f))), L_6));
		// float radius = collide.radius * (scale.x + scale.y) * 0.5f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7 = __this->___collide_12;
		NullCheck(L_7);
		float L_8;
		L_8 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___y_3;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_add(L_10, L_12)))), (0.5f)));
		// Vector3 center = collide.transform.position + Vector3.Scale(collide.center, scale);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_13 = __this->___collide_12;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_16 = __this->___collide_12;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_19, NULL);
		// Vector3 p1 = center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20;
		V_3 = L_21;
		// Vector3 p2 = center + Vector3.left * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_25, NULL);
		V_4 = L_26;
		// Vector3 p3 = center + Vector3.right * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_29 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_30, NULL);
		V_5 = L_31;
		// Vector3 p4 = center + Vector3.forward * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_34 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_35, NULL);
		V_6 = L_36;
		// Vector3 p5 = center + Vector3.back * radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_39, NULL);
		// bool f1 = Physics.Raycast(p1, Vector3.down, out h1, hradius, ground_layer.value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_43 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_44 = (&__this->___ground_layer_9);
		int32_t L_45;
		L_45 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_44, NULL);
		bool L_46;
		L_46 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_41, L_42, (&V_7), L_43, L_45, NULL);
		V_12 = L_46;
		// bool f2 = Physics.Raycast(p2, Vector3.down, out h2, hradius, ground_layer.value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_49 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_50 = (&__this->___ground_layer_9);
		int32_t L_51;
		L_51 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_50, NULL);
		bool L_52;
		L_52 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_47, L_48, (&V_8), L_49, L_51, NULL);
		V_13 = L_52;
		// bool f3 = Physics.Raycast(p3, Vector3.down, out h3, hradius, ground_layer.value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_55 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_56 = (&__this->___ground_layer_9);
		int32_t L_57;
		L_57 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_56, NULL);
		bool L_58;
		L_58 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_53, L_54, (&V_9), L_55, L_57, NULL);
		V_14 = L_58;
		// bool f4 = Physics.Raycast(p4, Vector3.down, out h4, hradius, ground_layer.value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_61 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_62 = (&__this->___ground_layer_9);
		int32_t L_63;
		L_63 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_62, NULL);
		bool L_64;
		L_64 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_59, L_60, (&V_10), L_61, L_63, NULL);
		V_15 = L_64;
		// bool f5 = Physics.Raycast(p5, Vector3.down, out h5, hradius, ground_layer.value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_66 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_67 = (&__this->___ground_layer_9);
		int32_t L_68;
		L_68 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_67, NULL);
		bool L_69;
		L_69 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_40, L_65, (&V_11), L_66, L_68, NULL);
		V_16 = L_69;
		// is_grounded = f1 || f2 || f3 || f4 || f5;
		bool L_70 = V_12;
		bool L_71 = V_13;
		bool L_72 = V_14;
		bool L_73 = V_15;
		bool L_74 = V_16;
		__this->___is_grounded_21 = (bool)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_70|(int32_t)L_71))|(int32_t)L_72))|(int32_t)L_73))|(int32_t)L_74));
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::DetectFronted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_DetectFronted_mCC4F9BF10AA3586296B4F841E79947D6C3BC0C15 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// Vector3 scale = transform.lossyScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_0, NULL);
		V_0 = L_1;
		// float hradius = collide.height * scale.y * 0.5f - 0.02f; //radius is half the height minus offset
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___collide_12;
		NullCheck(L_2);
		float L_3;
		L_3 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_5)), (0.5f))), (0.0199999996f)));
		// float radius = collide.radius * (scale.x + scale.y) * 0.5f + 0.5f;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_6 = __this->___collide_12;
		NullCheck(L_6);
		float L_7;
		L_7 = CapsuleCollider_get_radius_m2462B43ECAC92386AAED85AA1DFD66440972D9D5(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_add(L_9, L_11)))), (0.5f))), (0.5f)));
		// Vector3 center = collide.transform.position + Vector3.Scale(collide.center, scale);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___collide_12;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_15 = __this->___collide_12;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_18, NULL);
		// Vector3 p1 = center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		V_3 = L_20;
		// Vector3 p2 = center + Vector3.up * hradius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
		V_4 = L_25;
		// Vector3 p3 = center + Vector3.down * hradius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_28, NULL);
		// bool f1 = Physics.Raycast(p1, facing, out h1, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___facing_14;
		float L_32 = V_2;
		bool L_33;
		L_33 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_30, L_31, (&V_5), L_32, NULL);
		V_8 = L_33;
		// bool f2 = Physics.Raycast(p2, facing, out h2, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___facing_14;
		float L_36 = V_2;
		bool L_37;
		L_37 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_34, L_35, (&V_6), L_36, NULL);
		V_9 = L_37;
		// bool f3 = Physics.Raycast(p3, facing, out h3, radius);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___facing_14;
		float L_39 = V_2;
		bool L_40;
		L_40 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_29, L_38, (&V_7), L_39, NULL);
		V_10 = L_40;
		// is_fronted = f1 || f2 || f3;
		bool L_41 = V_8;
		bool L_42 = V_9;
		bool L_43 = V_10;
		__this->___is_fronted_22 = (bool)((int32_t)(((int32_t)((int32_t)L_41|(int32_t)L_42))|(int32_t)L_43));
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::FaceTorward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_FaceTorward_m54B538B206A4C392C35708944F2B5B224C9DD451 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 face = (pos - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		V_0 = L_3;
		// face.y = 0f;
		(&V_0)->___y_3 = (0.0f);
		// if (face.magnitude > 0.01f)
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_4) > ((float)(0.00999999978f)))))
		{
			goto IL_0039;
		}
	}
	{
		// facing = face.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___facing_14 = L_5;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::TriggerAnim(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_TriggerAnim_m4F7E7D8C1B6B1D1200252B84AB30E8B9A57C8F61 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, String_t* ___0_anim, float ___1_duration, const RuntimeMethod* method) 
{
	{
		// if (onTriggerAnim != null)
		UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* L_0 = __this->___onTriggerAnim_10;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// onTriggerAnim.Invoke(anim, duration);
		UnityAction_2_t0AB59CCEC6E1451CE8689A6B4E4B7F5D03BF17E1* L_1 = __this->___onTriggerAnim_10;
		String_t* L_2 = ___0_anim;
		float L_3 = ___1_duration;
		NullCheck(L_1);
		UnityAction_2_Invoke_m1AF611E96C26F8336E65B998639DFE53977F4FA0_inline(L_1, L_2, L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::TriggerAction(System.String,UnityEngine.Vector3,System.Single,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_TriggerAction_mDA7F0DAC3BAD118A86EB6688DD118BE6FFB0E556 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, String_t* ___0_anim, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_face_at, float ___2_duration, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___3_callback, const RuntimeMethod* method) 
{
	{
		// if (!is_action)
		bool L_0 = __this->___is_action_23;
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		// FaceTorward(face_at);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_face_at;
		PlayerCharacterDemo_FaceTorward_m54B538B206A4C392C35708944F2B5B224C9DD451(__this, L_1, NULL);
		// TriggerAnim(anim, duration);
		String_t* L_2 = ___0_anim;
		float L_3 = ___2_duration;
		PlayerCharacterDemo_TriggerAnim_m4F7E7D8C1B6B1D1200252B84AB30E8B9A57C8F61(__this, L_2, L_3, NULL);
		// StartCoroutine(RunAction(duration, callback));
		float L_4 = ___2_duration;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = ___3_callback;
		RuntimeObject* L_6;
		L_6 = PlayerCharacterDemo_RunAction_m9DD8E00EC77B21FF06C4F6D2B69A93B08BDAACDF(__this, L_4, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogueQuests.Demo.PlayerCharacterDemo::RunAction(System.Single,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCharacterDemo_RunAction_m9DD8E00EC77B21FF06C4F6D2B69A93B08BDAACDF (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, float ___0_action_duration, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* L_0 = (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F*)il2cpp_codegen_object_new(U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRunActionU3Ed__30__ctor_mA39ABD773C4F2F6738800EA96C7B0ED4F2E3AAD1(L_0, 0, NULL);
		U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* L_2 = L_1;
		float L_3 = ___0_action_duration;
		NullCheck(L_2);
		L_2->___action_duration_3 = L_3;
		U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* L_4 = L_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = ___1_callback;
		NullCheck(L_4);
		L_4->___callback_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___callback_4), (void*)L_5);
		return L_4;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::MoveTo(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_MoveTo_mF827885398BE49A52E61E50C5A4F4D6A9A79A59C (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// auto_move = true;
		__this->___auto_move_17 = (bool)1;
		// auto_move_target = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		__this->___auto_move_target_18 = L_0;
		// auto_move_target_next = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_pos;
		__this->___auto_move_target_next_19 = L_1;
		// auto_move_timer = 0f;
		__this->___auto_move_timer_20 = (0.0f);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::StopMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_StopMove_mD948F8ED8D2262DCE321DC610F4D8AB69BD91BFF (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	{
		// auto_move = false;
		__this->___auto_move_17 = (bool)0;
		// auto_move_target = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___auto_move_target_18 = L_1;
		// move = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___move_13 = L_2;
		// rigid.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rigid_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::OnClick(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_OnClick_m9D0BE2A13FD5E24AF19D969201265A6E6541352D (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::OnRightClick(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_OnRightClick_m6F42D836237F5E06FAD56CF696491BB3B5D042C6 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::OnClickFloor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo_OnClickFloor_mBED3F5EDBC03C3C1DFD14139D04C29AFC386D3B2 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// MoveTo(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		PlayerCharacterDemo_MoveTo_mF827885398BE49A52E61E50C5A4F4D6A9A79A59C(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerCharacterDemo_IsMoving_m4C0F2972DF874FC5DEFD68F56F279EF51639C237 (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 moveXZ = new Vector3(move.x, 0f, move.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___move_13);
		float L_1 = L_0->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___move_13);
		float L_3 = L_2->___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, (0.0f), L_3, NULL);
		// return moveXZ.magnitude > move_speed * 0.25f;
		float L_4;
		L_4 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_5 = __this->___move_speed_4;
		return (bool)((((float)L_4) > ((float)((float)il2cpp_codegen_multiply(L_5, (0.25f)))))? 1 : 0);
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::GetMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerCharacterDemo_GetMove_m11DBE43ECB526F257BD80DFC4E58F9E5C9F35EFF (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	{
		// return move;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___move_13;
		return L_0;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.PlayerCharacterDemo::GetFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerCharacterDemo_GetFacing_m56D303B97C3D423ABA4E2C91C170D9ED7E9191EA (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	{
		// return facing;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___facing_14;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo::IsFronted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerCharacterDemo_IsFronted_m7216EB41174B5FE00CCFAC91E13211FFEA7FAB3A (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	{
		// return is_fronted;
		bool L_0 = __this->___is_fronted_22;
		return L_0;
	}
}
// DialogueQuests.Demo.PlayerCharacterDemo DialogueQuests.Demo.PlayerCharacterDemo::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* PlayerCharacterDemo_Get_mF84A4B1D8AC00872D52333311DBBF4F4EDD20D24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_0 = ((PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var))->____instance_24;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCharacterDemo__ctor_m7888D93A7D56682E1795636478B11A2468DE9B1A (PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* __this, const RuntimeMethod* method) 
{
	{
		// public float move_speed = 4f;
		__this->___move_speed_4 = (4.0f);
		// public float move_accel = 8;
		__this->___move_accel_5 = (8.0f);
		// public float rotate_speed = 180f;
		__this->___rotate_speed_6 = (180.0f);
		// public float fall_speed = 20f;
		__this->___fall_speed_7 = (20.0f);
		// public float ground_detect_dist = 0.1f;
		__this->___ground_detect_dist_8 = (0.100000001f);
		// public LayerMask ground_layer = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___ground_layer_9 = L_0;
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
// System.Void DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunActionU3Ed__30__ctor_mA39ABD773C4F2F6738800EA96C7B0ED4F2E3AAD1 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunActionU3Ed__30_System_IDisposable_Dispose_mE96C1D291387E72CD6EDF1955A0AF8A982BD1EE7 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunActionU3Ed__30_MoveNext_mA900085EABAA0AA09116BE5E41B54A70A643EE57 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// is_action = true;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_4 = V_1;
		NullCheck(L_4);
		L_4->___is_action_23 = (bool)1;
		// yield return new WaitForSeconds(action_duration);
		float L_5 = __this->___action_duration_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// is_action = false;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_7 = V_1;
		NullCheck(L_7);
		L_7->___is_action_23 = (bool)0;
		// if (callback != null)
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = __this->___callback_4;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// callback.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = __this->___callback_4;
		NullCheck(L_9);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(L_9, NULL);
	}

IL_0060:
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunActionU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD1FAE6A9B4AF9F786A92E2DCD8BA7D8FCA1742D3 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunActionU3Ed__30_System_Collections_IEnumerator_Reset_m598A4B1610DA3D30985E7FA25624D5997E41A3E2 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunActionU3Ed__30_System_Collections_IEnumerator_Reset_m598A4B1610DA3D30985E7FA25624D5997E41A3E2_RuntimeMethod_var)));
	}
}
// System.Object DialogueQuests.Demo.PlayerCharacterDemo/<RunAction>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRunActionU3Ed__30_System_Collections_IEnumerator_get_Current_m4D63742B428B047D102F5A47E50646DC61E48108 (U3CRunActionU3Ed__30_tB0FAC3C711674AB3CA6222389546C049DAB2295F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DialogueQuests.Demo.PlayerControlsDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo_Awake_mAD490DF3C1E68A18E37D2FE6C06F64D4266DB117 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var))->____instance_16 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var))->____instance_16), (void*)__this);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo_Start_mA717E28A351067FA88496E69DCD1731037A4449E (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsDemo_U3CStartU3Eb__16_0_m3C6B12B60706A10862902168786C80451863BA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsDemo_U3CStartU3Eb__16_1_mC5B8BDA331D6871E46867EFFD8555DF797FD98CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NarrativeManager.Get())
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_0;
		L_0 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_2;
		L_2 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_3 = L_2;
		NullCheck(L_3);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = L_3->___onPauseGameplay_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)PlayerControlsDemo_U3CStartU3Eb__16_0_m3C6B12B60706A10862902168786C80451863BA82_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onPauseGameplay_9 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onPauseGameplay_9), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_7;
		L_7 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_8 = L_7;
		NullCheck(L_8);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = L_8->___onUnpauseGameplay_10;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)PlayerControlsDemo_U3CStartU3Eb__16_1_mC5B8BDA331D6871E46867EFFD8555DF797FD98CA_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___onUnpauseGameplay_10 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onUnpauseGameplay_10), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo_Update_m97129581C4414DD738FBBD65E7587ABC25F6FDB4 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* G_B28_0 = NULL;
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* G_B29_1 = NULL;
	{
		// move = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___move_12 = L_0;
		// rotate_cam = 0f;
		__this->___rotate_cam_13 = (0.0f);
		// press_action = false;
		__this->___press_action_14 = (bool)0;
		// if (paused)
		bool L_1 = __this->___paused_15;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.A))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		// move += Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_3, L_4, NULL);
		__this->___move_12 = L_5;
	}

IL_0045:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.D))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)100), NULL);
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		// move += Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_7, L_8, NULL);
		__this->___move_12 = L_9;
	}

IL_0064:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.W))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)119), NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		// move += Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		__this->___move_12 = L_13;
	}

IL_0083:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.S))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)115), NULL);
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		// move += Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_15, L_16, NULL);
		__this->___move_12 = L_17;
	}

IL_00a2:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.LeftArrow))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)276), NULL);
		if (!L_18)
		{
			goto IL_00c4;
		}
	}
	{
		// move += Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_19, L_20, NULL);
		__this->___move_12 = L_21;
	}

IL_00c4:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.RightArrow))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)275), NULL);
		if (!L_22)
		{
			goto IL_00e6;
		}
	}
	{
		// move += Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_23, L_24, NULL);
		__this->___move_12 = L_25;
	}

IL_00e6:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.UpArrow))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)273), NULL);
		if (!L_26)
		{
			goto IL_0108;
		}
	}
	{
		// move += Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_27, L_28, NULL);
		__this->___move_12 = L_29;
	}

IL_0108:
	{
		// if (ControlFreak2.CF2Input.GetKey(KeyCode.DownArrow))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(((int32_t)274), NULL);
		if (!L_30)
		{
			goto IL_012a;
		}
	}
	{
		// move += Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = __this->___move_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_31, L_32, NULL);
		__this->___move_12 = L_33;
	}

IL_012a:
	{
		// if (ControlFreak2.CF2Input.GetKey(cam_rotate_left))
		int32_t L_34 = __this->___cam_rotate_left_6;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(L_34, NULL);
		if (!L_35)
		{
			goto IL_0149;
		}
	}
	{
		// rotate_cam += -1f;
		float L_36 = __this->___rotate_cam_13;
		__this->___rotate_cam_13 = ((float)il2cpp_codegen_add(L_36, (-1.0f)));
	}

IL_0149:
	{
		// if (ControlFreak2.CF2Input.GetKey(cam_rotate_right))
		int32_t L_37 = __this->___cam_rotate_right_7;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = CF2Input_GetKey_m3F99125E5804E602D63E7EF81F95822DF30C0445(L_37, NULL);
		if (!L_38)
		{
			goto IL_0168;
		}
	}
	{
		// rotate_cam += 1f;
		float L_39 = __this->___rotate_cam_13;
		__this->___rotate_cam_13 = ((float)il2cpp_codegen_add(L_39, (1.0f)));
	}

IL_0168:
	{
		// if (ControlFreak2.CF2Input.GetKeyDown(action_key1) || ControlFreak2.CF2Input.GetKeyDown(action_key2))
		int32_t L_40 = __this->___action_key1_4;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = CF2Input_GetKeyDown_m9F7118D95F7A4993252AC9DF3AD123A6D5ED13EE(L_40, NULL);
		if (L_41)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_42 = __this->___action_key2_5;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = CF2Input_GetKeyDown_m9F7118D95F7A4993252AC9DF3AD123A6D5ED13EE(L_42, NULL);
		if (!L_43)
		{
			goto IL_0189;
		}
	}

IL_0182:
	{
		// press_action = true;
		__this->___press_action_14 = (bool)1;
	}

IL_0189:
	{
		// if (gamepad_linked)
		bool L_44 = __this->___gamepad_linked_8;
		if (!L_44)
		{
			goto IL_01e6;
		}
	}
	{
		// move += gamepad_move.Invoke();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = __this->___move_12;
		MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* L_46 = __this->___gamepad_move_9;
		NullCheck(L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_inline(L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_45, L_47, NULL);
		__this->___move_12 = L_48;
		// rotate_cam += gamepad_camera.Invoke().x;
		float L_49 = __this->___rotate_cam_13;
		MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* L_50 = __this->___gamepad_camera_10;
		NullCheck(L_50);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_inline(L_50, NULL);
		float L_52 = L_51.___x_0;
		__this->___rotate_cam_13 = ((float)il2cpp_codegen_add(L_49, L_52));
		// press_action = press_action || gamepad_action.Invoke();
		bool L_53 = __this->___press_action_14;
		G_B27_0 = __this;
		if (L_53)
		{
			G_B28_0 = __this;
			goto IL_01e0;
		}
	}
	{
		PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* L_54 = __this->___gamepad_action_11;
		NullCheck(L_54);
		bool L_55;
		L_55 = PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_inline(L_54, NULL);
		G_B29_0 = ((int32_t)(L_55));
		G_B29_1 = G_B27_0;
		goto IL_01e1;
	}

IL_01e0:
	{
		G_B29_0 = 1;
		G_B29_1 = G_B28_0;
	}

IL_01e1:
	{
		NullCheck(G_B29_1);
		G_B29_1->___press_action_14 = (bool)G_B29_0;
	}

IL_01e6:
	{
		// move = move.normalized * Mathf.Min(move.magnitude, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_56 = (&__this->___move_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_58 = (&__this->___move_12);
		float L_59;
		L_59 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_58, NULL);
		float L_60;
		L_60 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_59, (1.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_57, L_60, NULL);
		__this->___move_12 = L_61;
		// }
		return;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsMoving_mA1887F51CD11927B0AF0BD9E75FC1777638753F3 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return move.magnitude > 0.1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___move_12);
		float L_1;
		L_1 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_0, NULL);
		return (bool)((((float)L_1) > ((float)(0.100000001f)))? 1 : 0);
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::IsPressAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsPressAction_m16C6F90F1AD6A15AFF0B3AAD3D91DC3176750F5C (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return press_action;
		bool L_0 = __this->___press_action_14;
		return L_0;
	}
}
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo::GetMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerControlsDemo_GetMove_mA636C81662919E253A0D069754FD0FEA2AAF6C0D (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return move;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___move_12;
		return L_0;
	}
}
// System.Single DialogueQuests.Demo.PlayerControlsDemo::GetRotateCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerControlsDemo_GetRotateCam_m4365A7D2F1482B7AA4E6E55ADDA98EABEF32893C (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return rotate_cam;
		float L_0 = __this->___rotate_cam_13;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo::IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsPaused_mD6C3B26CC8C6D450ECBC63C8BA7B49A7C43F0B68 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_15;
		return L_0;
	}
}
// DialogueQuests.Demo.PlayerControlsDemo DialogueQuests.Demo.PlayerControlsDemo::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_0 = ((PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var))->____instance_16;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo__ctor_mF5686C00DA879B9A2777C7E84A822F7206CDFFCF (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// public KeyCode action_key1 = KeyCode.Space;
		__this->___action_key1_4 = ((int32_t)32);
		// public KeyCode action_key2 = KeyCode.Return;
		__this->___action_key2_5 = ((int32_t)13);
		// public KeyCode cam_rotate_left = KeyCode.Q;
		__this->___cam_rotate_left_6 = ((int32_t)113);
		// public KeyCode cam_rotate_right = KeyCode.E;
		__this->___cam_rotate_right_7 = ((int32_t)101);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo::<Start>b__16_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo_U3CStartU3Eb__16_0_m3C6B12B60706A10862902168786C80451863BA82 (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		__this->___paused_15 = (bool)1;
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo::<Start>b__16_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsDemo_U3CStartU3Eb__16_1_mC5B8BDA331D6871E46867EFFD8555DF797FD98CA (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
		__this->___paused_15 = (bool)0;
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
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
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_Multicast(MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* currentDelegate = reinterpret_cast<MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF*>(delegatesToInvoke[i]);
		typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_OpenInst(MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_OpenStatic(MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_OpenStaticInvoker(MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL);
}
Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_ClosedStaticInvoker(MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DelegatePInvokeWrapper_MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method)
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo/MoveAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAction__ctor_mBF808C6B206A87FEEA1EC51B8B227C3C779D3784 (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_Multicast;
}
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo/MoveAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0 (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DialogueQuests.Demo.PlayerControlsDemo/MoveAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveAction_BeginInvoke_mEB6FFF5D7A468ED263847BEA62FED3D55C388E3F (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsDemo/MoveAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_EndInvoke_m94A2A66C9EC2DB9D892D98B8BF08B0D870F4A900 (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_Multicast(PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* currentDelegate = reinterpret_cast<PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_OpenInst(PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_OpenStatic(PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_OpenStaticInvoker(PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< bool >::Invoke(__this->___method_ptr_0, method, NULL);
}
bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_ClosedStaticInvoker(PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82 (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void DialogueQuests.Demo.PlayerControlsDemo/PressAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressAction__ctor_m7E2FB2FD631E5289FF443F75E685352207D2896B (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_Multicast;
}
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo/PressAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6 (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DialogueQuests.Demo.PlayerControlsDemo/PressAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PressAction_BeginInvoke_mC7B2F745CAC88A88D097E7FEA6492BEA720F1E46 (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Boolean DialogueQuests.Demo.PlayerControlsDemo/PressAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PressAction_EndInvoke_m38877083AC363E7E042FCD683EEFA91849189533 (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_Awake_m4F1149284CD3BFF549F95804447220B9E0AB0672 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var))->____instance_19 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var))->____instance_19), (void*)__this);
		// last_pos = ControlFreak2.CF2Input.mousePosition;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		__this->___last_pos_16 = L_0;
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_Start_m5B99E33533B2F331349E6A4FA919ADD63D01F134 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsMouseDemo_U3CStartU3Eb__17_0_mFCAB2F4BDB1D4FAC83A88D2C7920B2D823586EF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsMouseDemo_U3CStartU3Eb__17_1_mD9CA774E12588E3EBD37BB7CEB6A02378C06111D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NarrativeManager.Get())
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_0;
		L_0 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_2;
		L_2 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_3 = L_2;
		NullCheck(L_3);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = L_3->___onPauseGameplay_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)PlayerControlsMouseDemo_U3CStartU3Eb__17_0_mFCAB2F4BDB1D4FAC83A88D2C7920B2D823586EF6_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___onPauseGameplay_9 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___onPauseGameplay_9), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_6, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_7;
		L_7 = NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline(NULL);
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_8 = L_7;
		NullCheck(L_8);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = L_8->___onUnpauseGameplay_10;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)PlayerControlsMouseDemo_U3CStartU3Eb__17_1_mD9CA774E12588E3EBD37BB7CEB6A02378C06111D_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___onUnpauseGameplay_10 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___onUnpauseGameplay_10), (void*)((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_11, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var)));
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_Update_m147FE09863C7584356462BE1A1AE0BD7BD6C031B (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B10_0 = NULL;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B11_1 = NULL;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B13_0 = NULL;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* G_B14_1 = NULL;
	{
		// if (paused)
		bool L_0 = __this->___paused_14;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// RaycastFloorPos();
		PlayerControlsMouseDemo_RaycastFloorPos_m4A6DD183453D4EA5B56F077D1A4271F95A291F27(__this, NULL);
		// if (ControlFreak2.CF2Input.GetMouseButtonDown(0))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CF2Input_GetMouseButtonDown_mD57D4AFEFFA541FF30A9E8364DBA0CE1B64E94BA(0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// OnMouseClick();
		PlayerControlsMouseDemo_OnMouseClick_mCBEAE8B007260172D114C290FD4DAF0A7DD69FF8(__this, NULL);
	}

IL_001d:
	{
		// if (ControlFreak2.CF2Input.GetMouseButtonDown(1))
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CF2Input_GetMouseButtonDown_mD57D4AFEFFA541FF30A9E8364DBA0CE1B64E94BA(1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// OnRightMouseClick();
		PlayerControlsMouseDemo_OnRightMouseClick_m2124403CAD067C3E8E207021A336E382DDC023AD(__this, NULL);
	}

IL_002b:
	{
		// mouse_scroll = ControlFreak2.CF2Input.mouseScrollDelta.y;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = CF2Input_get_mouseScrollDelta_m66A9C4DF6414C992E81BE8B5E3F1DD4F455F192B(NULL);
		float L_4 = L_3.___y_1;
		__this->___mouse_scroll_10 = L_4;
		// mouse_delta = new Vector2(ControlFreak2.CF2Input.GetAxis("Mouse X"), ControlFreak2.CF2Input.GetAxis("Mouse Y"));
		float L_5;
		L_5 = CF2Input_GetAxis_mBC501F2F8D59700FD6E1357ACDE0540CAD752396(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6;
		L_6 = CF2Input_GetAxis_mBC501F2F8D59700FD6E1357ACDE0540CAD752396(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_5, L_6, /*hidden argument*/NULL);
		__this->___mouse_delta_11 = L_7;
		// Vector3 diff = (ControlFreak2.CF2Input.mousePosition - last_pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___last_pos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_9, NULL);
		V_0 = L_10;
		// float dist = diff.magnitude;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		// if (dist > 0.01f)
		if ((!(((float)L_11) > ((float)(0.00999999978f)))))
		{
			goto IL_0096;
		}
	}
	{
		// using_mouse = true;
		__this->___using_mouse_9 = (bool)1;
		// using_timer = 1f;
		__this->___using_timer_15 = (1.0f);
		// last_pos = ControlFreak2.CF2Input.mousePosition;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		__this->___last_pos_16 = L_12;
	}

IL_0096:
	{
		// mouse_hold_left = ControlFreak2.CF2Input.GetMouseButton(0) && !IsMouseOverUI();
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = CF2Input_GetMouseButton_m5DE7971A99D4CA68A5F3557F66D1E0184F499570(0, NULL);
		G_B9_0 = __this;
		if (!L_13)
		{
			G_B10_0 = __this;
			goto IL_00aa;
		}
	}
	{
		bool L_14;
		L_14 = PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31(__this, NULL);
		G_B11_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		G_B11_1 = G_B9_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
	}

IL_00ab:
	{
		NullCheck(G_B11_1);
		G_B11_1->___mouse_hold_left_12 = (bool)G_B11_0;
		// mouse_hold_right = ControlFreak2.CF2Input.GetMouseButton(1) && !IsMouseOverUI();
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = CF2Input_GetMouseButton_m5DE7971A99D4CA68A5F3557F66D1E0184F499570(1, NULL);
		G_B12_0 = __this;
		if (!L_15)
		{
			G_B13_0 = __this;
			goto IL_00c4;
		}
	}
	{
		bool L_16;
		L_16 = PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31(__this, NULL);
		G_B14_0 = ((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		G_B14_1 = G_B12_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_00c5:
	{
		NullCheck(G_B14_1);
		G_B14_1->___mouse_hold_right_13 = (bool)G_B14_0;
		// if (mouse_hold_left || mouse_hold_right)
		bool L_17 = __this->___mouse_hold_left_12;
		if (L_17)
		{
			goto IL_00da;
		}
	}
	{
		bool L_18 = __this->___mouse_hold_right_13;
		if (!L_18)
		{
			goto IL_00e5;
		}
	}

IL_00da:
	{
		// using_timer = 1f;
		__this->___using_timer_15 = (1.0f);
	}

IL_00e5:
	{
		// using_timer -= Time.deltaTime;
		float L_19 = __this->___using_timer_15;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___using_timer_15 = ((float)il2cpp_codegen_subtract(L_19, L_20));
		// using_mouse = using_timer > 0f;
		float L_21 = __this->___using_timer_15;
		__this->___using_mouse_9 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::RaycastFloorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_RaycastFloorPos_m4A6DD183453D4EA5B56F077D1A4271F95A291F27 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// Ray ray = GetMouseCameraRay();
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_0;
		L_0 = PlayerControlsMouseDemo_GetMouseCameraRay_m9BA4E8594C1B20703E286EC7D79A554145D381FA(__this, NULL);
		V_0 = L_0;
		// bool success = Physics.Raycast(ray, out hit, 100f, floor_layer.value);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_2 = (&__this->___floor_layer_5);
		int32_t L_3;
		L_3 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_1, (&V_1), (100.0f), L_3, NULL);
		// if (success)
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// floor_pos = ray.GetPoint(hit.distance);
		float L_5;
		L_5 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_0), L_5, NULL);
		__this->___floor_pos_17 = L_6;
		return;
	}

IL_0036:
	{
		// Plane plane = new Plane(Vector3.up, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Plane__ctor_mACA7F957A13DD97953808B8E0CF95EAD7D39463E((&V_2), L_7, (0.0f), NULL);
		// bool phit = plane.Raycast(ray, out dist);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8 = V_0;
		bool L_9;
		L_9 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_2), L_8, (&V_3), NULL);
		// if (phit)
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// floor_pos = ray.GetPoint(dist);
		float L_10 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Ray_GetPoint_mAF4E1D38026156E6434EF2BED2420ED5236392AF((&V_0), L_10, NULL);
		__this->___floor_pos_17 = L_11;
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::OnMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_OnMouseClick_mCBEAE8B007260172D114C290FD4DAF0A7DD69FF8 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// if (IsMouseOverUI())
		bool L_0;
		L_0 = PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (onClick != null)
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_1 = __this->___onClick_6;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// onClick.Invoke(floor_pos);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_2 = __this->___onClick_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___floor_pos_17;
		NullCheck(L_2);
		UnityAction_1_Invoke_mD9E7BF97775170B2945AD038A4291B76A1EE43EB_inline(L_2, L_3, NULL);
	}

IL_0022:
	{
		// if (onClickFloor != null)
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_4 = __this->___onClickFloor_8;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// onClickFloor.Invoke(floor_pos);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_5 = __this->___onClickFloor_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___floor_pos_17;
		NullCheck(L_5);
		UnityAction_1_Invoke_mD9E7BF97775170B2945AD038A4291B76A1EE43EB_inline(L_5, L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::OnRightMouseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_OnRightMouseClick_m2124403CAD067C3E8E207021A336E382DDC023AD (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// if (IsMouseOverUI())
		bool L_0;
		L_0 = PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (onRightClick != null)
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_1 = __this->___onRightClick_7;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// onRightClick.Invoke(floor_pos);
		UnityAction_1_tAF6935FD9340E93D992E014EDC0BF16AE009E22C* L_2 = __this->___onRightClick_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___floor_pos_17;
		NullCheck(L_2);
		UnityAction_1_Invoke_mD9E7BF97775170B2945AD038A4291B76A1EE43EB_inline(L_2, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsMouseDemo::GetScreenPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerControlsMouseDemo_GetScreenPos_m51EAC4102A0C3ECE40F194CFE0EA5B6E0AEBE09D (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mpos = ControlFreak2.CF2Input.mousePosition;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		V_0 = L_0;
		// return new Vector2(mpos.x / (float)Screen.width, mpos.y / (float)Screen.height);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___x_2;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		int32_t L_6;
		L_6 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), ((float)(L_2/((float)L_3))), ((float)(L_5/((float)L_6))), /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.PlayerControlsMouseDemo::GetPointingPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerControlsMouseDemo_GetPointingPos_m0C51F2179A57F5996BA5FE5B603E164C50C62C5C (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return floor_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___floor_pos_17;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsUsingMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsUsingMouse_m8EA7C9ABF5FC600AE8FA2FC69547132530B24028 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return using_mouse;
		bool L_0 = __this->___using_mouse_9;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsMouseHold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsMouseHold_mDFB0F0486879FF5D7A24AABDECCD103A512351B9 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return mouse_hold_left;
		bool L_0 = __this->___mouse_hold_left_12;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsMouseHoldRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsMouseHoldRight_mE80F6EA557F82DDDF50436108DFCF4BEAEB17344 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return mouse_hold_right;
		bool L_0 = __this->___mouse_hold_right_13;
		return L_0;
	}
}
// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::GetMouseScroll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerControlsMouseDemo_GetMouseScroll_mF6F75069B57088178A9F6992F058E63B40C3B2DE (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return mouse_scroll;
		float L_0 = __this->___mouse_scroll_10;
		return L_0;
	}
}
// UnityEngine.Vector2 DialogueQuests.Demo.PlayerControlsMouseDemo::GetMouseDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerControlsMouseDemo_GetMouseDelta_m7DFBEE32F68E0C47D195A92C5EE877F7B7D6D4F9 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return mouse_delta;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___mouse_delta_11;
		return L_0;
	}
}
// System.Single DialogueQuests.Demo.PlayerControlsMouseDemo::GetTouchZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerControlsMouseDemo_GetTouchZoom_m927430BE246F6F49F8E14FCE7C7117E5E35BF6C4 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return zoom_value;
		float L_0 = __this->___zoom_value_18;
		return L_0;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsPaused_m8AEB830F168E4516C40218BB29F3348B55FCB69E (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return paused;
		bool L_0 = __this->___paused_14;
		return L_0;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.PlayerControlsMouseDemo::GetClampMousePos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PlayerControlsMouseDemo_GetClampMousePos_m8A3D1D8A0B112953CD9026A2F8A148392B2A02CE (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mousePos = ControlFreak2.CF2Input.mousePosition;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		V_0 = L_0;
		// mousePos.x = Mathf.Clamp(mousePos.x, 0f, Screen.width);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___x_2;
		int32_t L_3;
		L_3 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), ((float)L_3), NULL);
		(&V_0)->___x_2 = L_4;
		// mousePos.y = Mathf.Clamp(mousePos.y, 0f, Screen.height);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		int32_t L_7;
		L_7 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), ((float)L_7), NULL);
		(&V_0)->___y_3 = L_8;
		// return mousePos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Ray DialogueQuests.Demo.PlayerControlsMouseDemo::GetMouseCameraRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 PlayerControlsMouseDemo_GetMouseCameraRay_m9BA4E8594C1B20703E286EC7D79A554145D381FA (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return TheCameraDemo.GetCamera().ScreenPointToRay(GetClampMousePos());
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = TheCameraDemo_GetCamera_mC50F262B6848C4D8031E78C127AAEF3D295C54AB(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = PlayerControlsMouseDemo_GetClampMousePos_m8A3D1D8A0B112953CD9026A2F8A148392B2A02CE(__this, NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean DialogueQuests.Demo.PlayerControlsMouseDemo::IsMouseOverUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerControlsMouseDemo_IsMouseOverUI_mF2AB280445BC563DE5731BE4D5F9EF242A752C31 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_0 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_1 = NULL;
	{
		// PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_1, L_0, NULL);
		V_0 = L_1;
		// eventDataCurrentPosition.position = new Vector2(ControlFreak2.CF2Input.mousePosition.x, ControlFreak2.CF2Input.mousePosition.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CF2Input_tA5F3B331B58801F5B15099462894DEFF12925B54_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CF2Input_get_mousePosition_mF6E63EE360F4717D4A3C915531593DC04F6DB3B1(NULL);
		float L_6 = L_5.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_2, L_7, NULL);
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_8, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_1 = L_8;
		// EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_9;
		L_9 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = V_1;
		NullCheck(L_9);
		EventSystem_RaycastAll_mE93CC75909438D20D17A0EF98348A064FBFEA528(L_9, L_10, L_11, NULL);
		// return results.Count > 0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_12, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// DialogueQuests.Demo.PlayerControlsMouseDemo DialogueQuests.Demo.PlayerControlsMouseDemo::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_0 = ((PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var))->____instance_19;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo__ctor_mB0A708B8E31C1DA6F395F81439CC46EDE1292E6B (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask selectable_layer = ~0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222((-1), NULL);
		__this->___selectable_layer_4 = L_0;
		// public LayerMask floor_layer = (1 << 9); //Put to none to always return 0 as floor height
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(((int32_t)512), NULL);
		__this->___floor_layer_5 = L_1;
		// private Vector2 mouse_delta = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___mouse_delta_11 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::<Start>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_U3CStartU3Eb__17_0_mFCAB2F4BDB1D4FAC83A88D2C7920B2D823586EF6 (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		__this->___paused_14 = (bool)1;
		// NarrativeManager.Get().onPauseGameplay += () => { paused = true; };
		return;
	}
}
// System.Void DialogueQuests.Demo.PlayerControlsMouseDemo::<Start>b__17_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlsMouseDemo_U3CStartU3Eb__17_1_mD9CA774E12588E3EBD37BB7CEB6A02378C06111D (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
		__this->___paused_14 = (bool)0;
		// NarrativeManager.Get().onUnpauseGameplay += () => { paused = false; };
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
// System.Void DialogueQuests.Demo.TheCameraDemo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheCameraDemo_Awake_mC35304E44995B61C1260AD3D7BA7F170452FBB41 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF83D3CF4F0870FC5E18AC6E7B80F6D1EE43FE830);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// _instance = this;
		((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18), (void*)__this);
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_17), (void*)L_0);
		// rotated_offset = follow_offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___follow_offset_10;
		__this->___rotated_offset_12 = L_1;
		// current_offset = follow_offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___follow_offset_10;
		__this->___current_offset_13 = L_2;
		// GameObject cam_target = new GameObject("CameraTarget");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteralF83D3CF4F0870FC5E18AC6E7B80F6D1EE43FE830, NULL);
		V_0 = L_3;
		// target_transform = cam_target.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		__this->___target_transform_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_transform_16), (void*)L_5);
		// target_transform.position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___target_transform_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// target_transform.rotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___target_transform_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.TheCameraDemo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheCameraDemo_Start_m15BEF6A3111A7B95C1EFD0C782677723EA12BC5F (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (follow_target == null && PlayerCharacterDemo.Get())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___follow_target_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_2;
		L_2 = PlayerCharacterDemo_Get_mF84A4B1D8AC00872D52333311DBBF4F4EDD20D24_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// follow_target = PlayerCharacterDemo.Get().gameObject;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_4;
		L_4 = PlayerCharacterDemo_Get_mF84A4B1D8AC00872D52333311DBBF4F4EDD20D24_inline(NULL);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		__this->___follow_target_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___follow_target_9), (void*)L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.TheCameraDemo::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheCameraDemo_LateUpdate_mBAE48A7FDE19A9FF46305AB53AB35664EDB8FB33 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* V_0 = NULL;
	PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// PlayerControlsDemo controls = PlayerControlsDemo.Get();
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_0;
		L_0 = PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45_inline(NULL);
		V_0 = L_0;
		// PlayerControlsMouseDemo mouse = PlayerControlsMouseDemo.Get();
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_1;
		L_1 = PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D_inline(NULL);
		V_1 = L_1;
		// current_rotate = controls.GetRotateCam();
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_2 = V_0;
		NullCheck(L_2);
		float L_3;
		L_3 = PlayerControlsDemo_GetRotateCam_m4365A7D2F1482B7AA4E6E55ADDA98EABEF32893C_inline(L_2, NULL);
		__this->___current_rotate_14 = L_3;
		// current_rotate = -current_rotate; //Reverse rotate
		float L_4 = __this->___current_rotate_14;
		__this->___current_rotate_14 = ((-L_4));
		// current_zoom += mouse.GetMouseScroll() * zoom_speed; //Mouse scroll zoom
		float L_5 = __this->___current_zoom_15;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_6 = V_1;
		NullCheck(L_6);
		float L_7;
		L_7 = PlayerControlsMouseDemo_GetMouseScroll_mF6F75069B57088178A9F6992F058E63B40C3B2DE_inline(L_6, NULL);
		float L_8 = __this->___zoom_speed_6;
		__this->___current_zoom_15 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// current_zoom = Mathf.Clamp(current_zoom, -zoom_out_max, zoom_in_max);
		float L_9 = __this->___current_zoom_15;
		float L_10 = __this->___zoom_out_max_8;
		float L_11 = __this->___zoom_in_max_7;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, ((-L_10)), L_11, NULL);
		__this->___current_zoom_15 = L_12;
		// rotated_offset = Quaternion.Euler(0, rotate_speed * current_rotate * Time.deltaTime, 0) * rotated_offset;
		float L_13 = __this->___rotate_speed_5;
		float L_14 = __this->___current_rotate_14;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15)), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___rotated_offset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_16, L_17, NULL);
		__this->___rotated_offset_12 = L_18;
		// current_offset = rotated_offset - rotated_offset * current_zoom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___rotated_offset_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___rotated_offset_12;
		float L_21 = __this->___current_zoom_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_22, NULL);
		__this->___current_offset_13 = L_23;
		// target_transform.RotateAround(follow_target.transform.position, Vector3.up, rotate_speed * current_rotate * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___target_transform_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___follow_target_9;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_29 = __this->___rotate_speed_5;
		float L_30 = __this->___current_rotate_14;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_24);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_24, L_27, L_28, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_29, L_30)), L_31)), NULL);
		// transform.rotation = Quaternion.Slerp(transform.rotation, target_transform.rotation, move_speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___target_transform_16;
		NullCheck(L_35);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_35, NULL);
		float L_37 = __this->___move_speed_4;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_34, L_36, ((float)il2cpp_codegen_multiply(L_37, L_38)), NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_39, NULL);
		// Vector3 target_pos = follow_target.transform.position + current_offset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___follow_target_9;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___current_offset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_43, NULL);
		V_2 = L_44;
		// target_transform.position = target_pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___target_transform_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_2;
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_46, NULL);
		// transform.position = Vector3.SmoothDamp(transform.position, target_pos, ref current_vel, 1f / move_speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___current_vel_11);
		float L_52 = __this->___move_speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_49, L_50, L_51, ((float)((1.0f)/L_52)), NULL);
		NullCheck(L_47);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_47, L_53, NULL);
		// }
		return;
	}
}
// System.Void DialogueQuests.Demo.TheCameraDemo::MoveToTarget(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheCameraDemo_MoveToTarget_m67EA4B51E1928344FEA90F4ECC07D7FE97BCB708 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_target, const RuntimeMethod* method) 
{
	{
		// transform.position = target + current_offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___current_offset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::GetTargetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TheCameraDemo_GetTargetPos_mEDACA60ED34F3D08145753F314A94F4396D7515B (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	{
		// return transform.position - current_offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___current_offset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::GetTargetPosOffsetFace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TheCameraDemo_GetTargetPosOffsetFace_m29301B6B67AEBFF5233FF1A661E5C33F28ABA268 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, float ___0_dist, const RuntimeMethod* method) 
{
	{
		// return transform.position - current_offset + GetFacingFront() * dist;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___current_offset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = TheCameraDemo_GetFacingFront_m71A3D176117D6C3003A5DB889F26D8551978F5B1(__this, NULL);
		float L_5 = ___0_dist;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Quaternion DialogueQuests.Demo.TheCameraDemo::GetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TheCameraDemo_GetRotation_m2E4EB33E602743B37313E4EFF53B2FBFB14C23E3 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_3 = L_2.___y_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_3, (0.0f), NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::GetFacingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TheCameraDemo_GetFacingFront_m71A3D176117D6C3003A5DB889F26D8551978F5B1 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 dir = transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		V_0 = L_1;
		// dir.y = 0f;
		(&V_0)->___y_3 = (0.0f);
		// return dir.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 DialogueQuests.Demo.TheCameraDemo::GetFacingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TheCameraDemo_GetFacingRight_m1319950530083CB084D4EC30B074428976D16F89 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 dir = transform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_0, NULL);
		V_0 = L_1;
		// dir.y = 0f;
		(&V_0)->___y_3 = (0.0f);
		// return dir.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		return L_2;
	}
}
// UnityEngine.Quaternion DialogueQuests.Demo.TheCameraDemo::GetFacingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TheCameraDemo_GetFacingRotation_m31C13640732772D3842ACA2CF3B667EE1FF2F988 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 facing = GetFacingFront();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = TheCameraDemo_GetFacingFront_m71A3D176117D6C3003A5DB889F26D8551978F5B1(__this, NULL);
		V_0 = L_0;
		// return Quaternion.LookRotation(facing.normalized, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Camera DialogueQuests.Demo.TheCameraDemo::GetCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* TheCameraDemo_GetCam_mDF572A115F0980145B570CB36D77B1D88D26E302 (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	{
		// return cam;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_17;
		return L_0;
	}
}
// UnityEngine.Camera DialogueQuests.Demo.TheCameraDemo::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* TheCameraDemo_GetCamera_mC50F262B6848C4D8031E78C127AAEF3D295C54AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Camera camera = _instance != null ? _instance.GetCam() : Camera.main;
		TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* L_0 = ((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		return L_2;
	}

IL_0013:
	{
		TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* L_3 = ((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = TheCameraDemo_GetCam_mDF572A115F0980145B570CB36D77B1D88D26E302_inline(L_3, NULL);
		// return camera;
		return L_4;
	}
}
// DialogueQuests.Demo.TheCameraDemo DialogueQuests.Demo.TheCameraDemo::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* TheCameraDemo_Get_m1810660AEB8CBD4764B846572F57407AEEA9B8F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* L_0 = ((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18;
		return L_0;
	}
}
// System.Void DialogueQuests.Demo.TheCameraDemo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheCameraDemo__ctor_m394FB625F7DA5386833A0902E1DB3FFE4CEACEAE (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	{
		// public float move_speed = 10f;
		__this->___move_speed_4 = (10.0f);
		// public float rotate_speed = 90f;
		__this->___rotate_speed_5 = (90.0f);
		// public float zoom_speed = 0.5f;
		__this->___zoom_speed_6 = (0.5f);
		// public float zoom_in_max = 0.5f;
		__this->___zoom_in_max_7 = (0.5f);
		// public float zoom_out_max = 1f;
		__this->___zoom_out_max_8 = (1.0f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIPanel_IsVisible_mC21810D9D8F6CFDA4C99155EF3C01959BE673428_inline (UIPanel_tA17CAB5A7AD5284179E9953F3A86B6F8A1C8F554* __this, const RuntimeMethod* method) 
{
	{
		// return visible;
		bool L_0 = __this->___visible_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* NarrativeManager_Get_m25EADEE3D18837C1A4330824FAE28D49EB86C5B1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE* L_0 = ((NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE_StaticFields*)il2cpp_codegen_static_fields_for(NarrativeManager_t148005CA68A4A9E83460A367FC9B4BAD226E65EE_il2cpp_TypeInfo_var))->____instance_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* QuestPanel_Get_m73C6F0A5E8CA40E770C4B5EED47EDD27D7AAD541_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* L_0 = ((QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_StaticFields*)il2cpp_codegen_static_fields_for(QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1_il2cpp_TypeInfo_var))->____instance_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* NarrativeControls_Get_m38DB69DA937B3A38D9D460251C774570516CB9E6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2* L_0 = ((NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2_StaticFields*)il2cpp_codegen_static_fields_for(NarrativeControls_tBAB3CC6538B168AE5C8380D00FD049E80AF21EB2_il2cpp_TypeInfo_var))->____instance_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 spacing { get { return m_Spacing; } set { SetProperty(ref m_Spacing, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Spacing_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 cellSize { get { return m_CellSize; } set { SetProperty(ref m_CellSize, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_CellSize_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuestPanel_GetFilter_mC540496EE7FD637543C24CC46E0DF7F9BEDEB14B_inline (QuestPanel_t96917CAF4BB7281FB4182B03D5730F75F0DD1BF1* __this, const RuntimeMethod* method) 
{
	{
		// return filter;
		int32_t L_0 = __this->___filter_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* PlayerControlsMouseDemo_Get_mB3C975659D44763A1665C7357448A4EF07A43E9D_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* L_0 = ((PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F_il2cpp_TypeInfo_var))->____instance_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* PlayerControlsDemo_Get_m4FF71CB77ADF697287C21E84551BA299EBFAFF45_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* L_0 = ((PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_StaticFields*)il2cpp_codegen_static_fields_for(PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF_il2cpp_TypeInfo_var))->____instance_16;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PlayerControlsDemo_GetMove_mA636C81662919E253A0D069754FD0FEA2AAF6C0D_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return move;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___move_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* TheCameraDemo_Get_m1810660AEB8CBD4764B846572F57407AEEA9B8F5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* L_0 = ((TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_StaticFields*)il2cpp_codegen_static_fields_for(TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D_il2cpp_TypeInfo_var))->____instance_18;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_RotateTowards_m50EF9D609C80CD423CDA856EA3481DE2004633A3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_from, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_to, float ___2_maxDegreesDelta, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_to;
		float L_2;
		L_2 = Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) == ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___1_to;
		V_2 = L_5;
		goto IL_0030;
	}

IL_0019:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_from;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ___1_to;
		float L_8 = ___2_maxDegreesDelta;
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_8/L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_SlerpUnclamped_mAE7F4DF2F239831CCAA1DFB52F313E5AED52D32D(L_6, L_7, L_10, NULL);
		V_2 = L_11;
		goto IL_0030;
	}

IL_0030:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
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
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
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
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerControlsDemo_IsPressAction_m16C6F90F1AD6A15AFF0B3AAD3D91DC3176750F5C_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return press_action;
		bool L_0 = __this->___press_action_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MoveAction_Invoke_mE4048F2E0F75631A637BD5EA6388C0C3B247DBB0_inline (MoveAction_t35F581CD5E173DC0B58338E4DB3189D3AEC0C3FF* __this, const RuntimeMethod* method) 
{
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PressAction_Invoke_m699D82946E4BD0B9E6F5B32A701FC9628C8F2AB6_inline (PressAction_t2109910842656B60D07A4184BE2D06722B7FDC82* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* PlayerCharacterDemo_Get_mF84A4B1D8AC00872D52333311DBBF4F4EDD20D24_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _instance;
		PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750* L_0 = ((PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCharacterDemo_tBB888F3869DD34538902B7CB42A859E72C775750_il2cpp_TypeInfo_var))->____instance_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerControlsDemo_GetRotateCam_m4365A7D2F1482B7AA4E6E55ADDA98EABEF32893C_inline (PlayerControlsDemo_tBB9DA9134F0F966DFE855B04D48B42D38F08B0EF* __this, const RuntimeMethod* method) 
{
	{
		// return rotate_cam;
		float L_0 = __this->___rotate_cam_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerControlsMouseDemo_GetMouseScroll_mF6F75069B57088178A9F6992F058E63B40C3B2DE_inline (PlayerControlsMouseDemo_tE01A95B25E4DA8CA5967CC0E80B466723DCA530F* __this, const RuntimeMethod* method) 
{
	{
		// return mouse_scroll;
		float L_0 = __this->___mouse_scroll_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* TheCameraDemo_GetCam_mDF572A115F0980145B570CB36D77B1D88D26E302_inline (TheCameraDemo_tC77DD08D5597C40D2701DC97BDF006EF852B7F8D* __this, const RuntimeMethod* method) 
{
	{
		// return cam;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_17;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m05FE3765125338EF158A176DD190F4CA6DB6F520_gshared_inline (UnityAction_2_t742C43FA6EAABE0458C753DFE15FDDFAE01EA73F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, ___1_arg1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3254DE109747B86D31DCAF93A60328870FE05256_gshared_inline (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Angle_mAADDBB3C30736B4C7B75CF3A241C1CF5E0386C26_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_b;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, (1.0f), NULL);
		V_0 = L_4;
		float L_5 = V_0;
		bool L_6;
		L_6 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		float L_7 = V_0;
		float L_8;
		L_8 = acosf(L_7);
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (2.0f))), (57.2957802f)));
		goto IL_0039;
	}

IL_0034:
	{
		G_B3_0 = (0.0f);
	}

IL_0039:
	{
		V_1 = G_B3_0;
		goto IL_003c;
	}

IL_003c:
	{
		float L_9 = V_1;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
