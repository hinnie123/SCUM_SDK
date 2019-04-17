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

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ETabMode                       Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TabModeTab_C*        Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_TabModeTabsContainer_C::GetTabFromTabMode(ETabMode Tab, class UUI_TabModeTab_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode");

	UUI_TabModeTabsContainer_C_GetTabFromTabMode_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode                       Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::SetTabEnabled(ETabMode Tab, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled");

	UUI_TabModeTabsContainer_C_SetTabEnabled_Params params;
	params.Tab = Tab;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TabModeTab_C*        Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ETabMode                       tabMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::OpenSpecifiedTab(class UUI_TabModeTab_C* Tab, ETabMode tabMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab");

	UUI_TabModeTabsContainer_C_OpenSpecifiedTab_Params params;
	params.Tab = Tab;
	params.tabMode = tabMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::SelectTab(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab");

	UUI_TabModeTabsContainer_C_SelectTab_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TabModeTabsContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct");

	UUI_TabModeTabsContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)

void UUI_TabModeTabsContainer_C::BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	UUI_TabModeTabsContainer_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_TabModeTabsContainer_C::ExecuteUbergraph_UI_TabModeTabsContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer");

	UUI_TabModeTabsContainer_C_ExecuteUbergraph_UI_TabModeTabsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
