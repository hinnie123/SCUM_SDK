// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_NonSelectableText_C::HighlightPartially(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially");

	UUI_CC_NonSelectableText_C_HighlightPartially_Params fn_params;
	fn_params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CC_NonSelectableText_C::Unhighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight");

	UUI_CC_NonSelectableText_C_Unhighlight_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CC_NonSelectableText_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight");

	UUI_CC_NonSelectableText_C_Highlight_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Colour                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_CC_NonSelectableText_C::SetTextColour(const struct FLinearColor& Colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour");

	UUI_CC_NonSelectableText_C_SetTextColour_Params fn_params;
	fn_params.Colour = Colour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CC_NonSelectableText_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText");

	UUI_CC_NonSelectableText_C_SetText_Params fn_params;
	fn_params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CC_NonSelectableText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct");

	UUI_CC_NonSelectableText_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_CC_NonSelectableText_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties");

	UUI_CC_NonSelectableText_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CC_NonSelectableText_C::ExecuteUbergraph_UI_CC_NonSelectableText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText");

	UUI_CC_NonSelectableText_C_ExecuteUbergraph_UI_CC_NonSelectableText_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
