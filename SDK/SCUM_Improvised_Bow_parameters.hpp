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

// Function Improvised_Bow.Improvised_Bow_C.UserConstructionScript
struct AImprovised_Bow_C_UserConstructionScript_Params
{
};

// Function Improvised_Bow.Improvised_Bow_C.ReceiveTick
struct AImprovised_Bow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Improvised_Bow.Improvised_Bow_C.ExecuteUbergraph_Improvised_Bow
struct AImprovised_Bow_C_ExecuteUbergraph_Improvised_Bow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
