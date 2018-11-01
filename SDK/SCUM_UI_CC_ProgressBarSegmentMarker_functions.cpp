// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Unhighlight");

	UUI_CC_ProgressBarSegmentMarker_C_Unhighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Highlight");

	UUI_CC_ProgressBarSegmentMarker_C_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.Construct");

	UUI_CC_ProgressBarSegmentMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CC_ProgressBarSegmentMarker_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.OnSynchronizeProperties");

	UUI_CC_ProgressBarSegmentMarker_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_ProgressBarSegmentMarker_C::ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_ProgressBarSegmentMarker.UI_CC_ProgressBarSegmentMarker_C.ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker");

	UUI_CC_ProgressBarSegmentMarker_C_ExecuteUbergraph_UI_CC_ProgressBarSegmentMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
