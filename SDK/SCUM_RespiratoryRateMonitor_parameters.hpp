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

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.AlarmControl
struct URespiratoryRateMonitor_C_AlarmControl_Params
{
	int                                                alarmCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.DeactivateAlarm
struct URespiratoryRateMonitor_C_DeactivateAlarm_Params
{
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ActivateAlarm
struct URespiratoryRateMonitor_C_ActivateAlarm_Params
{
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.CheckRespiratoryRateAlarm
struct URespiratoryRateMonitor_C_CheckRespiratoryRateAlarm_Params
{
	int                                                respiratoryRate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.SetPrisonerAndLifeComponentToMonitor
struct URespiratoryRateMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params
{
	class APrisoner*                                   prisonerToSet;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ProvideRespiratoryRateExtremes
struct URespiratoryRateMonitor_C_ProvideRespiratoryRateExtremes_Params
{
	struct FText                                       respiratoryRateExtremes;                                  // (Parm, OutParm)
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Construct
struct URespiratoryRateMonitor_C_Construct_Params
{
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.Tick
struct URespiratoryRateMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RespiratoryRateMonitor.RespiratoryRateMonitor_C.ExecuteUbergraph_RespiratoryRateMonitor
struct URespiratoryRateMonitor_C_ExecuteUbergraph_RespiratoryRateMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
