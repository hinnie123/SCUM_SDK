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

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.UpdateDigestions
struct UUI_BCUDigestionMonitor_C_UpdateDigestions_Params
{
};

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Update
struct UUI_BCUDigestionMonitor_C_Update_Params
{
};

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.SetPrisoner
struct UUI_BCUDigestionMonitor_C_SetPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.Tick
struct UUI_BCUDigestionMonitor_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BCUDigestionMonitor.UI_BCUDigestionMonitor_C.ExecuteUbergraph_UI_BCUDigestionMonitor
struct UUI_BCUDigestionMonitor_C_ExecuteUbergraph_UI_BCUDigestionMonitor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
