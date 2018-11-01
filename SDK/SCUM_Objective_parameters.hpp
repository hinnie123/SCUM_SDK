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

// Function Objective.Objective_C.GetObjective
struct UObjective_C_GetObjective_Params
{
	class ABP_MissionObjective_C*                      Objective;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Objective.Objective_C.SetObjective
struct UObjective_C_SetObjective_Params
{
	class ABP_MissionObjective_C*                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Objective.Objective_C.UpdateWidget
struct UObjective_C_UpdateWidget_Params
{
	class ABP_MissionObjective_C*                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Objective.Objective_C.ObjectiveCompleted
struct UObjective_C_ObjectiveCompleted_Params
{
};

// Function Objective.Objective_C.Tick
struct UObjective_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Objective.Objective_C.ExecuteUbergraph_Objective
struct UObjective_C_ExecuteUbergraph_Objective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Objective.Objective_C.OnFaded__DelegateSignature
struct UObjective_C_OnFaded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
