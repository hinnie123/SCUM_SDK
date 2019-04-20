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

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.CheckIfNutritionPercentageIsSatisfying
struct UUI_BCUNutritionMonitor_C_CheckIfNutritionPercentageIsSatisfying_Params
{
	float                                              percentage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              satisfying;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritionLines
struct UUI_BCUNutritionMonitor_C_UpdateNutritionLines_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateMinerals
struct UUI_BCUNutritionMonitor_C_UpdateMinerals_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateVitamins
struct UUI_BCUNutritionMonitor_C_UpdateVitamins_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateNutritions
struct UUI_BCUNutritionMonitor_C_UpdateNutritions_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.UpdateValues
struct UUI_BCUNutritionMonitor_C_UpdateValues_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.SetPrisoner
struct UUI_BCUNutritionMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Tick
struct UUI_BCUNutritionMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.Construct
struct UUI_BCUNutritionMonitor_C_Construct_Params
{
};

// Function UI_BCUNutritionMonitor.UI_BCUNutritionMonitor_C.ExecuteUbergraph_UI_BCUNutritionMonitor
struct UUI_BCUNutritionMonitor_C_ExecuteUbergraph_UI_BCUNutritionMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
