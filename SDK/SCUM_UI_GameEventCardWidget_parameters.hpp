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

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TeamSwitchFee_Text
struct UUI_GameEventCardWidget_C_Get_TeamSwitchFee_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Cooldown_Throbber_Visiblity
struct UUI_GameEventCardWidget_C_Get_Cooldown_Throbber_Visiblity_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EntryFeeTag_Text
struct UUI_GameEventCardWidget_C_Get_EntryFeeTag_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Buttons_Visibility
struct UUI_GameEventCardWidget_C_Get_Buttons_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_Screenshot_Brush
struct UUI_GameEventCardWidget_C_Get_Screenshot_Brush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanJoinTeam
struct UUI_GameEventCardWidget_C_CanJoinTeam_Params
{
	int                                                Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanJoin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_SwitchTeamButton_Visibility
struct UUI_GameEventCardWidget_C_Get_SwitchTeamButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.GetJoinButtonText
struct UUI_GameEventCardWidget_C_GetJoinButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CheckPrerequisites
struct UUI_GameEventCardWidget_C_CheckPrerequisites_Params
{
	bool                                               HasEnoughFamePoints;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerRegisteredForThisEvent
struct UUI_GameEventCardWidget_C_IsPlayerRegisteredForThisEvent_Params
{
	bool                                               IsPlayerParticipatingInThisEvent;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.CanPlayerJoin
struct UUI_GameEventCardWidget_C_CanPlayerJoin_Params
{
	int                                                preferredTeam;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanJoin;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinDisabledMsgVisibility
struct UUI_GameEventCardWidget_C_Get_JoinDisabledMsgVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_EventName
struct UUI_GameEventCardWidget_C_Get_EventName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.IsPlayerParticipatingInThisEvent
struct UUI_GameEventCardWidget_C_IsPlayerParticipatingInThisEvent_Params
{
	bool                                               IsPlayerParticipatingInThisEvent;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinRedButtonVisibility
struct UUI_GameEventCardWidget_C_Get_JoinRedButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinBlueButton_Visibility
struct UUI_GameEventCardWidget_C_Get_JoinBlueButton_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeTextVisibility
struct UUI_GameEventCardWidget_C_Get_TimeTextVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LeaveButtonVisibility
struct UUI_GameEventCardWidget_C_Get_LeaveButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_JoinButtonVisibility
struct UUI_GameEventCardWidget_C_Get_JoinButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_NumPlayersText
struct UUI_GameEventCardWidget_C_Get_NumPlayersText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_RoundsText
struct UUI_GameEventCardWidget_C_Get_RoundsText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_TimeText
struct UUI_GameEventCardWidget_C_Get_TimeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_StatusText
struct UUI_GameEventCardWidget_C_Get_StatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Get_LocationText
struct UUI_GameEventCardWidget_C_Get_LocationText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_GameEventCardWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.Construct
struct UUI_GameEventCardWidget_C_Construct_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
struct UUI_GameEventCardWidget_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature
struct UUI_GameEventCardWidget_C_BndEvt__JoinRedButton_K2Node_ComponentBoundEvent_1256_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature
struct UUI_GameEventCardWidget_C_BndEvt__JoinBlueButton_K2Node_ComponentBoundEvent_1275_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature
struct UUI_GameEventCardWidget_C_BndEvt__SwitchTeamButton_K2Node_ComponentBoundEvent_383_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameEventCardWidget.UI_GameEventCardWidget_C.ExecuteUbergraph_UI_GameEventCardWidget
struct UUI_GameEventCardWidget_C_ExecuteUbergraph_UI_GameEventCardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
