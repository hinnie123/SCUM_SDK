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

// Function BP_MissionObjective.BP_MissionObjective_C.OnChanged
struct ABP_MissionObjective_C_OnChanged_Params
{
};

// Function BP_MissionObjective.BP_MissionObjective_C.GetDescription
struct ABP_MissionObjective_C_GetDescription_Params
{
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function BP_MissionObjective.BP_MissionObjective_C.IsCompleted
struct ABP_MissionObjective_C_IsCompleted_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MissionObjective.BP_MissionObjective_C.UserConstructionScript
struct ABP_MissionObjective_C_UserConstructionScript_Params
{
};

// Function BP_MissionObjective.BP_MissionObjective_C.Changed__DelegateSignature
struct ABP_MissionObjective_C_Changed__DelegateSignature_Params
{
	class ABP_MissionObjective_C*                      sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
