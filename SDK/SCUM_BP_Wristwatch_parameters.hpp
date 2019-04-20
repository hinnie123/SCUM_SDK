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

// Function BP_Wristwatch.BP_Wristwatch_C.UpdateFatnessLeannessVisuals
struct ABP_Wristwatch_C_UpdateFatnessLeannessVisuals_Params
{
};

// Function BP_Wristwatch.BP_Wristwatch_C.UserConstructionScript
struct ABP_Wristwatch_C_UserConstructionScript_Params
{
};

// Function BP_Wristwatch.BP_Wristwatch_C.SetTime
struct ABP_Wristwatch_C_SetTime_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wristwatch.BP_Wristwatch_C.ReceiveBeginPlay
struct ABP_Wristwatch_C_ReceiveBeginPlay_Params
{
};

// Function BP_Wristwatch.BP_Wristwatch_C.ToggleDisplayVisibility
struct ABP_Wristwatch_C_ToggleDisplayVisibility_Params
{
	bool*                                              Visiblity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wristwatch.BP_Wristwatch_C.SetDisplayBrightness
struct ABP_Wristwatch_C_SetDisplayBrightness_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Wristwatch.BP_Wristwatch_C.ExecuteUbergraph_BP_Wristwatch
struct ABP_Wristwatch_C_ExecuteUbergraph_BP_Wristwatch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
