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

// Function Minerals.Minerals_C.shouldAlarmBeOn
struct UMinerals_C_shouldAlarmBeOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Minerals.Minerals_C.SetParentsForChildren
struct UMinerals_C_SetParentsForChildren_Params
{
};

// Function Minerals.Minerals_C.Update
struct UMinerals_C_Update_Params
{
};

// Function Minerals.Minerals_C.SetPrisonerToMonitor
struct UMinerals_C_SetPrisonerToMonitor_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.Init
struct UMinerals_C_Init_Params
{
};

// Function Minerals.Minerals_C.SetDefaultTitle
struct UMinerals_C_SetDefaultTitle_Params
{
	struct FString                                     defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Minerals.Minerals_C.SetContentVisibility
struct UMinerals_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.SetTextColor
struct UMinerals_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Minerals.Minerals_C.SetTextColorOfVerticalBox
struct UMinerals_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Minerals.Minerals_C.GetTitleText
struct UMinerals_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Minerals.Minerals_C.SetVerticalBoxContentVisibility
struct UMinerals_C_SetVerticalBoxContentVisibility_Params
{
	class UVerticalBox*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.SetContentMinimized
struct UMinerals_C_SetContentMinimized_Params
{
	bool                                               minimized;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.MinimizeContent
struct UMinerals_C_MinimizeContent_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.GetDefaultTitle
struct UMinerals_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function Minerals.Minerals_C.SelectCustomColor
struct UMinerals_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Minerals.Minerals_C.Construct
struct UMinerals_C_Construct_Params
{
};

// Function Minerals.Minerals_C.Tick
struct UMinerals_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.OnPrisonerSet
struct UMinerals_C_OnPrisonerSet_Params
{
};

// Function Minerals.Minerals_C.MineralsUpdateEvent
struct UMinerals_C_MineralsUpdateEvent_Params
{
};

// Function Minerals.Minerals_C.AlarmOnWindowContent
struct UMinerals_C_AlarmOnWindowContent_Params
{
};

// Function Minerals.Minerals_C.AlarmOffWindowContent
struct UMinerals_C_AlarmOffWindowContent_Params
{
};

// Function Minerals.Minerals_C.OnMinimize
struct UMinerals_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Minerals.Minerals_C.ExecuteUbergraph_Minerals
struct UMinerals_C_ExecuteUbergraph_Minerals_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
