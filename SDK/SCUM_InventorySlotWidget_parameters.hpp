#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventorySlotWidget.InventorySlotWidget_C.OnDropDispatcher__DelegateSignature
struct UInventorySlotWidget_C_OnDropDispatcher__DelegateSignature_Params
{
	class UInventorySlotWidget_C*                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemWidget_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventorySlotWidget.InventorySlotWidget_C.OnDragLeaveDispatcher__DelegateSignature
struct UInventorySlotWidget_C_OnDragLeaveDispatcher__DelegateSignature_Params
{
	class UInventorySlotWidget_C*                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemWidget_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InventorySlotWidget.InventorySlotWidget_C.OnDragEnterDispatcher__DelegateSignature
struct UInventorySlotWidget_C_OnDragEnterDispatcher__DelegateSignature_Params
{
	class UInventorySlotWidget_C*                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemWidget_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
