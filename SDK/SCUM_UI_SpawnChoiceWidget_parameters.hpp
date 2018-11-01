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

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Update
struct UUI_SpawnChoiceWidget_C_Update_Params
{
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.Get_PriceText
struct UUI_SpawnChoiceWidget_C_Get_PriceText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilityDisabled
struct UUI_SpawnChoiceWidget_C_GetVisibilityDisabled_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.GetVisibilitySelectArrow
struct UUI_SpawnChoiceWidget_C_GetVisibilitySelectArrow_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties
struct UUI_SpawnChoiceWidget_C_OnSynchronizeProperties_Params
{
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnChoiceWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget
struct UUI_SpawnChoiceWidget_C_ExecuteUbergraph_UI_SpawnChoiceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature
struct UUI_SpawnChoiceWidget_C_OnClicked__DelegateSignature_Params
{
	class UUI_SpawnChoiceWidget_C*                     this_no_u;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
