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

// Function ObjectiveContainer.ObjectiveContainer_C.Construct
struct UObjectiveContainer_C_Construct_Params
{
};

// Function ObjectiveContainer.ObjectiveContainer_C.AddObjective
struct UObjectiveContainer_C_AddObjective_Params
{
	class ABP_MissionObjective_C*                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectiveContainer.ObjectiveContainer_C.ExecuteUbergraph_ObjectiveContainer
struct UObjectiveContainer_C_ExecuteUbergraph_ObjectiveContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectiveContainer.ObjectiveContainer_C.ObjectiveCompleted__DelegateSignature
struct UObjectiveContainer_C_ObjectiveCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
