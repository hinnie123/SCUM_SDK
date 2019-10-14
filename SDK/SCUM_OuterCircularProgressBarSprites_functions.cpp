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

// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.UpdateOuterPercentageArc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FrontCircleProgress            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BackCircleProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOuterCircularProgressBarSprites_C::UpdateOuterPercentageArc(float FrontCircleProgress, float BackCircleProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.UpdateOuterPercentageArc");

	UOuterCircularProgressBarSprites_C_UpdateOuterPercentageArc_Params fn_params;
	fn_params.FrontCircleProgress = FrontCircleProgress;
	fn_params.BackCircleProgress = BackCircleProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ShowOuterCircle
// (Public, BlueprintCallable, BlueprintEvent)

void UOuterCircularProgressBarSprites_C::ShowOuterCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ShowOuterCircle");

	UOuterCircularProgressBarSprites_C_ShowOuterCircle_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.HideOuterCircle
// (Public, BlueprintCallable, BlueprintEvent)

void UOuterCircularProgressBarSprites_C::HideOuterCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.HideOuterCircle");

	UOuterCircularProgressBarSprites_C_HideOuterCircle_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOuterCircularProgressBarSprites_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.Construct");

	UOuterCircularProgressBarSprites_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ExecuteUbergraph_OuterCircularProgressBarSprites
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOuterCircularProgressBarSprites_C::ExecuteUbergraph_OuterCircularProgressBarSprites(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OuterCircularProgressBarSprites.OuterCircularProgressBarSprites_C.ExecuteUbergraph_OuterCircularProgressBarSprites");

	UOuterCircularProgressBarSprites_C_ExecuteUbergraph_OuterCircularProgressBarSprites_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
