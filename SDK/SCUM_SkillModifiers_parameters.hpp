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

// Function SkillModifiers.SkillModifiers_C.SetParentsForChildren
struct USkillModifiers_C_SetParentsForChildren_Params
{
};

// Function SkillModifiers.SkillModifiers_C.ShouldAlarmBeOn
struct USkillModifiers_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.UpdateParameterLines
struct USkillModifiers_C_UpdateParameterLines_Params
{
};

// Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor
struct USkillModifiers_C_SetPrisonerToMonitor_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.SetDefaultTitle
struct USkillModifiers_C_SetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SkillModifiers.SkillModifiers_C.SetContentVisibility
struct USkillModifiers_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.SetTextColor
struct USkillModifiers_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox
struct USkillModifiers_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.GetTitleText
struct USkillModifiers_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility
struct USkillModifiers_C_SetVerticalBoxContentVisibility_Params
{
	class UVerticalBox*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.SetContentMinimized
struct USkillModifiers_C_SetContentMinimized_Params
{
	bool                                               minimized;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.MinimizeContent
struct USkillModifiers_C_MinimizeContent_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.GetDefaultTitle
struct USkillModifiers_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function SkillModifiers.SkillModifiers_C.SelectCustomColor
struct USkillModifiers_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.OnMinimize
struct USkillModifiers_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.Construct
struct USkillModifiers_C_Construct_Params
{
};

// Function SkillModifiers.SkillModifiers_C.Tick
struct USkillModifiers_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillModifiers.SkillModifiers_C.OnPrisonerSet
struct USkillModifiers_C_OnPrisonerSet_Params
{
};

// Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent
struct USkillModifiers_C_AlarmOnWindowContent_Params
{
};

// Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent
struct USkillModifiers_C_AlarmOffWindowContent_Params
{
};

// Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers
struct USkillModifiers_C_ExecuteUbergraph_SkillModifiers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
