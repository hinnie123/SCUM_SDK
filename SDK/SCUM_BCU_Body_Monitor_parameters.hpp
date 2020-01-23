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

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.ShouldAlarmBeOn
struct UBCU_Body_Monitor_C_ShouldAlarmBeOn_Params
{
	bool                                               ShouldAlarmBeOn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
struct UBCU_Body_Monitor_C_GetContentSize_Params
{
	struct FVector2D                                   contentSize;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
struct UBCU_Body_Monitor_C_SetPrisonerToMonitorOnChildren_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
struct UBCU_Body_Monitor_C_SetSubTitles_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
struct UBCU_Body_Monitor_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
struct UBCU_Body_Monitor_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
struct UBCU_Body_Monitor_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn
struct UBCU_Body_Monitor_C_AlarmSwitchOn_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff
struct UBCU_Body_Monitor_C_AlarmSwitchOff_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness
struct UBCU_Body_Monitor_C_AlarmOnSickness_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness
struct UBCU_Body_Monitor_C_AlarmOffSickness_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition
struct UBCU_Body_Monitor_C_AlarmOnBodyCondition_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition
struct UBCU_Body_Monitor_C_AlarmOffBodyCondition_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent
struct UBCU_Body_Monitor_C_BCUBodyMonitorContentSizeChangedEvent_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet
struct UBCU_Body_Monitor_C_OnPrisonerSet_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick
struct UBCU_Body_Monitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct
struct UBCU_Body_Monitor_C_Construct_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
struct UBCU_Body_Monitor_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged
struct UBCU_Body_Monitor_C_WindowContentSizeChanged_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent
struct UBCU_Body_Monitor_C_AlarmOnWindowContent_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent
struct UBCU_Body_Monitor_C_AlarmOffWindowContent_Params
{
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
struct UBCU_Body_Monitor_C_ExecuteUbergraph_BCU_Body_Monitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
struct UBCU_Body_Monitor_C_BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature_Params
{
	struct FVector2D                                   Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
