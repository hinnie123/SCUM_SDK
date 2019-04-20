// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Recurve_Bow.Recurve_Bow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecurve_Bow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.UserConstructionScript");

	ARecurve_Bow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_Bow.Recurve_Bow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecurve_Bow_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ReceiveTick");

	ARecurve_Bow_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecurve_Bow_C::ExecuteUbergraph_Recurve_Bow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_Bow.Recurve_Bow_C.ExecuteUbergraph_Recurve_Bow");

	ARecurve_Bow_C_ExecuteUbergraph_Recurve_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
