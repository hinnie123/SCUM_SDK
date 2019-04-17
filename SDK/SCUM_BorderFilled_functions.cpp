// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BorderFilled.BorderFilled_C.UpdateBorderFilled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBorderFilled_C::UpdateBorderFilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBorderFilled");

	UBorderFilled_C_UpdateBorderFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBottomMarginOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldBottomMarginBeOn         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetBottomMarginOn(bool shouldBottomMarginBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBottomMarginOn");

	UBorderFilled_C_SetBottomMarginOn_Params params;
	params.shouldBottomMarginBeOn = shouldBottomMarginBeOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Margin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          marginGap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::SetPaddingOnBackgroundImage(float Margin, float marginGap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage");

	UBorderFilled_C_SetPaddingOnBackgroundImage_Params params;
	params.Margin = Margin;
	params.marginGap = marginGap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBorderFilled_C::SetColorOnBackgroundImage(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage");

	UBorderFilled_C_SetColorOnBackgroundImage_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            backgroundColorToSet           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBorderFilled_C::SetBackgroundColor(const struct FLinearColor& backgroundColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBackgroundColor");

	UBorderFilled_C_SetBackgroundColor_Params params;
	params.backgroundColorToSet = backgroundColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewBackgroundColor             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBorderFilled_C::UpdateBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.UpdateBackgroundColor");

	UBorderFilled_C_UpdateBackgroundColor_Params params;
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.SetBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            borderColorToSet               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBorderFilled_C::SetBorderColor(const struct FLinearColor& borderColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.SetBorderColor");

	UBorderFilled_C_SetBorderColor_Params params;
	params.borderColorToSet = borderColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBorderFilled_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.Construct");

	UBorderFilled_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UBorderFilled_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.OnSynchronizeProperties");

	UBorderFilled_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBorderFilled_C::ExecuteUbergraph_BorderFilled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled");

	UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
