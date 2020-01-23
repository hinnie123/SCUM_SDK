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

// Function PerformanceMonitor.PerformanceMonitor_C.ShouldAlarmBeOn
struct UPerformanceMonitor_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceMonitor.PerformanceMonitor_C.GetContentSize
struct UPerformanceMonitor_C_GetContentSize_Params
{
	struct FVector2D                                   contentSize;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function PerformanceMonitor.PerformanceMonitor_C.OnPrisonerSet
struct UPerformanceMonitor_C_OnPrisonerSet_Params
{
};

// Function PerformanceMonitor.PerformanceMonitor_C.Construct
struct UPerformanceMonitor_C_Construct_Params
{
};

// Function PerformanceMonitor.PerformanceMonitor_C.WindowContentSizeChanged
struct UPerformanceMonitor_C_WindowContentSizeChanged_Params
{
};

// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOnWindowContent
struct UPerformanceMonitor_C_AlarmOnWindowContent_Params
{
};

// Function PerformanceMonitor.PerformanceMonitor_C.AlarmOffWindowContent
struct UPerformanceMonitor_C_AlarmOffWindowContent_Params
{
};

// Function PerformanceMonitor.PerformanceMonitor_C.ExecuteUbergraph_PerformanceMonitor
struct UPerformanceMonitor_C_ExecuteUbergraph_PerformanceMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
