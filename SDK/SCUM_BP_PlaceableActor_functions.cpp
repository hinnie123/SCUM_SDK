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

// Function BP_PlaceableActor.BP_PlaceableActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlaceableActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceableActor.BP_PlaceableActor_C.UserConstructionScript");

	ABP_PlaceableActor_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_PlaceableActor.BP_PlaceableActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaceableActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceableActor.BP_PlaceableActor_C.ReceiveTick");

	ABP_PlaceableActor_C_ReceiveTick_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_PlaceableActor.BP_PlaceableActor_C.ExecuteUbergraph_BP_PlaceableActor
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlaceableActor_C::ExecuteUbergraph_BP_PlaceableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlaceableActor.BP_PlaceableActor_C.ExecuteUbergraph_BP_PlaceableActor");

	ABP_PlaceableActor_C_ExecuteUbergraph_BP_PlaceableActor_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
