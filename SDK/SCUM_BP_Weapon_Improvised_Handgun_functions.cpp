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

// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_Improvised_Handgun_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode");

	ABP_Weapon_Improvised_Handgun_C_CanSwitchFiringMode_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Improvised_Handgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.UserConstructionScript");

	ABP_Weapon_Improvised_Handgun_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_Improvised_Handgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay");

	ABP_Weapon_Improvised_Handgun_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_Improvised_Handgun_C::ExecuteUbergraph_BP_Weapon_Improvised_Handgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun");

	ABP_Weapon_Improvised_Handgun_C_ExecuteUbergraph_BP_Weapon_Improvised_Handgun_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
