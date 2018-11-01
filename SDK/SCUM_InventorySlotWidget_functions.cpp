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

// Function InventorySlotWidget.InventorySlotWidget_C.OnDropDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UItemWidget_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventorySlotWidget_C::OnDropDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDropDispatcher__DelegateSignature");

	UInventorySlotWidget_C_OnDropDispatcher__DelegateSignature_Params params;
	params.Slot = Slot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySlotWidget.InventorySlotWidget_C.OnDragLeaveDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UItemWidget_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventorySlotWidget_C::OnDragLeaveDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDragLeaveDispatcher__DelegateSignature");

	UInventorySlotWidget_C_OnDragLeaveDispatcher__DelegateSignature_Params params;
	params.Slot = Slot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InventorySlotWidget.InventorySlotWidget_C.OnDragEnterDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotWidget_C*  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UItemWidget_C*           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventorySlotWidget_C::OnDragEnterDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function InventorySlotWidget.InventorySlotWidget_C.OnDragEnterDispatcher__DelegateSignature");

	UInventorySlotWidget_C_OnDragEnterDispatcher__DelegateSignature_Params params;
	params.Slot = Slot;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
