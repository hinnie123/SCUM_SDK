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

// Function BP_BowSilencer.BP_BowSilencer_C.UserConstructionScript
struct ABP_BowSilencer_C_UserConstructionScript_Params
{
};

// Function BP_BowSilencer.BP_BowSilencer_C.OnDetachedFromItem
struct ABP_BowSilencer_C_OnDetachedFromItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowSilencer.BP_BowSilencer_C.OnAttachedToItem
struct ABP_BowSilencer_C_OnAttachedToItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BowSilencer.BP_BowSilencer_C.ExecuteUbergraph_BP_BowSilencer
struct ABP_BowSilencer_C_ExecuteUbergraph_BP_BowSilencer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
