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

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.OnMouseButtonDown
struct UUI_CraftingRecipe_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromClass
struct UUI_CraftingRecipe_C_SetTooltipFromClass_Params
{
	class UClass**                                     ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.Construct
struct UUI_CraftingRecipe_C_Construct_Params
{
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsGrayedOut
struct UUI_CraftingRecipe_C_SetIsGrayedOut_Params
{
	bool*                                              isGrayedOut;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetAvailabilityState
struct UUI_CraftingRecipe_C_SetAvailabilityState_Params
{
	ERecipeAvailabilityState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetIsSelected
struct UUI_CraftingRecipe_C_SetIsSelected_Params
{
	bool*                                              isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.SetTooltipFromCaptionAndDescription
struct UUI_CraftingRecipe_C_SetTooltipFromCaptionAndDescription_Params
{
	struct FText*                                      Caption;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Description;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CraftingRecipe.UI_CraftingRecipe_C.ExecuteUbergraph_UI_CraftingRecipe
struct UUI_CraftingRecipe_C_ExecuteUbergraph_UI_CraftingRecipe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
