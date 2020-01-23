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

// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.CanExecuteUsingData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_M1_OpenEjectClipInsertClip_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.CanExecuteUsingData");

	UBP_M1_OpenEjectClipInsertClip_C_CanExecuteUsingData_Params fn_params;
	fn_params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenEjectClipInsertClip_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.OnActionAnimNotify");

	UBP_M1_OpenEjectClipInsertClip_C_OnActionAnimNotify_Params fn_params;
	fn_params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_M1_OpenEjectClipInsertClip_C::ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_M1_OpenEjectClipInsertClip.BP_M1_OpenEjectClipInsertClip_C.ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip");

	UBP_M1_OpenEjectClipInsertClip_C_ExecuteUbergraph_BP_M1_OpenEjectClipInsertClip_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
