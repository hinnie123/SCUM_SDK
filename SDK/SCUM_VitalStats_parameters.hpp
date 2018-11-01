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

// Function VitalStats.VitalStats_C.isAlarmOn
struct UVitalStats_C_isAlarmOn_Params
{
	bool                                               isHeartBPMAlarmOn;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.AlarmControl
struct UVitalStats_C_AlarmControl_Params
{
	int                                                alarmCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.DeactivateAlarm
struct UVitalStats_C_DeactivateAlarm_Params
{
};

// Function VitalStats.VitalStats_C.ActivateAlarm
struct UVitalStats_C_ActivateAlarm_Params
{
};

// Function VitalStats.VitalStats_C.CheckHeartBPMAlarm
struct UVitalStats_C_CheckHeartBPMAlarm_Params
{
	int                                                BeatsPerMinute;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.SetTextColor
struct UVitalStats_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.GetHeartRateBPM
struct UVitalStats_C_GetHeartRateBPM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStats.VitalStats_C.GetHealthPercentText
struct UVitalStats_C_GetHealthPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStats.VitalStats_C.GetHealthPercentBar
struct UVitalStats_C_GetHealthPercentBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.GetStaminaPercentText
struct UVitalStats_C_GetStaminaPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalStats.VitalStats_C.GetStaminaPercentBar
struct UVitalStats_C_GetStaminaPercentBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.Construct
struct UVitalStats_C_Construct_Params
{
};

// Function VitalStats.VitalStats_C.UpdateContent
struct UVitalStats_C_UpdateContent_Params
{
};

// Function VitalStats.VitalStats_C.AlarmOnWindowContent
struct UVitalStats_C_AlarmOnWindowContent_Params
{
};

// Function VitalStats.VitalStats_C.Tick
struct UVitalStats_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalStats.VitalStats_C.ExecuteUbergraph_VitalStats
struct UVitalStats_C_ExecuteUbergraph_VitalStats_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
