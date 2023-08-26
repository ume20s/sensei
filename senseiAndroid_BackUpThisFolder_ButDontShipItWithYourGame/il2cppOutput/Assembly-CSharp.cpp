#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameClearCtrl
struct GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameStartCtrl
struct GameStartCtrl_tD6F35B4B54F0763938D915DEDE801882526275B1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Stage01Director
struct Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// ballCtrl
struct ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8;
// block01Ctrl
struct block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250;
// dt
struct dt_tF8471EE27817084A987A54FC6D69193AF19B2A35;
// moji01Ctrl
struct moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106;
// paddleCtrl
struct paddleCtrl_tB6EE41A37193A84019533BA0E0BE1E092B9CF2AA;
// taptoNextCtrl01
struct taptoNextCtrl01_tDAE359418700D08C9E70DAF406A2E29D09BF74B4;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameClearCtrl/<Omedetou>d__3
struct U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Stage01Director/<GameStart>d__29
struct U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A;
// Stage01Director/<SenseiEnding>d__30
struct U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____317C3A50D0E0D421044962A786FAB0456FA0466B6FDEB0EA1E425E67277D4FCF_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BE996C8537DF893F2FBF8812D20DDE36F6A8D477BE581E223C637DE0C4083A6A_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B;
IL2CPP_EXTERN_C String_t* _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8;
IL2CPP_EXTERN_C String_t* _stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296;
IL2CPP_EXTERN_C String_t* _stringLiteral21545504E1F3E3453B9D306449B4EFE3C618361F;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62;
IL2CPP_EXTERN_C String_t* _stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092;
IL2CPP_EXTERN_C String_t* _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9;
IL2CPP_EXTERN_C String_t* _stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D;
IL2CPP_EXTERN_C String_t* _stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E;
IL2CPP_EXTERN_C String_t* _stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630;
IL2CPP_EXTERN_C String_t* _stringLiteral3938FC942DEC595115C7CE9CBAD7924F0CDA7298;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A;
IL2CPP_EXTERN_C String_t* _stringLiteral3DE609E26944B2311D10D951753D2DF550C229D9;
IL2CPP_EXTERN_C String_t* _stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF;
IL2CPP_EXTERN_C String_t* _stringLiteral4675B561F44087540E4BA457DEC77A0CB3844F49;
IL2CPP_EXTERN_C String_t* _stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5;
IL2CPP_EXTERN_C String_t* _stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F;
IL2CPP_EXTERN_C String_t* _stringLiteral5242C308BE6D7200D9A98E14A70649AC950F6ED8;
IL2CPP_EXTERN_C String_t* _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8;
IL2CPP_EXTERN_C String_t* _stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325;
IL2CPP_EXTERN_C String_t* _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7FC123A9A5396F0C12A168D602C60B0986A76D;
IL2CPP_EXTERN_C String_t* _stringLiteral6317D307020F7A6CF62E29E04FFE296A2153686E;
IL2CPP_EXTERN_C String_t* _stringLiteral63210067DFDCB020415106D25305E79CDA5478A1;
IL2CPP_EXTERN_C String_t* _stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC;
IL2CPP_EXTERN_C String_t* _stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4;
IL2CPP_EXTERN_C String_t* _stringLiteral7E78729C721FC5C65268CDE02EC0565D37336267;
IL2CPP_EXTERN_C String_t* _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC;
IL2CPP_EXTERN_C String_t* _stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7;
IL2CPP_EXTERN_C String_t* _stringLiteral823AC7F13547BB61EE004EE339F656811348D94B;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD;
IL2CPP_EXTERN_C String_t* _stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA2EBCB20931A32E7ABAA6C9A5ED0CE8F4FF4F7BD;
IL2CPP_EXTERN_C String_t* _stringLiteralA4DA54A2895CEAEA7DB526B197EDB9F8C574E0AB;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9;
IL2CPP_EXTERN_C String_t* _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79;
IL2CPP_EXTERN_C String_t* _stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2;
IL2CPP_EXTERN_C String_t* _stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75;
IL2CPP_EXTERN_C String_t* _stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA55E0BE70739B2496B112D9AAC5C933DA502FE5;
IL2CPP_EXTERN_C String_t* _stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralD10E3742E5199C84774D7AE504868967680B5FA8;
IL2CPP_EXTERN_C String_t* _stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF;
IL2CPP_EXTERN_C String_t* _stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1143D7DA21141328B0C670E4618982430814767;
IL2CPP_EXTERN_C String_t* _stringLiteralE51D1BB8513E71F56B7A8C15B30ED6FBB9E866ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE915F2CFD405EE7E4375D7B95DAA0151C8C34841;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD;
IL2CPP_EXTERN_C String_t* _stringLiteralED12904133FFAC97817184051B6295791EAE98DB;
IL2CPP_EXTERN_C String_t* _stringLiteralEE09689AF368D2AA1469EA2B83AFAD29ADD0BB0C;
IL2CPP_EXTERN_C String_t* _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99;
IL2CPP_EXTERN_C String_t* _stringLiteralF7AF1B4B63FF03ABF8DEEA0D8F0503709D2E1C3B;
IL2CPP_EXTERN_C String_t* _stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tismoji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106_m699A9B792F07BEAC2363956E51415A3B362FA53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameStartU3Ed__29_System_Collections_IEnumerator_Reset_m56991AB7726CD43FE69107AED868D38851AA2783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COmedetouU3Ed__3_System_Collections_IEnumerator_Reset_m2013E4FFDCA419F9E259BE07352D9E2C1E6B219F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSenseiEndingU3Ed__30_System_Collections_IEnumerator_Reset_m36BACCE8764A0BFB5E556FD48A1AFA0F78A27AB9_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

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

// GameClearCtrl/<Omedetou>d__3
struct U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5  : public RuntimeObject
{
	// System.Int32 GameClearCtrl/<Omedetou>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameClearCtrl/<Omedetou>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameClearCtrl GameClearCtrl/<Omedetou>d__3::<>4__this
	GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* ___U3CU3E4__this_2;
};

// Stage01Director/<GameStart>d__29
struct U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A  : public RuntimeObject
{
	// System.Int32 Stage01Director/<GameStart>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Stage01Director/<GameStart>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Stage01Director Stage01Director/<GameStart>d__29::<>4__this
	Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* ___U3CU3E4__this_2;
};

// Stage01Director/<SenseiEnding>d__30
struct U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8  : public RuntimeObject
{
	// System.Int32 Stage01Director/<SenseiEnding>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Stage01Director/<SenseiEnding>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Stage01Director Stage01Director/<SenseiEnding>d__30::<>4__this
	Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* ___U3CU3E4__this_2;
	// System.Int32 Stage01Director/<SenseiEnding>d__30::<i>5__2
	int32_t ___U3CiU3E5__2_3;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=196
struct __StaticArrayInitTypeSizeU3D196_tCE6C8BEEF7FBE2C739F5F961AB7CD81B34AD4688 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D196_tCE6C8BEEF7FBE2C739F5F961AB7CD81B34AD4688__padding[196];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=196 <PrivateImplementationDetails>::317C3A50D0E0D421044962A786FAB0456FA0466B6FDEB0EA1E425E67277D4FCF
	__StaticArrayInitTypeSizeU3D196_tCE6C8BEEF7FBE2C739F5F961AB7CD81B34AD4688 ___317C3A50D0E0D421044962A786FAB0456FA0466B6FDEB0EA1E425E67277D4FCF_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=196 <PrivateImplementationDetails>::BE996C8537DF893F2FBF8812D20DDE36F6A8D477BE581E223C637DE0C4083A6A
	__StaticArrayInitTypeSizeU3D196_tCE6C8BEEF7FBE2C739F5F961AB7CD81B34AD4688 ___BE996C8537DF893F2FBF8812D20DDE36F6A8D477BE581E223C637DE0C4083A6A_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
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

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// GameClearCtrl
struct GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource GameClearCtrl::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.AudioClip GameClearCtrl::vOmedetou
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___vOmedetou_5;
};

// GameStartCtrl
struct GameStartCtrl_tD6F35B4B54F0763938D915DEDE801882526275B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Stage01Director
struct Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Stage01Director::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_12;
	// UnityEngine.AudioClip Stage01Director::vGameStart
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___vGameStart_13;
	// UnityEngine.AudioClip Stage01Director::vStageClear
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___vStageClear_14;
	// UnityEngine.AudioClip Stage01Director::sePi
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sePi_15;
	// UnityEngine.AudioClip Stage01Director::seKirarin
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___seKirarin_16;
	// UnityEngine.GameObject Stage01Director::blockPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___blockPrefab_17;
	// UnityEngine.GameObject[] Stage01Director::block
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___block_18;
	// UnityEngine.GameObject Stage01Director::TextScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextScore_19;
	// UnityEngine.GameObject Stage01Director::TextHighScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextHighScore_20;
	// UnityEngine.GameObject Stage01Director::TextSen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextSen_21;
	// UnityEngine.GameObject Stage01Director::TextSei
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextSei_22;
	// UnityEngine.GameObject Stage01Director::TextSenseiClear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextSenseiClear_23;
	// UnityEngine.GameObject Stage01Director::TextAllClear
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextAllClear_24;
	// UnityEngine.GameObject Stage01Director::TapToNext
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TapToNext_25;
	// UnityEngine.GameObject Stage01Director::Ball
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Ball_26;
	// UnityEngine.GameObject Stage01Director::Paddle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Paddle_27;
	// UnityEngine.SpriteRenderer Stage01Director::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_28;
	// UnityEngine.Sprite[] Stage01Director::senseiSprite
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___senseiSprite_29;
};

struct Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields
{
	// System.Int32[] Stage01Director::seikai
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___seikai_6;
	// System.Int32 Stage01Director::remainBlock
	int32_t ___remainBlock_7;
	// System.Int32 Stage01Director::getMojiNum
	int32_t ___getMojiNum_8;
	// System.Boolean Stage01Director::isClear
	bool ___isClear_9;
	// System.Boolean Stage01Director::isMojiDestroy
	bool ___isMojiDestroy_10;
	// System.Int32 Stage01Director::ClearStatus
	int32_t ___ClearStatus_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ballCtrl
struct ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ballCtrl::speed
	float ___speed_4;
	// System.Single ballCtrl::minSpeed
	float ___minSpeed_5;
	// System.Single ballCtrl::maxSpeed
	float ___maxSpeed_6;
	// UnityEngine.Rigidbody ballCtrl::Rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___Rigid_7;
	// UnityEngine.Transform ballCtrl::Trans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Trans_8;
	// UnityEngine.AudioSource ballCtrl::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_9;
	// UnityEngine.AudioClip ballCtrl::seKin
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___seKin_10;
	// UnityEngine.AudioClip ballCtrl::seKon
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___seKon_11;
};

// block01Ctrl
struct block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject block01Ctrl::mojiPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mojiPrefab_4;
	// UnityEngine.GameObject block01Ctrl::moji
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moji_5;
	// UnityEngine.GameObject block01Ctrl::TextScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextScore_6;
	// UnityEngine.GameObject block01Ctrl::TextHighScore
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextHighScore_7;
	// UnityEngine.SpriteRenderer block01Ctrl::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_8;
	// UnityEngine.Sprite[] block01Ctrl::mojiSprite
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___mojiSprite_9;
};

// dt
struct dt_tF8471EE27817084A987A54FC6D69193AF19B2A35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields
{
	// System.Int32 dt::Score
	int32_t ___Score_4;
	// System.Int32 dt::HighScore
	int32_t ___HighScore_5;
	// System.String dt::SAVE_KEY
	String_t* ___SAVE_KEY_6;
	// System.String[] dt::sLabel
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___sLabel_7;
	// System.Single[] dt::x
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___x_8;
	// System.Single[] dt::y
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___y_9;
};

// moji01Ctrl
struct moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 moji01Ctrl::num
	int32_t ___num_4;
	// UnityEngine.GameObject[] moji01Ctrl::TextMoji
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___TextMoji_5;
	// UnityEngine.Rigidbody moji01Ctrl::Rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___Rigid_6;
	// UnityEngine.SpriteRenderer moji01Ctrl::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_7;
	// UnityEngine.AudioSource moji01Ctrl::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_8;
	// UnityEngine.AudioClip moji01Ctrl::seKirarin
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___seKirarin_9;
	// UnityEngine.AudioClip moji01Ctrl::seHenyo
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___seHenyo_10;
};

// paddleCtrl
struct paddleCtrl_tB6EE41A37193A84019533BA0E0BE1E092B9CF2AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single paddleCtrl::speed
	float ___speed_4;
	// UnityEngine.Vector2 paddleCtrl::target
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target_5;
	// UnityEngine.Rigidbody paddleCtrl::Rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___Rigid_6;
};

// taptoNextCtrl01
struct taptoNextCtrl01_tDAE359418700D08C9E70DAF406A2E29D09BF74B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void GameClearCtrl/<Omedetou>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COmedetouU3Ed__3__ctor_mB34C348CC226E9D0324CB5E4D526FA7A41DB4BA3 (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void block01Ctrl::checkHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void block01Ctrl_checkHighScore_m07D4221DAD9B8D6F0CBE9C8309C87FE3D351F9C2 (block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<moji01Ctrl>()
inline moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* GameObject_GetComponent_Tismoji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106_m699A9B792F07BEAC2363956E51415A3B362FA53D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Stage01Director/<GameStart>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameStartU3Ed__29__ctor_mEB2CC15C4DBB5AD36C8BF2DAD9EE60CE02A108F9 (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Stage01Director/<SenseiEnding>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSenseiEndingU3Ed__30__ctor_m3281D78FF045784684E531FAE3505112361C7CDA (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Stage01Director::checkHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director_checkHighScore_m2509BFBF5FA2560205576CD6F15D03519A2E359B (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void ballCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ballCtrl_Start_mBEF08FD688A0840EEFBFD03BA6FCA3CFAB224573 (ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___Rigid_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Rigid_7), (void*)L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_9), (void*)L_1);
		// Trans = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___Trans_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Trans_8), (void*)L_2);
		// Rigid.velocity = new Vector3(speed, speed, 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___Rigid_7;
		float L_4 = __this->___speed_4;
		float L_5 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_4, L_5, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Void ballCtrl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ballCtrl_Update_mD835337B15C2AC88B97904859A147A2260693FD1 (ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 velocity = Rigid.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___Rigid_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		// if(velocity.y < 1.0f && velocity.y > -1.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___y_3;
		if ((!(((float)L_3) < ((float)(1.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_5) > ((float)(-1.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// velocity.y = 1.0f;
		(&V_0)->___y_3 = (1.0f);
	}

IL_0032:
	{
		// float clampedSpeed = Mathf.Clamp(velocity.magnitude, minSpeed, maxSpeed);
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_7 = __this->___minSpeed_5;
		float L_8 = __this->___maxSpeed_6;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		// Rigid.velocity = velocity.normalized * clampedSpeed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___Rigid_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_10, L_13, NULL);
		// }
		return;
	}
}
// System.Void ballCtrl::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ballCtrl_OnCollisionEnter_m0B1CC569F76FC1EE27A75CA00B66B1D3B0BF246C (ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21545504E1F3E3453B9D306449B4EFE3C618361F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (other.gameObject.CompareTag("Paddle"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral21545504E1F3E3453B9D306449B4EFE3C618361F, NULL);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		// audioSource.PlayOneShot(seKon);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___seKon_11;
		NullCheck(L_3);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// Vector3 paddlePos = other.transform.position;           // ?p?h?????u
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_5 = ___other0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		V_0 = L_7;
		// Vector3 ballPos = Trans.position;                       // ?{?[?????u
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___Trans_8;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		// Vector3 direction = (ballPos - paddlePos).normalized;   // ?{?[???????p?x
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_10, NULL);
		V_3 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_1 = L_12;
		// float speed = Rigid.velocity.magnitude;                 // ???????x
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___Rigid_7;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		V_3 = L_14;
		float L_15;
		L_15 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		V_2 = L_15;
		// Rigid.velocity = direction * speed;                     // ????????x???X
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___Rigid_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_19, NULL);
		return;
	}

IL_0070:
	{
		// else if(other.gameObject.CompareTag("Wall"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_20 = ___other0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_20, NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_21, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// audioSource.PlayOneShot(seKon);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_24 = __this->___seKon_11;
		NullCheck(L_23);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_23, L_24, NULL);
		return;
	}

IL_0094:
	{
		// audioSource.PlayOneShot(seKin);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = __this->___audioSource_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_26 = __this->___seKin_10;
		NullCheck(L_25);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_25, L_26, NULL);
		// }
		return;
	}
}
// System.Void ballCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ballCtrl__ctor_m806D7ADD39318ADA35016B3DF743709F68B57C18 (ballCtrl_tA965F1AB8354871D9F6637A5785C670DF773C5C8* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5.0f;          // ?{?[???????
		__this->___speed_4 = (5.0f);
		// public float minSpeed = 10.0f;      // ?{?[??????????
		__this->___minSpeed_5 = (10.0f);
		// public float maxSpeed = 15.0f;
		__this->___maxSpeed_6 = (15.0f);
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
// System.Void dt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dt__ctor_m337853F267487070ABBCF7BCBC95EF3197B46E94 (dt_tF8471EE27817084A987A54FC6D69193AF19B2A35* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void dt::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dt__cctor_mF49377C20F151E79DF6E31D004485D63F6D9DFD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____317C3A50D0E0D421044962A786FAB0456FA0466B6FDEB0EA1E425E67277D4FCF_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BE996C8537DF893F2FBF8812D20DDE36F6A8D477BE581E223C637DE0C4083A6A_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6317D307020F7A6CF62E29E04FFE296A2153686E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE51D1BB8513E71F56B7A8C15B30ED6FBB9E866ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string SAVE_KEY = "HighScore";    // ?n?C?X?R?A????L?[
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___SAVE_KEY_6 = _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
		Il2CppCodeGenWriteBarrier((void**)(&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___SAVE_KEY_6), (void*)_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		// public static readonly string[] sLabel =
		// {
		//     "00", "01", "02", "03",
		//     "10", "11", "12", "13", "14",
		//     "20", "21", "22", "23",
		//     "30", "31", "32", "33", "34",
		//     "40", "41", "42", "43",
		//     "50", "51", "52", "53", "54",
		//     "60", "61", "62", "63",
		//     "70", "71", "72", "73", "74",
		//     "80", "81", "82", "83",
		//     "90", "91", "92", "93", "94",
		//     "a0", "a1", "a2", "a3"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)49));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralE51D1BB8513E71F56B7A8C15B30ED6FBB9E866ED);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteralE51D1BB8513E71F56B7A8C15B30ED6FBB9E866ED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral6317D307020F7A6CF62E29E04FFE296A2153686E);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteral6317D307020F7A6CF62E29E04FFE296A2153686E);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___sLabel_7 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___sLabel_7), (void*)L_49);
		// public static readonly float[] x =
		// {
		//     -3.6f, -1.2f, 1.2f, 3.6f,
		//     -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
		//     -3.6f, -1.2f, 1.2f, 3.6f,
		//     -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
		//     -3.6f, -1.2f, 1.2f, 3.6f,
		//     -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
		//     -3.6f, -1.2f, 1.2f, 3.6f,
		//     -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
		//     -3.6f, -1.2f, 1.2f, 3.6f,
		//     -4.2f, -2.4f, 0.0f, 2.4f, 4.2f,
		//     -3.6f, -1.2f, 1.2f, 3.6f
		// };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)49));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = L_50;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_52 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____BE996C8537DF893F2FBF8812D20DDE36F6A8D477BE581E223C637DE0C4083A6A_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_51, L_52, NULL);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___x_8 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___x_8), (void*)L_51);
		// public static readonly float[] y =
		// {
		//     8.00f, 8.00f, 8.00f, 8.00f,
		//     7.14f, 7.14f, 7.14f, 7.14f, 7.14f,
		//     6.28f, 6.28f, 6.28f, 6.28f,
		//     5.42f, 5.42f, 5.42f, 5.42f, 5.42f,
		//     4.56f, 4.56f, 4.56f, 4.56f,
		//     3.70f, 3.70f, 3.70f, 3.70f, 3.70f,
		//     2.84f, 2.84f, 2.84f, 2.84f,
		//     1.98f, 1.98f, 1.98f, 1.98f, 1.98f,
		//     1.12f, 1.12f, 1.12f, 1.12f,
		//     0.26f, 0.26f, 0.26f, 0.26f, 0.26f,
		//     -0.6f, -0.6f, -0.6f, -0.6f
		// };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)49));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = L_53;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____317C3A50D0E0D421044962A786FAB0456FA0466B6FDEB0EA1E425E67277D4FCF_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_54, L_55, NULL);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___y_9 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___y_9), (void*)L_54);
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
// System.Void GameClearCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClearCtrl_Start_m79DD14F0CC42B45892B4CCBF508C737EEDF1B904 (GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4675B561F44087540E4BA457DEC77A0CB3844F49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_4), (void*)L_0);
		// StartCoroutine("Omedetou");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral4675B561F44087540E4BA457DEC77A0CB3844F49, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameClearCtrl::Omedetou()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameClearCtrl_Omedetou_m5ADCC2514B26D98B7B8D3D26F2D4EE68AE2DB669 (GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* L_0 = (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5*)il2cpp_codegen_object_new(U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COmedetouU3Ed__3__ctor_mB34C348CC226E9D0324CB5E4D526FA7A41DB4BA3(L_0, 0, NULL);
		U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameClearCtrl::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClearCtrl_onClick_mA29AE9A807331B79BD2563EF96A7E2ACD1BF72C7 (GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameStart");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF, NULL);
		// }
		return;
	}
}
// System.Void GameClearCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameClearCtrl__ctor_m9A0D1CAA39C860372D3B7F897ADC89BAA95F10C5 (GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* __this, const RuntimeMethod* method) 
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
// System.Void GameClearCtrl/<Omedetou>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COmedetouU3Ed__3__ctor_mB34C348CC226E9D0324CB5E4D526FA7A41DB4BA3 (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameClearCtrl/<Omedetou>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COmedetouU3Ed__3_System_IDisposable_Dispose_m6C288F51AE14087CFDE2E898831C46F56E8824F8 (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameClearCtrl/<Omedetou>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COmedetouU3Ed__3_MoveNext_mCCFD4ED9D2B7A360D2DFFDBDE093044275AFF8A2 (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(vOmedetou);
		GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* L_5 = V_1;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___audioSource_4;
		GameClearCtrl_t93AF142D63EFE3DC029ABD027DF3FA06599BA181* L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___vOmedetou_5;
		NullCheck(L_6);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_6, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameClearCtrl/<Omedetou>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COmedetouU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1F73296E452C06D03A6A11EB5A7A059481A6BBA (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameClearCtrl/<Omedetou>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COmedetouU3Ed__3_System_Collections_IEnumerator_Reset_m2013E4FFDCA419F9E259BE07352D9E2C1E6B219F (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COmedetouU3Ed__3_System_Collections_IEnumerator_Reset_m2013E4FFDCA419F9E259BE07352D9E2C1E6B219F_RuntimeMethod_var)));
	}
}
// System.Object GameClearCtrl/<Omedetou>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COmedetouU3Ed__3_System_Collections_IEnumerator_get_Current_m259EBC1FE869B203C2DEE83069BB3EF476A2460F (U3COmedetouU3Ed__3_tB3366B01A81AAFFBB2DBE3C62140804D7DFAA5F5* __this, const RuntimeMethod* method) 
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
// System.Void GameStartCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartCtrl_Start_m2532405CEFB5FBF30DE6DA9A0B9FB776CFA26EF5 (GameStartCtrl_tD6F35B4B54F0763938D915DEDE801882526275B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dt.Score = 0;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4 = 0;
		// dt.HighScore = PlayerPrefs.GetInt(dt.SAVE_KEY, 0);
		String_t* L_0 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___SAVE_KEY_6;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(L_0, 0, NULL);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5 = L_1;
		// }
		return;
	}
}
// System.Void GameStartCtrl::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartCtrl_onClick_m56BAE9F047C6E451BA17650ACD066ECDC868D0A2 (GameStartCtrl_tD6F35B4B54F0763938D915DEDE801882526275B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E78729C721FC5C65268CDE02EC0565D37336267);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("stage01");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7E78729C721FC5C65268CDE02EC0565D37336267, NULL);
		// }
		return;
	}
}
// System.Void GameStartCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartCtrl__ctor_m81E70188C176EB4615342A5A3AA3ED8FD2044EA9 (GameStartCtrl_tD6F35B4B54F0763938D915DEDE801882526275B1* __this, const RuntimeMethod* method) 
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
// System.Void paddleCtrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paddleCtrl_Start_m0F1CCC653B9946244C7426D243B9DCC5622F5F20 (paddleCtrl_tB6EE41A37193A84019533BA0E0BE1E092B9CF2AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___Rigid_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Rigid_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void paddleCtrl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paddleCtrl_Update_m8CF29C760F8892228EE85F0D8A519941E5117823 (paddleCtrl_tB6EE41A37193A84019533BA0E0BE1E092B9CF2AA* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_0)
		{
			goto IL_0072;
		}
	}
	{
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		__this->___target_5 = L_4;
		// if(target.y < -5.0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___target_5);
		float L_6 = L_5->___y_1;
		if ((!(((float)L_6) < ((float)(-5.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// Rigid.velocity = new Vector3((target.x - this.transform.localPosition.x) * speed, 0.0f, 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___Rigid_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___target_5);
		float L_9 = L_8->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_12)), L_13)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_14, NULL);
		return;
	}

IL_0072:
	{
		// Rigid.velocity = new Vector3(0.0f, 0.0f, 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___Rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_15, L_16, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void paddleCtrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void paddleCtrl__ctor_m6AFFA1E7E932ED8C49BBA91957BE30C611728A13 (paddleCtrl_tB6EE41A37193A84019533BA0E0BE1E092B9CF2AA* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10.0f;        // ?p?h???????
		__this->___speed_4 = (10.0f);
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
// System.Void block01Ctrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void block01Ctrl_Start_m724B7EA30A5955FCEE89E28EC55EB85F775A4EF1 (block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5242C308BE6D7200D9A98E14A70649AC950F6ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE915F2CFD405EE7E4375D7B95DAA0151C8C34841);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextScore = GameObject.Find("textScore");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5242C308BE6D7200D9A98E14A70649AC950F6ED8, NULL);
		__this->___TextScore_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextScore_6), (void*)L_0);
		// TextHighScore = GameObject.Find("textHighScore");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE915F2CFD405EE7E4375D7B95DAA0151C8C34841, NULL);
		__this->___TextHighScore_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextHighScore_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void block01Ctrl::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void block01Ctrl_OnCollisionEnter_mD250206AC6E956CBF8C4A8AD7A4EAD1328093B20 (block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismoji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106_m699A9B792F07BEAC2363956E51415A3B362FA53D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DE609E26944B2311D10D951753D2DF550C229D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4DA54A2895CEAEA7DB526B197EDB9F8C574E0AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	{
		// dt.Score += Stage01Director.point;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_0 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)10)));
		// TextScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TextScore_6;
		NullCheck(L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_3;
		L_3 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// checkHighScore();
		block01Ctrl_checkHighScore_m07D4221DAD9B8D6F0CBE9C8309C87FE3D351F9C2(__this, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// Stage01Director.remainBlock--;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___remainBlock_7;
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___remainBlock_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// if(Stage01Director.remainBlock == 0)
		int32_t L_7 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___remainBlock_7;
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		// Stage01Director.ClearStatus = 2;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___ClearStatus_11 = 2;
		// Stage01Director.isClear = true;
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isClear_9 = (bool)1;
	}

IL_0067:
	{
		// if (Random.Range(0, 2) == 0)
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		if (L_8)
		{
			goto IL_0137;
		}
	}
	{
		// int num = Random.Range(0, 2);
		int32_t L_9;
		L_9 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_0 = L_9;
		// moji = Instantiate(mojiPrefab, new Vector3(gameObject.transform.position.x, gameObject.transform.position.y - 1.0f, 0.0f), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___mojiPrefab_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_14, ((float)il2cpp_codegen_subtract(L_18, (1.0f))), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___moji_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moji_5), (void*)L_21);
		// spriteRenderer = moji.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___moji_5;
		NullCheck(L_22);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23;
		L_23 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_22, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_8 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_8), (void*)L_23);
		// spriteRenderer.sprite = mojiSprite[num];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___spriteRenderer_8;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_25 = __this->___mojiSprite_9;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_24, L_28, NULL);
		// Debug.Log("num = " + num);
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA4DA54A2895CEAEA7DB526B197EDB9F8C574E0AB, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_30, NULL);
		// Debug.Log("moji= " + spriteRenderer);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_31 = __this->___spriteRenderer_8;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_32 = L_31;
		G_B4_0 = L_32;
		G_B4_1 = _stringLiteral3DE609E26944B2311D10D951753D2DF550C229D9;
		if (L_32)
		{
			G_B5_0 = L_32;
			G_B5_1 = _stringLiteral3DE609E26944B2311D10D951753D2DF550C229D9;
			goto IL_0117;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_011c;
	}

IL_0117:
	{
		NullCheck(G_B5_0);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_33;
		G_B6_1 = G_B5_1;
	}

IL_011c:
	{
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
		// moji.GetComponent<moji01Ctrl>().num = num;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___moji_5;
		NullCheck(L_35);
		moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* L_36;
		L_36 = GameObject_GetComponent_Tismoji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106_m699A9B792F07BEAC2363956E51415A3B362FA53D(L_35, GameObject_GetComponent_Tismoji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106_m699A9B792F07BEAC2363956E51415A3B362FA53D_RuntimeMethod_var);
		int32_t L_37 = V_0;
		NullCheck(L_36);
		L_36->___num_4 = L_37;
	}

IL_0137:
	{
		// }
		return;
	}
}
// System.Void block01Ctrl::checkHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void block01Ctrl_checkHighScore_m07D4221DAD9B8D6F0CBE9C8309C87FE3D351F9C2 (block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dt.Score > dt.HighScore)
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_0 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		int32_t L_1 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0053;
		}
	}
	{
		// dt.HighScore = dt.Score;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_2 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5 = L_2;
		// TextHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___TextHighScore_7;
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4;
		L_4 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_3, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_5;
		L_5 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
		String_t* L_7 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___SAVE_KEY_6;
		int32_t L_8 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_7, L_8, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void block01Ctrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void block01Ctrl__ctor_m8BFDA81DC83C6388A120DD1D6BDDE4516FC6AF42 (block01Ctrl_tC0E1695B6F74D6C3CCF861CB612B564ADD1B4250* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sprite[] mojiSprite = new Sprite[2];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___mojiSprite_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mojiSprite_9), (void*)L_0);
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
// System.Void moji01Ctrl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moji01Ctrl_Start_m2135380864EF83AEDBC270027548D465540276FD (moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD10E3742E5199C84774D7AE504868967680B5FA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7AF1B4B63FF03ABF8DEEA0D8F0503709D2E1C3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextMoji[0] = GameObject.Find("textSen");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___TextMoji_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF7AF1B4B63FF03ABF8DEEA0D8F0503709D2E1C3B, NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_1);
		// TextMoji[1] = GameObject.Find("textSei");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___TextMoji_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD10E3742E5199C84774D7AE504868967680B5FA8, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_3);
		// Rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___Rigid_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Rigid_6), (void*)L_4);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5;
		L_5 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_7), (void*)L_5);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6;
		L_6 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_8), (void*)L_6);
		// Rigid.velocity = new Vector3(0.0f, -2.5f, 0.0f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___Rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), (0.0f), (-2.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void moji01Ctrl::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moji01Ctrl_OnTriggerEnter_m0A22BB3D83DD5E831D8623E67553737E2646A311 (moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21545504E1F3E3453B9D306449B4EFE3C618361F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (other.CompareTag("Paddle"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral21545504E1F3E3453B9D306449B4EFE3C618361F, NULL);
		if (!L_1)
		{
			goto IL_00d2;
		}
	}
	{
		// if (num == Stage01Director.seikai[Stage01Director.getMojiNum])
		int32_t L_2 = __this->___num_4;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___seikai_6;
		int32_t L_4 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___getMojiNum_8;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_6))))
		{
			goto IL_0072;
		}
	}
	{
		// TextMoji[num].GetComponent<Text>().color = Color.yellow;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___TextMoji_5;
		int32_t L_8 = __this->___num_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11;
		L_11 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_10, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// Stage01Director.getMojiNum++;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		int32_t L_13 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___getMojiNum_8;
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___getMojiNum_8 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// audioSource.PlayOneShot(seKirarin);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = __this->___audioSource_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = __this->___seKirarin_9;
		NullCheck(L_14);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_14, L_15, NULL);
		// if (Stage01Director.getMojiNum == Stage01Director.clear)
		int32_t L_16 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___getMojiNum_8;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_00c5;
		}
	}
	{
		// Stage01Director.ClearStatus = 1;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___ClearStatus_11 = 1;
		// Stage01Director.isClear = true;
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isClear_9 = (bool)1;
		goto IL_00c5;
	}

IL_0072:
	{
		// audioSource.PlayOneShot(seHenyo);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___audioSource_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18 = __this->___seHenyo_10;
		NullCheck(L_17);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_17, L_18, NULL);
		// Stage01Director.getMojiNum = 0;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___getMojiNum_8 = 0;
		// for (int i = 0; i < Stage01Director.clear; i++)
		V_0 = 0;
		goto IL_00c1;
	}

IL_008d:
	{
		// TextMoji[num].GetComponent<Text>().color = new Color(0.31f, 0.31f, 0.0f, 1.0f); ;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___TextMoji_5;
		int32_t L_20 = __this->___num_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23;
		L_23 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_22, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), (0.310000002f), (0.310000002f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// for (int i = 0; i < Stage01Director.clear; i++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00c1:
	{
		// for (int i = 0; i < Stage01Director.clear; i++)
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)2)))
		{
			goto IL_008d;
		}
	}

IL_00c5:
	{
		// spriteRenderer.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_27 = __this->___spriteRenderer_7;
		NullCheck(L_27);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_27, (bool)0, NULL);
		return;
	}

IL_00d2:
	{
		// else if(other.CompareTag("Wall"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28 = ___other0;
		NullCheck(L_28);
		bool L_29;
		L_29 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_28, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_30, NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void moji01Ctrl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moji01Ctrl_Update_mA397CD13F5FC1F5AED4DED6CD2B6C5C5C9468994 (moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Stage01Director.isMojiDestroy)
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		bool L_0 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isMojiDestroy_10;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void moji01Ctrl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void moji01Ctrl__ctor_m012F31996BF9E23D0EF9C52434267FC73C1D13F7 (moji01Ctrl_t89B593C77E6F0E7FB0EB378BBD41050949918106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] TextMoji = new GameObject[2];      // ?????C???W?P?[?^?[????
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___TextMoji_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextMoji_5), (void*)L_0);
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
// System.Void Stage01Director::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director_Start_m62940D2812D03F0EFA03ABCF4D76BBF840BAE9A3 (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3938FC942DEC595115C7CE9CBAD7924F0CDA7298);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5242C308BE6D7200D9A98E14A70649AC950F6ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C7FC123A9A5396F0C12A168D602C60B0986A76D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2EBCB20931A32E7ABAA6C9A5ED0CE8F4FF4F7BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD10E3742E5199C84774D7AE504868967680B5FA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE915F2CFD405EE7E4375D7B95DAA0151C8C34841);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE09689AF368D2AA1469EA2B83AFAD29ADD0BB0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7AF1B4B63FF03ABF8DEEA0D8F0503709D2E1C3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TextScore = GameObject.Find("textScore");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5242C308BE6D7200D9A98E14A70649AC950F6ED8, NULL);
		__this->___TextScore_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextScore_19), (void*)L_0);
		// TextHighScore = GameObject.Find("textHighScore");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE915F2CFD405EE7E4375D7B95DAA0151C8C34841, NULL);
		__this->___TextHighScore_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextHighScore_20), (void*)L_1);
		// TextSen = GameObject.Find("textSen");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF7AF1B4B63FF03ABF8DEEA0D8F0503709D2E1C3B, NULL);
		__this->___TextSen_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextSen_21), (void*)L_2);
		// TextSei = GameObject.Find("textSei");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD10E3742E5199C84774D7AE504868967680B5FA8, NULL);
		__this->___TextSei_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextSei_22), (void*)L_3);
		// TextSenseiClear = GameObject.Find("textSenseiClear");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralA2EBCB20931A32E7ABAA6C9A5ED0CE8F4FF4F7BD, NULL);
		__this->___TextSenseiClear_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextSenseiClear_23), (void*)L_4);
		// TextAllClear = GameObject.Find("textAllClear");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5C7FC123A9A5396F0C12A168D602C60B0986A76D, NULL);
		__this->___TextAllClear_24 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextAllClear_24), (void*)L_5);
		// TapToNext = GameObject.Find("TapToNext");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3938FC942DEC595115C7CE9CBAD7924F0CDA7298, NULL);
		__this->___TapToNext_25 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TapToNext_25), (void*)L_6);
		// Ball = GameObject.Find("ball");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75, NULL);
		__this->___Ball_26 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ball_26), (void*)L_7);
		// Paddle = GameObject.Find("paddle");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralEE09689AF368D2AA1469EA2B83AFAD29ADD0BB0C, NULL);
		__this->___Paddle_27 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Paddle_27), (void*)L_8);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9;
		L_9 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_12), (void*)L_9);
		// TextSenseiClear.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___TextSenseiClear_23;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// TextAllClear.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___TextAllClear_24;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// TapToNext.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___TapToNext_25;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// dt.Score = 0;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4 = 0;
		// TextScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___TextScore_19;
		NullCheck(L_13);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14;
		L_14 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_13, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_15;
		L_15 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092, L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// TextHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___TextHighScore_20;
		NullCheck(L_17);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18;
		L_18 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_17, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_19;
		L_19 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E, L_19, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
		// remainBlock = 49;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___remainBlock_7 = ((int32_t)49);
		// for (int i = 0; i<49; i++)
		V_0 = 0;
		goto IL_017d;
	}

IL_0123:
	{
		// block[i] = Instantiate(blockPrefab, new Vector3(dt.x[i], dt.y[i], 0.0f), Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___block_18;
		int32_t L_22 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___blockPrefab_17;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___x_8;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___y_9;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		float L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_27, L_31, (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_23, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_34);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_34);
		// spriteRenderer = block[i].GetComponent<SpriteRenderer>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = __this->___block_18;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_38);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_39;
		L_39 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_38, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		__this->___spriteRenderer_28 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_28), (void*)L_39);
		// spriteRenderer.sprite = senseiSprite[i];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_40 = __this->___spriteRenderer_28;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_41 = __this->___senseiSprite_29;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_40);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_40, L_44, NULL);
		// for (int i = 0; i<49; i++)
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_017d:
	{
		// for (int i = 0; i<49; i++)
		int32_t L_46 = V_0;
		if ((((int32_t)L_46) < ((int32_t)((int32_t)49))))
		{
			goto IL_0123;
		}
	}
	{
		// StartCoroutine("GameStart");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_47;
		L_47 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralD283071278C5CA19C7E2D9F2EC2D44D80A4EBBFF, NULL);
		// }
		return;
	}
}
// System.Void Stage01Director::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director_Update_m7041BBBF0C5E7A22D3B40C539F47A21B44A35DF8 (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA55E0BE70739B2496B112D9AAC5C933DA502FE5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (isClear)
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		bool L_0 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isClear_9;
		if (!L_0)
		{
			goto IL_00a6;
		}
	}
	{
		// isClear = false;
		il2cpp_codegen_runtime_class_init_inline(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isClear_9 = (bool)0;
		// audioSource.PlayOneShot(seKirarin);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___audioSource_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___seKirarin_16;
		NullCheck(L_1);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// isMojiDestroy = true;
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isMojiDestroy_10 = (bool)1;
		// Ball.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___Ball_26;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Paddle.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Paddle_27;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// TextSen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___TextSen_21;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// TextSei.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___TextSei_22;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// switch (ClearStatus)
		int32_t L_7 = ((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___ClearStatus_11;
		V_0 = L_7;
		int32_t L_8 = V_0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_007d;
			}
		}
	}
	{
		return;
	}

IL_0070:
	{
		// StartCoroutine("SenseiEnding");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralCA55E0BE70739B2496B112D9AAC5C933DA502FE5, NULL);
		// break;
		return;
	}

IL_007d:
	{
		// TextAllClear.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___TextAllClear_24;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// audioSource.PlayOneShot(vStageClear);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___audioSource_12;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12 = __this->___vStageClear_14;
		NullCheck(L_11);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_11, L_12, NULL);
		// TapToNext.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___TapToNext_25;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Stage01Director::checkHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director_checkHighScore_m2509BFBF5FA2560205576CD6F15D03519A2E359B (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dt.Score > dt.HighScore)
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_0 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		int32_t L_1 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0053;
		}
	}
	{
		// dt.HighScore = dt.Score;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_2 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5 = L_2;
		// TextHighScore.GetComponent<Text>().text = "HighScore:" + dt.HighScore.ToString("D5");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___TextHighScore_20;
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4;
		L_4 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_3, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_5;
		L_5 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral66B8412C8CBA0908869143FB224B6085F523AE3E, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// PlayerPrefs.SetInt(dt.SAVE_KEY, dt.HighScore);
		String_t* L_7 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___SAVE_KEY_6;
		int32_t L_8 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___HighScore_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_7, L_8, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Stage01Director::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stage01Director_GameStart_mB01CB9F518BBDA07EFBF52609A16FDEE374C5B54 (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* L_0 = (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A*)il2cpp_codegen_object_new(U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameStartU3Ed__29__ctor_mEB2CC15C4DBB5AD36C8BF2DAD9EE60CE02A108F9(L_0, 0, NULL);
		U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Stage01Director::SenseiEnding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stage01Director_SenseiEnding_m66CBB9538F6CC769C22342D79C2998EB7C03822A (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* L_0 = (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8*)il2cpp_codegen_object_new(U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSenseiEndingU3Ed__30__ctor_m3281D78FF045784684E531FAE3505112361C7CDA(L_0, 0, NULL);
		U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Stage01Director::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director__ctor_m7B56A7966EDEAA8B499C106265BC6F53D3C71431 (Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject[] block = new GameObject[50];            // ?u???b?N
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50));
		__this->___block_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___block_18), (void*)L_0);
		// public Sprite[] senseiSprite = new Sprite[50];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = (SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B*)SZArrayNew(SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B_il2cpp_TypeInfo_var, (uint32_t)((int32_t)50));
		__this->___senseiSprite_29 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___senseiSprite_29), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Stage01Director::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage01Director__cctor_m3C3CA52E0E101A9E0B657728659A6B4C2CE43D0F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] seikai = { 0, 1 };  // ??????????i0:?? 1:???j
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___seikai_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___seikai_6), (void*)L_1);
		// public static bool isClear = false;         // ?Q?[???N???A?t???O
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isClear_9 = (bool)0;
		// public static bool isMojiDestroy = false;   // ?????????t???O
		((Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_StaticFields*)il2cpp_codegen_static_fields_for(Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E_il2cpp_TypeInfo_var))->___isMojiDestroy_10 = (bool)0;
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
// System.Void Stage01Director/<GameStart>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameStartU3Ed__29__ctor_mEB2CC15C4DBB5AD36C8BF2DAD9EE60CE02A108F9 (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Stage01Director/<GameStart>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameStartU3Ed__29_System_IDisposable_Dispose_mA08E170A14E3ACAF57147DF88B0A7C1BEAEA563E (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Stage01Director/<GameStart>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameStartU3Ed__29_MoveNext_m93521F85C68DB83288C77106CE90BB76C308E7BD (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.00999999978f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// audioSource.PlayOneShot(vGameStart);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_5 = V_1;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___audioSource_12;
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___vGameStart_13;
		NullCheck(L_6);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_6, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Stage01Director/<GameStart>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameStartU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CE7683BFBDA3252114DBA024921E03D356C50B2 (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Stage01Director/<GameStart>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameStartU3Ed__29_System_Collections_IEnumerator_Reset_m56991AB7726CD43FE69107AED868D38851AA2783 (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameStartU3Ed__29_System_Collections_IEnumerator_Reset_m56991AB7726CD43FE69107AED868D38851AA2783_RuntimeMethod_var)));
	}
}
// System.Object Stage01Director/<GameStart>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameStartU3Ed__29_System_Collections_IEnumerator_get_Current_m1BECB2F74E6FE0E0684887DBB92253B97DCEEB2C (U3CGameStartU3Ed__29_tD51313518B90382993383A06300BF7B80ED9043A* __this, const RuntimeMethod* method) 
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
// System.Void Stage01Director/<SenseiEnding>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSenseiEndingU3Ed__30__ctor_m3281D78FF045784684E531FAE3505112361C7CDA (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Stage01Director/<SenseiEnding>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSenseiEndingU3Ed__30_System_IDisposable_Dispose_mAE190E18ED3A083E3899B9C790664DE97C2253FF (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Stage01Director/<SenseiEnding>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSenseiEndingU3Ed__30_MoveNext_m2F45F316C84AE054572DF301C7B4A6CE85E2DF9E (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// TextSenseiClear.SetActive(true);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___TextSenseiClear_23;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// audioSource.PlayOneShot(vStageClear);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_5 = V_1;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___audioSource_12;
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_7 = V_1;
		NullCheck(L_7);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = L_7->___vStageClear_14;
		NullCheck(L_6);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_6, L_8, NULL);
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < 49; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0119;
	}

IL_0072:
	{
		// if (block[i].activeSelf)
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_10 = V_1;
		NullCheck(L_10);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = L_10->___block_18;
		int32_t L_12 = __this->___U3CiU3E5__2_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_14, NULL);
		if (!L_15)
		{
			goto IL_0109;
		}
	}
	{
		// audioSource.PlayOneShot(sePi);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_16 = V_1;
		NullCheck(L_16);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = L_16->___audioSource_12;
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_18 = V_1;
		NullCheck(L_18);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_19 = L_18->___sePi_15;
		NullCheck(L_17);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_17, L_19, NULL);
		// dt.Score += point * 2;
		il2cpp_codegen_runtime_class_init_inline(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var);
		int32_t L_20 = ((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4;
		((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)20)));
		// TextScore.GetComponent<Text>().text = "Score:" + dt.Score.ToString("D5");
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_21 = V_1;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21->___TextScore_19;
		NullCheck(L_22);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23;
		L_23 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_22, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_24;
		L_24 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&((dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_StaticFields*)il2cpp_codegen_static_fields_for(dt_tF8471EE27817084A987A54FC6D69193AF19B2A35_il2cpp_TypeInfo_var))->___Score_4), _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092, L_24, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_25);
		// checkHighScore();
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_26 = V_1;
		NullCheck(L_26);
		Stage01Director_checkHighScore_m2509BFBF5FA2560205576CD6F15D03519A2E359B(L_26, NULL);
		// block[i].SetActive(false);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_27 = V_1;
		NullCheck(L_27);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = L_27->___block_18;
		int32_t L_29 = __this->___U3CiU3E5__2_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_32 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_32, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_32);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0102:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0109:
	{
		// for (int i = 0; i < 49; i++)
		int32_t L_33 = __this->___U3CiU3E5__2_3;
		V_2 = L_33;
		int32_t L_34 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0119:
	{
		// for (int i = 0; i < 49; i++)
		int32_t L_35 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)L_35) < ((int32_t)((int32_t)49))))
		{
			goto IL_0072;
		}
	}
	{
		// TapToNext.SetActive(true);
		Stage01Director_t2D683CA5263E3C33D14B9BA09AA251C41181402E* L_36 = V_1;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = L_36->___TapToNext_25;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Stage01Director/<SenseiEnding>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSenseiEndingU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCD378A86ED9F6A4C75108D0D89DFBBE0B593F4CD (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Stage01Director/<SenseiEnding>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSenseiEndingU3Ed__30_System_Collections_IEnumerator_Reset_m36BACCE8764A0BFB5E556FD48A1AFA0F78A27AB9 (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSenseiEndingU3Ed__30_System_Collections_IEnumerator_Reset_m36BACCE8764A0BFB5E556FD48A1AFA0F78A27AB9_RuntimeMethod_var)));
	}
}
// System.Object Stage01Director/<SenseiEnding>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSenseiEndingU3Ed__30_System_Collections_IEnumerator_get_Current_mAA8A88B9483F9EA5E11A8CED036FE7D18184CBEF (U3CSenseiEndingU3Ed__30_t0CD68373AC09D06AEA2E1BC40D8199F0A8EBA1F8* __this, const RuntimeMethod* method) 
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
// System.Void taptoNextCtrl01::onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void taptoNextCtrl01_onClick_m732DDB82C96276E177A038FA7F353D47A2A05463 (taptoNextCtrl01_tDAE359418700D08C9E70DAF406A2E29D09BF74B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63210067DFDCB020415106D25305E79CDA5478A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameClear");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral63210067DFDCB020415106D25305E79CDA5478A1, NULL);
		// }
		return;
	}
}
// System.Void taptoNextCtrl01::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void taptoNextCtrl01__ctor_mF6BCDAA9BC77B73BC7C3601B654D7849850CE53F (taptoNextCtrl01_tDAE359418700D08C9E70DAF406A2E29D09BF74B4* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
