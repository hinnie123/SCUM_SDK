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

// Function ParameterProgressLine.ParameterProgressLine_C.AdjustRelativeColumnSizes
struct UParameterProgressLine_C_AdjustRelativeColumnSizes_Params
{
	float                                              column0_Percent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              column1_Percent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.SetPercentageText
struct UParameterProgressLine_C_SetPercentageText_Params
{
	struct FText                                       percentText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.UpdatePercentageText
struct UParameterProgressLine_C_UpdatePercentageText_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.ActivateNormalColor
struct UParameterProgressLine_C_ActivateNormalColor_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.ActivateAlarmColor
struct UParameterProgressLine_C_ActivateAlarmColor_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.GetPercentageToShowText
struct UParameterProgressLine_C_GetPercentageToShowText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.UpdateNutrientTextValues
struct UParameterProgressLine_C_UpdateNutrientTextValues_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.SetAlarmColor
struct UParameterProgressLine_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.SetColorOfParameterName
struct UParameterProgressLine_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.SetColor
struct UParameterProgressLine_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterNameTextBlock
struct UParameterProgressLine_C_GetParameterNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.GetParameterName
struct UParameterProgressLine_C_GetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (Parm, OutParm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.SetParameterName
struct UParameterProgressLine_C_SetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.OnMouseButtonDownOnMinimizeParameterLine
struct UParameterProgressLine_C_OnMouseButtonDownOnMinimizeParameterLine_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ParameterProgressLine.ParameterProgressLine_C.OnMinimize
struct UParameterProgressLine_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.Construct
struct UParameterProgressLine_C_Construct_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.Tick
struct UParameterProgressLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterProgressLine.ParameterProgressLine_C.OnSynchronizeProperties
struct UParameterProgressLine_C_OnSynchronizeProperties_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOn
struct UParameterProgressLine_C_AlarmSwitchOn_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.AlarmSwitchOff
struct UParameterProgressLine_C_AlarmSwitchOff_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.OnPercentageChanged
struct UParameterProgressLine_C_OnPercentageChanged_Params
{
};

// Function ParameterProgressLine.ParameterProgressLine_C.ExecuteUbergraph_ParameterProgressLine
struct UParameterProgressLine_C_ExecuteUbergraph_ParameterProgressLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
