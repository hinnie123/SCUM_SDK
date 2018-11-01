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

// Function ScrollableContent.ScrollableContent_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UScrollableContent_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetTitleText");

	UScrollableContent_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScrollableContent.ScrollableContent_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UScrollableContent_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetDefaultTitle");

	UScrollableContent_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollableContent_C::ResetInputChatLineString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ResetInputChatLineString");

	UScrollableContent_C_ResetInputChatLineString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.SetInputChatLineString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   chatLineStringToSet            (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollableContent_C::SetInputChatLineString(const struct FText& chatLineStringToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SetInputChatLineString");

	UScrollableContent_C_SetInputChatLineString_Params params;
	params.chatLineStringToSet = chatLineStringToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.GetInputChatLineText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   chatLineString                 (Parm, OutParm)

void UScrollableContent_C::GetInputChatLineText(struct FText* chatLineString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.GetInputChatLineText");

	UScrollableContent_C_GetInputChatLineText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (chatLineString != nullptr)
		*chatLineString = params.chatLineString;
}


// Function ScrollableContent.ScrollableContent_C.PrintChatMessages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScrollableContent_C::PrintChatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PrintChatMessages");

	UScrollableContent_C_PrintChatMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UScrollableContent_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.SelectCustomColor");

	UScrollableContent_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ScrollableContent.ScrollableContent_C.AutoCreateContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScrollableContent_C::AutoCreateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AutoCreateContent");

	UScrollableContent_C_AutoCreateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollableContent_C::PopulateMessageStrings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.PopulateMessageStrings");

	UScrollableContent_C_PopulateMessageStrings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.AddTextLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   textToSet                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           scrollToTheEnd                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lineAdded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::AddTextLine(const struct FText& textToSet, const struct FLinearColor& Color, bool scrollToTheEnd, bool* lineAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.AddTextLine");

	UScrollableContent_C_AddTextLine_Params params;
	params.textToSet = textToSet;
	params.Color = Color;
	params.scrollToTheEnd = scrollToTheEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lineAdded != nullptr)
		*lineAdded = params.lineAdded;
}


// Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UScrollableContent_C::OnMouseButtonDownOnConsole(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMouseButtonDownOnConsole");

	UScrollableContent_C_OnMouseButtonDownOnConsole_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScrollableContent.ScrollableContent_C.StartDrag
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollableContent_C::StartDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.StartDrag");

	UScrollableContent_C_StartDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UScrollableContent_C_BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScrollableContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.Construct");

	UScrollableContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.OnMinimize");

	UScrollableContent_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableContent_C::ExecuteUbergraph_ScrollableContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableContent.ScrollableContent_C.ExecuteUbergraph_ScrollableContent");

	UScrollableContent_C_ExecuteUbergraph_ScrollableContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
