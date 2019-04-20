// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ReinitializeForPrisoner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ReinitializeForPrisoner(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ReinitializeForPrisoner");

	UUI_InventoryPanelSecondIteration_C_ReinitializeForPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InventoryPanelSecondIteration_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragOver");

	UUI_InventoryPanelSecondIteration_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InventoryPanelSecondIteration_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDrop");

	UUI_InventoryPanelSecondIteration_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ScrollToEquippedItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ScrollToEquippedItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ScrollToEquippedItem");

	UUI_InventoryPanelSecondIteration_C_ScrollToEquippedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveEquippedItemSideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::RemoveEquippedItemSideIcon(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveEquippedItemSideIcon");

	UUI_InventoryPanelSecondIteration_C_RemoveEquippedItemSideIcon_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddEquippedItemSideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::AddEquippedItemSideIcon(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddEquippedItemSideIcon");

	UUI_InventoryPanelSecondIteration_C_AddEquippedItemSideIcon_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.SortInventories
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPanelSecondIteration_C::SortInventories()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.SortInventories");

	UUI_InventoryPanelSecondIteration_C_SortInventories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::AddContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddContainerForItem");

	UUI_InventoryPanelSecondIteration_C_AddContainerForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::RemoveContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveContainerForItem");

	UUI_InventoryPanelSecondIteration_C_RemoveContainerForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateContainerForItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::UpdateContainerForItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateContainerForItem");

	UUI_InventoryPanelSecondIteration_C_UpdateContainerForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemPickedUpStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           pickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnItemPickedUpStateChanged(class AItem* Item, bool pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemPickedUpStateChanged");

	UUI_InventoryPanelSecondIteration_C_OnItemPickedUpStateChanged_Params params;
	params.Item = Item;
	params.pickedUp = pickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemDestroyed");

	UUI_InventoryPanelSecondIteration_C_OnItemDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPanelSecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateItemWidgetHighlightings");

	UUI_InventoryPanelSecondIteration_C_UpdateItemWidgetHighlightings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragLeave");

	UUI_InventoryPanelSecondIteration_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ExecuteUbergraph_UI_InventoryPanelSecondIteration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPanelSecondIteration_C::ExecuteUbergraph_UI_InventoryPanelSecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ExecuteUbergraph_UI_InventoryPanelSecondIteration");

	UUI_InventoryPanelSecondIteration_C_ExecuteUbergraph_UI_InventoryPanelSecondIteration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
