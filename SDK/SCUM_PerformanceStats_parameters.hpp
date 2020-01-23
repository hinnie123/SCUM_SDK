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

// Function PerformanceStats.PerformanceStats_C.Init
struct UPerformanceStats_C_Init_Params
{
};

// Function PerformanceStats.PerformanceStats_C.SetParentsForChildren
struct UPerformanceStats_C_SetParentsForChildren_Params
{
};

// Function PerformanceStats.PerformanceStats_C.ShouldAlarmBeOn
struct UPerformanceStats_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.UpdateParameterLines
struct UPerformanceStats_C_UpdateParameterLines_Params
{
};

// Function PerformanceStats.PerformanceStats_C.SetPrisonerToMonitor
struct UPerformanceStats_C_SetPrisonerToMonitor_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.SetDefaultTitle
struct UPerformanceStats_C_SetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PerformanceStats.PerformanceStats_C.SetContentVisibility
struct UPerformanceStats_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.SetTextColor
struct UPerformanceStats_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.SetTextColorOfVerticalBox
struct UPerformanceStats_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.GetTitleText
struct UPerformanceStats_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PerformanceStats.PerformanceStats_C.SetVerticalBoxContentVisibility
struct UPerformanceStats_C_SetVerticalBoxContentVisibility_Params
{
	class UVerticalBox*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.SetContentMinimized
struct UPerformanceStats_C_SetContentMinimized_Params
{
	bool                                               minimized;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.MinimizeContent
struct UPerformanceStats_C_MinimizeContent_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.GetDefaultTitle
struct UPerformanceStats_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function PerformanceStats.PerformanceStats_C.SelectCustomColor
struct UPerformanceStats_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.OnMinimize
struct UPerformanceStats_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.Construct
struct UPerformanceStats_C_Construct_Params
{
};

// Function PerformanceStats.PerformanceStats_C.Tick
struct UPerformanceStats_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerformanceStats.PerformanceStats_C.OnPrisonerSet
struct UPerformanceStats_C_OnPrisonerSet_Params
{
};

// Function PerformanceStats.PerformanceStats_C.AlarmOnWindowContent
struct UPerformanceStats_C_AlarmOnWindowContent_Params
{
};

// Function PerformanceStats.PerformanceStats_C.AlarmOffWindowContent
struct UPerformanceStats_C_AlarmOffWindowContent_Params
{
};

// Function PerformanceStats.PerformanceStats_C.ExecuteUbergraph_PerformanceStats
struct UPerformanceStats_C_ExecuteUbergraph_PerformanceStats_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
