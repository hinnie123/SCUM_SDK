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

// Function UI_InventoryItem.UI_InventoryItem_C.Get_HorizontalBox_0_Visibility_1
struct UUI_InventoryItem_C_Get_HorizontalBox_0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.Get_WarmthText_Text_1
struct UUI_InventoryItem_C_Get_WarmthText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.Get_ItemCountText_Text_1
struct UUI_InventoryItem_C_Get_ItemCountText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.HideAdditionalInfo
struct UUI_InventoryItem_C_HideAdditionalInfo_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.OnMouseButtonDoubleClick
struct UUI_InventoryItem_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.Maximize
struct UUI_InventoryItem_C_Maximize_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.Minimize
struct UUI_InventoryItem_C_Minimize_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.GetPercent_1
struct UUI_InventoryItem_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.GetText_2
struct UUI_InventoryItem_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.ShowWeightInsteadOfSlots
struct UUI_InventoryItem_C_ShowWeightInsteadOfSlots_Params
{
	bool                                               showWeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.GetUsedMassText
struct UUI_InventoryItem_C_GetUsedMassText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_InventoryItem.UI_InventoryItem_C.InitFromItem
struct UUI_InventoryItem_C_InitFromItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.isTextShown
struct UUI_InventoryItem_C_isTextShown_Params
{
	bool                                               isTextShown;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.ShowText
struct UUI_InventoryItem_C_ShowText_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.HideText
struct UUI_InventoryItem_C_HideText_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.Construct
struct UUI_InventoryItem_C_Construct_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_InventoryItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
struct UUI_InventoryItem_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_InventoryItem.UI_InventoryItem_C.ExecuteUbergraph_UI_InventoryItem
struct UUI_InventoryItem_C_ExecuteUbergraph_UI_InventoryItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryItem.UI_InventoryItem_C.ExpandedStateChanged__DelegateSignature
struct UUI_InventoryItem_C_ExpandedStateChanged__DelegateSignature_Params
{
	class UUI_InventoryItem_C*                         inventoryItemWidget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsExpanded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
