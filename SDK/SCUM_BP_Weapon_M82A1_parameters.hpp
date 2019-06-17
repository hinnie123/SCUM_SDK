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

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.GetIgnoreSupportingHandIK
struct ABP_Weapon_M82A1_C_GetIgnoreSupportingHandIK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.CanSwitchFiringMode
struct ABP_Weapon_M82A1_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.UserConstructionScript
struct ABP_Weapon_M82A1_C_UserConstructionScript_Params
{
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveTick
struct ABP_Weapon_M82A1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ReceiveBeginPlay
struct ABP_Weapon_M82A1_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentAdded
struct ABP_Weapon_M82A1_C_OnAttachmentAdded_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.OnAttachmentRemoved
struct ABP_Weapon_M82A1_C_OnAttachmentRemoved_Params
{
	class AWeapon*                                     sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWeaponAttachment*                           Attachment;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Weapon_M82A1.BP_Weapon_M82A1_C.ExecuteUbergraph_BP_Weapon_M82A1
struct ABP_Weapon_M82A1_C_ExecuteUbergraph_BP_Weapon_M82A1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
