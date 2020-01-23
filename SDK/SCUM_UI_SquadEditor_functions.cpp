// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SquadEditor_C::GetBlackVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.GetBlackVisibility");

	UUI_SquadEditor_C_GetBlackVisibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::OnMouseButtonDown_InformationTextBox(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_InformationTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_InformationTextBox_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadEditor_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.UpdateOptions");

	UUI_SquadEditor_C_UpdateOptions_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SquadEditor_C::OnMouseButtonDown_MessageTextBox(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.OnMouseButtonDown_MessageTextBox");

	UUI_SquadEditor_C_OnMouseButtonDown_MessageTextBox_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadEditor_C::LoadData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadData");

	UUI_SquadEditor_C_LoadData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConZSquadEmblem        emblem                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_SquadEditor_C::LoadEmblem(const struct FConZSquadEmblem& emblem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.LoadEmblem");

	UUI_SquadEditor_C_LoadEmblem_Params fn_params;
	fn_params.emblem = emblem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SaveData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SquadEditor_C::SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SaveData");

	UUI_SquadEditor_C_SaveData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropdownMenuSelectionWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::EmblemUpdate(class UDropdownMenuSelectionWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.EmblemUpdate");

	UUI_SquadEditor_C_EmblemUpdate_Params fn_params;
	fn_params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropdownMenuSelectionWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::ColorClicked(class UDropdownMenuSelectionWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ColorClicked");

	UUI_SquadEditor_C_ColorClicked_Params fn_params;
	fn_params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropdownMenuSelectionWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::SymbolClicked(class UDropdownMenuSelectionWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.SymbolClicked");

	UUI_SquadEditor_C_SymbolClicked_Params fn_params;
	fn_params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropdownMenuSelectionWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_SquadEditor_C::BackgroundClicked(class UDropdownMenuSelectionWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BackgroundClicked");

	UUI_SquadEditor_C_BackgroundClicked_Params fn_params;
	fn_params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SquadEditor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.Construct");

	UUI_SquadEditor_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadEditor_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SquadEditor_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__NameTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params fn_params;
	fn_params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__InformationTextBox_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params fn_params;
	fn_params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_SquadEditor_C::BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UUI_SquadEditor_C_BndEvt__MessageTextBox_K2Node_ComponentBoundEvent_5_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params fn_params;
	fn_params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SquadEditor_C::ExecuteUbergraph_UI_SquadEditor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SquadEditor.UI_SquadEditor_C.ExecuteUbergraph_UI_SquadEditor");

	UUI_SquadEditor_C_ExecuteUbergraph_UI_SquadEditor_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
