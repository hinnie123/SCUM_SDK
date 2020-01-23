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

// Function ImprovisedClaymore.ImprovisedClaymore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImprovisedClaymore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.UserConstructionScript");

	AImprovisedClaymore_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void AImprovisedClaymore_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnArmed");

	AImprovisedClaymore_C_BP_OnArmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void AImprovisedClaymore_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.BP_OnDisarmed");

	AImprovisedClaymore_C_BP_OnDisarmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AImprovisedClaymore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ReceiveBeginPlay");

	AImprovisedClaymore_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AImprovisedClaymore_C::ExecuteUbergraph_ImprovisedClaymore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovisedClaymore.ImprovisedClaymore_C.ExecuteUbergraph_ImprovisedClaymore");

	AImprovisedClaymore_C_ExecuteUbergraph_ImprovisedClaymore_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
