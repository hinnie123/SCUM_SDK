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

// Function Nutritions.Nutritions_C.SetParentsForChildren
struct UNutritions_C_SetParentsForChildren_Params
{
};

// Function Nutritions.Nutritions_C.shouldAlarmBeOn
struct UNutritions_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates
struct UNutritions_C_UpdateCaloryWaterConsumRates_Params
{
};

// Function Nutritions.Nutritions_C.Init
struct UNutritions_C_Init_Params
{
};

// Function Nutritions.Nutritions_C.Update
struct UNutritions_C_Update_Params
{
};

// Function Nutritions.Nutritions_C.UpdateNutritionPercentages
struct UNutritions_C_UpdateNutritionPercentages_Params
{
};

// Function Nutritions.Nutritions_C.UpdateRDAValues
struct UNutritions_C_UpdateRDAValues_Params
{
};

// Function Nutritions.Nutritions_C.UpdateNutritionValues
struct UNutritions_C_UpdateNutritionValues_Params
{
};

// Function Nutritions.Nutritions_C.SetDefaultTitle
struct UNutritions_C_SetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Nutritions.Nutritions_C.SetContentVisibility
struct UNutritions_C_SetContentVisibility_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.SetTextColor
struct UNutritions_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox
struct UNutritions_C_SetTextColorOfVerticalBox_Params
{
	class UPanelWidget*                                verticalBoxRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.GetTitleText
struct UNutritions_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Nutritions.Nutritions_C.GetDefaultTitle
struct UNutritions_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function Nutritions.Nutritions_C.SelectCustomColor
struct UNutritions_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.OnMinimize
struct UNutritions_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.Construct
struct UNutritions_C_Construct_Params
{
};

// Function Nutritions.Nutritions_C.Tick
struct UNutritions_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Nutritions.Nutritions_C.UpdateNutritionsEvent
struct UNutritions_C_UpdateNutritionsEvent_Params
{
};

// Function Nutritions.Nutritions_C.OnPrisonerSet
struct UNutritions_C_OnPrisonerSet_Params
{
};

// Function Nutritions.Nutritions_C.AlarmOnWindowContent
struct UNutritions_C_AlarmOnWindowContent_Params
{
};

// Function Nutritions.Nutritions_C.AlarmOffWindowContent
struct UNutritions_C_AlarmOffWindowContent_Params
{
};

// Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions
struct UNutritions_C_ExecuteUbergraph_Nutritions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
