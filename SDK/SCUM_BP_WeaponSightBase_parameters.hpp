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

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.UserConstructionScript
struct ABP_WeaponSightBase_C_UserConstructionScript_Params
{
};

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnAttachedToItem
struct ABP_WeaponSightBase_C_OnAttachedToItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.OnDetachedFromItem
struct ABP_WeaponSightBase_C_OnDetachedFromItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WeaponSightBase.BP_WeaponSightBase_C.ExecuteUbergraph_BP_WeaponSightBase
struct ABP_WeaponSightBase_C_ExecuteUbergraph_BP_WeaponSightBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
