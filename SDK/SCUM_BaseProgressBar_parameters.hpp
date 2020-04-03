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

// Function BaseProgressBar.BaseProgressBar_C.PercentageToUITextWOPercSign
struct UBaseProgressBar_C_PercentageToUITextWOPercSign_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       percentageString;                                         // (Parm, OutParm)
};

// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThresholdHigh
struct UBaseProgressBar_C_GetAlarmThresholdHigh_Params
{
	float                                              alarmThreshold;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHigh
struct UBaseProgressBar_C_SetAlarmThresholdHigh_Params
{
	float                                              alarmThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThresholdHigh
struct UBaseProgressBar_C_CheckAlarmThresholdHigh_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThresholdHighActive
struct UBaseProgressBar_C_SetAlarmThresholdHighActive_Params
{
	bool                                               shouldBeActive;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.GetIsAlarmOn
struct UBaseProgressBar_C_GetIsAlarmOn_Params
{
	bool                                               isAlarmOn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.PercentageToUIText
struct UBaseProgressBar_C_PercentageToUIText_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       percentageString;                                         // (Parm, OutParm)
};

// Function BaseProgressBar.BaseProgressBar_C.SetClamping
struct UBaseProgressBar_C_SetClamping_Params
{
	bool                                               shouldEnableClamping;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.PercentageToText
struct UBaseProgressBar_C_PercentageToText_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       PercentageText;                                           // (Parm, OutParm)
};

// Function BaseProgressBar.BaseProgressBar_C.GetPreviousPercentage
struct UBaseProgressBar_C_GetPreviousPercentage_Params
{
	float                                              prevPercentage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.CheckAlarmThreshold
struct UBaseProgressBar_C_CheckAlarmThreshold_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOn
struct UBaseProgressBar_C_AlarmSwitchOn_Params
{
};

// Function BaseProgressBar.BaseProgressBar_C.AlarmSwitchOff
struct UBaseProgressBar_C_AlarmSwitchOff_Params
{
};

// Function BaseProgressBar.BaseProgressBar_C.GetAlarmThreshold
struct UBaseProgressBar_C_GetAlarmThreshold_Params
{
	float                                              alarmThreshold;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SetAlarmThreshold
struct UBaseProgressBar_C_SetAlarmThreshold_Params
{
	float                                              alarmThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.PercentageToString
struct UBaseProgressBar_C_PercentageToString_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     percentageString;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BaseProgressBar.BaseProgressBar_C.PercentageToInt
struct UBaseProgressBar_C_PercentageToInt_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                percentageInt;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SetPreviousPercentage
struct UBaseProgressBar_C_SetPreviousPercentage_Params
{
	float                                              previousPercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SavePercentageAsPrevious
struct UBaseProgressBar_C_SavePercentageAsPrevious_Params
{
};

// Function BaseProgressBar.BaseProgressBar_C.OnPercentageChanged
struct UBaseProgressBar_C_OnPercentageChanged_Params
{
};

// Function BaseProgressBar.BaseProgressBar_C.SetTitleBase
struct UBaseProgressBar_C_SetTitleBase_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BaseProgressBar.BaseProgressBar_C.GetTitleBase
struct UBaseProgressBar_C_GetTitleBase_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
};

// Function BaseProgressBar.BaseProgressBar_C.IncreasePercentage
struct UBaseProgressBar_C_IncreasePercentage_Params
{
	float                                              IncreasePercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.decreasePercentage
struct UBaseProgressBar_C_decreasePercentage_Params
{
	float                                              decreasePercentage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.SetPercentage
struct UBaseProgressBar_C_SetPercentage_Params
{
	float                                              percentInputToSet;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BaseProgressBar.BaseProgressBar_C.GetPercentage
struct UBaseProgressBar_C_GetPercentage_Params
{
	float                                              percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
