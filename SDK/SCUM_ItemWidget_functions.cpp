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

// Function ItemWidget.ItemWidget_C.GetItemDurability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UItemWidget_C::GetItemDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemDurability");

	UItemWidget_C_GetItemDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetContainerItemFillPercentage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetContainerItemFillPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetContainerItemFillPercentage");

	UItemWidget_C_GetContainerItemFillPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetWeaponZeroText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetWeaponZeroText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetWeaponZeroText");

	UItemWidget_C_GetWeaponZeroText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetMassText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetMassText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetMassText");

	UItemWidget_C_GetMassText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.InitFromItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::InitFromItem(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.InitFromItem");

	UItemWidget_C_InitFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.GetStacksCount
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UItemWidget_C::GetStacksCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetStacksCount");

	UItemWidget_C_GetStacksCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetItemHealthText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetItemHealthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemHealthText");

	UItemWidget_C_GetItemHealthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemWidget_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnMouseButtonUp");

	UItemWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetItemTotalUsesText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetItemTotalUsesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemTotalUsesText");

	UItemWidget_C_GetItemTotalUsesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.GetItemUsesText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemWidget_C::GetItemUsesText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.GetItemUsesText");

	UItemWidget_C_GetItemUsesText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnKeyChar
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FCharacterEvent*        InCharacterEvent               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemWidget_C::OnKeyChar(struct FGeometry* MyGeometry, struct FCharacterEvent* InCharacterEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnKeyChar");

	UItemWidget_C_OnKeyChar_Params params;
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnMouseButtonDown");

	UItemWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemWidget.ItemWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragDetected");

	UItemWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function ItemWidget.ItemWidget_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragCancelled");

	UItemWidget_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Construct");

	UItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.UpdateHighlightStatus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UItemWidget_C::UpdateHighlightStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.UpdateHighlightStatus");

	UItemWidget_C_UpdateHighlightStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.SetStacksCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::SetStacksCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.SetStacksCount");

	UItemWidget_C_SetStacksCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.BlinkItemContainer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemWidget_C::BlinkItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.BlinkItemContainer");

	UItemWidget_C_BlinkItemContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Tick");

	UItemWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.MarkAsWeaponWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UItemWidget_C::MarkAsWeaponWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.MarkAsWeaponWidget");

	UItemWidget_C_MarkAsWeaponWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::ExecuteUbergraph_ItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget");

	UItemWidget_C_ExecuteUbergraph_ItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.OnDragCancelledDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemWidget_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemWidget_C::OnDragCancelledDispatcher__DelegateSignature(class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragCancelledDispatcher__DelegateSignature");

	UItemWidget_C_OnDragCancelledDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.OnDragStartDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemWidget_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemWidget_C::OnDragStartDispatcher__DelegateSignature(class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.OnDragStartDispatcher__DelegateSignature");

	UItemWidget_C_OnDragStartDispatcher__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
