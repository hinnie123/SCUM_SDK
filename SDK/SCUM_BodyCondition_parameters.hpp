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

// Function BodyCondition.BodyCondition_C.CheckBloodVolumeAlarm
struct UBodyCondition_C_CheckBloodVolumeAlarm_Params
{
	float                                              currentBlood;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              initialBlood;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinBlood;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.CheckTemperatureAlarm
struct UBodyCondition_C_CheckTemperatureAlarm_Params
{
	float                                              temperatureDeviation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.CheckTeethNumberAlarm
struct UBodyCondition_C_CheckTeethNumberAlarm_Params
{
	float                                              Age;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TeethNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.CheckBFPAlarm
struct UBodyCondition_C_CheckBFPAlarm_Params
{
	float                                              bodyFatPercentage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              bodyFatAlarmThreshold;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.Init
struct UBodyCondition_C_Init_Params
{
};

// Function BodyCondition.BodyCondition_C.SetMeasurementUnits
struct UBodyCondition_C_SetMeasurementUnits_Params
{
};

// Function BodyCondition.BodyCondition_C.UpdateParameterLines
struct UBodyCondition_C_UpdateParameterLines_Params
{
};

// Function BodyCondition.BodyCondition_C.GetTitleText
struct UBodyCondition_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BodyCondition.BodyCondition_C.GetDefaultTitle
struct UBodyCondition_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function BodyCondition.BodyCondition_C.SelectCustomColor
struct UBodyCondition_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.OnMinimize
struct UBodyCondition_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.Construct
struct UBodyCondition_C_Construct_Params
{
};

// Function BodyCondition.BodyCondition_C.OnPrisonerSet
struct UBodyCondition_C_OnPrisonerSet_Params
{
};

// Function BodyCondition.BodyCondition_C.UpdateContent
struct UBodyCondition_C_UpdateContent_Params
{
};

// Function BodyCondition.BodyCondition_C.ShouldActivateAlarm
struct UBodyCondition_C_ShouldActivateAlarm_Params
{
};

// Function BodyCondition.BodyCondition_C.ShouldDeactivateAlarm
struct UBodyCondition_C_ShouldDeactivateAlarm_Params
{
};

// Function BodyCondition.BodyCondition_C.ShouldActivateBFPAlarm
struct UBodyCondition_C_ShouldActivateBFPAlarm_Params
{
};

// Function BodyCondition.BodyCondition_C.ExecuteUbergraph_BodyCondition
struct UBodyCondition_C_ExecuteUbergraph_BodyCondition_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BodyCondition.BodyCondition_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
struct UBodyCondition_C_AlarmOffBodyConditionEventDispatcher__DelegateSignature_Params
{
};

// Function BodyCondition.BodyCondition_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
struct UBodyCondition_C_AlarmOnBodyConditionEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
