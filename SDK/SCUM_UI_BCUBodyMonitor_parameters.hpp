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

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateSicknesses
struct UUI_BCUBodyMonitor_C_UpdateSicknesses_Params
{
};

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.UpdateValues
struct UUI_BCUBodyMonitor_C_UpdateValues_Params
{
};

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.SetPrisoner
struct UUI_BCUBodyMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Tick
struct UUI_BCUBodyMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.Construct
struct UUI_BCUBodyMonitor_C_Construct_Params
{
};

// Function UI_BCUBodyMonitor.UI_BCUBodyMonitor_C.ExecuteUbergraph_UI_BCUBodyMonitor
struct UUI_BCUBodyMonitor_C_ExecuteUbergraph_UI_BCUBodyMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
