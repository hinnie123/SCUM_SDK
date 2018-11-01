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

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture
struct ABP_FootstepTracker_C_DrawToTexture_Params
{
	class UCanvasRenderTarget2D*                       RenderTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DrawSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyDivider;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom
struct ABP_FootstepTracker_C_Blitzkrieg_Boom_Params
{
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.UserConstructionScript
struct ABP_FootstepTracker_C_UserConstructionScript_Params
{
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick
struct ABP_FootstepTracker_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep
struct ABP_FootstepTracker_C_DrawFootstep_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               flip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              footstepNumber;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay
struct ABP_FootstepTracker_C_ReceiveBeginPlay_Params
{
};

// Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker
struct ABP_FootstepTracker_C_ExecuteUbergraph_BP_FootstepTracker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
