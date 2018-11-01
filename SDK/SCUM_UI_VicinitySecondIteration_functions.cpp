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

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_VicinitySecondIteration_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnDrop");

	UUI_VicinitySecondIteration_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateMinimizeIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinitySecondIteration_C::UpdateMinimizeIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateMinimizeIcon");

	UUI_VicinitySecondIteration_C_UpdateMinimizeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VicinitySecondIteration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Construct");

	UUI_VicinitySecondIteration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Tick");

	UUI_VicinitySecondIteration_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_VicinitySecondIteration_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UUI_VicinitySecondIteration_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Minimize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinitySecondIteration_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Minimize");

	UUI_VicinitySecondIteration_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Maximize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinitySecondIteration_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Maximize");

	UUI_VicinitySecondIteration_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.AutoAddItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::AutoAddItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.AutoAddItem");

	UUI_VicinitySecondIteration_C_AutoAddItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.RemoveItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::RemoveItem(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.RemoveItem");

	UUI_VicinitySecondIteration_C_RemoveItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ItemPickedUpStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           pickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::ItemPickedUpStateChanged(class AItem* Item, bool pickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ItemPickedUpStateChanged");

	UUI_VicinitySecondIteration_C_ItemPickedUpStateChanged_Params params;
	params.Item = Item;
	params.pickedUp = pickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinitySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateItemWidgetHighlightings");

	UUI_VicinitySecondIteration_C_UpdateItemWidgetHighlightings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnItemDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::OnItemDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnItemDestroyed");

	UUI_VicinitySecondIteration_C_OnItemDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ExecuteUbergraph_UI_VicinitySecondIteration
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinitySecondIteration_C::ExecuteUbergraph_UI_VicinitySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ExecuteUbergraph_UI_VicinitySecondIteration");

	UUI_VicinitySecondIteration_C_ExecuteUbergraph_UI_VicinitySecondIteration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
