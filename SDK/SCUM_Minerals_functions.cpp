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

// Function Minerals.Minerals_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMinerals_C::shouldAlarmBeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.shouldAlarmBeOn");

	UMinerals_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UMinerals_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetParentsForChildren");

	UMinerals_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UMinerals_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Update");

	UMinerals_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetPrisonerToMonitor");

	UMinerals_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Minerals.Minerals_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMinerals_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Init");

	UMinerals_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMinerals_C::SetDefaultTitle(const struct FString& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetDefaultTitle");

	UMinerals_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentVisibility");

	UMinerals_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMinerals_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColor");

	UMinerals_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMinerals_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetTextColorOfVerticalBox");

	UMinerals_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMinerals_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetTitleText");

	UMinerals_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Minerals.Minerals_C.SetVerticalBoxContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetVerticalBoxContentVisibility(class UVerticalBox* verticalBoxRef, ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetVerticalBoxContentVisibility");

	UMinerals_C_SetVerticalBoxContentVisibility_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.SetContentMinimized
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           minimized                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::SetContentMinimized(bool minimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SetContentMinimized");

	UMinerals_C_SetContentMinimized_Params params;
	params.minimized = minimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.MinimizeContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::MinimizeContent(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MinimizeContent");

	UMinerals_C_MinimizeContent_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UMinerals_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.GetDefaultTitle");

	UMinerals_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Minerals.Minerals_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UMinerals_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.SelectCustomColor");

	UMinerals_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Minerals.Minerals_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinerals_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Construct");

	UMinerals_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.Tick");

	UMinerals_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UMinerals_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnPrisonerSet");

	UMinerals_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.MineralsUpdateEvent
// (BlueprintCallable, BlueprintEvent)

void UMinerals_C::MineralsUpdateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.MineralsUpdateEvent");

	UMinerals_C_MineralsUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UMinerals_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOnWindowContent");

	UMinerals_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UMinerals_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.AlarmOffWindowContent");

	UMinerals_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.OnMinimize");

	UMinerals_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minerals.Minerals_C.ExecuteUbergraph_Minerals
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinerals_C::ExecuteUbergraph_Minerals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minerals.Minerals_C.ExecuteUbergraph_Minerals");

	UMinerals_C_ExecuteUbergraph_Minerals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
