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

// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventoryVicinity_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Tick");

	UUI_ItemInventoryVicinity_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink
// (Event, Public, BlueprintEvent)

void UUI_ItemInventoryVicinity_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.Blink");

	UUI_ItemInventoryVicinity_C_Blink_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemInventoryVicinity_C::ExecuteUbergraph_UI_ItemInventoryVicinity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemInventoryVicinity.UI_ItemInventoryVicinity_C.ExecuteUbergraph_UI_ItemInventoryVicinity");

	UUI_ItemInventoryVicinity_C_ExecuteUbergraph_UI_ItemInventoryVicinity_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
