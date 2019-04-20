#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmControl
struct UOxygenSaturationMonitor_C_AlarmControl_Params
{
	int                                                alarmCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.DeactivateAlarm
struct UOxygenSaturationMonitor_C_DeactivateAlarm_Params
{
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ActivateAlarm
struct UOxygenSaturationMonitor_C_ActivateAlarm_Params
{
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.CheckBloodOxygenationAlarm
struct UOxygenSaturationMonitor_C_CheckBloodOxygenationAlarm_Params
{
	float                                              oxygenationLevel;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.SetPrisonerAndLifeComponentToMonitor
struct UOxygenSaturationMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params
{
	class APrisoner*                                   prisonerToSet;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ProvideOxygenSaturationExtremes
struct UOxygenSaturationMonitor_C_ProvideOxygenSaturationExtremes_Params
{
	struct FText                                       OxygenSaturationExtremes;                                 // (Parm, OutParm)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.GetHeartRateBPM
struct UOxygenSaturationMonitor_C_GetHeartRateBPM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Construct
struct UOxygenSaturationMonitor_C_Construct_Params
{
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.Tick
struct UOxygenSaturationMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.AlarmOnWindowContent
struct UOxygenSaturationMonitor_C_AlarmOnWindowContent_Params
{
};

// Function OxygenSaturationMonitor.OxygenSaturationMonitor_C.ExecuteUbergraph_OxygenSaturationMonitor
struct UOxygenSaturationMonitor_C_ExecuteUbergraph_OxygenSaturationMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
