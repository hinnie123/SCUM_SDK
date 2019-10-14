#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.CanSwitchFiringMode
struct ABP_Weapon_Hunter85_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.GetAmmoReloadCapacity
struct ABP_Weapon_Hunter85_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.UserConstructionScript
struct ABP_Weapon_Hunter85_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ReceiveBeginPlay
struct ABP_Weapon_Hunter85_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_Hunter85.BP_Weapon_Hunter85_C.ExecuteUbergraph_BP_Weapon_Hunter85
struct ABP_Weapon_Hunter85_C_ExecuteUbergraph_BP_Weapon_Hunter85_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
