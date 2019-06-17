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

// Function UI_SortByButton.UI_SortByButton_C.Construct
struct UUI_SortByButton_C_Construct_Params
{
};

// Function UI_SortByButton.UI_SortByButton_C.OnSynchronizeProperties
struct UUI_SortByButton_C_OnSynchronizeProperties_Params
{
};

// Function UI_SortByButton.UI_SortByButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UUI_SortByButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SortByButton.UI_SortByButton_C.SetType
struct UUI_SortByButton_C_SetType_Params
{
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SortByButton.UI_SortByButton_C.ExecuteUbergraph_UI_SortByButton
struct UUI_SortByButton_C_ExecuteUbergraph_UI_SortByButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SortByButton.UI_SortByButton_C.OnClicked__DelegateSignature
struct UUI_SortByButton_C_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
