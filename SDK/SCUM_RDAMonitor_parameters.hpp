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

// Function RDAMonitor.RDAMonitor_C.shouldAlarmBeOn
struct URDAMonitor_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.GetContentSize
struct URDAMonitor_C_GetContentSize_Params
{
	struct FVector2D                                   contentSize;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
struct URDAMonitor_C_SetPrisonerToMonitorOnChildren_Params
{
};

// Function RDAMonitor.RDAMonitor_C.Init
struct URDAMonitor_C_Init_Params
{
};

// Function RDAMonitor.RDAMonitor_C.GetTitleText
struct URDAMonitor_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
struct URDAMonitor_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function RDAMonitor.RDAMonitor_C.SelectCustomColor
struct URDAMonitor_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.OnMinimize
struct URDAMonitor_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.Construct
struct URDAMonitor_C_Construct_Params
{
};

// Function RDAMonitor.RDAMonitor_C.Tick
struct URDAMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
struct URDAMonitor_C_MinimizableWidgetSizeChanged_Params
{
};

// Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
struct URDAMonitor_C_RDAMonitorSizeChanged_Params
{
};

// Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
struct URDAMonitor_C_OnPrisonerSet_Params
{
};

// Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
struct URDAMonitor_C_OnRDAMonitorContentSizeChanged_Params
{
};

// Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
struct URDAMonitor_C_WindowContentSizeChanged_Params
{
};

// Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent
struct URDAMonitor_C_AlarmOnWindowContent_Params
{
};

// Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent
struct URDAMonitor_C_AlarmOffWindowContent_Params
{
};

// Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
struct URDAMonitor_C_ExecuteUbergraph_RDAMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
struct URDAMonitor_C_RDASizeChangeEventDispatcher__DelegateSignature_Params
{
	struct FVector2D                                   newSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
