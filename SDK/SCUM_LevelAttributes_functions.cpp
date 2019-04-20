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

// Function LevelAttributes.LevelAttributes_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.shouldAlarmBeOn");

	ULevelAttributes_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function LevelAttributes.LevelAttributes_C.UpdateReferentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          lastReferentValue              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          currentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          tollerance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          timeSinceLastUpdate            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          UpdateInterval                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           referentValueUpdated           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::UpdateReferentValue(float currentValue, float tollerance, float UpdateInterval, float* lastReferentValue, float* timeSinceLastUpdate, bool* referentValueUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateReferentValue");

	ULevelAttributes_C_UpdateReferentValue_Params params;
	params.currentValue = currentValue;
	params.tollerance = tollerance;
	params.UpdateInterval = UpdateInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lastReferentValue != nullptr)
		*lastReferentValue = params.lastReferentValue;
	if (timeSinceLastUpdate != nullptr)
		*timeSinceLastUpdate = params.timeSinceLastUpdate;
	if (referentValueUpdated != nullptr)
		*referentValueUpdated = params.referentValueUpdated;
}


// Function LevelAttributes.LevelAttributes_C.InitAttributeValues
// (Public, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::InitAttributeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.InitAttributeValues");

	ULevelAttributes_C_InitAttributeValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.CalculateChangeSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          currentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          lastValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UpdateInterval                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::CalculateChangeSpeed(float currentValue, float lastValue, float UpdateInterval, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CalculateChangeSpeed");

	ULevelAttributes_C_CalculateChangeSpeed_Params params;
	params.currentValue = currentValue;
	params.lastValue = lastValue;
	params.UpdateInterval = UpdateInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function LevelAttributes.LevelAttributes_C.CheckAttributeLevelAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentAttributeValue          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          dynamicChange                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           alarmRef                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::CheckAttributeLevelAlarm(float currentAttributeValue, float dynamicChange, bool* alarmRef, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CheckAttributeLevelAlarm");

	ULevelAttributes_C_CheckAttributeLevelAlarm_Params params;
	params.currentAttributeValue = currentAttributeValue;
	params.dynamicChange = dynamicChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmRef != nullptr)
		*alarmRef = params.alarmRef;
	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function LevelAttributes.LevelAttributes_C.CheckBFPAlarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          bodyFatPercentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          bodyFatAlarmThreshold          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            alarmCode                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::CheckBFPAlarm(float bodyFatPercentage, float bodyFatAlarmThreshold, int* alarmCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.CheckBFPAlarm");

	ULevelAttributes_C_CheckBFPAlarm_Params params;
	params.bodyFatPercentage = bodyFatPercentage;
	params.bodyFatAlarmThreshold = bodyFatAlarmThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (alarmCode != nullptr)
		*alarmCode = params.alarmCode;
}


// Function LevelAttributes.LevelAttributes_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.Init");

	ULevelAttributes_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.SetMeasurementUnits
// (Public, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::SetMeasurementUnits()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.SetMeasurementUnits");

	ULevelAttributes_C_SetMeasurementUnits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.UpdateParameterLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::UpdateParameterLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateParameterLines");

	ULevelAttributes_C_UpdateParameterLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ULevelAttributes_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.GetTitleText");

	ULevelAttributes_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelAttributes.LevelAttributes_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void ULevelAttributes_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.GetDefaultTitle");

	ULevelAttributes_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function LevelAttributes.LevelAttributes_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void ULevelAttributes_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.SelectCustomColor");

	ULevelAttributes_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function LevelAttributes.LevelAttributes_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.OnMinimize");

	ULevelAttributes_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULevelAttributes_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.Construct");

	ULevelAttributes_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.OnPrisonerSet");

	ULevelAttributes_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.UpdateContent
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::UpdateContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.UpdateContent");

	ULevelAttributes_C_UpdateContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.ShouldActivateAlarm
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::ShouldActivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldActivateAlarm");

	ULevelAttributes_C_ShouldActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.ShouldDeactivateAlarm
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::ShouldDeactivateAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldDeactivateAlarm");

	ULevelAttributes_C_ShouldDeactivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.ShouldActivateBFPAlarm
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::ShouldActivateBFPAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ShouldActivateBFPAlarm");

	ULevelAttributes_C_ShouldActivateBFPAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOnWindowContent");

	ULevelAttributes_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOffWindowContent");

	ULevelAttributes_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.ExecuteUbergraph_LevelAttributes
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelAttributes_C::ExecuteUbergraph_LevelAttributes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.ExecuteUbergraph_LevelAttributes");

	ULevelAttributes_C_ExecuteUbergraph_LevelAttributes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::AlarmOffBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOffBodyConditionEventDispatcher__DelegateSignature");

	ULevelAttributes_C_AlarmOffBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelAttributes.LevelAttributes_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULevelAttributes_C::AlarmOnBodyConditionEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelAttributes.LevelAttributes_C.AlarmOnBodyConditionEventDispatcher__DelegateSignature");

	ULevelAttributes_C_AlarmOnBodyConditionEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
