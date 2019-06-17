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

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.UpdateSelectionAndOptionalState
struct UUI_CraftingAvailableItem_C_UpdateSelectionAndOptionalState_Params
{
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.GetbIsEnabled_1
struct UUI_CraftingAvailableItem_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Init
struct UUI_CraftingAvailableItem_C_Init_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsSelected
struct UUI_CraftingAvailableItem_C_SetIsSelected_Params
{
	bool*                                              isSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetIsOptional
struct UUI_CraftingAvailableItem_C_SetIsOptional_Params
{
	bool*                                              isOptional;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.SetOptionalState
struct UUI_CraftingAvailableItem_C_SetOptionalState_Params
{
	EOptionalState*                                    State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.Construct
struct UUI_CraftingAvailableItem_C_Construct_Params
{
};

// Function UI_CraftingAvailableItem.UI_CraftingAvailableItem_C.ExecuteUbergraph_UI_CraftingAvailableItem
struct UUI_CraftingAvailableItem_C_ExecuteUbergraph_UI_CraftingAvailableItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
