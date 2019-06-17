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

// Function UI_CriminalRecord.UI_CriminalRecord_C.InitFromCharacterTemplate
struct UUI_CriminalRecord_C_InitFromCharacterTemplate_Params
{
	struct FCharacterTemplate                          Template;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.ClearSkills
struct UUI_CriminalRecord_C_ClearSkills_Params
{
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.ChangeAttribute
struct UUI_CriminalRecord_C_ChangeAttribute_Params
{
	ESkillAttribute                                    Attribute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.AddSkill
struct UUI_CriminalRecord_C_AddSkill_Params
{
	struct FSkillTemplate                              SkillTemplate;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UUI_CriminalRecord_C_BndEvt__UI_MenuButton_0_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
struct UUI_CriminalRecord_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
{
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.ExecuteUbergraph_UI_CriminalRecord
struct UUI_CriminalRecord_C_ExecuteUbergraph_UI_CriminalRecord_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.OnCancelClicked__DelegateSignature
struct UUI_CriminalRecord_C_OnCancelClicked__DelegateSignature_Params
{
};

// Function UI_CriminalRecord.UI_CriminalRecord_C.OnOkClicked__DelegateSignature
struct UUI_CriminalRecord_C_OnOkClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
