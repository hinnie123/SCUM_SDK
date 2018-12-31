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

// Function Recurve_BowTest.Recurve_BowTest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecurve_BowTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.UserConstructionScript");

	ARecurve_BowTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_BowTest.Recurve_BowTest_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecurve_BowTest_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.ReceiveTick");

	ARecurve_BowTest_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Recurve_BowTest.Recurve_BowTest_C.ExecuteUbergraph_Recurve_BowTest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARecurve_BowTest_C::ExecuteUbergraph_Recurve_BowTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Recurve_BowTest.Recurve_BowTest_C.ExecuteUbergraph_Recurve_BowTest");

	ARecurve_BowTest_C_ExecuteUbergraph_Recurve_BowTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
