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

// Function ItemWidget.ItemWidget_C.GetItemDurability
struct UItemWidget_C_GetItemDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.GetContainerItemFillPercentage
struct UItemWidget_C_GetContainerItemFillPercentage_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.GetWeaponZeroText
struct UItemWidget_C_GetWeaponZeroText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.GetMassText
struct UItemWidget_C_GetMassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.InitFromItem
struct UItemWidget_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.GetStacksCount
struct UItemWidget_C_GetStacksCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.GetItemHealthText
struct UItemWidget_C_GetItemHealthText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.OnMouseButtonUp
struct UItemWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.GetItemTotalUsesText
struct UItemWidget_C_GetItemTotalUsesText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.GetItemUsesText
struct UItemWidget_C_GetItemUsesText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.OnKeyChar
struct UItemWidget_C_OnKeyChar_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FCharacterEvent*                            InCharacterEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.OnMouseButtonDown
struct UItemWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemWidget.ItemWidget_C.OnDragDetected
struct UItemWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.OnDragCancelled
struct UItemWidget_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.Construct
struct UItemWidget_C_Construct_Params
{
};

// Function ItemWidget.ItemWidget_C.UpdateHighlightStatus
struct UItemWidget_C_UpdateHighlightStatus_Params
{
};

// Function ItemWidget.ItemWidget_C.SetStacksCount
struct UItemWidget_C_SetStacksCount_Params
{
	int*                                               count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.BlinkItemContainer
struct UItemWidget_C_BlinkItemContainer_Params
{
};

// Function ItemWidget.ItemWidget_C.Tick
struct UItemWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.MarkAsWeaponWidget
struct UItemWidget_C_MarkAsWeaponWidget_Params
{
};

// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
struct UItemWidget_C_ExecuteUbergraph_ItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.OnDragCancelledDispatcher__DelegateSignature
struct UItemWidget_C_OnDragCancelledDispatcher__DelegateSignature_Params
{
	class UItemWidget_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemWidget.ItemWidget_C.OnDragStartDispatcher__DelegateSignature
struct UItemWidget_C_OnDragStartDispatcher__DelegateSignature_Params
{
	class UItemWidget_C*                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
