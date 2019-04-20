#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.GetSelectedTabMode
struct UUI_TabModeSwitcher_C_GetSelectedTabMode_Params
{
	ETabMode                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArcFromMouseDelta
struct UUI_TabModeSwitcher_C_SelectArcFromMouseDelta_Params
{
	struct FVector2D                                   Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseButtonDown
struct UUI_TabModeSwitcher_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.SelectArc
struct UUI_TabModeSwitcher_C_SelectArc_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseMove
struct UUI_TabModeSwitcher_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.OnMouseLeave
struct UUI_TabModeSwitcher_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.Tick
struct UUI_TabModeSwitcher_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TABModeSwitcher.UI_TabModeSwitcher_C.ExecuteUbergraph_UI_TabModeSwitcher
struct UUI_TabModeSwitcher_C_ExecuteUbergraph_UI_TabModeSwitcher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
