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

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.GetTabFromTabMode
struct UUI_TabModeTabsContainer_C_GetTabFromTabMode_Params
{
	ETabMode                                           Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_TabModeTab_C*                            Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SetTabEnabled
struct UUI_TabModeTabsContainer_C_SetTabEnabled_Params
{
	ETabMode                                           Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.OpenSpecifiedTab
struct UUI_TabModeTabsContainer_C_OpenSpecifiedTab_Params
{
	class UUI_TabModeTab_C*                            Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ETabMode                                           tabMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.SelectTab
struct UUI_TabModeTabsContainer_C_SelectTab_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.Construct
struct UUI_TabModeTabsContainer_C_Construct_Params
{
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_0_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UUI_TabModeTabsContainer_C_BndEvt__UI_TabModeTab_1_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUI_TabModeTabsContainer_C_BndEvt__CraftingTab_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
};

// Function UI_TabModeTabsContainer.UI_TabModeTabsContainer_C.ExecuteUbergraph_UI_TabModeTabsContainer
struct UUI_TabModeTabsContainer_C_ExecuteUbergraph_UI_TabModeTabsContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
