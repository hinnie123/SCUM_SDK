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

// Function LevelAttributes.LevelAttributes_C.shouldAlarmBeOn
struct ULevelAttributes_C_shouldAlarmBeOn_Params
{
	bool                                               shouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.UpdateReferentValue
struct ULevelAttributes_C_UpdateReferentValue_Params
{
	float                                              lastReferentValue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              currentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              tollerance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              timeSinceLastUpdate;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              UpdateInterval;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               referentValueUpdated;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.InitAttributeValues
struct ULevelAttributes_C_InitAttributeValues_Params
{
};

// Function LevelAttributes.LevelAttributes_C.CalculateChangeSpeed
struct ULevelAttributes_C_CalculateChangeSpeed_Params
{
	float                                              currentValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              lastValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.CheckAttributeLevelAlarm
struct ULevelAttributes_C_CheckAttributeLevelAlarm_Params
{
	float                                              currentAttributeValue;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              dynamicChange;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               alarmRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.CheckBFPAlarm
struct ULevelAttributes_C_CheckBFPAlarm_Params
{
	float                                              bodyFatPercentage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              bodyFatAlarmThreshold;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                alarmCode;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.Init
struct ULevelAttributes_C_Init_Params
{
};

// Function LevelAttributes.LevelAttributes_C.SetMeasurementUnits
struct ULevelAttributes_C_SetMeasurementUnits_Params
{
};

// Function LevelAttributes.LevelAttributes_C.UpdateParameterLines
struct ULevelAttributes_C_UpdateParameterLines_Params
{
};

// Function LevelAttributes.LevelAttributes_C.GetTitleText
struct ULevelAttributes_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LevelAttributes.LevelAttributes_C.GetDefaultTitle
struct ULevelAttributes_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function LevelAttributes.LevelAttributes_C.SelectCustomColor
struct ULevelAttributes_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.OnMinimize
struct ULevelAttributes_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.Construct
struct ULevelAttributes_C_Construct_Params
{
};

// Function LevelAttributes.LevelAttributes_C.OnPrisonerSet
struct ULevelAttributes_C_OnPrisonerSet_Params
{
};

// Function LevelAttributes.LevelAttributes_C.UpdateContent
struct ULevelAttributes_C_UpdateContent_Params
{
};

// Function LevelAttributes.LevelAttributes_C.ShouldActivateAlarm
struct ULevelAttributes_C_ShouldActivateAlarm_Params
{
};

// Function LevelAttributes.LevelAttributes_C.ShouldDeactivateAlarm
struct ULevelAttributes_C_ShouldDeactivateAlarm_Params
{
};

// Function LevelAttributes.LevelAttributes_C.ShouldActivateBFPAlarm
struct ULevelAttributes_C_ShouldActivateBFPAlarm_Params
{
};

// Function LevelAttributes.LevelAttributes_C.AlarmOnWindowContent
struct ULevelAttributes_C_AlarmOnWindowContent_Params
{
};

// Function LevelAttributes.LevelAttributes_C.AlarmOffWindowContent
struct ULevelAttributes_C_AlarmOffWindowContent_Params
{
};

// Function LevelAttributes.LevelAttributes_C.ExecuteUbergraph_LevelAttributes
struct ULevelAttributes_C_ExecuteUbergraph_LevelAttributes_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelAttributes.LevelAttributes_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
struct ULevelAttributes_C_AlarmOffBodyConditionEventDispatcher__DelegateSignature_Params
{
};

// Function LevelAttributes.LevelAttributes_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
struct ULevelAttributes_C_AlarmOnBodyConditionEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
