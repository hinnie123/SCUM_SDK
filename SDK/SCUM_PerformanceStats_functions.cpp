// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PerformanceStats.PerformanceStats_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.Init");

	UPerformanceStats_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetParentsForChildren");

	UPerformanceStats_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.shouldAlarmBeOn");

	UPerformanceStats_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function PerformanceStats.PerformanceStats_C.UpdateParameterLines
// (Public, BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.UpdateParameterLines");

	UPerformanceStats_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetPrisonerToMonitor");

	UPerformanceStats_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PerformanceStats.PerformanceStats_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPerformanceStats_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetDefaultTitle");

	UPerformanceStats_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetContentVisibility");

	UPerformanceStats_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPerformanceStats_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetTextColor");

	UPerformanceStats_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPerformanceStats_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetTextColorOfVerticalBox");

	UPerformanceStats_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceStats_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.GetTitleText");

	UPerformanceStats_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceStats.PerformanceStats_C.SetVerticalBoxContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetVerticalBoxContentVisibility");

	UPerformanceStats_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.SetContentMinimized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SetContentMinimized");

	UPerformanceStats_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.MinimizeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.MinimizeContent");

	UPerformanceStats_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UPerformanceStats_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.GetDefaultTitle");

	UPerformanceStats_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function PerformanceStats.PerformanceStats_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UPerformanceStats_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.SelectCustomColor");

	UPerformanceStats_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function PerformanceStats.PerformanceStats_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.OnMinimize");

	UPerformanceStats_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerformanceStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.Construct");

	UPerformanceStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.Tick");

	UPerformanceStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.OnPrisonerSet");

	UPerformanceStats_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.AlarmOnWindowContent");

	UPerformanceStats_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UPerformanceStats_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.AlarmOffWindowContent");

	UPerformanceStats_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceStats.PerformanceStats_C.ExecuteUbergraph_PerformanceStats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceStats_C::ExecuteUbergraph_PerformanceStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceStats.PerformanceStats_C.ExecuteUbergraph_PerformanceStats");

	UPerformanceStats_C_ExecuteUbergraph_PerformanceStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
