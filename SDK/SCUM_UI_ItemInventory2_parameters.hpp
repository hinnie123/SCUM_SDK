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

// Function UI_ItemInventory2.UI_ItemInventory2_C.InitBlueprint
struct UUI_ItemInventory2_C_InitBlueprint_Params
{
	TScriptInterface<class UInventoryNode>*            Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_ItemInventory2.UI_ItemInventory2_C.Blink
struct UUI_ItemInventory2_C_Blink_Params
{
};

// Function UI_ItemInventory2.UI_ItemInventory2_C.Tick
struct UUI_ItemInventory2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ItemInventory2.UI_ItemInventory2_C.ExecuteUbergraph_UI_ItemInventory2
struct UUI_ItemInventory2_C_ExecuteUbergraph_UI_ItemInventory2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
