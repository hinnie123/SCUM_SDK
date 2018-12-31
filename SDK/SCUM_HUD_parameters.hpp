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

// Function HUD.HUD_C.GetChatWidget
struct UHUD_C_GetChatWidget_Params
{
	class UChatWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetVisibility_1
struct UHUD_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.IsChatOpen
struct UHUD_C_IsChatOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.GetCraftingPanel
struct UHUD_C_GetCraftingPanel_Params
{
	class UCraftingPanelWidget*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetMainCanvasVisibility
struct UHUD_C_GetMainCanvasVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.GetTempDropZoneTimeText
struct UHUD_C_GetTempDropZoneTimeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD.HUD_C.GetWatermarkText
struct UHUD_C_GetWatermarkText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD.HUD_C.GetDebugInfoText
struct UHUD_C_GetDebugInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD.HUD_C.GetTabModeSwitcherWidget
struct UHUD_C_GetTabModeSwitcherWidget_Params
{
	class UTabModeSwitcherWidget*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetBCURightPanel
struct UHUD_C_GetBCURightPanel_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetBCULeftPanel
struct UHUD_C_GetBCULeftPanel_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetHandPanel
struct UHUD_C_GetHandPanel_Params
{
	class UHandPanel*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetInventoryPanel
struct UHUD_C_GetInventoryPanel_Params
{
	class UInventoryPanelSecondIteration*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.GetVicinityPanel
struct UHUD_C_GetVicinityPanel_Params
{
	class UVicinityPanelSecondIteration*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.CompleteInitialization
struct UHUD_C_CompleteInitialization_Params
{
};

// Function HUD.HUD_C.StartInitialization
struct UHUD_C_StartInitialization_Params
{
};

// Function HUD.HUD_C.CompleteMonitorsInitialization
struct UHUD_C_CompleteMonitorsInitialization_Params
{
};

// Function HUD.HUD_C.ShouldCompleteInitialization
struct UHUD_C_ShouldCompleteInitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.IsEverythingReadyForInitialization
struct UHUD_C_IsEverythingReadyForInitialization_Params
{
	bool                                               isEverythingReady;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
struct UHUD_C_IsOwningPrisonerWithComponentsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.GetOwningPrisoner
struct UHUD_C_GetOwningPrisoner_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.IsOwningPlayerPawnValid
struct UHUD_C_IsOwningPlayerPawnValid_Params
{
	bool                                               isPlayerPawnValid;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.IsOwningPlayerControllerValid
struct UHUD_C_IsOwningPlayerControllerValid_Params
{
	bool                                               isPlayerControllerValid;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.CheckIfReadyForInitialization
struct UHUD_C_CheckIfReadyForInitialization_Params
{
};

// Function HUD.HUD_C.AttachHUDMonitors
struct UHUD_C_AttachHUDMonitors_Params
{
};

// Function HUD.HUD_C.StartMonitorsInitialization
struct UHUD_C_StartMonitorsInitialization_Params
{
};

// Function HUD.HUD_C.PrisonerValidation
struct UHUD_C_PrisonerValidation_Params
{
};

// Function HUD.HUD_C.SetUpVicinityWidget
struct UHUD_C_SetUpVicinityWidget_Params
{
};

// Function HUD.HUD_C.SetVicinityWidgetFromCode
struct UHUD_C_SetVicinityWidgetFromCode_Params
{
};

// Function HUD.HUD_C.ShouldSerializeWidgetLayout
struct UHUD_C_ShouldSerializeWidgetLayout_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD.HUD_C.GetTopLevelPanelWidget
struct UHUD_C_GetTopLevelPanelWidget_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.ShowWarning
struct UHUD_C_ShowWarning_Params
{
	EWarningType                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.RefreshMonitorSizes
struct UHUD_C_RefreshMonitorSizes_Params
{
};

// Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
struct UHUD_C_SetPrisonerToMonitorOnChildren_Params
{
};

// Function HUD.HUD_C.ToggleAllMonitorsVisibility
struct UHUD_C_ToggleAllMonitorsVisibility_Params
{
};

// Function HUD.HUD_C.HideLifeIndicators
struct UHUD_C_HideLifeIndicators_Params
{
};

// Function HUD.HUD_C.ShowLifeIndicators
struct UHUD_C_ShowLifeIndicators_Params
{
};

// Function HUD.HUD_C.HideMonitors
struct UHUD_C_HideMonitors_Params
{
};

// Function HUD.HUD_C.ShowMonitors
struct UHUD_C_ShowMonitors_Params
{
};

// Function HUD.HUD_C.SetupHUDMonitors
struct UHUD_C_SetupHUDMonitors_Params
{
};

// Function HUD.HUD_C.SetPrisonerToMonitor
struct UHUD_C_SetPrisonerToMonitor_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetDefaultPrisonerToMonitor
struct UHUD_C_SetDefaultPrisonerToMonitor_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.GetDefaultPrisoner
struct UHUD_C_GetDefaultPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OnKeyUp
struct UHUD_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
struct UHUD_C_UpdateCircularProgressBarsPercentages_Params
{
};

// Function HUD.HUD_C.GetPrisonerLifeComponent
struct UHUD_C_GetPrisonerLifeComponent_Params
{
	class UPrisonerLifeComponent*                      LifeComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD.HUD_C.OnPerformanceMonitorMaximized
struct UHUD_C_OnPerformanceMonitorMaximized_Params
{
};

// Function HUD.HUD_C.OnRDAMonitorMaximized
struct UHUD_C_OnRDAMonitorMaximized_Params
{
};

// Function HUD.HUD_C.OnBCUBodyMonitorMaximized
struct UHUD_C_OnBCUBodyMonitorMaximized_Params
{
};

// Function HUD.HUD_C.AddMessageToScreen
struct UHUD_C_AddMessageToScreen_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              beep;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HUD.HUD_C.AddTeammateName
struct UHUD_C_AddTeammateName_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD.HUD_C.RemoveTeammateName
struct UHUD_C_RemoveTeammateName_Params
{
	struct FString*                                    Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD.HUD_C.AddWarning
struct UHUD_C_AddWarning_Params
{
	EWarningType*                                      warningType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.AddObjective
struct UHUD_C_AddObjective_Params
{
	class ABP_MissionObjective_C*                      Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlaySound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowNotification;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.AddMessageWithColor
struct UHUD_C_AddMessageWithColor_Params
{
	TEnumAsByte<EMessageType>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function HUD.HUD_C.ToggleMonitorsVisibility
struct UHUD_C_ToggleMonitorsVisibility_Params
{
};

// Function HUD.HUD_C.ClearTeammateNames
struct UHUD_C_ClearTeammateNames_Params
{
};

// Function HUD.HUD_C.ObjectiveChanged
struct UHUD_C_ObjectiveChanged_Params
{
	class ABP_MissionObjective_C*                      sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.UpdateAttributesHistory
struct UHUD_C_UpdateAttributesHistory_Params
{
};

// Function HUD.HUD_C.AddChatLine
struct UHUD_C_AddChatLine_Params
{
	struct FString*                                    string;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EChatType*                                         chatType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SetPrisoner
struct UHUD_C_SetPrisoner_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OnPrisonerSet
struct UHUD_C_OnPrisonerSet_Params
{
};

// Function HUD.HUD_C.Construct
struct UHUD_C_Construct_Params
{
};

// Function HUD.HUD_C.Shake
struct UHUD_C_Shake_Params
{
};

// Function HUD.HUD_C.SetMainCanvasVisibility
struct UHUD_C_SetMainCanvasVisibility_Params
{
	bool*                                              visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.SwitchTabMode
struct UHUD_C_SwitchTabMode_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ShowNotification
struct UHUD_C_ShowNotification_Params
{
	struct FString*                                    Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ClearNotifications
struct UHUD_C_ClearNotifications_Params
{
};

// Function HUD.HUD_C.SetTabEnabled
struct UHUD_C_SetTabEnabled_Params
{
	ETabMode*                                          Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ShowKillFeedNotification
struct UHUD_C_ShowKillFeedNotification_Params
{
	struct FText*                                      prefix;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      characterName;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      suffix;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.OpenChat
struct UHUD_C_OpenChat_Params
{
};

// Function HUD.HUD_C.CloseChat
struct UHUD_C_CloseChat_Params
{
};

// Function HUD.HUD_C.Tick
struct UHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.AddMessage
struct UHUD_C_AddMessage_Params
{
	TEnumAsByte<EMessageType>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD.HUD_C.ExecuteUbergraph_HUD
struct UHUD_C_ExecuteUbergraph_HUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
