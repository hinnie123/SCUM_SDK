// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Filter                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserWidget_C::ChangeFilter(const struct FText& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChangeFilter");

	UServerBrowserWidget_C_ChangeFilter_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ServerIp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ServerResponsePort             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::UpdatePreviewPrisoners(const struct FString& ServerIp, int ServerResponsePort)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdatePreviewPrisoners");

	UServerBrowserWidget_C_UpdatePreviewPrisoners_Params params;
	params.ServerIp = ServerIp;
	params.ServerResponsePort = ServerResponsePort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDbUser*                 user                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::GetCurrentUser(class UDbUser** user)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetCurrentUser");

	UServerBrowserWidget_C_GetCurrentUser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (user != nullptr)
		*user = params.user;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::SaveDirectionConnectionAddress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SaveDirectionConnectionAddress");

	UServerBrowserWidget_C_SaveDirectionConnectionAddress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 authToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerBrowserWidget_C::ChooseServerAndConnect(const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServerAndConnect");

	UServerBrowserWidget_C_ChooseServerAndConnect_Params params;
	params.authToken = authToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (Parm, OutParm, ZeroConstructor)
// int                            ResponsePort                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::ChooseServer(struct FString* Ip, int* ResponsePort)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ChooseServer");

	UServerBrowserWidget_C_ChooseServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ip != nullptr)
		*Ip = params.Ip;
	if (ResponsePort != nullptr)
		*ResponsePort = params.ResponsePort;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup
// (Public, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::HidePasswordPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.HidePasswordPopup");

	UServerBrowserWidget_C_HidePasswordPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup
// (Public, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::ShowPasswordPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowPasswordPopup");

	UServerBrowserWidget_C_ShowPasswordPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::EnterPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EnterPassword");

	UServerBrowserWidget_C_EnterPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerInfo             ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 authToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerBrowserWidget_C::ConnectToServerInfo(const struct FServerInfo& ServerInfo, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ConnectToServerInfo");

	UServerBrowserWidget_C_ConnectToServerInfo_Params params;
	params.ServerInfo = ServerInfo;
	params.authToken = authToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer
// (Public, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::UpdateSelectedServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateSelectedServer");

	UServerBrowserWidget_C_UpdateSelectedServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UServerBrowserWidget_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnPreviewKeyDown");

	UServerBrowserWidget_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerBrowserWidget_C::SelectServerForConnection(class UServerInfoWidget_C* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.SelectServerForConnection");

	UServerBrowserWidget_C_SelectServerForConnection_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UServerBrowserWidget_C::Get_Refresh_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Get_Refresh_bIsEnabled_1");

	UServerBrowserWidget_C_Get_Refresh_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UServerBrowserWidget_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GetVisibility_1");

	UServerBrowserWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUI_MenuButton_C*        Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerBrowserWidget_C::ToggleCategory(class UWidget* Widget, class UUI_MenuButton_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ToggleCategory");

	UServerBrowserWidget_C_ToggleCategory_Params params;
	params.Widget = Widget;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::Scroll(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Scroll");

	UServerBrowserWidget_C_Scroll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UServerBrowserWidget_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnMouseWheel");

	UServerBrowserWidget_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::UpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.UpdateList");

	UServerBrowserWidget_C_UpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::RemoveInfo(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.RemoveInfo");

	UServerBrowserWidget_C_RemoveInfo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerInfo*            ServerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserWidget_C::AddNewInfo(struct FServerInfo* ServerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.AddNewInfo");

	UServerBrowserWidget_C_AddNewInfo_Params params;
	params.ServerInfo = ServerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__EditableTextBox_79_K2Node_ComponentBoundEvent_185_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__UI_MenuButton_50_K2Node_ComponentBoundEvent_120_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_263_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__Connect_K2Node_ComponentBoundEvent_270_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__ServersButton_K2Node_ComponentBoundEvent_108_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerBrowserWidget_C::OnClickedOnServerInfo(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnClickedOnServerInfo");

	UServerBrowserWidget_C_OnClickedOnServerInfo_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     ServerInfoWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UServerBrowserWidget_C::OnServerInfoDoubleClicked(class UServerInfoWidget_C* ServerInfoWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnServerInfoDoubleClicked");

	UServerBrowserWidget_C_OnServerInfoDoubleClicked_Params params;
	params.ServerInfoWidget = ServerInfoWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__UI_TextInput_C_2_K2Node_ComponentBoundEvent_24_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__HostTextInput_K2Node_ComponentBoundEvent_36_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__MaxPlayersTextInput_K2Node_ComponentBoundEvent_45_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__MinPlayersTextInput_K2Node_ComponentBoundEvent_73_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__PasswordPopupCancelButton_K2Node_ComponentBoundEvent_931_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__PasswordPopupOkButton_K2Node_ComponentBoundEvent_992_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__PasswordPopupTextBox_K2Node_ComponentBoundEvent_1020_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerBrowserWidget_C::BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__ShowFullServersSlider_K2Node_ComponentBoundEvent_42_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerBrowserWidget_C::BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__ShowPasswordedOnlySlider_K2Node_ComponentBoundEvent_58_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::OnESC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnESC");

	UServerBrowserWidget_C_OnESC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::CancelPassword()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.CancelPassword");

	UServerBrowserWidget_C_CancelPassword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.GoBack");

	UServerBrowserWidget_C_GoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UServerBrowserWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Construct");

	UServerBrowserWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OldIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerBrowserWidget_C::BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__ServersCategorySwitch_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.OldIndex = OldIndex;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__UI_ScrollBar_K2Node_ComponentBoundEvent_1_OnSliderMoved__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FServerInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UServerBrowserWidget_C::OnFavoriteRemoved(const struct FServerInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnFavoriteRemoved");

	UServerBrowserWidget_C_OnFavoriteRemoved_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserWidget_C::ShowErrorDialog(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ShowErrorDialog");

	UServerBrowserWidget_C_ShowErrorDialog_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::BeginWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BeginWaitingOnServerResponse");

	UServerBrowserWidget_C_BeginWaitingOnServerResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::EndWaitingOnServerResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.EndWaitingOnServerResponse");

	UServerBrowserWidget_C_EndWaitingOnServerResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserWidget_C::BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__DirectConnectTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature
// (BlueprintEvent)

void UServerBrowserWidget_C::BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__UI_MenuButton_C_0_K2Node_ComponentBoundEvent_121_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                authToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerBrowserWidget_C::OpenContinueOrNewDialog(struct FString* Ip, int* GameplayPort, int* ResponsePort, struct FString* authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OpenContinueOrNewDialog");

	UServerBrowserWidget_C_OpenContinueOrNewDialog_Params params;
	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 authToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerBrowserWidget_C::OnContinueWithCharacter(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnContinueWithCharacter");

	UServerBrowserWidget_C_OnContinueWithCharacter_Params params;
	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Ip                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GameplayPort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ResponsePort                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 authToken                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UServerBrowserWidget_C::OnCreateNewCharacter(const struct FString& Ip, int GameplayPort, int ResponsePort, const struct FString& authToken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnCreateNewCharacter");

	UServerBrowserWidget_C_OnCreateNewCharacter_Params params;
	params.Ip = Ip;
	params.GameplayPort = GameplayPort;
	params.ResponsePort = ResponsePort;
	params.authToken = authToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::OnNewCharacterConfirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.OnNewCharacterConfirmed");

	UServerBrowserWidget_C_OnNewCharacterConfirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::NewCharacterCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.NewCharacterCanceled");

	UServerBrowserWidget_C_NewCharacterCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SortByPing_K2Node_ComponentBoundEvent_882_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts
// (BlueprintCallable, BlueprintEvent)

void UServerBrowserWidget_C::ClearSorts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ClearSorts");

	UServerBrowserWidget_C_ClearSorts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SortByHost_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SortByTime_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SortByPlayers_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_SortByButton_C*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ESortByTypes>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature(class UUI_SortByButton_C* Button, TEnumAsByte<ESortByTypes> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SortByPassword_K2Node_ComponentBoundEvent_84_OnClicked__DelegateSignature_Params params;
	params.Button = Button;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBrowserWidget_C::BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UServerBrowserWidget_C_BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.Tick");

	UServerBrowserWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UServerBrowserWidget_C::ExecuteUbergraph_ServerBrowserWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerBrowserWidget.ServerBrowserWidget_C.ExecuteUbergraph_ServerBrowserWidget");

	UServerBrowserWidget_C_ExecuteUbergraph_ServerBrowserWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
