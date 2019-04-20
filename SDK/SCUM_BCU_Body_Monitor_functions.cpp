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

// Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           shouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::shouldAlarmBeOn(bool* shouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.shouldAlarmBeOn");

	UBCU_Body_Monitor_C_shouldAlarmBeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (shouldAlarmBeOn != nullptr)
		*shouldAlarmBeOn = params.shouldAlarmBeOn;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, IsPlainOldData)

void UBCU_Body_Monitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetContentSize");

	UBCU_Body_Monitor_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetPrisonerToMonitorOnChildren");

	UBCU_Body_Monitor_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles
// (Public, BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::SetSubTitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SetSubTitles");

	UBCU_Body_Monitor_C_SetSubTitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBCU_Body_Monitor_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetTitleText");

	UBCU_Body_Monitor_C_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void UBCU_Body_Monitor_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.GetDefaultTitle");

	UBCU_Body_Monitor_C_GetDefaultTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = params.defaultTitle;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void UBCU_Body_Monitor_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.SelectCustomColor");

	UBCU_Body_Monitor_C_SelectCustomColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOn");

	UBCU_Body_Monitor_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmSwitchOff");

	UBCU_Body_Monitor_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnSickness");

	UBCU_Body_Monitor_C_AlarmOnSickness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffSickness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffSickness");

	UBCU_Body_Monitor_C_AlarmOffSickness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnBodyCondition");

	UBCU_Body_Monitor_C_AlarmOnBodyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffBodyCondition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffBodyCondition");

	UBCU_Body_Monitor_C_AlarmOffBodyCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::BCUBodyMonitorContentSizeChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorContentSizeChangedEvent");

	UBCU_Body_Monitor_C_BCUBodyMonitorContentSizeChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnPrisonerSet");

	UBCU_Body_Monitor_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Tick");

	UBCU_Body_Monitor_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBCU_Body_Monitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.Construct");

	UBCU_Body_Monitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.OnMinimize");

	UBCU_Body_Monitor_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.WindowContentSizeChanged");

	UBCU_Body_Monitor_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOnWindowContent");

	UBCU_Body_Monitor_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UBCU_Body_Monitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.AlarmOffWindowContent");

	UBCU_Body_Monitor_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBCU_Body_Monitor_C::ExecuteUbergraph_BCU_Body_Monitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.ExecuteUbergraph_BCU_Body_Monitor");

	UBCU_Body_Monitor_C_ExecuteUbergraph_BCU_Body_Monitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Size                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBCU_Body_Monitor_C::BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature(const struct FVector2D& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BCU_Body_Monitor.BCU_Body_Monitor_C.BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature");

	UBCU_Body_Monitor_C_BCUBodyMonitorSizeChangedEventDispatcher__DelegateSignature_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
