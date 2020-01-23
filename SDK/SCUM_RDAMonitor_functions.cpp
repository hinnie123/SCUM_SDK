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

// Function RDAMonitor.RDAMonitor_C.ShouldAlarmBeOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldAlarmBeOn                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::ShouldAlarmBeOn(bool* ShouldAlarmBeOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.ShouldAlarmBeOn");

	URDAMonitor_C_ShouldAlarmBeOn_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ShouldAlarmBeOn != nullptr)
		*ShouldAlarmBeOn = fn_params.ShouldAlarmBeOn;
}


// Function RDAMonitor.RDAMonitor_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, IsPlainOldData)

void URDAMonitor_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetContentSize");

	URDAMonitor_C_GetContentSize_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = fn_params.contentSize;
}


// Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren
// (Public, BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SetPrisonerToMonitorOnChildren");

	URDAMonitor_C_SetPrisonerToMonitorOnChildren_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Init");

	URDAMonitor_C_Init_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.GetTitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText URDAMonitor_C::GetTitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetTitleText");

	URDAMonitor_C_GetTitleText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function RDAMonitor.RDAMonitor_C.GetDefaultTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   defaultTitle                   (Parm, OutParm)

void URDAMonitor_C::GetDefaultTitle(struct FText* defaultTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.GetDefaultTitle");

	URDAMonitor_C_GetDefaultTitle_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (defaultTitle != nullptr)
		*defaultTitle = fn_params.defaultTitle;
}


// Function RDAMonitor.RDAMonitor_C.SelectCustomColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void URDAMonitor_C::SelectCustomColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.SelectCustomColor");

	URDAMonitor_C_SelectCustomColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = fn_params.Color;
}


// Function RDAMonitor.RDAMonitor_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnMinimize");

	URDAMonitor_C_OnMinimize_Params fn_params;
	fn_params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URDAMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Construct");

	URDAMonitor_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.Tick");

	URDAMonitor_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::MinimizableWidgetSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.MinimizableWidgetSizeChanged");

	URDAMonitor_C_MinimizableWidgetSizeChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::RDAMonitorSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDAMonitorSizeChanged");

	URDAMonitor_C_RDAMonitorSizeChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnPrisonerSet");

	URDAMonitor_C_OnPrisonerSet_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::OnRDAMonitorContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.OnRDAMonitorContentSizeChanged");

	URDAMonitor_C_OnRDAMonitorContentSizeChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.WindowContentSizeChanged");

	URDAMonitor_C_WindowContentSizeChanged_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOnWindowContent");

	URDAMonitor_C_AlarmOnWindowContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void URDAMonitor_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.AlarmOffWindowContent");

	URDAMonitor_C_AlarmOffWindowContent_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URDAMonitor_C::ExecuteUbergraph_RDAMonitor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.ExecuteUbergraph_RDAMonitor");

	URDAMonitor_C_ExecuteUbergraph_RDAMonitor_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               newSize                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void URDAMonitor_C::RDASizeChangeEventDispatcher__DelegateSignature(const struct FVector2D& newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function RDAMonitor.RDAMonitor_C.RDASizeChangeEventDispatcher__DelegateSignature");

	URDAMonitor_C_RDASizeChangeEventDispatcher__DelegateSignature_Params fn_params;
	fn_params.newSize = newSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
