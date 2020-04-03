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

// Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
struct UResizableWindow_C_InitializeHUDMonitor_Params
{
	struct FString                                     displayLabelName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               footerV2Activity;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               enableResizability;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UHUD_C*                                      parentHUDRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
struct UResizableWindow_C_SaveHUDLayout_Params
{
};

// Function ResizableWindow.ResizableWindow_C.GetParentHUD
struct UResizableWindow_C_GetParentHUD_Params
{
	class UHUD_C*                                      parentHUD;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SetParentHUD
struct UResizableWindow_C_SetParentHUD_Params
{
	class UHUD_C*                                      parentHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.GetSize
struct UResizableWindow_C_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.GetPosition
struct UResizableWindow_C_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.adjustPosition
struct UResizableWindow_C_adjustPosition_Params
{
	struct FVector2D                                   positionToAdjust;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGeometry                                   localGeometry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Output;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
struct UResizableWindow_C_MaximizeMinimizableWidgets_Params
{
};

// Function ResizableWindow.ResizableWindow_C.HasAnyChildren
struct UResizableWindow_C_HasAnyChildren_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
struct UResizableWindow_C_OnHeaderDoubleClick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
struct UResizableWindow_C_SetUpResizableWindowWithChildRef_Params
{
	class UWindowsContent_C*                           contentWidgetRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
struct UResizableWindow_C_AdjustSizeToContent_Params
{
};

// Function ResizableWindow.ResizableWindow_C.SetSize
struct UResizableWindow_C_SetSize_Params
{
	struct FVector2D                                   newSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.GetContentSize
struct UResizableWindow_C_GetContentSize_Params
{
	struct FVector2D                                   contentSize;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
struct UResizableWindow_C_SetResizeEnableLocked_Params
{
	bool                                               enableResizability;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
struct UResizableWindow_C_ActivateAlarmColor_Params
{
	bool                                               shouldActivateAlarmColor;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ShowBorder
struct UResizableWindow_C_ShowBorder_Params
{
};

// Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
struct UResizableWindow_C_isResizableWindowSkills_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
struct UResizableWindow_C_GetWindowsContentWidget_Params
{
	class UWindowsContent_C*                           windowsContentWidget;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
struct UResizableWindow_C_SetWindowsContentWidget_Params
{
	class UWindowsContent_C*                           windowsContentWidget;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
struct UResizableWindow_C_SetFooterV2Activity_Params
{
	bool                                               shouldBeActive;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ResetFlags
struct UResizableWindow_C_ResetFlags_Params
{
};

// Function ResizableWindow.ResizableWindow_C.Maximize
struct UResizableWindow_C_Maximize_Params
{
};

// Function ResizableWindow.ResizableWindow_C.Minimize
struct UResizableWindow_C_Minimize_Params
{
};

// Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
struct UResizableWindow_C_GetContentAreaSlotDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
struct UResizableWindow_C_SaveCurrentContentAreaSlotSize_Params
{
};

// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
struct UResizableWindow_C_SetUpResizableWindow_Params
{
	class UClass*                                      contentWidgetClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResizableWindow.ResizableWindow_C.Init
struct UResizableWindow_C_Init_Params
{
};

// Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
struct UResizableWindow_C_SetContentWidgetClass_Params
{
	class UClass*                                      WindowsContentClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
struct UResizableWindow_C_AttachContentWidgetRef_Params
{
	class UWindowsContent_C*                           contentWidgetRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.AttachContentWidget
struct UResizableWindow_C_AttachContentWidget_Params
{
	class UClass*                                      contentWidgetClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
struct UResizableWindow_C_CalculateMouseDelta_Params
{
	struct FPointerEvent                               LocalMouseEvent;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector2D                                   LastMousePosition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.IsOffscreen
struct UResizableWindow_C_IsOffscreen_Params
{
	struct FPointerEvent                               Input;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
struct UResizableWindow_C_OnMouseButtonDownOnIRMinimize_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
struct UResizableWindow_C_SetResizeColorHover_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
struct UResizableWindow_C_ToggleDragEnabled_Params
{
	bool                                               DragEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
struct UResizableWindow_C_ToggleResizeEnabled_Params
{
	bool                                               ResizeEnabled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.DetermineNewSize
struct UResizableWindow_C_DetermineNewSize_Params
{
	struct FVector2D                                   Original;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   New;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
struct UResizableWindow_C_MouseButtonUpEvent_Params
{
};

// Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
struct UResizableWindow_C_ResetVariablesToDefault_Params
{
};

// Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
struct UResizableWindow_C_OnResizeAreaMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
struct UResizableWindow_C_OnHeaderMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.OnMouseMove
struct UResizableWindow_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
struct UResizableWindow_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ResizableWindow.ResizableWindow_C.Tick
struct UResizableWindow_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature
struct UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature_Params
{
};

// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature
struct UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature_Params
{
};

// Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
struct UResizableWindow_C_Event_RDA_Monitor_Size_Changed_Params
{
};

// Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
struct UResizableWindow_C_AlarmOnWindowContent_Params
{
};

// Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
struct UResizableWindow_C_AlarmOffWindowContent_Params
{
};

// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
struct UResizableWindow_C_OnHeaderDoubleClickEvent_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResizableWindow.ResizableWindow_C.OnMaximized
struct UResizableWindow_C_OnMaximized_Params
{
};

// Function ResizableWindow.ResizableWindow_C.SaveLayout
struct UResizableWindow_C_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>     Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.LoadLayout
struct UResizableWindow_C_LoadLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>     Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.ResetLayout
struct UResizableWindow_C_ResetLayout_Params
{
};

// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
struct UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature_Params
{
};

// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
struct UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature_Params
{
};

// Function ResizableWindow.ResizableWindow_C.OnMouseLeave
struct UResizableWindow_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ResizableWindow.ResizableWindow_C.Construct
struct UResizableWindow_C_Construct_Params
{
};

// Function ResizableWindow.ResizableWindow_C.SetTitle
struct UResizableWindow_C_SetTitle_Params
{
	struct FText*                                      titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
struct UResizableWindow_C_ExecuteUbergraph_ResizableWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
struct UResizableWindow_C_OnHeaderDoubleClickDispatcher__DelegateSignature_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
struct UResizableWindow_C_ContentMaximizedEventDispatcher__DelegateSignature_Params
{
};

// Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
struct UResizableWindow_C_ContentSizeChangedEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
