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

// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float U590A1_Reload_Event_NoChamber_C::ExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUsingData");

	U590A1_Reload_Event_NoChamber_C_ExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.CanExecuteUsingData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool U590A1_Reload_Event_NoChamber_C::CanExecuteUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.CanExecuteUsingData");

	U590A1_Reload_Event_NoChamber_C_CanExecuteUsingData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.OnActionAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// ECharacterActionNotifyType*    notifyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_Reload_Event_NoChamber_C::OnActionAnimNotify(ECharacterActionNotifyType* notifyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.OnActionAnimNotify");

	U590A1_Reload_Event_NoChamber_C_OnActionAnimNotify_Params params;
	params.notifyType = notifyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUbergraph_590A1_Reload_Event_NoChamber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U590A1_Reload_Event_NoChamber_C::ExecuteUbergraph_590A1_Reload_Event_NoChamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 590A1_Reload_Event_NoChamber.590A1_Reload_Event_NoChamber_C.ExecuteUbergraph_590A1_Reload_Event_NoChamber");

	U590A1_Reload_Event_NoChamber_C_ExecuteUbergraph_590A1_Reload_Event_NoChamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
