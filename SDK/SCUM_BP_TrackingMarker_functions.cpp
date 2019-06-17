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

// Function BP_TrackingMarker.BP_TrackingMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrackingMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrackingMarker.BP_TrackingMarker_C.UserConstructionScript");

	ABP_TrackingMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrackingMarker.BP_TrackingMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrackingMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrackingMarker.BP_TrackingMarker_C.ReceiveBeginPlay");

	ABP_TrackingMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrackingMarker.BP_TrackingMarker_C.ExecuteUbergraph_BP_TrackingMarker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrackingMarker_C::ExecuteUbergraph_BP_TrackingMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrackingMarker.BP_TrackingMarker_C.ExecuteUbergraph_BP_TrackingMarker");

	ABP_TrackingMarker_C_ExecuteUbergraph_BP_TrackingMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
