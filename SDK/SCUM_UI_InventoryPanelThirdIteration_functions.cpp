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

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ReinitializeForPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner");

	UUI_InventoryPanelThirdIteration_C_ReinitializeForPrisoner_Params fn_params;
	fn_params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ScrollToEquippedItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem");

	UUI_InventoryPanelThirdIteration_C_ScrollToEquippedItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::OnItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemDestroyed");

	UUI_InventoryPanelThirdIteration_C_OnItemDestroyed_Params fn_params;
	fn_params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemPickedUpStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           pickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::OnItemPickedUpStateChanged(class AItem* Item, bool pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemPickedUpStateChanged");

	UUI_InventoryPanelThirdIteration_C_OnItemPickedUpStateChanged_Params fn_params;
	fn_params.Item = Item;
	fn_params.pickedUp = pickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::UpdateContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateContainerForItem");

	UUI_InventoryPanelThirdIteration_C_UpdateContainerForItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.RemoveContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::RemoveContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.RemoveContainerForItem");

	UUI_InventoryPanelThirdIteration_C_RemoveContainerForItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.AddContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::AddContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.AddContainerForItem");

	UUI_InventoryPanelThirdIteration_C_AddContainerForItem_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave");

	UUI_InventoryPanelThirdIteration_C_OnDragLeave_Params fn_params;
	fn_params.PointerEvent = PointerEvent;
	fn_params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPanelThirdIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateItemWidgetHighlightings");

	UUI_InventoryPanelThirdIteration_C_UpdateItemWidgetHighlightings_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelThirdIteration_C::ExecuteUbergraph_UI_InventoryPanelThirdIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration");

	UUI_InventoryPanelThirdIteration_C_ExecuteUbergraph_UI_InventoryPanelThirdIteration_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
