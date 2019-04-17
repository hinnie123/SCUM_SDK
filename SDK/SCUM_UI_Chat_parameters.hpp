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

// Function UI_Chat.UI_Chat_C.CreateSuggestionLine
struct UUI_Chat_C_CreateSuggestionLine_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UUI_ChatSuggestion_C*                        Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Chat.UI_Chat_C.OnPreviewKeyDown
struct UUI_Chat_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.OnKeyDown
struct UUI_Chat_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.SetInputFocusIfNeeded
struct UUI_Chat_C_SetInputFocusIfNeeded_Params
{
};

// Function UI_Chat.UI_Chat_C.OnMouseButtonUp
struct UUI_Chat_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Chat.UI_Chat_C.BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UUI_Chat_C_BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Chat.UI_Chat_C.Construct
struct UUI_Chat_C_Construct_Params
{
};

// Function UI_Chat.UI_Chat_C.UpdateActiveSuggestions
struct UUI_Chat_C_UpdateActiveSuggestions_Params
{
};

// Function UI_Chat.UI_Chat_C.ExecuteUbergraph_UI_Chat
struct UUI_Chat_C_ExecuteUbergraph_UI_Chat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
