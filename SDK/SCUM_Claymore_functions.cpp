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

// Function Claymore.Claymore_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AClaymore_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.UserConstructionScript");

	AClaymore_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void AClaymore_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnArmed");

	AClaymore_C_BP_OnArmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void AClaymore_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.BP_OnDisarmed");

	AClaymore_C_BP_OnDisarmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AClaymore_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ReceiveBeginPlay");

	AClaymore_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Claymore.Claymore_C.ExecuteUbergraph_Claymore
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AClaymore_C::ExecuteUbergraph_Claymore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Claymore.Claymore_C.ExecuteUbergraph_Claymore");

	AClaymore_C_ExecuteUbergraph_Claymore_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
