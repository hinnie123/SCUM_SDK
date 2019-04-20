#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.UserConstructionScript
struct ABP_Weapon_MP5_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ReceiveBeginPlay
struct ABP_Weapon_MP5_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentAdded
struct ABP_Weapon_MP5_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.OnAttachmentRemoved
struct ABP_Weapon_MP5_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.ExecuteUbergraph_BP_Weapon_MP5
struct ABP_Weapon_MP5_C_ExecuteUbergraph_BP_Weapon_MP5_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
