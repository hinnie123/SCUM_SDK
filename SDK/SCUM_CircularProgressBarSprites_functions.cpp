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

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::GetCurrentPercentageToShowText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          currentPercentageToShow        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::GetCurrentPercentageToShow(float* currentPercentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentPercentageToShow != nullptr)
		*currentPercentageToShow = params.currentPercentageToShow;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          percentageToShow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::SetCurrentPercentageToShow(float percentageToShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow");

	UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params params;
	params.percentageToShow = percentageToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCircularProgressBarSprites_C::GetPercentageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText");

	UCircularProgressBarSprites_C_GetPercentageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextalarmColorC(class UTextBlock* textWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC");

	UCircularProgressBarSprites_C_SetTextalarmColorC_Params params;
	params.textWidget = textWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCircularProgressBarSprites_C::SetTextColor(class UTextBlock* textWidget, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor");

	UCircularProgressBarSprites_C_SetTextColor_Params params;
	params.textWidget = textWidget;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
// (Public, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::ActivateNormalColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor");

	UCircularProgressBarSprites_C_ActivateNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCircularProgressBarSprites_C::SetCircularBarColor(const struct FLinearColor& CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor");

	UCircularProgressBarSprites_C_SetCircularBarColor_Params params;
	params.CircularBarColor = CircularBarColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            CircularBarColor               (Parm, OutParm, IsPlainOldData)

void UCircularProgressBarSprites_C::GetCircularBarColor(struct FLinearColor* CircularBarColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor");

	UCircularProgressBarSprites_C_GetCircularBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CircularBarColor != nullptr)
		*CircularBarColor = params.CircularBarColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            outerCircleColor               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCircularProgressBarSprites_C::SetOuterCircleColor(const struct FLinearColor& outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor");

	UCircularProgressBarSprites_C_SetOuterCircleColor_Params params;
	params.outerCircleColor = outerCircleColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            outerCircleColor               (Parm, OutParm, IsPlainOldData)

void UCircularProgressBarSprites_C::GetOuterCircleColor(struct FLinearColor* outerCircleColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor");

	UCircularProgressBarSprites_C_GetOuterCircleColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outerCircleColor != nullptr)
		*outerCircleColor = params.outerCircleColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            NormalColor                    (Parm, OutParm, IsPlainOldData)

void UCircularProgressBarSprites_C::GetNormalColor(struct FLinearColor* NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor");

	UCircularProgressBarSprites_C_GetNormalColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalColor != nullptr)
		*NormalColor = params.NormalColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NormalColor                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCircularProgressBarSprites_C::SetNormalColor(const struct FLinearColor& NormalColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor");

	UCircularProgressBarSprites_C_SetNormalColor_Params params;
	params.NormalColor = NormalColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            AlarmColor                     (Parm, OutParm, IsPlainOldData)

void UCircularProgressBarSprites_C::GetAlarmColor(struct FLinearColor* AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor");

	UCircularProgressBarSprites_C_GetAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlarmColor != nullptr)
		*AlarmColor = params.AlarmColor;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            AlarmColor                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UCircularProgressBarSprites_C::SetAlarmColor(const struct FLinearColor& AlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor");

	UCircularProgressBarSprites_C_SetAlarmColor_Params params;
	params.AlarmColor = AlarmColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
// (Public, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::ActivateAlarmColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor");

	UCircularProgressBarSprites_C_ActivateAlarmColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
// (Public, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::UpdatePercentageArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc");

	UCircularProgressBarSprites_C_UpdatePercentageArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ImageWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCircularProgressBarSprites_C::SetImageAlarmColor(class UImage* ImageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor");

	UCircularProgressBarSprites_C_SetImageAlarmColor_Params params;
	params.ImageWidget = ImageWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
// (Protected, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::OnPercentageChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged");

	UCircularProgressBarSprites_C_OnPercentageChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
// (Protected, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn");

	UCircularProgressBarSprites_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
// (Protected, BlueprintCallable, BlueprintEvent)

void UCircularProgressBarSprites_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff");

	UCircularProgressBarSprites_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick");

	UCircularProgressBarSprites_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCircularProgressBarSprites_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct");

	UCircularProgressBarSprites_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UCircularProgressBarSprites_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties");

	UCircularProgressBarSprites_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCircularProgressBarSprites_C::ExecuteUbergraph_CircularProgressBarSprites(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites");

	UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
