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

// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveTick");

	UBP_SphereProximityTriggerComponent_C_ReceiveTick_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_SphereProximityTriggerComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ReceiveBeginPlay");

	UBP_SphereProximityTriggerComponent_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SphereProximityTriggerComponent_C::ExecuteUbergraph_BP_SphereProximityTriggerComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SphereProximityTriggerComponent.BP_SphereProximityTriggerComponent_C.ExecuteUbergraph_BP_SphereProximityTriggerComponent");

	UBP_SphereProximityTriggerComponent_C_ExecuteUbergraph_BP_SphereProximityTriggerComponent_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
