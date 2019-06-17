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

// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.GetContentBox
struct UUI_HoverPanelWidget_C_GetContentBox_Params
{
	class UVerticalBox*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ClearPanel
struct UUI_HoverPanelWidget_C_ClearPanel_Params
{
};

// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.SetScreenPosition
struct UUI_HoverPanelWidget_C_SetScreenPosition_Params
{
	struct FVector2D*                                  Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_HoverPanelWidget.UI_HoverPanelWidget_C.ExecuteUbergraph_UI_HoverPanelWidget
struct UUI_HoverPanelWidget_C_ExecuteUbergraph_UI_HoverPanelWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
