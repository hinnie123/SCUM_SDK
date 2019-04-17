#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Get_LeavingSquadWarning_Visibility
struct UUI_LogoutConfirmation_C_Get_LeavingSquadWarning_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.GetCountdownText
struct UUI_LogoutConfirmation_C_GetCountdownText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.Construct
struct UUI_LogoutConfirmation_C_Construct_Params
{
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UUI_LogoutConfirmation_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnCountdownFinished
struct UUI_LogoutConfirmation_C_OnCountdownFinished_Params
{
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.OnNo
struct UUI_LogoutConfirmation_C_OnNo_Params
{
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UUI_LogoutConfirmation_C_BndEvt__ForceButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.ExecuteUbergraph_UI_LogoutConfirmation
struct UUI_LogoutConfirmation_C_ExecuteUbergraph_UI_LogoutConfirmation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LogoutConfirmation.UI_LogoutConfirmation_C.CountdownFinished__DelegateSignature
struct UUI_LogoutConfirmation_C_CountdownFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
