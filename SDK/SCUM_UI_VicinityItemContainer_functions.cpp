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

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.InitVicinityItemContainer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinityItemContainer_C::InitVicinityItemContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.InitVicinityItemContainer");

	UUI_VicinityItemContainer_C_InitVicinityItemContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetParentHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_C*                  parentHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_VicinityItemContainer_C::SetParentHUD(class UHUD_C* parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetParentHUD");

	UUI_VicinityItemContainer_C_SetParentHUD_Params params;
	params.parentHUD = parentHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_VicinityItemContainer_C::SetTitle(const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetTitle");

	UUI_VicinityItemContainer_C_SetTitle_Params params;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VicinityItemContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.Construct");

	UUI_VicinityItemContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SaveLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_VicinityItemContainer_C::SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SaveLayout");

	UUI_VicinityItemContainer_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.LoadLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_VicinityItemContainer_C::LoadLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.LoadLayout");

	UUI_VicinityItemContainer_C_LoadLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.DeferredLoadLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinityItemContainer_C::DeferredLoadLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.DeferredLoadLayout");

	UUI_VicinityItemContainer_C_DeferredLoadLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ResetLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_VicinityItemContainer_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ResetLayout");

	UUI_VicinityItemContainer_C_ResetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ExecuteUbergraph_UI_VicinityItemContainer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_VicinityItemContainer_C::ExecuteUbergraph_UI_VicinityItemContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ExecuteUbergraph_UI_VicinityItemContainer");

	UUI_VicinityItemContainer_C_ExecuteUbergraph_UI_VicinityItemContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
