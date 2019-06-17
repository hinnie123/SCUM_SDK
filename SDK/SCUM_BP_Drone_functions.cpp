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

// Function BP_Drone.BP_Drone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Drone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drone.BP_Drone_C.UserConstructionScript");

	ABP_Drone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Drone.BP_Drone_C.OnSilentModeChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Drone_C::OnSilentModeChanged_BP(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drone.BP_Drone_C.OnSilentModeChanged_BP");

	ABP_Drone_C_OnSilentModeChanged_BP_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Drone_C::ExecuteUbergraph_BP_Drone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drone.BP_Drone_C.ExecuteUbergraph_BP_Drone");

	ABP_Drone_C_ExecuteUbergraph_BP_Drone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
