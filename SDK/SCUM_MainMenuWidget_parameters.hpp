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

// Function MainMenuWidget.MainMenuWidget_C.GetCharacterName
struct UMainMenuWidget_C_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainMenuWidget.MainMenuWidget_C.OnPreviewKeyDown
struct UMainMenuWidget_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MainMenuWidget.MainMenuWidget_C.BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature
struct UMainMenuWidget_C_BndEvt__UI_MenuButton_38_K2Node_ComponentBoundEvent_39_OnClicked__DelegateSignature_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature
struct UMainMenuWidget_C_BndEvt__ChangeServer_K2Node_ComponentBoundEvent_195_OnClicked__DelegateSignature_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature
struct UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_214_OnClicked__DelegateSignature_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature
struct UMainMenuWidget_C_BndEvt__Quit_K2Node_ComponentBoundEvent_329_OnClicked__DelegateSignature_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.OnQuitYesClicked
struct UMainMenuWidget_C_OnQuitYesClicked_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.OnQuitNoClicked
struct UMainMenuWidget_C_OnQuitNoClicked_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.Construct
struct UMainMenuWidget_C_Construct_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.OnESC
struct UMainMenuWidget_C_OnESC_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature
struct UMainMenuWidget_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_47_OnClicked__DelegateSignature_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.OnNetworkErrorDismissed
struct UMainMenuWidget_C_OnNetworkErrorDismissed_Params
{
};

// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
struct UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
