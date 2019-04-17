// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_Hunter85_C::GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity");

	ABP_Weapon_Hunter85_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_Hunter85_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.UserConstructionScript");

	ABP_Weapon_Hunter85_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
