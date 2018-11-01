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

// Function ParameterLine.ParameterLine_C.ActivateCustomAlarmColor
struct UParameterLine_C_ActivateCustomAlarmColor_Params
{
	struct FLinearColor                                LinearColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.AlarmControl
struct UParameterLine_C_AlarmControl_Params
{
	int                                                alarmColorCode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.ActivateNormalColor
struct UParameterLine_C_ActivateNormalColor_Params
{
};

// Function ParameterLine.ParameterLine_C.ActivateAlarmColor
struct UParameterLine_C_ActivateAlarmColor_Params
{
};

// Function ParameterLine.ParameterLine_C.SetAlarmColor
struct UParameterLine_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.Update
struct UParameterLine_C_Update_Params
{
	struct FText                                       parameterNameToSet;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       parameterValueToSet;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       maxParameterValueToSet;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetValuesColor
struct UParameterLine_C_SetValuesColor_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetParameterValueText
struct UParameterLine_C_SetParameterValueText_Params
{
	struct FText                                       parameterValueText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetMaxValueText
struct UParameterLine_C_SetMaxValueText_Params
{
	struct FText                                       maxValueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetParameterValueSlashText
struct UParameterLine_C_SetParameterValueSlashText_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                decimalPlaces;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.SetParameterValueTextDecimal
struct UParameterLine_C_SetParameterValueTextDecimal_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                decimalPlaces;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.GetValueTextBlock
struct UParameterLine_C_GetValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.SetColorOfMaxValue
struct UParameterLine_C_SetColorOfMaxValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetColorOfValue
struct UParameterLine_C_SetColorOfValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetColorOfParameterName
struct UParameterLine_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.SetColor
struct UParameterLine_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.GetMaxValueTextBlock
struct UParameterLine_C_GetMaxValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.GetParameterNameTextBlock
struct UParameterLine_C_GetParameterNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.GetParameterNameText
struct UParameterLine_C_GetParameterNameText_Params
{
	struct FText                                       ParameterName;                                            // (Parm, OutParm)
};

// Function ParameterLine.ParameterLine_C.SetParameterName
struct UParameterLine_C_SetParameterName_Params
{
	struct FText                                       ParameterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterLine.ParameterLine_C.GetTitleText
struct UParameterLine_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ParameterLine.ParameterLine_C.GetDefaultTitle
struct UParameterLine_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function ParameterLine.ParameterLine_C.OnMinimize
struct UParameterLine_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterLine.ParameterLine_C.Construct
struct UParameterLine_C_Construct_Params
{
};

// Function ParameterLine.ParameterLine_C.ExecuteUbergraph_ParameterLine
struct UParameterLine_C_ExecuteUbergraph_ParameterLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
