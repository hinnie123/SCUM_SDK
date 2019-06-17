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

// Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BloodTrailMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.UserConstructionScript");

	ABP_BloodTrailMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BloodTrailMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.ReceiveBeginPlay");

	ABP_BloodTrailMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.ExecuteUbergraph_BP_BloodTrailMarker
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BloodTrailMarker_C::ExecuteUbergraph_BP_BloodTrailMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BloodTrailMarker.BP_BloodTrailMarker_C.ExecuteUbergraph_BP_BloodTrailMarker");

	ABP_BloodTrailMarker_C_ExecuteUbergraph_BP_BloodTrailMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
