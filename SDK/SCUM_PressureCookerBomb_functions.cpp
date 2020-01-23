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

// Function PressureCookerBomb.PressureCookerBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APressureCookerBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.UserConstructionScript");

	APressureCookerBomb_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed
// (Event, Public, BlueprintEvent)

void APressureCookerBomb_C::BP_OnArmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnArmed");

	APressureCookerBomb_C_BP_OnArmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed
// (Event, Public, BlueprintEvent)

void APressureCookerBomb_C::BP_OnDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.BP_OnDisarmed");

	APressureCookerBomb_C_BP_OnDisarmed_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APressureCookerBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ReceiveBeginPlay");

	APressureCookerBomb_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APressureCookerBomb_C::ExecuteUbergraph_PressureCookerBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PressureCookerBomb.PressureCookerBomb_C.ExecuteUbergraph_PressureCookerBomb");

	APressureCookerBomb_C_ExecuteUbergraph_PressureCookerBomb_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
