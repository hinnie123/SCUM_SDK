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

// Function UI_HandPanel.UI_HandPanel_C.GetQuickAccessAt
struct UUI_HandPanel_C_GetQuickAccessAt_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuickAccessItemSwitcher*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_HandPanel.UI_HandPanel_C.GetShoulderHolster
struct UUI_HandPanel_C_GetShoulderHolster_Params
{
	int*                                               holsterId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UShoulderHolsterWidget*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_HandPanel.UI_HandPanel_C.GetHandInventory
struct UUI_HandPanel_C_GetHandInventory_Params
{
	class UHandInventorySecondIteration*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_HandPanel.UI_HandPanel_C.UpdateItemWidgetHighlightings
struct UUI_HandPanel_C_UpdateItemWidgetHighlightings_Params
{
};

// Function UI_HandPanel.UI_HandPanel_C.ExecuteUbergraph_UI_HandPanel
struct UUI_HandPanel_C_ExecuteUbergraph_UI_HandPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
