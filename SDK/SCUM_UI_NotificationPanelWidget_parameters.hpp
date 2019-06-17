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

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelBox_Visibility
struct UUI_NotificationPanelWidget_C_Get_EventCancelBox_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventCancelTime
struct UUI_NotificationPanelWidget_C_Get_EventCancelTime_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_BrushColor
struct UUI_NotificationPanelWidget_C_Get_EventTime_BrushColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_BrushColor
struct UUI_NotificationPanelWidget_C_Get_NextEventBox_BrushColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTimeText
struct UUI_NotificationPanelWidget_C_Get_EventTimeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_EventTime_Visibility
struct UUI_NotificationPanelWidget_C_Get_EventTime_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_RankLabel_Text
struct UUI_NotificationPanelWidget_C_Get_RankLabel_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventLocation_Text
struct UUI_NotificationPanelWidget_C_Get_NextEventLocation_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_FamePointsCounter_Text
struct UUI_NotificationPanelWidget_C_Get_FamePointsCounter_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventCountdown_Text
struct UUI_NotificationPanelWidget_C_Get_NextEventCountdown_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.Get_NextEventBox_Visibility
struct UUI_NotificationPanelWidget_C_Get_NextEventBox_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ShowNotification
struct UUI_NotificationPanelWidget_C_ShowNotification_Params
{
	class UNotificationWidget**                        notification;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ClearAllNotifications
struct UUI_NotificationPanelWidget_C_ClearAllNotifications_Params
{
};

// Function UI_NotificationPanelWidget.UI_NotificationPanelWidget_C.ExecuteUbergraph_UI_NotificationPanelWidget
struct UUI_NotificationPanelWidget_C_ExecuteUbergraph_UI_NotificationPanelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
