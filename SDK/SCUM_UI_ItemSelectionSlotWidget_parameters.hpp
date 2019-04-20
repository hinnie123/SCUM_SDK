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

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetAttachmentItems
struct UUI_ItemSelectionSlotWidget_C_GetAttachmentItems_Params
{
	TArray<class UClass*>                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectedIndex
struct UUI_ItemSelectionSlotWidget_C_GetSelectedIndex_Params
{
	int                                                SelectedIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSelectionCount
struct UUI_ItemSelectionSlotWidget_C_GetSelectionCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.HasNoSelection
struct UUI_ItemSelectionSlotWidget_C_HasNoSelection_Params
{
	bool                                               NoSelection;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ClearSelections
struct UUI_ItemSelectionSlotWidget_C_ClearSelections_Params
{
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetSupportItems
struct UUI_ItemSelectionSlotWidget_C_GetSupportItems_Params
{
	TArray<class UClass*>                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.GetMainItem
struct UUI_ItemSelectionSlotWidget_C_GetMainItem_Params
{
	class UClass*                                      MainItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Get_Box_Visibility
struct UUI_ItemSelectionSlotWidget_C_Get_Box_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Select
struct UUI_ItemSelectionSlotWidget_C_Select_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.AddSelection
struct UUI_ItemSelectionSlotWidget_C_AddSelection_Params
{
	class UItemSelection*                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.Construct
struct UUI_ItemSelectionSlotWidget_C_Construct_Params
{
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnSynchronizeProperties
struct UUI_ItemSelectionSlotWidget_C_OnSynchronizeProperties_Params
{
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.ExecuteUbergraph_UI_ItemSelectionSlotWidget
struct UUI_ItemSelectionSlotWidget_C_ExecuteUbergraph_UI_ItemSelectionSlotWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemSelectionSlotWidget.UI_ItemSelectionSlotWidget_C.OnClicked__DelegateSignature
struct UUI_ItemSelectionSlotWidget_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
