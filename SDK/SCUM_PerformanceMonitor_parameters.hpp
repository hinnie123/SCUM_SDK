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

// Function PerformanceMonitor.PerformanceMonitor_C.shouldAlarmBeOn
struct UPerformanceMonitor_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
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
