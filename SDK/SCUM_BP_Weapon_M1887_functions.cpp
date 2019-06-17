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

// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetAmmoReloadCapacity
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAmmunitionItem**        ammo                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_Weapon_M1887_C::GetAmmoReloadCapacity(class AAmmunitionItem** ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetAmmoReloadCapacity");

	ABP_Weapon_M1887_C_GetAmmoReloadCapacity_Params params;
	params.ammo = ammo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetWidgetDisplayInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FWidgetDisplayInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWidgetDisplayInfo ABP_Weapon_M1887_C::GetWidgetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.GetWidgetDisplayInfo");

	ABP_Weapon_M1887_C_GetWidgetDisplayInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Weapon_M1887_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.UserConstructionScript");

	ABP_Weapon_M1887_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.FillUpWithAmmo
// (Event, Public, BlueprintEvent)

void ABP_Weapon_M1887_C::FillUpWithAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.FillUpWithAmmo");

	ABP_Weapon_M1887_C_FillUpWithAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Weapon_M1887.BP_Weapon_M1887_C.ExecuteUbergraph_BP_Weapon_M1887
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Weapon_M1887_C::ExecuteUbergraph_BP_Weapon_M1887(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_M1887.BP_Weapon_M1887_C.ExecuteUbergraph_BP_Weapon_M1887");

	ABP_Weapon_M1887_C_ExecuteUbergraph_BP_Weapon_M1887_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
