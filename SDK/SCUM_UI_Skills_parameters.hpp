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

// Function UI_Skills.UI_Skills_C.ShouldSkillBeVisible
struct UUI_Skills_C_ShouldSkillBeVisible_Params
{
	class USkill*                                      Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Skills.UI_Skills_C.UpdateAttributeChange
struct UUI_Skills_C_UpdateAttributeChange_Params
{
};

// Function UI_Skills.UI_Skills_C.InitTimePeriodsBarForHorizontalBox
struct UUI_Skills_C_InitTimePeriodsBarForHorizontalBox_Params
{
	class UHorizontalBox*                              HorizontalBox;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Skills.UI_Skills_C.RefreshGraph
struct UUI_Skills_C_RefreshGraph_Params
{
};

// Function UI_Skills.UI_Skills_C.Maximize
struct UUI_Skills_C_Maximize_Params
{
};

// Function UI_Skills.UI_Skills_C.Minimize
struct UUI_Skills_C_Minimize_Params
{
};

// Function UI_Skills.UI_Skills_C.UpdateSkills
struct UUI_Skills_C_UpdateSkills_Params
{
};

// Function UI_Skills.UI_Skills_C.SetPrisoner
struct UUI_Skills_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Skills.UI_Skills_C.UpdateAttributeValues
struct UUI_Skills_C_UpdateAttributeValues_Params
{
};

// Function UI_Skills.UI_Skills_C.Update
struct UUI_Skills_C_Update_Params
{
};

// Function UI_Skills.UI_Skills_C.Tick
struct UUI_Skills_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__UI_SkillsTabButton_2_K2Node_ComponentBoundEvent_13_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__UI_SkillsTabButton_K2Node_ComponentBoundEvent_7_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__UI_SkillsTabButton_0_K2Node_ComponentBoundEvent_8_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.Construct
struct UUI_Skills_C_Construct_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__UI_SkillsTabButton_1_K2Node_ComponentBoundEvent_10_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UUI_Skills_C_BndEvt__ExpandButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__UI_SkillsTabButton_C_0_K2Node_ComponentBoundEvent_111_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature
struct UUI_Skills_C_BndEvt__Zoom30dButton_K2Node_ComponentBoundEvent_146_OnClickedDispatcher__DelegateSignature_Params
{
};

// Function UI_Skills.UI_Skills_C.DisplayAttribute
struct UUI_Skills_C_DisplayAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Skills.UI_Skills_C.ExecuteUbergraph_UI_Skills
struct UUI_Skills_C_ExecuteUbergraph_UI_Skills_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
