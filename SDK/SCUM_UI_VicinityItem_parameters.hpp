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

// Function UI_VicinityItem.UI_VicinityItem_C.ShowText
struct UUI_VicinityItem_C_ShowText_Params
{
};

// Function UI_VicinityItem.UI_VicinityItem_C.HideText
struct UUI_VicinityItem_C_HideText_Params
{
};

// Function UI_VicinityItem.UI_VicinityItem_C.OnDrop
struct UUI_VicinityItem_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.RemoveItem
struct UUI_VicinityItem_C_RemoveItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.AddItem
struct UUI_VicinityItem_C_AddItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.GetItem
struct UUI_VicinityItem_C_GetItem_Params
{
	class AItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.InitFromItem
struct UUI_VicinityItem_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.SetupBindings
struct UUI_VicinityItem_C_SetupBindings_Params
{
};

// Function UI_VicinityItem.UI_VicinityItem_C.OnItemAdded
struct UUI_VicinityItem_C_OnItemAdded_Params
{
	class AItem*                                       container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                column;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.OnItemRemoved
struct UUI_VicinityItem_C_OnItemRemoved_Params
{
	class AItem*                                       container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.Construct
struct UUI_VicinityItem_C_Construct_Params
{
};

// Function UI_VicinityItem.UI_VicinityItem_C.BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature
struct UUI_VicinityItem_C_BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature_Params
{
	class UUI_InventoryItem_C*                         inventoryItemWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsExpanded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.Tick
struct UUI_VicinityItem_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.OnItemDestroyed
struct UUI_VicinityItem_C_OnItemDestroyed_Params
{
	class AActor*                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinityItem.UI_VicinityItem_C.ExecuteUbergraph_UI_VicinityItem
struct UUI_VicinityItem_C_ExecuteUbergraph_UI_VicinityItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
