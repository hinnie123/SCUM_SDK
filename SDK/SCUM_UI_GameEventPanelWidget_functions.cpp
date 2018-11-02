// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventPanelWidget_C::GetDropdownVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility");

	UUI_GameEventPanelWidget_C_GetDropdownVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventPanelWidget_C::RestoreSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected");

	UUI_GameEventPanelWidget_C_RestoreSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*         Dropdown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class AGameEventBase*>  GameEvents                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UUI_GameEventPanelWidget_C::UpdateSelection(class UComboBoxString* Dropdown, const struct FString& Selected, TArray<class AGameEventBase*>* GameEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection");

	UUI_GameEventPanelWidget_C_UpdateSelection_Params params;
	params.Dropdown = Dropdown;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameEvents != nullptr)
		*GameEvents = params.GameEvents;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameEventBase*          gameEvent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::GetSelectedEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent");

	UUI_GameEventPanelWidget_C_GetSelectedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (gameEvent != nullptr)
		*gameEvent = params.gameEvent;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGameEventBase*          gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UUI_GameEventPanelWidget_C::GetGameEventOptionString(class AGameEventBase* gameEvent, struct FString* OptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString");

	UUI_GameEventPanelWidget_C_GetGameEventOptionString_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::SelectEvent(int Index, bool Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent");

	UUI_GameEventPanelWidget_C_SelectEvent_Params params;
	params.Index = Index;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddCurrentEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent");

	UUI_GameEventPanelWidget_C_AddCurrentEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventPanelWidget_C::EmptyLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists");

	UUI_GameEventPanelWidget_C_EmptyLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::AddAnnouncedEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent");

	UUI_GameEventPanelWidget_C_AddAnnouncedEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate");

	UUI_GameEventPanelWidget_C_OnUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventPanelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct");

	UUI_GameEventPanelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
// (Event, Public, BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened");

	UUI_GameEventPanelWidget_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
// (Event, Public, BlueprintEvent)

void UUI_GameEventPanelWidget_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed");

	UUI_GameEventPanelWidget_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::OnEventComboBoxSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged");

	UUI_GameEventPanelWidget_C_OnEventComboBoxSelectionChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventPanelWidget_C::ExecuteUbergraph_UI_GameEventPanelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget");

	UUI_GameEventPanelWidget_C_ExecuteUbergraph_UI_GameEventPanelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
