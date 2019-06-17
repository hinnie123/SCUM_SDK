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

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSize
struct UUI_QuickAccessItemWidget_C_GetItemSize_Params
{
	struct FVector2D                                   itemSize;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetImageBrush
struct UUI_QuickAccessItemWidget_C_GetImageBrush_Params
{
	struct FSlateBrush                                 imageBrush;                                               // (Parm, OutParm)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.On__imageWidget_MouseButtonDown_1
struct UUI_QuickAccessItemWidget_C_On__imageWidget_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragDetected
struct UUI_QuickAccessItemWidget_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetItemSlotNumber
struct UUI_QuickAccessItemWidget_C_SetItemSlotNumber_Params
{
	int                                                itemSlotNumber;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateNormalColor
struct UUI_QuickAccessItemWidget_C_ActivateNormalColor_Params
{
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ActivateAlarmColor
struct UUI_QuickAccessItemWidget_C_ActivateAlarmColor_Params
{
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.GetItemSlotNumber
struct UUI_QuickAccessItemWidget_C_GetItemSlotNumber_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.SetTextColor
struct UUI_QuickAccessItemWidget_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.Construct
struct UUI_QuickAccessItemWidget_C_Construct_Params
{
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.OnDragLeave
struct UUI_QuickAccessItemWidget_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_QuickAccessItemWidget.UI_QuickAccessItemWidget_C.ExecuteUbergraph_UI_QuickAccessItemWidget
struct UUI_QuickAccessItemWidget_C_ExecuteUbergraph_UI_QuickAccessItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
