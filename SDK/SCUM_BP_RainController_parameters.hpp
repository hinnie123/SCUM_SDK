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

// Function BP_RainController.BP_RainController_C.DisableRain
struct ABP_RainController_C_DisableRain_Params
{
};

// Function BP_RainController.BP_RainController_C.EnableRain
struct ABP_RainController_C_EnableRain_Params
{
};

// Function BP_RainController.BP_RainController_C.UserConstructionScript
struct ABP_RainController_C_UserConstructionScript_Params
{
};

// Function BP_RainController.BP_RainController_C.BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
struct ABP_RainController_C_BndEvt__LightningEmitter_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_RainController.BP_RainController_C.ReceiveEndPlay
struct ABP_RainController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RainController.BP_RainController_C.ReceiveDestroyed
struct ABP_RainController_C_ReceiveDestroyed_Params
{
};

// Function BP_RainController.BP_RainController_C.ShiftCam
struct ABP_RainController_C_ShiftCam_Params
{
};

// Function BP_RainController.BP_RainController_C.ReceiveTick
struct ABP_RainController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
struct ABP_RainController_C_ReceiveBeginPlay_Params
{
};

// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
struct ABP_RainController_C_ExecuteUbergraph_BP_RainController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
