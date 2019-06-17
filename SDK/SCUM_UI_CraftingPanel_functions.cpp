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

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_CraftingPanel_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1");

	UUI_CraftingPanel_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1");

	UUI_CraftingPanel_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_CraftingPanel_C::GetIsCraftButtonEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled");

	UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URetainerBox*            RetainerBox                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_CraftingPanel_C::UpdateParameter(class URetainerBox* RetainerBox, class UWidget* Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter");

	UUI_CraftingPanel_C_UpdateParameter_Params params;
	params.RetainerBox = RetainerBox;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CraftingPanel_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ExpandableContainer_C* container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsMinimized                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature(class UUI_ExpandableContainer_C* container, bool IsMinimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature_Params params;
	params.container = container;
	params.IsMinimized = IsMinimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_CraftingPanel_C::BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");

	UUI_CraftingPanel_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.Tick");

	UUI_CraftingPanel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::ShowPlaceableCraftingConfirmationForCraftingIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex");

	UUI_CraftingPanel_C_ShowPlaceableCraftingConfirmationForCraftingIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed
// (BlueprintCallable, BlueprintEvent)

void UUI_CraftingPanel_C::OnCraftingConfirmationDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed");

	UUI_CraftingPanel_C_OnCraftingConfirmationDismissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CraftingPanel_C::ExecuteUbergraph_UI_CraftingPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel");

	UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
