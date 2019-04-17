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

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdateSlotSelection
struct UUI_GameEventLoadoutMenuWidget_C_UpdateSlotSelection_Params
{
	class UUI_ItemSelectionSlotWidget_C*               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UItemSelection*>                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.HasAnythingToSelect
struct UUI_GameEventLoadoutMenuWidget_C_HasAnythingToSelect_Params
{
	bool                                               HasAnythingToSelect;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.SomethingSelected
struct UUI_GameEventLoadoutMenuWidget_C_SomethingSelected_Params
{
	bool                                               everythingSelected;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.UpdatePossibleItems
struct UUI_GameEventLoadoutMenuWidget_C_UpdatePossibleItems_Params
{
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ApplyLoadout
struct UUI_GameEventLoadoutMenuWidget_C_ApplyLoadout_Params
{
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUI_GameEventLoadoutMenuWidget_C_BndEvt__UI_MenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.Construct
struct UUI_GameEventLoadoutMenuWidget_C_Construct_Params
{
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.PreConstruct
struct UUI_GameEventLoadoutMenuWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLoadoutMenuWidget.UI_GameEventLoadoutMenuWidget_C.ExecuteUbergraph_UI_GameEventLoadoutMenuWidget
struct UUI_GameEventLoadoutMenuWidget_C_ExecuteUbergraph_UI_GameEventLoadoutMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
