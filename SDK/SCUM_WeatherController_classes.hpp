#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeatherController.WeatherController_C
// 0x041C (0x07DC - 0x03C0)
class AWeatherController_C : public AWeatherController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             arrow;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SceneRoot;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TIME_OF_DAY_SEQUENCE;                                     // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class ASkyLight_Blueprint_C*                       SkyLight;                                                 // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ADirectionalLight*                           Sun;                                                      // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_RainController_C*                        RainController;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AStaticMeshActor*                            LowerHemisphereMesh;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AStaticMeshActor*                            UpperHemisphereMesh;                                      // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AWindDirectionalSource*                      WindDirectionalSource;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UObject*                                     Ocean;                                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APostProcessVolume*                          GlobalPostProcessing;                                     // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALevelSequenceActor*                         WeatherSequenceActor;                                     // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AUltra_Dynamic_Sky_BP_C*                     UltraSkyBP;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AExponentialHeightFog*                       ExponentialHeightFog;                                     // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              UpdateSunDelay;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunLightIntensity;                                        // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunLightIntensity_Storm;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunTemperature;                                           // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunTemperature_Storm;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunBloomScale;                                            // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunBloomScale_Storm;                                      // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunLightFlareIntensity;                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                SunRotationCurve;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MoonPositionCurve;                                        // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MoonInclinationCurve;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DarknessIntensityMultiplierCurve;                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StarsIntensity;                                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientIntensity;                                         // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientIntensity_Storm;                                   // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientSaturation;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientSaturation_Storm;                                  // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinOcclusion;                                             // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinOcclusion_Storm;                                       // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyIntensity;                                             // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyIntensity_Storm;                                       // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudSpeed;                                               // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudSpeed_Storm;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensity;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudDensity_Storm;                                       // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudWispsOpacity;                                        // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudWispsOpacity_Storm;                                  // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_MinBrightness;                                         // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_MinBrightness_Storm;                                   // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OcclusionTint;                                            // 0x04BC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                OcclusionTint_Storm;                                      // 0x04CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                LowerHemisphereColor;                                     // 0x04DC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                UpperHemisphereColor;                                     // 0x04EC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                UpperHemisphereColorStorm;                                // 0x04FC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              UpperHemisphereAlpha;                                     // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed_Storm;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength_Storm;                                       // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity;                                               // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDensity_Storm;                                         // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity_Storm;                                      // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogExtinctionScale;                                       // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogExtinctionScale_Storm;                                 // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogScatteringDistribution;                                // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogScatteringDistribution_Storm;                          // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0540(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor_Storm;                               // 0x0550(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TSP_Haze;                                                 // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TSP_Haze_Storm;                                           // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TSP_HazeBaseKm;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TSP_HazeBaseKm_Storm;                                     // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PP_ToneMSlope;                                            // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_ToneMSlope_Storm;                                      // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_ToneMToe;                                              // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_ToneMToe_Storm;                                        // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_ToneMSoulder;                                          // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_ToneMSoulder_Storm;                                    // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_SSAOPower;                                             // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_SSAOPower_Storm;                                       // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SkyHorizonBaseColor;                                      // 0x0590(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyHorizonBaseColor_Storm;                                // 0x05A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyZenithBaseColor;                                       // 0x05B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyZenithBaseColor_Storm;                                 // 0x05C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudLightColor;                                       // 0x05D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudLightColor_Storm;                                 // 0x05E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudDarkColor;                                        // 0x05F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudDarkColor_Storm;                                  // 0x0600(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkySunColor;                                              // 0x0610(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkySunColor_Storm;                                        // 0x0620(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyLightLightColor;                                       // 0x0630(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyLightLightColor_Storm;                                 // 0x0640(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudSunLightColor;                                    // 0x0650(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SkyCloudSunLightColor_Storm;                              // 0x0660(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                GlobalParticleColor;                                      // 0x0670(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SubsurfaceColorIntensity;                                 // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EmmisiveIntensity;                                        // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnowIntensity;                                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunLightIntensity_Result;                                 // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientIntensity_Result;                                  // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyIntensity_Result;                                      // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinOcclusion_Result;                                      // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WindDirNew;                                               // 0x069C(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              PP_MinBrightness_Result;                                  // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                OcclusionTint_Result;                                     // 0x06A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FogDensity_Result;                                        // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogMaxOpacity_Result;                                     // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogExtinctionScale_Result;                                // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogScatteringDistribution_Result;                         // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor_Result;                              // 0x06C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SunTemperature_Result;                                    // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunBloomScale_Result;                                     // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TSP_Haze_Result;                                          // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TSP_HazeBaseKm_Result;                                    // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloudSpeed_Result;                                        // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloudDensity_Result;                                      // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloudWispsOpacity_Result;                                 // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindStrength_Result;                                      // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmbientSaturation_Result;                                 // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PP_ToneMSlope_Result;                                     // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PP_ToneMToe_Result;                                       // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PP_ToneMSoulder_Result;                                   // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SunAngle;                                                 // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TransitionActive;                                         // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	float                                              newStormIntensity;                                        // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastStormIntensity;                                       // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalTransitionTime;                                      // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTransitTime;                                       // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForecastActive;                                           // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0721(0x0003) MISSED OFFSET
	float                                              WeatherForecastCurrentTime;                               // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeatherForecastNextMinSec;                                // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeatherForecastNextMaxSec;                                // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PP_SSAOPower_Result;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirTemperature_Result;                                    // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterTemperature_Result;                                  // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RelativeHumidity_Result;                                  // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AirPressure_Result;                                       // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyHorizonBaseColor_Result;                               // 0x0744(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyZenithBaseColor_Result;                                // 0x0754(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyCloudLightColor_Result;                                // 0x0764(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyCloudDarkColor_Result;                                 // 0x0774(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkySunColor_Result;                                       // 0x0784(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyLightLightColor_Result;                                // 0x0794(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SkyCloudSunLightColor_Result;                             // 0x07A4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WeatherForecastNextTime;                                  // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeatherForecastTransitionTime;                            // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07BC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WeatherForecastCurve;                                     // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindChangeRate;                                           // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                UpperHemisphereColor_Result;                              // 0x07CC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherController.WeatherController_C");
		return ptr;
	}


	void RecaptureSkyProbe();
	void LerpFactors();
	void UpdateSkyParameters();
	void sunCompute();
	void UserConstructionScript();
	void NetworkSyncDayTime();
	void StartWeatherTransition(float newStormIntensity, float TransitionTime);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void Recapture();
	void Event_SetWindDirection(const struct FVector2D& Value);
	void Event_SetWindSpeed(float Value);
	void ChangeWindDir();
	void UpdateWeatherVisuals();
	void ExecuteUbergraph_WeatherController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
