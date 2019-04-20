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

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnDrop
struct UUI_VicinitySecondIteration_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateMinimizeIcon
struct UUI_VicinitySecondIteration_C_UpdateMinimizeIcon_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Construct
struct UUI_VicinitySecondIteration_C_Construct_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Tick
struct UUI_VicinitySecondIteration_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UUI_VicinitySecondIteration_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Minimize
struct UUI_VicinitySecondIteration_C_Minimize_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.Maximize
struct UUI_VicinitySecondIteration_C_Maximize_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.AutoAddItem
struct UUI_VicinitySecondIteration_C_AutoAddItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.RemoveItem
struct UUI_VicinitySecondIteration_C_RemoveItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ItemPickedUpStateChanged
struct UUI_VicinitySecondIteration_C_ItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.UpdateItemWidgetHighlightings
struct UUI_VicinitySecondIteration_C_UpdateItemWidgetHighlightings_Params
{
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.OnItemDestroyed
struct UUI_VicinitySecondIteration_C_OnItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VicinitySecondIteration.UI_VicinitySecondIteration_C.ExecuteUbergraph_UI_VicinitySecondIteration
struct UUI_VicinitySecondIteration_C_ExecuteUbergraph_UI_VicinitySecondIteration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
