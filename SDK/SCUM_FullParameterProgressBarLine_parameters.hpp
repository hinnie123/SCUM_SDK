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

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlacesForValue
struct UFullParameterProgressBarLine_C_SetDecimalPlacesForValue_Params
{
	int                                                decimalPlacesToSet;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetDecimalPlaces
struct UFullParameterProgressBarLine_C_SetDecimalPlaces_Params
{
	int                                                decimalPlacesToSet;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AdjustHorizontalFillRules
struct UFullParameterProgressBarLine_C_AdjustHorizontalFillRules_Params
{
	float                                              fillColumn0;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fillColumn1;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              fillColumn2;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetPercentageText
struct UFullParameterProgressBarLine_C_SetPercentageText_Params
{
	struct FText                                       percentText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdatePercentageText
struct UFullParameterProgressBarLine_C_UpdatePercentageText_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValueText
struct UFullParameterProgressBarLine_C_SetCurrentValueText_Params
{
	struct FText                                       valueStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValueText
struct UFullParameterProgressBarLine_C_UpdateCurrentValueText_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateDefaultCurrentValue
struct UFullParameterProgressBarLine_C_UpdateDefaultCurrentValue_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetMeasurementUnit
struct UFullParameterProgressBarLine_C_SetMeasurementUnit_Params
{
	struct FText                                       measurementUnit;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetMeasurementUnit
struct UFullParameterProgressBarLine_C_GetMeasurementUnit_Params
{
	struct FText                                       measurementUnit;                                          // (Parm, OutParm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.IsMeasurementUnitDefault
struct UFullParameterProgressBarLine_C_IsMeasurementUnitDefault_Params
{
	struct FString                                     MUString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAValue
struct UFullParameterProgressBarLine_C_UpdateRDAValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAText
struct UFullParameterProgressBarLine_C_SetRDAText_Params
{
	struct FText                                       valueStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateRDAText
struct UFullParameterProgressBarLine_C_UpdateRDAText_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetRDAValue
struct UFullParameterProgressBarLine_C_SetRDAValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateCurrentValue
struct UFullParameterProgressBarLine_C_UpdateCurrentValue_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetCurrentValue
struct UFullParameterProgressBarLine_C_SetCurrentValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateNormalColor
struct UFullParameterProgressBarLine_C_ActivateNormalColor_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ActivateAlarmColor
struct UFullParameterProgressBarLine_C_ActivateAlarmColor_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetPercentageToShowText
struct UFullParameterProgressBarLine_C_GetPercentageToShowText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.UpdateNutrientTextValues
struct UFullParameterProgressBarLine_C_UpdateNutrientTextValues_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetAlarmColor
struct UFullParameterProgressBarLine_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetCurrentValueTextBlock
struct UFullParameterProgressBarLine_C_GetCurrentValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfMaxValue
struct UFullParameterProgressBarLine_C_SetColorOfMaxValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfValue
struct UFullParameterProgressBarLine_C_SetColorOfValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColorOfParameterName
struct UFullParameterProgressBarLine_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetColor
struct UFullParameterProgressBarLine_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetRDAValueTextBlock
struct UFullParameterProgressBarLine_C_GetRDAValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterNameTextBlock
struct UFullParameterProgressBarLine_C_GetParameterNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.GetParameterName
struct UFullParameterProgressBarLine_C_GetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (Parm, OutParm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.SetParameterName
struct UFullParameterProgressBarLine_C_SetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMouseButtonDownOnMinimizeParameterLine
struct UFullParameterProgressBarLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnMinimize
struct UFullParameterProgressBarLine_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Construct
struct UFullParameterProgressBarLine_C_Construct_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.Tick
struct UFullParameterProgressBarLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnSynchronizeProperties
struct UFullParameterProgressBarLine_C_OnSynchronizeProperties_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOn
struct UFullParameterProgressBarLine_C_AlarmSwitchOn_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.AlarmSwitchOff
struct UFullParameterProgressBarLine_C_AlarmSwitchOff_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.OnPercentageChanged
struct UFullParameterProgressBarLine_C_OnPercentageChanged_Params
{
};

// Function FullParameterProgressBarLine.FullParameterProgressBarLine_C.ExecuteUbergraph_FullParameterProgressBarLine
struct UFullParameterProgressBarLine_C_ExecuteUbergraph_FullParameterProgressBarLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
