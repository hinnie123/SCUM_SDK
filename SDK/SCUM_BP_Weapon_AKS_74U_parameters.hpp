#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.UserConstructionScript
struct ABP_Weapon_AKS_74U_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ReceiveBeginPlay
struct ABP_Weapon_AKS_74U_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentAdded
struct ABP_Weapon_AKS_74U_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.OnAttachmentRemoved
struct ABP_Weapon_AKS_74U_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_AKS_74U.BP_Weapon_AKS_74U_C.ExecuteUbergraph_BP_Weapon_AKS_74U
struct ABP_Weapon_AKS_74U_C_ExecuteUbergraph_BP_Weapon_AKS_74U_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
