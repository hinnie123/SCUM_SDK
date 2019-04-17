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

// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HandInventorySecondIteration_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.Construct");

	UUI_HandInventorySecondIteration_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateVisuals
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HandInventorySecondIteration_C::UpdateVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateVisuals");

	UUI_HandInventorySecondIteration_C_UpdateVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateItemWidgetHighlightings
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_HandInventorySecondIteration_C::UpdateItemWidgetHighlightings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.UpdateItemWidgetHighlightings");

	UUI_HandInventorySecondIteration_C_UpdateItemWidgetHighlightings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.ExecuteUbergraph_UI_HandInventorySecondIteration
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HandInventorySecondIteration_C::ExecuteUbergraph_UI_HandInventorySecondIteration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HandInventorySecondIteration.UI_HandInventorySecondIteration_C.ExecuteUbergraph_UI_HandInventorySecondIteration");

	UUI_HandInventorySecondIteration_C_ExecuteUbergraph_UI_HandInventorySecondIteration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
