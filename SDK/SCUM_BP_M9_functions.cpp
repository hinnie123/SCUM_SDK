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

// Function BP_M9.BP_M9_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_M9_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.CanSwitchFiringMode");

	ABP_M9_C_CanSwitchFiringMode_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_M9.BP_M9_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_M9_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.UserConstructionScript");

	ABP_M9_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_M9.BP_M9_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_M9_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.ReceiveBeginPlay");

	ABP_M9_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_M9.BP_M9_C.ExecuteUbergraph_BP_M9
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_M9_C::ExecuteUbergraph_BP_M9(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M9.BP_M9_C.ExecuteUbergraph_BP_M9");

	ABP_M9_C_ExecuteUbergraph_BP_M9_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
