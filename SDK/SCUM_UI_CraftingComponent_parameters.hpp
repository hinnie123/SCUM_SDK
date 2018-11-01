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

// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseButtonDown
struct UUI_CraftingComponent_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsTool
struct UUI_CraftingComponent_C_SetIsTool_Params
{
	bool*                                              IsTool;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetRequiredCount
struct UUI_CraftingComponent_C_SetRequiredCount_Params
{
	int*                                               count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetOrderNumber
struct UUI_CraftingComponent_C_SetOrderNumber_Params
{
	int*                                               orderNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsOptional
struct UUI_CraftingComponent_C_SetIsOptional_Params
{
	bool*                                              isOptional;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.CreateTooltip
struct UUI_CraftingComponent_C_CreateTooltip_Params
{
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetIsAvailable
struct UUI_CraftingComponent_C_SetIsAvailable_Params
{
	bool*                                              IsAvailable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.OnMouseEnter
struct UUI_CraftingComponent_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.SetSatisfiedAndRequiredCount
struct UUI_CraftingComponent_C_SetSatisfiedAndRequiredCount_Params
{
	int*                                               Satisfied;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Required;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingComponent.UI_CraftingComponent_C.ExecuteUbergraph_UI_CraftingComponent
struct UUI_CraftingComponent_C_ExecuteUbergraph_UI_CraftingComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
