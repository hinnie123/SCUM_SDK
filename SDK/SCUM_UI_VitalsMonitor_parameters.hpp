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

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetOxygenSaturationExtremesText
struct UUI_VitalsMonitor_C_GetOxygenSaturationExtremesText_Params
{
	struct FText                                       oxygenSaturationExtremes;                                 // (Parm, OutParm)
};

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetTemperatureExtremesText
struct UUI_VitalsMonitor_C_GetTemperatureExtremesText_Params
{
	struct FText                                       temperatureExtremes;                                      // (Parm, OutParm)
};

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.GetRespiratoryRateExtremesText
struct UUI_VitalsMonitor_C_GetRespiratoryRateExtremesText_Params
{
	struct FText                                       respiratoryRateExtremes;                                  // (Parm, OutParm)
};

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.SetPrisoner
struct UUI_VitalsMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.Tick
struct UUI_VitalsMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VitalsMonitor.UI_VitalsMonitor_C.ExecuteUbergraph_UI_VitalsMonitor
struct UUI_VitalsMonitor_C_ExecuteUbergraph_UI_VitalsMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
