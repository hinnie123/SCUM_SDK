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

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.AlarmControl
struct UVitalStatsBloodPressure_C_AlarmControl_Params
{
	int                                                alarmCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.DeactivateAlarm
struct UVitalStatsBloodPressure_C_DeactivateAlarm_Params
{
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ActivateAlarm
struct UVitalStatsBloodPressure_C_ActivateAlarm_Params
{
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.CheckBloodPressureAlarm
struct UVitalStatsBloodPressure_C_CheckBloodPressureAlarm_Params
{
	int                                                systolicPressure;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                diastolicPressure;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.GetBloodPressure
struct UVitalStatsBloodPressure_C_GetBloodPressure_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Construct
struct UVitalStatsBloodPressure_C_Construct_Params
{
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.UpdateContent
struct UVitalStatsBloodPressure_C_UpdateContent_Params
{
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.Tick
struct UVitalStatsBloodPressure_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStatsBloodPressure.VitalStatsBloodPressure_C.ExecuteUbergraph_VitalStatsBloodPressure
struct UVitalStatsBloodPressure_C_ExecuteUbergraph_VitalStatsBloodPressure_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
