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

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.UserConstructionScript
struct ABP_MenuPlayerController_C_UserConstructionScript_Params
{
};

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ReceiveTick
struct ABP_MenuPlayerController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MouseReleased
struct ABP_MenuPlayerController_C_InputComponent_MouseReleased_Params
{
};

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.InputComponent_MousePressed
struct ABP_MenuPlayerController_C_InputComponent_MousePressed_Params
{
};

// Function BP_MenuPlayerController.BP_MenuPlayerController_C.ExecuteUbergraph_BP_MenuPlayerController
struct ABP_MenuPlayerController_C_ExecuteUbergraph_BP_MenuPlayerController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
