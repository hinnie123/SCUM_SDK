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

// Function UI_Item2.UI_Item2_C.OnPreviewKeyDown
struct UUI_Item2_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Item2.UI_Item2_C.UpdateVisualszzz
struct UUI_Item2_C_UpdateVisualszzz_Params
{
};

// Function UI_Item2.UI_Item2_C.Construct
struct UUI_Item2_C_Construct_Params
{
};

// Function UI_Item2.UI_Item2_C.UpdateVisuals
struct UUI_Item2_C_UpdateVisuals_Params
{
};

// Function UI_Item2.UI_Item2_C.Init
struct UUI_Item2_C_Init_Params
{
	TScriptInterface<class UInventoryNode>*            Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TScriptInterface<class UInventoryContainer>*       container;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_Item2.UI_Item2_C.OnMouseEnter
struct UUI_Item2_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Item2.UI_Item2_C.OnMouseLeave
struct UUI_Item2_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Item2.UI_Item2_C.Tick
struct UUI_Item2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Item2.UI_Item2_C.ExecuteUbergraph_UI_Item2
struct UUI_Item2_C_ExecuteUbergraph_UI_Item2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
