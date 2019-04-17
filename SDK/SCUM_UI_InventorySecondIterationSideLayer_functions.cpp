// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InventorySecondIterationSideLayer_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDragOver");

	UUI_InventorySecondIterationSideLayer_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnItemDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::OnItemDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnItemDestroyed");

	UUI_InventorySecondIterationSideLayer_C_OnItemDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InventorySecondIterationSideLayer_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDrop");

	UUI_InventorySecondIterationSideLayer_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_InventorySecondIterationSideLayer_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnMouseButtonDown");

	UUI_InventorySecondIterationSideLayer_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.GetIsSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSet                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::GetIsSet(bool* isSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.GetIsSet");

	UUI_InventorySecondIterationSideLayer_C_GetIsSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isSet != nullptr)
		*isSet = params.isSet;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ClearItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::ClearItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ClearItem");

	UUI_InventorySecondIterationSideLayer_C_ClearItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.InitFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.InitFromItem");

	UUI_InventorySecondIterationSideLayer_C_InitFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.Construct");

	UUI_InventorySecondIterationSideLayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUserWidget*         clickedWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::ItemClicked(class UItemUserWidget* clickedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ItemClicked");

	UUI_InventorySecondIterationSideLayer_C_ItemClicked_Params params;
	params.clickedWidget = clickedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.UpdateHighlightStatus
// (BlueprintCallable, BlueprintEvent)

void UUI_InventorySecondIterationSideLayer_C::UpdateHighlightStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.UpdateHighlightStatus");

	UUI_InventorySecondIterationSideLayer_C_UpdateHighlightStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ExecuteUbergraph_UI_InventorySecondIterationSideLayer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::ExecuteUbergraph_UI_InventorySecondIterationSideLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ExecuteUbergraph_UI_InventorySecondIterationSideLayer");

	UUI_InventorySecondIterationSideLayer_C_ExecuteUbergraph_UI_InventorySecondIterationSideLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventorySecondIterationSideLayer_C::OnClicked__DelegateSignature(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnClicked__DelegateSignature");

	UUI_InventorySecondIterationSideLayer_C_OnClicked__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
