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

// Function UI_CombinedInventory.UI_CombinedInventory_C.Construct
struct UUI_CombinedInventory_C_Construct_Params
{
};

// Function UI_CombinedInventory.UI_CombinedInventory_C.SaveLayout
struct UUI_CombinedInventory_C_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_CombinedInventory.UI_CombinedInventory_C.LoadLayout
struct UUI_CombinedInventory_C_LoadLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_CombinedInventory.UI_CombinedInventory_C.ResetLayout
struct UUI_CombinedInventory_C_ResetLayout_Params
{
};

// Function UI_CombinedInventory.UI_CombinedInventory_C.DeferredLoadLayout
struct UUI_CombinedInventory_C_DeferredLoadLayout_Params
{
};

// Function UI_CombinedInventory.UI_CombinedInventory_C.ExecuteUbergraph_UI_CombinedInventory
struct UUI_CombinedInventory_C_ExecuteUbergraph_UI_CombinedInventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
