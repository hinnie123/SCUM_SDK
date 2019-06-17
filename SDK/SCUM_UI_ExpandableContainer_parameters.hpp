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

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.SetParentContainer
struct UUI_ExpandableContainer_C_SetParentContainer_Params
{
	class UUI_ExpandableContainer_C*                   container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DisableAlarm
struct UUI_ExpandableContainer_C_DisableAlarm_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.EnableAlarm
struct UUI_ExpandableContainer_C_EnableAlarm_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.CheckAlarm
struct UUI_ExpandableContainer_C_CheckAlarm_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.DecrementAlarmsCount
struct UUI_ExpandableContainer_C_DecrementAlarmsCount_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.IncrementAlarmsCount
struct UUI_ExpandableContainer_C_IncrementAlarmsCount_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Minimize
struct UUI_ExpandableContainer_C_Minimize_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Maximize
struct UUI_ExpandableContainer_C_Maximize_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnSynchronizeProperties
struct UUI_ExpandableContainer_C_OnSynchronizeProperties_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.Construct
struct UUI_ExpandableContainer_C_Construct_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UUI_ExpandableContainer_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.ExecuteUbergraph_UI_ExpandableContainer
struct UUI_ExpandableContainer_C_ExecuteUbergraph_UI_ExpandableContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ExpandableContainer.UI_ExpandableContainer_C.OnExpandChanged__DelegateSignature
struct UUI_ExpandableContainer_C_OnExpandChanged__DelegateSignature_Params
{
	class UUI_ExpandableContainer_C*                   container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsMinimized;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
