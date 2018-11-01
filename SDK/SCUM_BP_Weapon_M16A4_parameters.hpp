#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.UserConstructionScript
struct ABP_Weapon_M16A4_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ReceiveBeginPlay
struct ABP_Weapon_M16A4_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentAdded
struct ABP_Weapon_M16A4_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.OnAttachmentRemoved
struct ABP_Weapon_M16A4_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M16A4.BP_Weapon_M16A4_C.ExecuteUbergraph_BP_Weapon_M16A4
struct ABP_Weapon_M16A4_C_ExecuteUbergraph_BP_Weapon_M16A4_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
