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

// Function UI_Item2.UI_Item2_C.UpdateVisualszzz
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Item2_C::UpdateVisualszzz()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.UpdateVisualszzz");

	UUI_Item2_C_UpdateVisualszzz_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.Tick");

	UUI_Item2_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.Init
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UInventoryContainer>* container                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_Item2_C::Init(TScriptInterface<class UInventoryNode>* Item, TScriptInterface<class UInventoryContainer>* container)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.Init");

	UUI_Item2_C_Init_Params fn_params;
	fn_params.Item = Item;
	fn_params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.UpdateVisuals
// (Event, Protected, BlueprintEvent)

void UUI_Item2_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.UpdateVisuals");

	UUI_Item2_C_UpdateVisuals_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Item2_C::ExecuteUbergraph_UI_Item2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2");

	UUI_Item2_C_ExecuteUbergraph_UI_Item2_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
