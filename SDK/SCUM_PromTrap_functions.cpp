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

// Function PromTrap.PromTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APromTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.UserConstructionScript");

	APromTrap_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc
// (BlueprintEvent)

void APromTrap_C::TriggeredMovement__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__FinishedFunc");

	APromTrap_C_TriggeredMovement__FinishedFunc_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc
// (BlueprintEvent)

void APromTrap_C::TriggeredMovement__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.TriggeredMovement__UpdateFunc");

	APromTrap_C_TriggeredMovement__UpdateFunc_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnTriggered
// (Event, Public, BlueprintEvent)

void APromTrap_C::BP_OnTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnTriggered");

	APromTrap_C_BP_OnTriggered_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void APromTrap_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnArmed");

	APromTrap_C_BP_OnArmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void APromTrap_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.BP_OnDisarmed");

	APromTrap_C_BP_OnDisarmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APromTrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ReceiveBeginPlay");

	APromTrap_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APromTrap_C::ExecuteUbergraph_PromTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PromTrap.PromTrap_C.ExecuteUbergraph_PromTrap");

	APromTrap_C_ExecuteUbergraph_PromTrap_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
