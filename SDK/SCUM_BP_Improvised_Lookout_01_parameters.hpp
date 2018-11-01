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

// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetWindowMarkers
struct ABP_Improvised_Lookout_01_C_GetWindowMarkers_Params
{
	TArray<struct FWindowMarker>                       Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.GetLadderMarkers
struct ABP_Improvised_Lookout_01_C_GetLadderMarkers_Params
{
	TArray<struct FLadderMarker>                       Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Improvised_Lookout_01.BP_Improvised_Lookout_01_C.UserConstructionScript
struct ABP_Improvised_Lookout_01_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
