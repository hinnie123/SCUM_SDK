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

// Function DynamicStressLoad.DynamicStressLoad_C.SetParentsForChildren
struct UDynamicStressLoad_C_SetParentsForChildren_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.ShouldAlarmBeOn
struct UDynamicStressLoad_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetColorOfSelectedTextFields
struct UDynamicStressLoad_C_SetColorOfSelectedTextFields_Params
{
	struct FLinearColor                                color_SpecifiedColor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.AdjustUnitsValues
struct UDynamicStressLoad_C_AdjustUnitsValues_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.AdjustTextColors
struct UDynamicStressLoad_C_AdjustTextColors_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.Init
struct UDynamicStressLoad_C_Init_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.UpdateParameterLines
struct UDynamicStressLoad_C_UpdateParameterLines_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetPrisonerToMonitor
struct UDynamicStressLoad_C_SetPrisonerToMonitor_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetDefaultTitle
struct UDynamicStressLoad_C_SetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetContentVisibility
struct UDynamicStressLoad_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColor
struct UDynamicStressLoad_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColorOfVerticalBox
struct UDynamicStressLoad_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.GetTitleText
struct UDynamicStressLoad_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetVerticalBoxContentVisibility
struct UDynamicStressLoad_C_SetVerticalBoxContentVisibility_Params
{
	class UVerticalBox*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SetContentMinimized
struct UDynamicStressLoad_C_SetContentMinimized_Params
{
	bool                                               minimized;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.MinimizeContent
struct UDynamicStressLoad_C_MinimizeContent_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.GetDefaultTitle
struct UDynamicStressLoad_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function DynamicStressLoad.DynamicStressLoad_C.SelectCustomColor
struct UDynamicStressLoad_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.OnMinimize
struct UDynamicStressLoad_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.Construct
struct UDynamicStressLoad_C_Construct_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.Tick
struct UDynamicStressLoad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DynamicStressLoad.DynamicStressLoad_C.OnPrisonerSet
struct UDynamicStressLoad_C_OnPrisonerSet_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.UpdateDynamicLoadEvent
struct UDynamicStressLoad_C_UpdateDynamicLoadEvent_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOnWindowContent
struct UDynamicStressLoad_C_AlarmOnWindowContent_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOffWindowContent
struct UDynamicStressLoad_C_AlarmOffWindowContent_Params
{
};

// Function DynamicStressLoad.DynamicStressLoad_C.ExecuteUbergraph_DynamicStressLoad
struct UDynamicStressLoad_C_ExecuteUbergraph_DynamicStressLoad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
