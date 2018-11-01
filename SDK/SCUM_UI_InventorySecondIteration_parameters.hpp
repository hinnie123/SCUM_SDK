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

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.OnDrop
struct UUI_InventorySecondIteration_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.InitFromItem
struct UUI_InventorySecondIteration_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.GetItem
struct UUI_InventorySecondIteration_C_GetItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.UpdateItemWidgetHighlightings
struct UUI_InventorySecondIteration_C_UpdateItemWidgetHighlightings_Params
{
};

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.Blink
struct UUI_InventorySecondIteration_C_Blink_Params
{
};

// Function UI_InventorySecondIteration.UI_InventorySecondIteration_C.ExecuteUbergraph_UI_InventorySecondIteration
struct UUI_InventorySecondIteration_C_ExecuteUbergraph_UI_InventorySecondIteration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
