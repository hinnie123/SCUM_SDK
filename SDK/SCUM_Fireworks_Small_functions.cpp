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

// Function Fireworks_Small.Fireworks_Small_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireworks_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.UserConstructionScript");

	AFireworks_Small_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Fireworks_Small.Fireworks_Small_C.LaunchShell
// (Event, Public, BlueprintEvent)

void AFireworks_Small_C::LaunchShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.LaunchShell");

	AFireworks_Small_C_LaunchShell_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFireworks_Small_C::ExecuteUbergraph_Fireworks_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fireworks_Small.Fireworks_Small_C.ExecuteUbergraph_Fireworks_Small");

	AFireworks_Small_C_ExecuteUbergraph_Fireworks_Small_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
