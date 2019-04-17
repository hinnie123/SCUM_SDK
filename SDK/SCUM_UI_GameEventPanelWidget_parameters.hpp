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

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetDropdownVisibility
struct UUI_GameEventPanelWidget_C_GetDropdownVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.RestoreSelected
struct UUI_GameEventPanelWidget_C_RestoreSelected_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.UpdateSelection
struct UUI_GameEventPanelWidget_C_UpdateSelection_Params
{
	class UComboBoxString*                             Dropdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AGameEventBase*>                      GameEvents;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetSelectedEvent
struct UUI_GameEventPanelWidget_C_GetSelectedEvent_Params
{
	class AGameEventBase*                              gameEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.GetGameEventOptionString
struct UUI_GameEventPanelWidget_C_GetGameEventOptionString_Params
{
	class AGameEventBase*                              gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OptionString;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.SelectEvent
struct UUI_GameEventPanelWidget_C_SelectEvent_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddCurrentEvent
struct UUI_GameEventPanelWidget_C_AddCurrentEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.EmptyLists
struct UUI_GameEventPanelWidget_C_EmptyLists_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.AddAnnouncedEvent
struct UUI_GameEventPanelWidget_C_AddAnnouncedEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnUpdate
struct UUI_GameEventPanelWidget_C_OnUpdate_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.Construct
struct UUI_GameEventPanelWidget_C_Construct_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnOpened
struct UUI_GameEventPanelWidget_C_OnOpened_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnClosed
struct UUI_GameEventPanelWidget_C_OnClosed_Params
{
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.OnEventComboBoxSelectionChanged
struct UUI_GameEventPanelWidget_C_OnEventComboBoxSelectionChanged_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventPanelWidget.UI_GameEventPanelWidget_C.ExecuteUbergraph_UI_GameEventPanelWidget
struct UUI_GameEventPanelWidget_C_ExecuteUbergraph_UI_GameEventPanelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
