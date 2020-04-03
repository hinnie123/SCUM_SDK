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

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExpandToMaximizedHeight
struct UUI_GenericItemInventory_C_ExpandToMaximizedHeight_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.CollapseToMinimizedHeight
struct UUI_GenericItemInventory_C_CollapseToMinimizedHeight_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedHeight
struct UUI_GenericItemInventory_C_GetMinimizedHeight_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedPartial
struct UUI_GenericItemInventory_C_GetMinimizedPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.GetMinimizedFull
struct UUI_GenericItemInventory_C_GetMinimizedFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.adjustPosition
struct UUI_GenericItemInventory_C_adjustPosition_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizeFull
struct UUI_GenericItemInventory_C_ToggleMinimizeFull_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ToggleMinimizePartial
struct UUI_GenericItemInventory_C_ToggleMinimizePartial_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizeFullClicked
struct UUI_GenericItemInventory_C_OnMinimizeFullClicked_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnMinimizePartialClicked
struct UUI_GenericItemInventory_C_OnMinimizePartialClicked_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnCloseClicked
struct UUI_GenericItemInventory_C_OnCloseClicked_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnSynchronizeProperties
struct UUI_GenericItemInventory_C_OnSynchronizeProperties_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.OnHeaderDoubleClickEvent
struct UUI_GenericItemInventory_C_OnHeaderDoubleClickEvent_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Construct
struct UUI_GenericItemInventory_C_Construct_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.Tick
struct UUI_GenericItemInventory_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateVisualsFromItem
struct UUI_GenericItemInventory_C_UpdateVisualsFromItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshOccupiedSlotsAndMassVisuals
struct UUI_GenericItemInventory_C_RefreshOccupiedSlotsAndMassVisuals_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.RefreshSize
struct UUI_GenericItemInventory_C_RefreshSize_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetResizableWindowParentSlot
struct UUI_GenericItemInventory_C_SetResizableWindowParentSlot_Params
{
	class UCanvasPanelSlot**                           PanelSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ChangeTitle
struct UUI_GenericItemInventory_C_ChangeTitle_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UUI_GenericItemInventory_C_BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
struct UUI_GenericItemInventory_C_BndEvt__MinimizePartialButton_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UUI_GenericItemInventory_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.UpdateImageFromBodySlot
struct UUI_GenericItemInventory_C_UpdateImageFromBodySlot_Params
{
	EBodySlot*                                         bodySlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SetMinimizationState
struct UUI_GenericItemInventory_C_SetMinimizationState_Params
{
	bool*                                              minimizePartial;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              minimizeFull;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.BlinkItemContainer
struct UUI_GenericItemInventory_C_BlinkItemContainer_Params
{
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.SaveLayout
struct UUI_GenericItemInventory_C_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.DeferredLoadLayout
struct UUI_GenericItemInventory_C_DeferredLoadLayout_Params
{
	bool                                               minimizedPartial;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               minimizedFully;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericItemInventory.UI_GenericItemInventory_C.ExecuteUbergraph_UI_GenericItemInventory
struct UUI_GenericItemInventory_C_ExecuteUbergraph_UI_GenericItemInventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
