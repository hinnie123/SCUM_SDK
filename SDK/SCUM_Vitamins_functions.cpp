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

// Function Vitamins.Vitamins_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.shouldAlarmBeOn");

	UVitamins_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Vitamins.Vitamins_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UVitamins_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetParentsForChildren");

	UVitamins_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UVitamins_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Update");

	UVitamins_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::SetPrisonerToMonitor(class APrisoner** Prisoner, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetPrisonerToMonitor");

	UVitamins_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Vitamins.Vitamins_C.AddVitaminToParameterLines
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParameterPercentageLine_C* NewItem                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UVitamins_C::AddVitaminToParameterLines(class UParameterPercentageLine_C* NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AddVitaminToParameterLines");

	UVitamins_C_AddVitaminToParameterLines_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray
// (Public, BlueprintCallable, BlueprintEvent)

void UVitamins_C::PopulateVitaminsParameterLinesArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.PopulateVitaminsParameterLinesArray");

	UVitamins_C_PopulateVitaminsParameterLinesArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UVitamins_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Init");

	UVitamins_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UVitamins_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetDefaultTitle");

	UVitamins_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetContentVisibility");

	UVitamins_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVitamins_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColor");

	UVitamins_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UVitamins_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SetTextColorOfVerticalBox");

	UVitamins_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UVitamins_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetTitleText");

	UVitamins_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Vitamins.Vitamins_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UVitamins_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.GetDefaultTitle");

	UVitamins_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Vitamins.Vitamins_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UVitamins_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.SelectCustomColor");

	UVitamins_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Vitamins.Vitamins_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVitamins_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Construct");

	UVitamins_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.Tick");

	UVitamins_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UVitamins_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnPrisonerSet");

	UVitamins_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.UpdateVitaminsEvent
// (BlueprintCallable, BlueprintEvent)

void UVitamins_C::UpdateVitaminsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.UpdateVitaminsEvent");

	UVitamins_C_UpdateVitaminsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitamins_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOnWindowContent");

	UVitamins_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UVitamins_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.AlarmOffWindowContent");

	UVitamins_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.OnMinimize");

	UVitamins_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVitamins_C::ExecuteUbergraph_Vitamins(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vitamins.Vitamins_C.ExecuteUbergraph_Vitamins");

	UVitamins_C_ExecuteUbergraph_Vitamins_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
