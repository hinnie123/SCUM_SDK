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

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetUpdateContentTimer
struct UMonitoredWindowsContent_C_GetUpdateContentTimer_Params
{
	struct FTimerHandle                                updateContentTimer;                                       // (Parm, OutParm)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsBCUDataInitialized
struct UMonitoredWindowsContent_C_IsBCUDataInitialized_Params
{
	bool                                               IsBCUDataInitialized;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmSwitchedOff
struct UMonitoredWindowsContent_C_NotifyParentOnAlarmSwitchedOff_Params
{
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.NotifyParentOnAlarmRaised
struct UMonitoredWindowsContent_C_NotifyParentOnAlarmRaised_Params
{
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.IsPrisonerLifeComponentValid
struct UMonitoredWindowsContent_C_IsPrisonerLifeComponentValid_Params
{
	bool                                               isLifeComponentValid;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetPrisoner
struct UMonitoredWindowsContent_C_GetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetDefaultPrisonerToMonitor
struct UMonitoredWindowsContent_C_SetDefaultPrisonerToMonitor_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.SetPrisonerToMonitor
struct UMonitoredWindowsContent_C_SetPrisonerToMonitor_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.GetDefaultPrisoner
struct UMonitoredWindowsContent_C_GetDefaultPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.Construct
struct UMonitoredWindowsContent_C_Construct_Params
{
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.OnPrisonerSet
struct UMonitoredWindowsContent_C_OnPrisonerSet_Params
{
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.UpdateContent
struct UMonitoredWindowsContent_C_UpdateContent_Params
{
};

// Function MonitoredWindowsContent.MonitoredWindowsContent_C.ExecuteUbergraph_MonitoredWindowsContent
struct UMonitoredWindowsContent_C_ExecuteUbergraph_MonitoredWindowsContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
