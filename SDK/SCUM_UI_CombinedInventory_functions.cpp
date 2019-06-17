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

// Function UI_CombinedInventory.UI_CombinedInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CombinedInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.Construct");

	UUI_CombinedInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.SaveLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_CombinedInventory_C::SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.SaveLayout");

	UUI_CombinedInventory_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.LoadLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface>* Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_CombinedInventory_C::LoadLayout(TScriptInterface<class UAttributeMapInterface>* Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.LoadLayout");

	UUI_CombinedInventory_C_LoadLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.ResetLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_CombinedInventory_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.ResetLayout");

	UUI_CombinedInventory_C_ResetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.DeferredLoadLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_CombinedInventory_C::DeferredLoadLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.DeferredLoadLayout");

	UUI_CombinedInventory_C_DeferredLoadLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CombinedInventory.UI_CombinedInventory_C.ExecuteUbergraph_UI_CombinedInventory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CombinedInventory_C::ExecuteUbergraph_UI_CombinedInventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CombinedInventory.UI_CombinedInventory_C.ExecuteUbergraph_UI_CombinedInventory");

	UUI_CombinedInventory_C_ExecuteUbergraph_UI_CombinedInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
