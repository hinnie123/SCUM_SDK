#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VitalStatsRespiration.VitalStatsRespiration_C.DisableAlarm
struct UVitalStatsRespiration_C_DisableAlarm_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.EnableAlarm
struct UVitalStatsRespiration_C_EnableAlarm_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.CheckAlarm
struct UVitalStatsRespiration_C_CheckAlarm_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.GetRespiratoryRateInt
struct UVitalStatsRespiration_C_GetRespiratoryRateInt_Params
{
	int                                                respiratoryRate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateNormalColor
struct UVitalStatsRespiration_C_ActivateNormalColor_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.ActivateAlarmColor
struct UVitalStatsRespiration_C_ActivateAlarmColor_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.GetBreathRate
struct UVitalStatsRespiration_C_GetBreathRate_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.SetTextColor
struct UVitalStatsRespiration_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.Construct
struct UVitalStatsRespiration_C_Construct_Params
{
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.Tick
struct UVitalStatsRespiration_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsRespiration.VitalStatsRespiration_C.ExecuteUbergraph_VitalStatsRespiration
struct UVitalStatsRespiration_C_ExecuteUbergraph_VitalStatsRespiration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
