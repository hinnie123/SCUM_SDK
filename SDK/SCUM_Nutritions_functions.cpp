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

// Function Nutritions.Nutritions_C.SetParentsForChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::SetParentsForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetParentsForChildren");

	UNutritions_C_SetParentsForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.shouldAlarmBeOn");

	UNutritions_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::UpdateCaloryWaterConsumRates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateCaloryWaterConsumRates");

	UNutritions_C_UpdateCaloryWaterConsumRates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNutritions_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Init");

	UNutritions_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Update");

	UNutritions_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionPercentages
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::UpdateNutritionPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionPercentages");

	UNutritions_C_UpdateNutritionPercentages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateRDAValues
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::UpdateRDAValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateRDAValues");

	UNutritions_C_UpdateRDAValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionValues
// (Public, BlueprintCallable, BlueprintEvent)

void UNutritions_C::UpdateNutritionValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionValues");

	UNutritions_C_UpdateNutritionValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetDefaultTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UNutritions_C::SetDefaultTitle(const struct FText& defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetDefaultTitle");

	UNutritions_C_SetDefaultTitle_Params params;
	params.defaultTitle = defaultTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::SetContentVisibility(ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetContentVisibility");

	UNutritions_C_SetContentVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNutritions_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColor");

	UNutritions_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            verticalBoxRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UNutritions_C::SetTextColorOfVerticalBox(class UPanelWidget* verticalBoxRef, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SetTextColorOfVerticalBox");

	UNutritions_C_SetTextColorOfVerticalBox_Params params;
	params.verticalBoxRef = verticalBoxRef;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNutritions_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetTitleText");

	UNutritions_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Nutritions.Nutritions_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UNutritions_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.GetDefaultTitle");

	UNutritions_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function Nutritions.Nutritions_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UNutritions_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.SelectCustomColor");

	UNutritions_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function Nutritions.Nutritions_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnMinimize");

	UNutritions_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNutritions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Construct");

	UNutritions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.Tick");

	UNutritions_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.UpdateNutritionsEvent
// (BlueprintCallable, BlueprintEvent)

void UNutritions_C::UpdateNutritionsEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.UpdateNutritionsEvent");

	UNutritions_C_UpdateNutritionsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UNutritions_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.OnPrisonerSet");

	UNutritions_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UNutritions_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOnWindowContent");

	UNutritions_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UNutritions_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.AlarmOffWindowContent");

	UNutritions_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNutritions_C::ExecuteUbergraph_Nutritions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Nutritions.Nutritions_C.ExecuteUbergraph_Nutritions");

	UNutritions_C_ExecuteUbergraph_Nutritions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
