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

// Function Vitamins.Vitamins_C.ShouldAlarmBeOn
struct UVitamins_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.SetParentsForChildren
struct UVitamins_C_SetParentsForChildren_Params
{
};

// Function Vitamins.Vitamins_C.Update
struct UVitamins_C_Update_Params
{
};

// Function Vitamins.Vitamins_C.SetPrisonerToMonitor
struct UVitamins_C_SetPrisonerToMonitor_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.AddVitaminToParameterLines
struct UVitamins_C_AddVitaminToParameterLines_Params
{
	class UParameterPercentageLine_C*                  NewItem;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray
struct UVitamins_C_PopulateVitaminsParameterLinesArray_Params
{
};

// Function Vitamins.Vitamins_C.Init
struct UVitamins_C_Init_Params
{
};

// Function Vitamins.Vitamins_C.SetDefaultTitle
struct UVitamins_C_SetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Vitamins.Vitamins_C.SetContentVisibility
struct UVitamins_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.SetTextColor
struct UVitamins_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox
struct UVitamins_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.GetTitleText
struct UVitamins_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Vitamins.Vitamins_C.GetDefaultTitle
struct UVitamins_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function Vitamins.Vitamins_C.SelectCustomColor
struct UVitamins_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.Construct
struct UVitamins_C_Construct_Params
{
};

// Function Vitamins.Vitamins_C.Tick
struct UVitamins_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.OnPrisonerSet
struct UVitamins_C_OnPrisonerSet_Params
{
};

// Function Vitamins.Vitamins_C.UpdateVitaminsEvent
struct UVitamins_C_UpdateVitaminsEvent_Params
{
};

// Function Vitamins.Vitamins_C.AlarmOnWindowContent
struct UVitamins_C_AlarmOnWindowContent_Params
{
};

// Function Vitamins.Vitamins_C.AlarmOffWindowContent
struct UVitamins_C_AlarmOffWindowContent_Params
{
};

// Function Vitamins.Vitamins_C.OnMinimize
struct UVitamins_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins
struct UVitamins_C_ExecuteUbergraph_Vitamins_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
