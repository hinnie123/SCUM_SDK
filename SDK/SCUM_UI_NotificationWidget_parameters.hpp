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

// Function UI_NotificationWidget.UI_NotificationWidget_C.CheckLifespan
struct UUI_NotificationWidget_C_CheckLifespan_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.SetLifeSpan
struct UUI_NotificationWidget_C_SetLifeSpan_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.SetText
struct UUI_NotificationWidget_C_SetText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.UpdateScale
struct UUI_NotificationWidget_C_UpdateScale_Params
{
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.Show
struct UUI_NotificationWidget_C_Show_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.Dismiss
struct UUI_NotificationWidget_C_Dismiss_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.Construct
struct UUI_NotificationWidget_C_Construct_Params
{
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.Tick
struct UUI_NotificationWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_NotificationWidget.UI_NotificationWidget_C.ExecuteUbergraph_UI_NotificationWidget
struct UUI_NotificationWidget_C_ExecuteUbergraph_UI_NotificationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
