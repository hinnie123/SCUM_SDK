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

// Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_OpenInsertClip_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.CanExecuteUsingData");

	UBP_M1_OpenInsertClip_C_CanExecuteUsingData_Params fn_params;
	fn_params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenInsertClip_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.OnActionAnimNotify");

	UBP_M1_OpenInsertClip_C_OnActionAnimNotify_Params fn_params;
	fn_params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.ExecuteUbergraph_BP_M1_OpenInsertClip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenInsertClip_C::ExecuteUbergraph_BP_M1_OpenInsertClip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenInsertClip.BP_M1_OpenInsertClip_C.ExecuteUbergraph_BP_M1_OpenInsertClip");

	UBP_M1_OpenInsertClip_C_ExecuteUbergraph_BP_M1_OpenInsertClip_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
