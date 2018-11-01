#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeatherController.WeatherController_C.RecaptureSkyProbe
struct AWeatherController_C_RecaptureSkyProbe_Params
{
};

// Function WeatherController.WeatherController_C.LerpFactors
struct AWeatherController_C_LerpFactors_Params
{
};

// Function WeatherController.WeatherController_C.UpdateSkyParameters
struct AWeatherController_C_UpdateSkyParameters_Params
{
};

// Function WeatherController.WeatherController_C.sunCompute
struct AWeatherController_C_sunCompute_Params
{
};

// Function WeatherController.WeatherController_C.UserConstructionScript
struct AWeatherController_C_UserConstructionScript_Params
{
};

// Function WeatherController.WeatherController_C.ReceiveTick
struct AWeatherController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeatherController.WeatherController_C.ReceiveBeginPlay
struct AWeatherController_C_ReceiveBeginPlay_Params
{
};

// Function WeatherController.WeatherController_C.NetworkSyncDayTime
struct AWeatherController_C_NetworkSyncDayTime_Params
{
};

// Function WeatherController.WeatherController_C.StartWeatherTransition
struct AWeatherController_C_StartWeatherTransition_Params
{
	float                                              NewStormIntensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeatherController.WeatherController_C.Recapture
struct AWeatherController_C_Recapture_Params
{
};

// Function WeatherController.WeatherController_C.Event_SetWindDirection
struct AWeatherController_C_Event_SetWindDirection_Params
{
	struct FVector2D                                   Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WeatherController.WeatherController_C.Event_SetWindSpeed
struct AWeatherController_C_Event_SetWindSpeed_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeatherController.WeatherController_C.ChangeWindDir
struct AWeatherController_C_ChangeWindDir_Params
{
};

// Function WeatherController.WeatherController_C.ExecuteUbergraph_WeatherController
struct AWeatherController_C_ExecuteUbergraph_WeatherController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
