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

// Function BP_Wristwatch.BP_Wristwatch_C.UpdateFatnessLeannessVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Wristwatch_C::UpdateFatnessLeannessVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.UpdateFatnessLeannessVisuals");

	ABP_Wristwatch_C_UpdateFatnessLeannessVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wristwatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.UserConstructionScript");

	ABP_Wristwatch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.SetTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wristwatch_C::SetTime(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.SetTime");

	ABP_Wristwatch_C_SetTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Wristwatch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay");

	ABP_Wristwatch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.ToggleDisplayVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Visiblity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wristwatch_C::ToggleDisplayVisibility(bool* Visiblity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ToggleDisplayVisibility");

	ABP_Wristwatch_C_ToggleDisplayVisibility_Params params;
	params.Visiblity = Visiblity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wristwatch_C::SetDisplayBrightness(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness");

	ABP_Wristwatch_C_SetDisplayBrightness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wristwatch_C::ExecuteUbergraph_BP_Wristwatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch");

	ABP_Wristwatch_C_ExecuteUbergraph_BP_Wristwatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
