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

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ReinitializeForPrisoner
struct UUI_InventoryPanelSecondIteration_C_ReinitializeForPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragOver
struct UUI_InventoryPanelSecondIteration_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDrop
struct UUI_InventoryPanelSecondIteration_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ScrollToEquippedItem
struct UUI_InventoryPanelSecondIteration_C_ScrollToEquippedItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveEquippedItemSideIcon
struct UUI_InventoryPanelSecondIteration_C_RemoveEquippedItemSideIcon_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddEquippedItemSideIcon
struct UUI_InventoryPanelSecondIteration_C_AddEquippedItemSideIcon_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.SortInventories
struct UUI_InventoryPanelSecondIteration_C_SortInventories_Params
{
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.AddContainerForItem
struct UUI_InventoryPanelSecondIteration_C_AddContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.RemoveContainerForItem
struct UUI_InventoryPanelSecondIteration_C_RemoveContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateContainerForItem
struct UUI_InventoryPanelSecondIteration_C_UpdateContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemPickedUpStateChanged
struct UUI_InventoryPanelSecondIteration_C_OnItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnItemDestroyed
struct UUI_InventoryPanelSecondIteration_C_OnItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.UpdateItemWidgetHighlightings
struct UUI_InventoryPanelSecondIteration_C_UpdateItemWidgetHighlightings_Params
{
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.OnDragLeave
struct UUI_InventoryPanelSecondIteration_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelSecondIteration.UI_InventoryPanelSecondIteration_C.ExecuteUbergraph_UI_InventoryPanelSecondIteration
struct UUI_InventoryPanelSecondIteration_C_ExecuteUbergraph_UI_InventoryPanelSecondIteration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
