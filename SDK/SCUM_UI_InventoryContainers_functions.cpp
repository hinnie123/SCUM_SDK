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

// Function UI_InventoryContainers.UI_InventoryContainers_C.BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryContainers_C::BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");

	UUI_InventoryContainers_C_BndEvt__MinimizableWidget_30_K2Node_ComponentBoundEvent_8_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryContainers.UI_InventoryContainers_C.ChangeTitle
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_InventoryContainers_C::ChangeTitle(struct FText* Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.ChangeTitle");

	UUI_InventoryContainers_C_ChangeTitle_Params fn_params;
	fn_params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryContainers.UI_InventoryContainers_C.ExecuteUbergraph_UI_InventoryContainers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryContainers_C::ExecuteUbergraph_UI_InventoryContainers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryContainers.UI_InventoryContainers_C.ExecuteUbergraph_UI_InventoryContainers");

	UUI_InventoryContainers_C_ExecuteUbergraph_UI_InventoryContainers_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
