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

// Function BP_PlaceableActor.BP_PlaceableActor_C.UserConstructionScript
struct ABP_PlaceableActor_C_UserConstructionScript_Params
{
};

// Function BP_PlaceableActor.BP_PlaceableActor_C.ReceiveTick
struct ABP_PlaceableActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlaceableActor.BP_PlaceableActor_C.ExecuteUbergraph_BP_PlaceableActor
struct ABP_PlaceableActor_C_ExecuteUbergraph_BP_PlaceableActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
