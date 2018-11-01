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

// Function BP_Bear.BP_Bear_C.UserConstructionScript
struct ABP_Bear_C_UserConstructionScript_Params
{
};

// Function BP_Bear.BP_Bear_C.ReceiveTick
struct ABP_Bear_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bear.BP_Bear_C.ReceiveBeginPlay
struct ABP_Bear_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bear.BP_Bear_C.ExecuteUbergraph_BP_Bear
struct ABP_Bear_C_ExecuteUbergraph_BP_Bear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
