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

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Get_BloodDropBox_Visibility_1
struct UPrisonerLifeIndicatorsSprite_C_Get_BloodDropBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetImageVisibility
struct UPrisonerLifeIndicatorsSprite_C_SetImageVisibility_Params
{
	EBodyPart                                          bodyPart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetDefaultPrisoner
struct UPrisonerLifeIndicatorsSprite_C_GetDefaultPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.GetProgressBar
struct UPrisonerLifeIndicatorsSprite_C_GetProgressBar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCircularProgressBarSprites_C*               circularProgresBar;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetDefaultPrisonerToMonitor
struct UPrisonerLifeIndicatorsSprite_C_SetDefaultPrisonerToMonitor_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateIndicators
struct UPrisonerLifeIndicatorsSprite_C_UpdateIndicators_Params
{
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.SetPrisonerToMonitor
struct UPrisonerLifeIndicatorsSprite_C_SetPrisonerToMonitor_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Construct
struct UPrisonerLifeIndicatorsSprite_C_Construct_Params
{
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.Tick
struct UPrisonerLifeIndicatorsSprite_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.UpdateLifeIndicatorsEvent
struct UPrisonerLifeIndicatorsSprite_C_UpdateLifeIndicatorsEvent_Params
{
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.OnPrisonerSet
struct UPrisonerLifeIndicatorsSprite_C_OnPrisonerSet_Params
{
};

// Function PrisonerLifeIndicatorsSprite.PrisonerLifeIndicatorsSprite_C.ExecuteUbergraph_PrisonerLifeIndicatorsSprite
struct UPrisonerLifeIndicatorsSprite_C_ExecuteUbergraph_PrisonerLifeIndicatorsSprite_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
