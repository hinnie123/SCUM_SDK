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

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.SetPrisoner
struct UUI_CaloriesMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Update
struct UUI_CaloriesMonitor_C_Update_Params
{
};

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.Tick
struct UUI_CaloriesMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CaloriesMonitor.UI_CaloriesMonitor_C.ExecuteUbergraph_UI_CaloriesMonitor
struct UUI_CaloriesMonitor_C_ExecuteUbergraph_UI_CaloriesMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
