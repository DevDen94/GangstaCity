extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_HotReload();
	RegisterModule_HotReload();

	void RegisterModule_AssetBundle();
	RegisterModule_AssetBundle();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCoreFontEngine();
	RegisterModule_TextCoreFontEngine();

	void RegisterModule_TextCoreTextEngine();
	RegisterModule_TextCoreTextEngine();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UIElementsNative();
	RegisterModule_UIElementsNative();

	void RegisterModule_UIElements();
	RegisterModule_UIElements();

	void RegisterModule_Umbra();
	RegisterModule_Umbra();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAssetBundle();
	RegisterModule_UnityWebRequestAssetBundle();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_VR();
	RegisterModule_VR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; template <> void RegisterUnityClass<AudioFilter>(const char*);
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; template <> void RegisterUnityClass<AudioHighPassFilter>(const char*);
class AudioLowPassFilter; template <> void RegisterUnityClass<AudioLowPassFilter>(const char*);
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class CustomCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterUnityClass<FlareLayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; template <> void RegisterUnityClass<Halo>(const char*);
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; template <> void RegisterUnityClass<LensFlare>(const char*);
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; template <> void RegisterUnityClass<NavMeshAgent>(const char*);
class NavMeshObstacle; template <> void RegisterUnityClass<NavMeshObstacle>(const char*);
class OffMeshLink; template <> void RegisterUnityClass<OffMeshLink>(const char*);
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; template <> void RegisterUnityClass<CharacterController>(const char*);
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; template <> void RegisterUnityClass<TerrainCollider>(const char*);
class WheelCollider; template <> void RegisterUnityClass<WheelCollider>(const char*);
namespace Unity { class Joint; } template <> void RegisterUnityClass<Unity::Joint>(const char*);
namespace Unity { class CharacterJoint; } template <> void RegisterUnityClass<Unity::CharacterJoint>(const char*);
namespace Unity { class ConfigurableJoint; } template <> void RegisterUnityClass<Unity::ConfigurableJoint>(const char*);
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } template <> void RegisterUnityClass<Unity::HingeJoint>(const char*);
namespace Unity { class SpringJoint; } template <> void RegisterUnityClass<Unity::SpringJoint>(const char*);
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; template <> void RegisterUnityClass<AssetBundle>(const char*);
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; template <> void RegisterUnityClass<Flare>(const char*);
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; template <> void RegisterUnityClass<NavMeshData>(const char*);
class OcclusionCullingData; template <> void RegisterUnityClass<OcclusionCullingData>(const char*);
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; template <> void RegisterUnityClass<TerrainLayer>(const char*);
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class MovieTexture; 
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; template <> void RegisterUnityClass<NavMeshProjectSettings>(const char*);
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ShaderNameRegistry; template <> void RegisterUnityClass<ShaderNameRegistry>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; template <> void RegisterUnityClass<NavMeshSettings>(const char*);
class OcclusionCullingSettings; template <> void RegisterUnityClass<OcclusionCullingSettings>(const char*);
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 120 non stripped classes
	//0. NavMeshAgent
	RegisterUnityClass<NavMeshAgent>("AI");
	//1. NavMeshData
	RegisterUnityClass<NavMeshData>("AI");
	//2. NavMeshObstacle
	RegisterUnityClass<NavMeshObstacle>("AI");
	//3. NavMeshProjectSettings
	RegisterUnityClass<NavMeshProjectSettings>("AI");
	//4. NavMeshSettings
	RegisterUnityClass<NavMeshSettings>("AI");
	//5. OffMeshLink
	RegisterUnityClass<OffMeshLink>("AI");
	//6. Animation
	RegisterUnityClass<Animation>("Animation");
	//7. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//8. Animator
	RegisterUnityClass<Animator>("Animation");
	//9. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//10. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//11. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//12. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//13. Motion
	RegisterUnityClass<Motion>("Animation");
	//14. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//15. AssetBundle
	RegisterUnityClass<AssetBundle>("AssetBundle");
	//16. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//17. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//18. AudioFilter
	RegisterUnityClass<AudioFilter>("Audio");
	//19. AudioHighPassFilter
	RegisterUnityClass<AudioHighPassFilter>("Audio");
	//20. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//21. AudioLowPassFilter
	RegisterUnityClass<AudioLowPassFilter>("Audio");
	//22. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//23. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//24. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//25. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//26. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//27. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//28. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//29. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//30. Camera
	RegisterUnityClass<Camera>("Core");
	//31. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//32. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//33. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//34. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//35. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//36. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//37. Flare
	RegisterUnityClass<Flare>("Core");
	//38. FlareLayer
	RegisterUnityClass<FlareLayer>("Core");
	//39. GameManager
	RegisterUnityClass<GameManager>("Core");
	//40. GameObject
	RegisterUnityClass<GameObject>("Core");
	//41. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//42. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//43. Halo
	RegisterUnityClass<Halo>("Core");
	//44. InputManager
	RegisterUnityClass<InputManager>("Core");
	//45. LensFlare
	RegisterUnityClass<LensFlare>("Core");
	//46. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//47. Light
	RegisterUnityClass<Light>("Core");
	//48. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//49. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//50. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//51. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//52. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//53. Material
	RegisterUnityClass<Material>("Core");
	//54. Mesh
	RegisterUnityClass<Mesh>("Core");
	//55. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//56. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//57. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//58. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//59. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//60. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//61. Object
	//Skipping Object
	//62. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//63. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//64. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//65. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//66. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//67. Renderer
	RegisterUnityClass<Renderer>("Core");
	//68. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//69. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//70. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//71. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//72. Shader
	RegisterUnityClass<Shader>("Core");
	//73. ShaderNameRegistry
	RegisterUnityClass<ShaderNameRegistry>("Core");
	//74. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//75. Skybox
	RegisterUnityClass<Skybox>("Core");
	//76. Sprite
	RegisterUnityClass<Sprite>("Core");
	//77. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//78. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//79. TagManager
	RegisterUnityClass<TagManager>("Core");
	//80. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//81. Texture
	RegisterUnityClass<Texture>("Core");
	//82. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//83. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//84. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//85. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//86. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//87. Transform
	RegisterUnityClass<Transform>("Core");
	//88. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//89. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//90. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//91. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//92. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//93. CharacterController
	RegisterUnityClass<CharacterController>("Physics");
	//94. Unity::CharacterJoint
	RegisterUnityClass<Unity::CharacterJoint>("Physics");
	//95. Collider
	RegisterUnityClass<Collider>("Physics");
	//96. Unity::ConfigurableJoint
	RegisterUnityClass<Unity::ConfigurableJoint>("Physics");
	//97. Unity::HingeJoint
	RegisterUnityClass<Unity::HingeJoint>("Physics");
	//98. Unity::Joint
	RegisterUnityClass<Unity::Joint>("Physics");
	//99. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//100. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//101. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//102. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//103. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//104. Unity::SpringJoint
	RegisterUnityClass<Unity::SpringJoint>("Physics");
	//105. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//106. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//107. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//108. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//109. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//110. TerrainLayer
	RegisterUnityClass<TerrainLayer>("Terrain");
	//111. TerrainCollider
	RegisterUnityClass<TerrainCollider>("TerrainPhysics");
	//112. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//113. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//114. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//115. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//116. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//117. OcclusionCullingData
	RegisterUnityClass<OcclusionCullingData>("Umbra");
	//118. OcclusionCullingSettings
	RegisterUnityClass<OcclusionCullingSettings>("Umbra");
	//119. WheelCollider
	RegisterUnityClass<WheelCollider>("Vehicles");

}
