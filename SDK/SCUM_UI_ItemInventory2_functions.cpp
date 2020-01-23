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

// Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TScriptInterface<class UInventoryNode>* Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_ItemInventory2_C::InitBlueprint(TScriptInterface<class UInventoryNode>* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint");

	UUI_ItemInventory2_C_InitBlueprint_Params fn_params;
	fn_params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.Blink
// (Event, Public, BlueprintEvent)

void UUI_ItemInventory2_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.Blink");

	UUI_ItemInventory2_C_Blink_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventory2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.Tick");

	UUI_ItemInventory2_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventory2_C::ExecuteUbergraph_UI_ItemInventory2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2");

	UUI_ItemInventory2_C_ExecuteUbergraph_UI_ItemInventory2_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
