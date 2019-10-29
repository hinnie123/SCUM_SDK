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

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetFiringMontage
struct ABP_Weapon_M1_Garand_C_GetFiringMontage_Params
{
	bool*                                              isLastShot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanAddAttachment
struct ABP_Weapon_M1_Garand_C_CanAddAttachment_Params
{
	class AWeaponAttachment**                          Attachment;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UpdateReloadData
struct ABP_Weapon_M1_Garand_C_UpdateReloadData_Params
{
	struct FWeaponReloadData                           reloadDataIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FWeaponReloadData                           reloadDataOut;                                            // (Parm, OutParm)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.GetAmmoReloadCapacity
struct ABP_Weapon_M1_Garand_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.CanSwitchFiringMode
struct ABP_Weapon_M1_Garand_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.UserConstructionScript
struct ABP_Weapon_M1_Garand_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ReceiveBeginPlay
struct ABP_Weapon_M1_Garand_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentAdded
struct ABP_Weapon_M1_Garand_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.OnAttachmentRemoved
struct ABP_Weapon_M1_Garand_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M1_Garand.BP_Weapon_M1_Garand_C.ExecuteUbergraph_BP_Weapon_M1_Garand
struct ABP_Weapon_M1_Garand_C_ExecuteUbergraph_BP_Weapon_M1_Garand_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
