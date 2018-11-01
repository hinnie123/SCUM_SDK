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

// Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
struct UMinimizableWidget_C_OnMouseDoubleClick_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
struct UMinimizableWidget_C_SetMinimizableWidgetSize_Params
{
	struct FVector2D                                   newMinWidgetSize;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
struct UMinimizableWidget_C_GetMinimizableWidgetSize_Params
{
	struct FVector2D                                   widgetSize;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
struct UMinimizableWidget_C_SetAlarmColor_Params
{
	bool                                               shouldSetAlarmColorOn;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
struct UMinimizableWidget_C_SetInitialIconsVisibility_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Minimize
struct UMinimizableWidget_C_Minimize_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Maximize
struct UMinimizableWidget_C_Maximize_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
struct UMinimizableWidget_C_OnMaximizeImageMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
struct UMinimizableWidget_C_OnMinimizeImageMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
struct UMinimizableWidget_C_AlarmSwitchOff_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
struct UMinimizableWidget_C_AlarmSwitchOn_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
struct UMinimizableWidget_C_Event_Widget_Size_Changed_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Tick
struct UMinimizableWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
struct UMinimizableWidget_C_Event_Widget_Maximized_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Construct
struct UMinimizableWidget_C_Construct_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
struct UMinimizableWidget_C_Event_Widget_Minimized_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.OnMinimize
struct UMinimizableWidget_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
struct UMinimizableWidget_C_WindowContentSizeChanged_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
struct UMinimizableWidget_C_AlarmOnWindowContent_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
struct UMinimizableWidget_C_AlarmOffWindowContent_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
struct UMinimizableWidget_C_ExecuteUbergraph_MinimizableWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
struct UMinimizableWidget_C_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
struct UMinimizableWidget_C_NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
struct UMinimizableWidget_C_NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature_Params
{
};

// Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
struct UMinimizableWidget_C_WidgetSizeChangedEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
