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

// Function UI_GameMenu.UI_GameMenu_C.Get_CommitSuicide_Visibility
struct UUI_GameMenu_C_Get_CommitSuicide_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameMenu.UI_GameMenu_C.SaveHUDLayout
struct UUI_GameMenu_C_SaveHUDLayout_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnPreviewKeyDown
struct UUI_GameMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDoubleClick
struct UUI_GameMenu_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonDown
struct UUI_GameMenu_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenu.UI_GameMenu_C.OnMouseButtonUp
struct UUI_GameMenu_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__Resume_K2Node_ComponentBoundEvent_81_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__Quit_K2Node_ComponentBoundEvent_86_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__Menu_K2Node_ComponentBoundEvent_93_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__Options_K2Node_ComponentBoundEvent_103_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Remove
struct UUI_GameMenu_C_Remove_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnESC
struct UUI_GameMenu_C_OnESC_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Construct
struct UUI_GameMenu_C_Construct_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnResume
struct UUI_GameMenu_C_OnResume_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
struct UUI_GameMenu_C_BndEvt__Hack_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__UI_MenuButton_C_1_K2Node_ComponentBoundEvent_31_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UUI_GameMenu_C_BndEvt__AddToFavorites_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnQuitCanceled
struct UUI_GameMenu_C_OnQuitCanceled_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnQuit
struct UUI_GameMenu_C_OnQuit_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenu
struct UUI_GameMenu_C_OnLeaveToMainMenu_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnLeaveToMainMenuCanceled
struct UUI_GameMenu_C_OnLeaveToMainMenuCanceled_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnSuicideCanceled
struct UUI_GameMenu_C_OnSuicideCanceled_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.OnSuicideConfirmed
struct UUI_GameMenu_C_OnSuicideConfirmed_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
struct UUI_GameMenu_C_ExecuteUbergraph_UI_GameMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
