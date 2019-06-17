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

// Function UI_Mission.UI_Mission_C.StartObjectiveAnimation
struct UUI_Mission_C_StartObjectiveAnimation_Params
{
	class AObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Mission.UI_Mission_C.CompleteObjectiveAnimation
struct UUI_Mission_C_CompleteObjectiveAnimation_Params
{
	class AObjective**                                 Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Mission.UI_Mission_C.OnAnimationFinished
struct UUI_Mission_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Mission.UI_Mission_C.ExecuteUbergraph_UI_Mission
struct UUI_Mission_C_ExecuteUbergraph_UI_Mission_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
