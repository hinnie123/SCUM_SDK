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

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanReloadUsingData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FWeaponReloadData*      Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1_Garand_C::CanReloadUsingData(struct FWeaponReloadData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanReloadUsingData");

	ABP_Weapon_M1_Garand_C_CanReloadUsingData_Params fn_params;
	fn_params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool*                          isLastShot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* ABP_Weapon_M1_Garand_C::GetFiringMontage(bool* isLastShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage");

	ABP_Weapon_M1_Garand_C_GetFiringMontage_Params fn_params;
	fn_params.isLastShot = isLastShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponReloadData       reloadDataIn                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FWeaponReloadData       reloadDataOut                  (Parm, OutParm)

void ABP_Weapon_M1_Garand_C::UpdateReloadData(struct FWeaponReloadData* reloadDataIn, struct FWeaponReloadData* reloadDataOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData");

	ABP_Weapon_M1_Garand_C_UpdateReloadData_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (reloadDataIn != nullptr)
		*reloadDataIn = fn_params.reloadDataIn;
	if (reloadDataOut != nullptr)
		*reloadDataOut = fn_params.reloadDataOut;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_M1_Garand_C::GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity");

	ABP_Weapon_M1_Garand_C_GetAmmoReloadCapacity_Params fn_params;
	fn_params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Weapon_M1_Garand_C::CanSwitchFiringMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode");

	ABP_Weapon_M1_Garand_C_CanSwitchFiringMode_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript");

	ABP_Weapon_M1_Garand_C_UserConstructionScript_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Weapon_M1_Garand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay");

	ABP_Weapon_M1_Garand_C_ReceiveBeginPlay_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentAdded(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded");

	ABP_Weapon_M1_Garand_C_OnAttachmentAdded_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeaponAttachment*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::OnAttachmentRemoved(class AWeapon* sender, class AWeaponAttachment* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved");

	ABP_Weapon_M1_Garand_C_OnAttachmentRemoved_Params fn_params;
	fn_params.sender = sender;
	fn_params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1_Garand_C::ExecuteUbergraph_BP_Weapon_M1_Garand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand");

	ABP_Weapon_M1_Garand_C_ExecuteUbergraph_BP_Weapon_M1_Garand_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
