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

// Function RDANutritionLine.RDANutritionLine_C.SetValuesColor
struct URDANutritionLine_C_SetValuesColor_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.SetPercentageText
struct URDANutritionLine_C_SetPercentageText_Params
{
	struct FText                                       percentText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdatePercentageText
struct URDANutritionLine_C_UpdatePercentageText_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValueText
struct URDANutritionLine_C_SetCurrentValueText_Params
{
	struct FText                                       valueStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValueText
struct URDANutritionLine_C_UpdateCurrentValueText_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateDefaultCurrentValue
struct URDANutritionLine_C_UpdateDefaultCurrentValue_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.SetMeasurementUnit
struct URDANutritionLine_C_SetMeasurementUnit_Params
{
	struct FText                                       measurementUnit;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.GetMeasurementUnit
struct URDANutritionLine_C_GetMeasurementUnit_Params
{
	struct FText                                       measurementUnit;                                          // (Parm, OutParm)
};

// Function RDANutritionLine.RDANutritionLine_C.IsMeasurementUnitDefault
struct URDANutritionLine_C_IsMeasurementUnitDefault_Params
{
	struct FString                                     MUString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAValue
struct URDANutritionLine_C_UpdateRDAValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.SetRDAText
struct URDANutritionLine_C_SetRDAText_Params
{
	struct FText                                       valueStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateRDAText
struct URDANutritionLine_C_UpdateRDAText_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.SetRDAValue
struct URDANutritionLine_C_SetRDAValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateCurrentValue
struct URDANutritionLine_C_UpdateCurrentValue_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.SetCurrentValue
struct URDANutritionLine_C_SetCurrentValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.ActivateNormalColor
struct URDANutritionLine_C_ActivateNormalColor_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.ActivateAlarmColor
struct URDANutritionLine_C_ActivateAlarmColor_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.GetPercentageToShowText
struct URDANutritionLine_C_GetPercentageToShowText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RDANutritionLine.RDANutritionLine_C.UpdateNutrientTextValues
struct URDANutritionLine_C_UpdateNutrientTextValues_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.SetAlarmColor
struct URDANutritionLine_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.GetCurrentValueTextBlock
struct URDANutritionLine_C_GetCurrentValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.SetColorOfMaxValue
struct URDANutritionLine_C_SetColorOfMaxValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.SetColorOfValue
struct URDANutritionLine_C_SetColorOfValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.SetColorOfParameterName
struct URDANutritionLine_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.SetColor
struct URDANutritionLine_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.GetRDAValueTextBlock
struct URDANutritionLine_C_GetRDAValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.GetParameterNameTextBlock
struct URDANutritionLine_C_GetParameterNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.GetParameterName
struct URDANutritionLine_C_GetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (Parm, OutParm)
};

// Function RDANutritionLine.RDANutritionLine_C.SetParameterName
struct URDANutritionLine_C_SetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RDANutritionLine.RDANutritionLine_C.OnMouseButtonDownOnMinimizeParameterLine
struct URDANutritionLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function RDANutritionLine.RDANutritionLine_C.OnMinimize
struct URDANutritionLine_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.Construct
struct URDANutritionLine_C_Construct_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.Tick
struct URDANutritionLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RDANutritionLine.RDANutritionLine_C.OnSynchronizeProperties
struct URDANutritionLine_C_OnSynchronizeProperties_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOn
struct URDANutritionLine_C_AlarmSwitchOn_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.AlarmSwitchOff
struct URDANutritionLine_C_AlarmSwitchOff_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.OnPercentageChanged
struct URDANutritionLine_C_OnPercentageChanged_Params
{
};

// Function RDANutritionLine.RDANutritionLine_C.ExecuteUbergraph_RDANutritionLine
struct URDANutritionLine_C_ExecuteUbergraph_RDANutritionLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
