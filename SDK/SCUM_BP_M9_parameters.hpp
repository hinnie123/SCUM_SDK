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

// Function BP_M9.BP_M9_C.CanSwitchFiringMode
struct ABP_M9_C_CanSwitchFiringMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_M9.BP_M9_C.UserConstructionScript
struct ABP_M9_C_UserConstructionScript_Params
{
};

// Function BP_M9.BP_M9_C.ReceiveBeginPlay
struct ABP_M9_C_ReceiveBeginPlay_Params
{
};

// Function BP_M9.BP_M9_C.ExecuteUbergraph_BP_M9
struct ABP_M9_C_ExecuteUbergraph_BP_M9_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
