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

// Function ScrollableContent.ScrollableContent_C.GetTitleText
struct UScrollableContent_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
struct UScrollableContent_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
struct UScrollableContent_C_ResetInputChatLineString_Params
{
};

// Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
struct UScrollableContent_C_SetInputChatLineString_Params
{
	struct FText                                       chatLineStringToSet;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
struct UScrollableContent_C_GetInputChatLineText_Params
{
	struct FText                                       chatLineString;                                           // (Parm, OutParm)
};

// Function ScrollableContent.ScrollableContent_C.PrintChatMessages
struct UScrollableContent_C_PrintChatMessages_Params
{
};

// Function ScrollableContent.ScrollableContent_C.SelectCustomColor
struct UScrollableContent_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function ScrollableContent.ScrollableContent_C.AutoCreateContent
struct UScrollableContent_C_AutoCreateContent_Params
{
};

// Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
struct UScrollableContent_C_PopulateMessageStrings_Params
{
};

// Function ScrollableContent.ScrollableContent_C.AddTextLine
struct UScrollableContent_C_AddTextLine_Params
{
	struct FText                                       textToSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               scrollToTheEnd;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               lineAdded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
struct UScrollableContent_C_OnMouseButtonDownOnConsole_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScrollableContent.ScrollableContent_C.StartDrag
struct UScrollableContent_C_StartDrag_Params
{
};

// Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UScrollableContent_C_BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableContent.ScrollableContent_C.Construct
struct UScrollableContent_C_Construct_Params
{
};

// Function ScrollableContent.ScrollableContent_C.OnMinimize
struct UScrollableContent_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
struct UScrollableContent_C_ExecuteUbergraph_ScrollableContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
