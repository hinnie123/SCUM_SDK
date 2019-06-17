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

// Function UI_HandPanel.UI_HandPanel_C.GetQuickAccessAt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuickAccessItemSwitcher* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UQuickAccessItemSwitcher* UUI_HandPanel_C::GetQuickAccessAt(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetQuickAccessAt");

	UUI_HandPanel_C_GetQuickAccessAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.GetShoulderHolster
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           holsterId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShoulderHolsterWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UShoulderHolsterWidget* UUI_HandPanel_C::GetShoulderHolster(int* holsterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetShoulderHolster");

	UUI_HandPanel_C_GetShoulderHolster_Params params;
	params.holsterId = holsterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.GetHandInventory
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UHandInventorySecondIteration* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHandInventorySecondIteration* UUI_HandPanel_C::GetHandInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.GetHandInventory");

	UUI_HandPanel_C_GetHandInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_HandPanel.UI_HandPanel_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HandPanel_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.UpdateItemWidgetHighlightings");

	UUI_HandPanel_C_UpdateItemWidgetHighlightings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandPanel.UI_HandPanel_C.ExecuteUbergraph_UI_HandPanel
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandPanel_C::ExecuteUbergraph_UI_HandPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandPanel.UI_HandPanel_C.ExecuteUbergraph_UI_HandPanel");

	UUI_HandPanel_C_ExecuteUbergraph_UI_HandPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
