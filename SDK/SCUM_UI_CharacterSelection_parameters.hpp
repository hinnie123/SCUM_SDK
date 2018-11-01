#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnPreviewKeyDown
struct UUI_CharacterSelection_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.Construct
struct UUI_CharacterSelection_C_Construct_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_21_OnOkClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__CriminalRecord_K2Node_ComponentBoundEvent_29_OnCancelClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_102_YesClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature
struct UUI_CharacterSelection_C_BndEvt__UI_YesNoMenuConfirmation_188_K2Node_ComponentBoundEvent_114_NoClicked__DelegateSignature_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnESC
struct UUI_CharacterSelection_C_OnESC_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelCriminalRecord
struct UUI_CharacterSelection_C_CancelCriminalRecord_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.CancelDeleteCharacter
struct UUI_CharacterSelection_C_CancelDeleteCharacter_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.Back
struct UUI_CharacterSelection_C_Back_Params
{
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterDeleted
struct UUI_CharacterSelection_C_OnCharacterDeleted_Params
{
	class UUI_CharacterSlot_C*                         Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.OnCharacterSelected
struct UUI_CharacterSelection_C_OnCharacterSelected_Params
{
	class UDbUserProfile*                              userProfile;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CharacterSelection.UI_CharacterSelection_C.ExecuteUbergraph_UI_CharacterSelection
struct UUI_CharacterSelection_C_ExecuteUbergraph_UI_CharacterSelection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
