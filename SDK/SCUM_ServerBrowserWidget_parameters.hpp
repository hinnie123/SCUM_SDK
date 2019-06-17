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

// Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter
struct UServerBrowserWidget_C_ChangeFilter_Params
{
	struct FText                                       Filter;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners
struct UServerBrowserWidget_C_UpdatePreviewPrisoners_Params
{
	struct FString                                     ServerIp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ServerResponsePort;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser
struct UServerBrowserWidget_C_GetCurrentUser_Params
{
	class UDbUser*                                     user;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress
struct UServerBrowserWidget_C_SaveDirectionConnectionAddress_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect
struct UServerBrowserWidget_C_ChooseServerAndConnect_Params
{
	struct FString                                     authToken;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer
struct UServerBrowserWidget_C_ChooseServer_Params
{
	struct FString                                     Ip;                                                       // (Parm, OutParm, ZeroConstructor)
	int                                                ResponsePort;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup
struct UServerBrowserWidget_C_HidePasswordPopup_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup
struct UServerBrowserWidget_C_ShowPasswordPopup_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword
struct UServerBrowserWidget_C_EnterPassword_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo
struct UServerBrowserWidget_C_ConnectToServerInfo_Params
{
	struct FServerInfo                                 ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     authToken;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer
struct UServerBrowserWidget_C_UpdateSelectedServer_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown
struct UServerBrowserWidget_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection
struct UServerBrowserWidget_C_SelectServerForConnection_Params
{
	class UServerInfoWidget_C*                         ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1
struct UServerBrowserWidget_C_Get_Refresh_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1
struct UServerBrowserWidget_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory
struct UServerBrowserWidget_C_ToggleCategory_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_MenuButton_C*                            Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll
struct UServerBrowserWidget_C_Scroll_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel
struct UServerBrowserWidget_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList
struct UServerBrowserWidget_C_UpdateList_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo
struct UServerBrowserWidget_C_RemoveInfo_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo
struct UServerBrowserWidget_C_AddNewInfo_Params
{
	struct FServerInfo*                                ServerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo
struct UServerBrowserWidget_C_OnClickedOnServerInfo_Params
{
	class UServerInfoWidget_C*                         ServerInfoWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked
struct UServerBrowserWidget_C_OnServerInfoDoubleClicked_Params
{
	class UServerInfoWidget_C*                         ServerInfoWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC
struct UServerBrowserWidget_C_OnESC_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword
struct UServerBrowserWidget_C_CancelPassword_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack
struct UServerBrowserWidget_C_GoBack_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.Construct
struct UServerBrowserWidget_C_Construct_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved
struct UServerBrowserWidget_C_OnFavoriteRemoved_Params
{
	struct FServerInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog
struct UServerBrowserWidget_C_ShowErrorDialog_Params
{
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse
struct UServerBrowserWidget_C_BeginWaitingOnServerResponse_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse
struct UServerBrowserWidget_C_EndWaitingOnServerResponse_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog
struct UServerBrowserWidget_C_OpenContinueOrNewDialog_Params
{
	struct FString*                                    Ip;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               GameplayPort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ResponsePort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    authToken;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter
struct UServerBrowserWidget_C_OnContinueWithCharacter_Params
{
	struct FString                                     Ip;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResponsePort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter
struct UServerBrowserWidget_C_OnCreateNewCharacter_Params
{
	struct FString                                     Ip;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GameplayPort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ResponsePort;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     authToken;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed
struct UServerBrowserWidget_C_OnNewCharacterConfirmed_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled
struct UServerBrowserWidget_C_NewCharacterCanceled_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts
struct UServerBrowserWidget_C_ClearSorts_Params
{
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params
{
	class UUI_SortByButton_C*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ESortByTypes>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.Tick
struct UServerBrowserWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget
struct UServerBrowserWidget_C_ExecuteUbergraph_ServerBrowserWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
