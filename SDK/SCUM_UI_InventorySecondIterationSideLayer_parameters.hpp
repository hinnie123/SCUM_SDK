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

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDragOver
struct UUI_InventorySecondIterationSideLayer_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnItemDestroyed
struct UUI_InventorySecondIterationSideLayer_C_OnItemDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnDrop
struct UUI_InventorySecondIterationSideLayer_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnMouseButtonDown
struct UUI_InventorySecondIterationSideLayer_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.GetIsSet
struct UUI_InventorySecondIterationSideLayer_C_GetIsSet_Params
{
	bool                                               isSet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ClearItem
struct UUI_InventorySecondIterationSideLayer_C_ClearItem_Params
{
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.InitFromItem
struct UUI_InventorySecondIterationSideLayer_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.Construct
struct UUI_InventorySecondIterationSideLayer_C_Construct_Params
{
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ItemClicked
struct UUI_InventorySecondIterationSideLayer_C_ItemClicked_Params
{
	class UItemUserWidget*                             clickedWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.UpdateHighlightStatus
struct UUI_InventorySecondIterationSideLayer_C_UpdateHighlightStatus_Params
{
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.ExecuteUbergraph_UI_InventorySecondIterationSideLayer
struct UUI_InventorySecondIterationSideLayer_C_ExecuteUbergraph_UI_InventorySecondIterationSideLayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventorySecondIterationSideLayer.UI_InventorySecondIterationSideLayer_C.OnClicked__DelegateSignature
struct UUI_InventorySecondIterationSideLayer_C_OnClicked__DelegateSignature_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
