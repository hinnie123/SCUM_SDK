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

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetColorAndOpacity_1
struct UUI_CraftingPanel_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetbIsEnabled_1
struct UUI_CraftingPanel_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.GetIsCraftButtonEnabled
struct UUI_CraftingPanel_C_GetIsCraftButtonEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.UpdateParameter
struct UUI_CraftingPanel_C_UpdateParameter_Params
{
	class URetainerBox*                                RetainerBox;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Box;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
struct UUI_CraftingPanel_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature
struct UUI_CraftingPanel_C_BndEvt__InventoryContainer_K2Node_ComponentBoundEvent_18_OnExpandChanged__DelegateSignature_Params
{
	class UUI_ExpandableContainer_C*                   container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsMinimized;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature
struct UUI_CraftingPanel_C_BndEvt__VicinityContainer_K2Node_ComponentBoundEvent_19_OnExpandChanged__DelegateSignature_Params
{
	class UUI_ExpandableContainer_C*                   container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsMinimized;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UUI_CraftingPanel_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.Tick
struct UUI_CraftingPanel_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.ShowPlaceableCraftingConfirmationForCraftingIndex
struct UUI_CraftingPanel_C_ShowPlaceableCraftingConfirmationForCraftingIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.OnCraftingConfirmationDismissed
struct UUI_CraftingPanel_C_OnCraftingConfirmationDismissed_Params
{
};

// Function UI_CraftingPanel.UI_CraftingPanel_C.ExecuteUbergraph_UI_CraftingPanel
struct UUI_CraftingPanel_C_ExecuteUbergraph_UI_CraftingPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
