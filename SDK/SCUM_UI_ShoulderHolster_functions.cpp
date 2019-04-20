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

// Function UI_ShoulderHolster.UI_ShoulderHolster_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ShoulderHolster_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.Construct");

	UUI_ShoulderHolster_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateVisuals
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_ShoulderHolster_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateVisuals");

	UUI_ShoulderHolster_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_ShoulderHolster_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.OnSynchronizeProperties");

	UUI_ShoulderHolster_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_ShoulderHolster_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.UpdateItemWidgetHighlightings");

	UUI_ShoulderHolster_C_UpdateItemWidgetHighlightings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ShoulderHolster.UI_ShoulderHolster_C.ExecuteUbergraph_UI_ShoulderHolster
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ShoulderHolster_C::ExecuteUbergraph_UI_ShoulderHolster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ShoulderHolster.UI_ShoulderHolster_C.ExecuteUbergraph_UI_ShoulderHolster");

	UUI_ShoulderHolster_C_ExecuteUbergraph_UI_ShoulderHolster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
