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

// Function VitalStatsTemperature.VitalStatsTemperature_C.DisableAlarm
struct UVitalStatsTemperature_C_DisableAlarm_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.EnableAlarm
struct UVitalStatsTemperature_C_EnableAlarm_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.CheckAlarm
struct UVitalStatsTemperature_C_CheckAlarm_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperatureFloat
struct UVitalStatsTemperature_C_GetBodyTemperatureFloat_Params
{
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateNormalColor
struct UVitalStatsTemperature_C_ActivateNormalColor_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.ActivateAlarmColor
struct UVitalStatsTemperature_C_ActivateAlarmColor_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviationText
struct UVitalStatsTemperature_C_SetTemperatureDeviationText_Params
{
	struct FText                                       temperatureDeviationText;                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureDeviation
struct UVitalStatsTemperature_C_SetTemperatureDeviation_Params
{
	float                                              temperatureDeviation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTemperatureExtremes
struct UVitalStatsTemperature_C_SetTemperatureExtremes_Params
{
	struct FText                                       tempExtremes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.GetTemperatureDeviation
struct UVitalStatsTemperature_C_GetTemperatureDeviation_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.GetBodyTemperature
struct UVitalStatsTemperature_C_GetBodyTemperature_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.SetTextColor
struct UVitalStatsTemperature_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.Construct
struct UVitalStatsTemperature_C_Construct_Params
{
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.Tick
struct UVitalStatsTemperature_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsTemperature.VitalStatsTemperature_C.ExecuteUbergraph_VitalStatsTemperature
struct UVitalStatsTemperature_C_ExecuteUbergraph_VitalStatsTemperature_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
