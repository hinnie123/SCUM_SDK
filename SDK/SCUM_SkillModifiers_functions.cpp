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

// Function SkillModifiers.SkillModifiers_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetParentsForChildren");

	USkillModifiers_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.shouldAlarmBeOn");

	USkillModifiers_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function SkillModifiers.SkillModifiers_C.UpdateParameterLines
// (Public, BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.UpdateParameterLines");

	USkillModifiers_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetPrisonerToMonitor");

	USkillModifiers_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function SkillModifiers.SkillModifiers_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USkillModifiers_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetDefaultTitle");

	USkillModifiers_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentVisibility");

	USkillModifiers_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USkillModifiers_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColor");

	USkillModifiers_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void USkillModifiers_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetTextColorOfVerticalBox");

	USkillModifiers_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillModifiers_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetTitleText");

	USkillModifiers_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetVerticalBoxContentVisibility");

	USkillModifiers_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.SetContentMinimized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SetContentMinimized");

	USkillModifiers_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.MinimizeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.MinimizeContent");

	USkillModifiers_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void USkillModifiers_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.GetDefaultTitle");

	USkillModifiers_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function SkillModifiers.SkillModifiers_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void USkillModifiers_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.SelectCustomColor");

	USkillModifiers_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function SkillModifiers.SkillModifiers_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnMinimize");

	USkillModifiers_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillModifiers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Construct");

	USkillModifiers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.Tick");

	USkillModifiers_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.OnPrisonerSet");

	USkillModifiers_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOnWindowContent");

	USkillModifiers_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void USkillModifiers_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.AlarmOffWindowContent");

	USkillModifiers_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillModifiers_C::ExecuteUbergraph_SkillModifiers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillModifiers.SkillModifiers_C.ExecuteUbergraph_SkillModifiers");

	USkillModifiers_C_ExecuteUbergraph_SkillModifiers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
