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

// Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
struct UUI_SquadEditor_C_GetBlackVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
struct UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
struct UUI_SquadEditor_C_UpdateOptions_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
struct UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SquadEditor.UI_SquadEditor_C.LoadData
struct UUI_SquadEditor_C_LoadData_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
struct UUI_SquadEditor_C_LoadEmblem_Params
{
	struct FConZSquadEmblem                            emblem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.SaveData
struct UUI_SquadEditor_C_SaveData_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
struct UUI_SquadEditor_C_EmblemUpdate_Params
{
	class UDropdownMenuSelectionWidget*                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
struct UUI_SquadEditor_C_ColorClicked_Params
{
	class UDropdownMenuSelectionWidget*                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
struct UUI_SquadEditor_C_SymbolClicked_Params
{
	class UDropdownMenuSelectionWidget*                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
struct UUI_SquadEditor_C_BackgroundClicked_Params
{
	class UDropdownMenuSelectionWidget*                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SquadEditor.UI_SquadEditor_C.Construct
struct UUI_SquadEditor_C_Construct_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
struct UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
struct UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
