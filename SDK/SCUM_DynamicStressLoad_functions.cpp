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

// Function DynamicStressLoad.DynamicStressLoad_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetParentsForChildren");

	UDynamicStressLoad_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.shouldAlarmBeOn");

	UDynamicStressLoad_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetColorOfSelectedTextFields
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            color_SpecifiedColor           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDynamicStressLoad_C::SetColorOfSelectedTextFields(const struct FLinearColor& color_SpecifiedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetColorOfSelectedTextFields");

	UDynamicStressLoad_C_SetColorOfSelectedTextFields_Params params;
	params.color_SpecifiedColor = color_SpecifiedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AdjustUnitsValues
// (Public, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::AdjustUnitsValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AdjustUnitsValues");

	UDynamicStressLoad_C_AdjustUnitsValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AdjustTextColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::AdjustTextColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AdjustTextColors");

	UDynamicStressLoad_C_AdjustTextColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Init");

	UDynamicStressLoad_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.UpdateParameterLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.UpdateParameterLines");

	UDynamicStressLoad_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetPrisonerToMonitor");

	UDynamicStressLoad_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UDynamicStressLoad_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetDefaultTitle");

	UDynamicStressLoad_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetContentVisibility");

	UDynamicStressLoad_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDynamicStressLoad_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetTextColor");

	UDynamicStressLoad_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UDynamicStressLoad_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetTextColorOfVerticalBox");

	UDynamicStressLoad_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDynamicStressLoad_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.GetTitleText");

	UDynamicStressLoad_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetVerticalBoxContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetVerticalBoxContentVisibility");

	UDynamicStressLoad_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SetContentMinimized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SetContentMinimized");

	UDynamicStressLoad_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.MinimizeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.MinimizeContent");

	UDynamicStressLoad_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UDynamicStressLoad_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.GetDefaultTitle");

	UDynamicStressLoad_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function DynamicStressLoad.DynamicStressLoad_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UDynamicStressLoad_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.SelectCustomColor");

	UDynamicStressLoad_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function DynamicStressLoad.DynamicStressLoad_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.OnMinimize");

	UDynamicStressLoad_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDynamicStressLoad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Construct");

	UDynamicStressLoad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.Tick");

	UDynamicStressLoad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.OnPrisonerSet");

	UDynamicStressLoad_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.UpdateDynamicLoadEvent
// (BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::UpdateDynamicLoadEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.UpdateDynamicLoadEvent");

	UDynamicStressLoad_C_UpdateDynamicLoadEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AlarmOnWindowContent");

	UDynamicStressLoad_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UDynamicStressLoad_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.AlarmOffWindowContent");

	UDynamicStressLoad_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DynamicStressLoad.DynamicStressLoad_C.ExecuteUbergraph_DynamicStressLoad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicStressLoad_C::ExecuteUbergraph_DynamicStressLoad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DynamicStressLoad.DynamicStressLoad_C.ExecuteUbergraph_DynamicStressLoad");

	UDynamicStressLoad_C_ExecuteUbergraph_DynamicStressLoad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
