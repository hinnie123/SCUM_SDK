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

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.AlarmControl
struct UBodyTemperatureMonitor_C_AlarmControl_Params
{
	int                                                alarmCode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.DeactivateAlarm
struct UBodyTemperatureMonitor_C_DeactivateAlarm_Params
{
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ActivateAlarm
struct UBodyTemperatureMonitor_C_ActivateAlarm_Params
{
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.CheckBodyTemperatureAlarm
struct UBodyTemperatureMonitor_C_CheckBodyTemperatureAlarm_Params
{
	float                                              bodyTemperature;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.SetPrisonerAndLifeComponentToMonitor
struct UBodyTemperatureMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ProvideTemperatureExtremes
struct UBodyTemperatureMonitor_C_ProvideTemperatureExtremes_Params
{
	struct FText                                       minTemp_MaxTemp;                                          // (Parm, OutParm)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.GetHeartRateBPM
struct UBodyTemperatureMonitor_C_GetHeartRateBPM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Tick
struct UBodyTemperatureMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.Construct
struct UBodyTemperatureMonitor_C_Construct_Params
{
};

// Function BodyTemperatureMonitor.BodyTemperatureMonitor_C.ExecuteUbergraph_BodyTemperatureMonitor
struct UBodyTemperatureMonitor_C_ExecuteUbergraph_BodyTemperatureMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
