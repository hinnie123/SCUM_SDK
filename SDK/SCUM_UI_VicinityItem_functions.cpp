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

// Function UI_VicinityItem.UI_VicinityItem_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinityItem_C::ShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.ShowText");

	UUI_VicinityItem_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.HideText
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinityItem_C::HideText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.HideText");

	UUI_VicinityItem_C_HideText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_VicinityItem_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnDrop");

	UUI_VicinityItem_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VicinityItem.UI_VicinityItem_C.RemoveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::RemoveItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.RemoveItem");

	UUI_VicinityItem_C_RemoveItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.AddItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::AddItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.AddItem");

	UUI_VicinityItem_C_AddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.GetItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::GetItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.GetItem");

	UUI_VicinityItem_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function UI_VicinityItem.UI_VicinityItem_C.InitFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.InitFromItem");

	UUI_VicinityItem_C_InitFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.SetupBindings
// (BlueprintCallable, BlueprintEvent)

void UUI_VicinityItem_C::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.SetupBindings");

	UUI_VicinityItem_C_SetupBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnItemAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            column                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::OnItemAdded(class AItem* container, class AItem* Item, int column, int row)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnItemAdded");

	UUI_VicinityItem_C_OnItemAdded_Params params;
	params.container = container;
	params.Item = Item;
	params.column = column;
	params.row = row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnItemRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::OnItemRemoved(class AItem* container, class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnItemRemoved");

	UUI_VicinityItem_C_OnItemRemoved_Params params;
	params.container = container;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VicinityItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.Construct");

	UUI_VicinityItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_InventoryItem_C*     inventoryItemWidget            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsExpanded                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature(class UUI_InventoryItem_C* inventoryItemWidget, bool IsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature");

	UUI_VicinityItem_C_BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature_Params params;
	params.inventoryItemWidget = inventoryItemWidget;
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.Tick");

	UUI_VicinityItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.OnItemDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::OnItemDestroyed(class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.OnItemDestroyed");

	UUI_VicinityItem_C_OnItemDestroyed_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItem.UI_VicinityItem_C.ExecuteUbergraph_UI_VicinityItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItem_C::ExecuteUbergraph_UI_VicinityItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItem.UI_VicinityItem_C.ExecuteUbergraph_UI_VicinityItem");

	UUI_VicinityItem_C_ExecuteUbergraph_UI_VicinityItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
