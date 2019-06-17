#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.DisableAlarm
struct UVitalStatsOxygenation_C_DisableAlarm_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.EnableAlarm
struct UVitalStatsOxygenation_C_EnableAlarm_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.CheckAlarm
struct UVitalStatsOxygenation_C_CheckAlarm_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateAlarmColor
struct UVitalStatsOxygenation_C_ActivateAlarmColor_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ActivateNormalColor
struct UVitalStatsOxygenation_C_ActivateNormalColor_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetBackgroundColor
struct UVitalStatsOxygenation_C_SetBackgroundColor_Params
{
	struct FLinearColor                                colorToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenSaturationLevelFloat
struct UVitalStatsOxygenation_C_GetOxygenSaturationLevelFloat_Params
{
	float                                              oxygenSaturationLevel;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetOxygenationLevel
struct UVitalStatsOxygenation_C_GetOxygenationLevel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.SetTextColor
struct UVitalStatsOxygenation_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHeartRateBPM
struct UVitalStatsOxygenation_C_GetHeartRateBPM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentText
struct UVitalStatsOxygenation_C_GetHealthPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetHealthPercentBar
struct UVitalStatsOxygenation_C_GetHealthPercentBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentText
struct UVitalStatsOxygenation_C_GetStaminaPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.GetStaminaPercentBar
struct UVitalStatsOxygenation_C_GetStaminaPercentBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Construct
struct UVitalStatsOxygenation_C_Construct_Params
{
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.Tick
struct UVitalStatsOxygenation_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsOxygenation.VitalStatsOxygenation_C.ExecuteUbergraph_VitalStatsOxygenation
struct UVitalStatsOxygenation_C_ExecuteUbergraph_VitalStatsOxygenation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
