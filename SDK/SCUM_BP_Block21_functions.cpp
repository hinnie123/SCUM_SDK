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

// Function BP_Block21.BP_Block21_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Block21_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Block21.BP_Block21_C.CanSwitchFiringMode");

	ABP_Block21_C_CanSwitchFiringMode_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Block21.BP_Block21_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Block21_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Block21.BP_Block21_C.UserConstructionScript");

	ABP_Block21_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Block21.BP_Block21_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Block21_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Block21.BP_Block21_C.ReceiveBeginPlay");

	ABP_Block21_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Block21.BP_Block21_C.ExecuteUbergraph_BP_Block21
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Block21_C::ExecuteUbergraph_BP_Block21(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Block21.BP_Block21_C.ExecuteUbergraph_BP_Block21");

	ABP_Block21_C_ExecuteUbergraph_BP_Block21_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
