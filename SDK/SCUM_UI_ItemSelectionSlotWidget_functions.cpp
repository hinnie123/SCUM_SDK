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

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          NewParam                       (Parm, OutParm, ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::GetAttachmentItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems");

	UUI_ItemSelectionSlotWidget_C_GetAttachmentItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = fn_params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SelectedIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetSelectedIndex(int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex");

	UUI_ItemSelectionSlotWidget_C_GetSelectedIndex_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (SelectedIndex != nullptr)
		*SelectedIndex = fn_params.SelectedIndex;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUI_ItemSelectionSlotWidget_C::GetSelectionCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount");

	UUI_ItemSelectionSlotWidget_C_GetSelectionCount_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NoSelection                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::HasNoSelection(bool* NoSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection");

	UUI_ItemSelectionSlotWidget_C_HasNoSelection_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (NoSelection != nullptr)
		*NoSelection = fn_params.NoSelection;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::ClearSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections");

	UUI_ItemSelectionSlotWidget_C_ClearSelections_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UClass*>          NewParam                       (Parm, OutParm, ZeroConstructor)

void UUI_ItemSelectionSlotWidget_C::GetSupportItems(TArray<class UClass*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems");

	UUI_ItemSelectionSlotWidget_C_GetSupportItems_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = fn_params.NewParam;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  MainItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::GetMainItem(class UClass** MainItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem");

	UUI_ItemSelectionSlotWidget_C_GetMainItem_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (MainItem != nullptr)
		*MainItem = fn_params.MainItem;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_ItemSelectionSlotWidget_C::Get_Box_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility");

	UUI_ItemSelectionSlotWidget_C_Get_Box_Visibility_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::Select(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select");

	UUI_ItemSelectionSlotWidget_C_Select_Params fn_params;
	fn_params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSelection*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::AddSelection(class UItemSelection* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection");

	UUI_ItemSelectionSlotWidget_C_AddSelection_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct");

	UUI_ItemSelectionSlotWidget_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties");

	UUI_ItemSelectionSlotWidget_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemSelectionSlotWidget_C::ExecuteUbergraph_UI_ItemSelectionSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget");

	UUI_ItemSelectionSlotWidget_C_ExecuteUbergraph_UI_ItemSelectionSlotWidget_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_ItemSelectionSlotWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature");

	UUI_ItemSelectionSlotWidget_C_OnClicked__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
