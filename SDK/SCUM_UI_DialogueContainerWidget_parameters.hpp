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

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Construct
struct UUI_DialogueContainerWidget_C_Construct_Params
{
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.Tick
struct UUI_DialogueContainerWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.OnAnimationFinished
struct UUI_DialogueContainerWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.HideAvatarAnimation
struct UUI_DialogueContainerWidget_C_HideAvatarAnimation_Params
{
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ShowAvatarAnimation
struct UUI_DialogueContainerWidget_C_ShowAvatarAnimation_Params
{
};

// Function UI_DialogueContainerWidget.UI_DialogueContainerWidget_C.ExecuteUbergraph_UI_DialogueContainerWidget
struct UUI_DialogueContainerWidget_C_ExecuteUbergraph_UI_DialogueContainerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
