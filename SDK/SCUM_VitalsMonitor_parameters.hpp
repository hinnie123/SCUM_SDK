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

// Function VitalsMonitor.VitalsMonitor_C.shouldAlarmBeOn
struct UVitalsMonitor_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalsMonitor.VitalsMonitor_C.Init
struct UVitalsMonitor_C_Init_Params
{
};

// Function VitalsMonitor.VitalsMonitor_C.SetPrisonerAndLifeComponentToMonitor
struct UVitalsMonitor_C_SetPrisonerAndLifeComponentToMonitor_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VitalsMonitor.VitalsMonitor_C.GetHeartRateBPM
struct UVitalsMonitor_C_GetHeartRateBPM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VitalsMonitor.VitalsMonitor_C.Construct
struct UVitalsMonitor_C_Construct_Params
{
};

// Function VitalsMonitor.VitalsMonitor_C.Tick
struct UVitalsMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VitalsMonitor.VitalsMonitor_C.AlarmOnWindowContent
struct UVitalsMonitor_C_AlarmOnWindowContent_Params
{
};

// Function VitalsMonitor.VitalsMonitor_C.AlarmOffWindowContent
struct UVitalsMonitor_C_AlarmOffWindowContent_Params
{
};

// Function VitalsMonitor.VitalsMonitor_C.ExecuteUbergraph_VitalsMonitor
struct UVitalsMonitor_C_ExecuteUbergraph_VitalsMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
