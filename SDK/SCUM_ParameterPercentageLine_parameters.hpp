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

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateNormalColor
struct UParameterPercentageLine_C_ActivateNormalColor_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.ActivateAlarmColor
struct UParameterPercentageLine_C_ActivateAlarmColor_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.SetAlarmColor
struct UParameterPercentageLine_C_SetAlarmColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.Update
struct UParameterPercentageLine_C_Update_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.GetValueTextBlock
struct UParameterPercentageLine_C_GetValueTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfValue
struct UParameterPercentageLine_C_SetColorOfValue_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColorOfParameterName
struct UParameterPercentageLine_C_SetColorOfParameterName_Params
{
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.SetColor
struct UParameterPercentageLine_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.GetParameterNameTextBlock
struct UParameterPercentageLine_C_GetParameterNameTextBlock_Params
{
	class UTextBlock*                                  textBox;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.SelectCustomColor
struct UParameterPercentageLine_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.Construct
struct UParameterPercentageLine_C_Construct_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.Tick
struct UParameterPercentageLine_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.OnPercentageChanged
struct UParameterPercentageLine_C_OnPercentageChanged_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOn
struct UParameterPercentageLine_C_AlarmSwitchOn_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.AlarmSwitchOff
struct UParameterPercentageLine_C_AlarmSwitchOff_Params
{
};

// Function ParameterPercentageLine.ParameterPercentageLine_C.ExecuteUbergraph_ParameterPercentageLine
struct UParameterPercentageLine_C_ExecuteUbergraph_ParameterPercentageLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
