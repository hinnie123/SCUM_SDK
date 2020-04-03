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

// Function SkillSwitcher.SkillSwitcher_C.IsDifferenceSignificant
struct USkillSwitcher_C_IsDifferenceSignificant_Params
{
	float                                              referentValue;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.RoundTo1DecPos
struct USkillSwitcher_C_RoundTo1DecPos_Params
{
	float                                              floatNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              floatTo1Dec;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.DeactivateIntelligenceAlarm
struct USkillSwitcher_C_DeactivateIntelligenceAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.DeactivateDexterityAlarm
struct USkillSwitcher_C_DeactivateDexterityAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.DeactivateConstitutionAlarm
struct USkillSwitcher_C_DeactivateConstitutionAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.DeactivateStrengthAlarm
struct USkillSwitcher_C_DeactivateStrengthAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.InitReferentAttributeValues
struct USkillSwitcher_C_InitReferentAttributeValues_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.SetParents
struct USkillSwitcher_C_SetParents_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.shouldAlarmBeOn
struct USkillSwitcher_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.CheckSkillIntelligenceAlarm
struct USkillSwitcher_C_CheckSkillIntelligenceAlarm_Params
{
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.CheckSkillDexterityAlarm
struct USkillSwitcher_C_CheckSkillDexterityAlarm_Params
{
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.CheckSkillConstitutionAlarm
struct USkillSwitcher_C_CheckSkillConstitutionAlarm_Params
{
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.CheckSkillStrengthAlarm
struct USkillSwitcher_C_CheckSkillStrengthAlarm_Params
{
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.SetPrisonerToMonitorOnChildren
struct USkillSwitcher_C_SetPrisonerToMonitorOnChildren_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.UpdateAttributeLevels
struct USkillSwitcher_C_UpdateAttributeLevels_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.UpdateButtonBorderSizes
struct USkillSwitcher_C_UpdateButtonBorderSizes_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.SaveButtonBorderXSizes
struct USkillSwitcher_C_SaveButtonBorderXSizes_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.ResetXSizes
struct USkillSwitcher_C_ResetXSizes_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.AdjustXSizes
struct USkillSwitcher_C_AdjustXSizes_Params
{
	float                                              sizeIncreaseX0;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              sizeIncreaseX1;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              sizeIncreaseX2;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              sizeIncreaseX3;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonSizes
struct USkillSwitcher_C_AdjustButtonSizes_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.AdjustButtonPositions
struct USkillSwitcher_C_AdjustButtonPositions_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.HideButtonBorder
struct USkillSwitcher_C_HideButtonBorder_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.ShowAllButtonBorders
struct USkillSwitcher_C_ShowAllButtonBorders_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.SelectActiveSkillContent
struct USkillSwitcher_C_SelectActiveSkillContent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.GetActiveSkillContent
struct USkillSwitcher_C_GetActiveSkillContent_Params
{
	class USkillsContent_C*                            activeSkillContent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.InitSkillContents
struct USkillSwitcher_C_InitSkillContents_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentTypes
struct USkillSwitcher_C_InitSkillContentTypes_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.InitSkillContentsArray
struct USkillSwitcher_C_InitSkillContentsArray_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.GetSkillsCount
struct USkillSwitcher_C_GetSkillsCount_Params
{
	int                                                skillsCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.OnPrisonerSet
struct USkillSwitcher_C_OnPrisonerSet_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.Tick
struct USkillSwitcher_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillSwitcher.SkillSwitcher_C.Construct
struct USkillSwitcher_C_Construct_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature
struct USkillSwitcher_C_BndEvt__SkillTypeButton_0_K2Node_ComponentBoundEvent_575_OnClickedSkillTypeButton__DelegateSignature_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature
struct USkillSwitcher_C_BndEvt__SkillTypeButton_1_K2Node_ComponentBoundEvent_581_OnClickedSkillTypeButton__DelegateSignature_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature
struct USkillSwitcher_C_BndEvt__SkillTypeButton_2_K2Node_ComponentBoundEvent_588_OnClickedSkillTypeButton__DelegateSignature_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature
struct USkillSwitcher_C_BndEvt__SkillTypeButton_3_K2Node_ComponentBoundEvent_596_OnClickedSkillTypeButton__DelegateSignature_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.UpdateSkillsEvent
struct USkillSwitcher_C_UpdateSkillsEvent_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.ShouldActivateAlarm
struct USkillSwitcher_C_ShouldActivateAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.ShouldDeactivateAlarm
struct USkillSwitcher_C_ShouldDeactivateAlarm_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.AlarmOnWindowContent
struct USkillSwitcher_C_AlarmOnWindowContent_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.AlarmOffWindowContent
struct USkillSwitcher_C_AlarmOffWindowContent_Params
{
};

// Function SkillSwitcher.SkillSwitcher_C.ExecuteUbergraph_SkillSwitcher
struct USkillSwitcher_C_ExecuteUbergraph_SkillSwitcher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
