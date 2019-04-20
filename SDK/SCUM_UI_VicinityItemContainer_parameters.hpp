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

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.InitVicinityItemContainer
struct UUI_VicinityItemContainer_C_InitVicinityItemContainer_Params
{
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetParentHUD
struct UUI_VicinityItemContainer_C_SetParentHUD_Params
{
	class UHUD_C*                                      parentHUD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SetTitle
struct UUI_VicinityItemContainer_C_SetTitle_Params
{
	struct FText                                       titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.Construct
struct UUI_VicinityItemContainer_C_Construct_Params
{
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.SaveLayout
struct UUI_VicinityItemContainer_C_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.LoadLayout
struct UUI_VicinityItemContainer_C_LoadLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.DeferredLoadLayout
struct UUI_VicinityItemContainer_C_DeferredLoadLayout_Params
{
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ResetLayout
struct UUI_VicinityItemContainer_C_ResetLayout_Params
{
};

// Function UI_VicinityItemContainer.UI_VicinityItemContainer_C.ExecuteUbergraph_UI_VicinityItemContainer
struct UUI_VicinityItemContainer_C_ExecuteUbergraph_UI_VicinityItemContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
