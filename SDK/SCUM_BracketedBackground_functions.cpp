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

// Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void UBracketedBackground_C::SetAlarmBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetAlarmBackgroundColor");

	UBracketedBackground_C_SetAlarmBackgroundColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)

void UBracketedBackground_C::SetNormalBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetNormalBackgroundColor");

	UBracketedBackground_C_SetNormalBackgroundColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function BracketedBackground.BracketedBackground_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            colorToSet                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBracketedBackground_C::SetBackgroundColor(const struct FLinearColor& colorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BracketedBackground.BracketedBackground_C.SetBackgroundColor");

	UBracketedBackground_C_SetBackgroundColor_Params fn_params;
	fn_params.colorToSet = colorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
