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

// Function BP_MissionObjective.BP_MissionObjective_C.OnChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_MissionObjective_C::OnChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.OnChanged");

	ABP_MissionObjective_C_OnChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionObjective.BP_MissionObjective_C.GetDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   Value                          (Parm, OutParm)

void ABP_MissionObjective_C::GetDescription(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.GetDescription");

	ABP_MissionObjective_C_GetDescription_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = fn_params.Value;
}


// Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MissionObjective_C::IsCompleted(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted");

	ABP_MissionObjective_C_IsCompleted_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = fn_params.Value;
}


// Function BP_MissionObjective.BP_MissionObjective_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MissionObjective_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.UserConstructionScript");

	ABP_MissionObjective_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionObjective_C::Changed__DelegateSignature(class ABP_MissionObjective_C* sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature");

	ABP_MissionObjective_C_Changed__DelegateSignature_Params fn_params;
	fn_params.sender = sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
