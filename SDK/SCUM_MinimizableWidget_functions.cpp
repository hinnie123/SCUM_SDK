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

// Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMouseDoubleClick_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMouseDoubleClick_1");

	UMinimizableWidget_C_OnMouseDoubleClick_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               newMinWidgetSize               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UMinimizableWidget_C::SetMinimizableWidgetSize(const struct FVector2D& newMinWidgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetMinimizableWidgetSize");

	UMinimizableWidget_C_SetMinimizableWidgetSize_Params params;
	params.newMinWidgetSize = newMinWidgetSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               widgetSize                     (Parm, OutParm, IsPlainOldData)

void UMinimizableWidget_C::GetMinimizableWidgetSize(struct FVector2D* widgetSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.GetMinimizableWidgetSize");

	UMinimizableWidget_C_GetMinimizableWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (widgetSize != nullptr)
		*widgetSize = params.widgetSize;
}


// Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldSetAlarmColorOn          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::SetAlarmColor(bool shouldSetAlarmColorOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetAlarmColor");

	UMinimizableWidget_C_SetAlarmColor_Params params;
	params.shouldSetAlarmColorOn = shouldSetAlarmColorOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::SetInitialIconsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.SetInitialIconsVisibility");

	UMinimizableWidget_C_SetInitialIconsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Minimize");

	UMinimizableWidget_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Maximize");

	UMinimizableWidget_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMaximizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMaximizeImageMouseButtonDown");

	UMinimizableWidget_C_OnMaximizeImageMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMinimizableWidget_C::OnMinimizeImageMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimizeImageMouseButtonDown");

	UMinimizableWidget_C_OnMinimizeImageMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::AlarmSwitchOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOff");

	UMinimizableWidget_C_AlarmSwitchOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::AlarmSwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmSwitchOn");

	UMinimizableWidget_C_AlarmSwitchOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Size Changed");

	UMinimizableWidget_C_Event_Widget_Size_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Tick");

	UMinimizableWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Maximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Maximized");

	UMinimizableWidget_C_Event_Widget_Maximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinimizableWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Construct");

	UMinimizableWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::Event_Widget_Minimized()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.Event Widget Minimized");

	UMinimizableWidget_C_Event_Widget_Minimized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.OnMinimize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldMinimize                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::OnMinimize(bool shouldMinimize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.OnMinimize");

	UMinimizableWidget_C_OnMinimize_Params params;
	params.shouldMinimize = shouldMinimize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::WindowContentSizeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WindowContentSizeChanged");

	UMinimizableWidget_C_WindowContentSizeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOnWindowContent");

	UMinimizableWidget_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.AlarmOffWindowContent");

	UMinimizableWidget_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimizableWidget_C::ExecuteUbergraph_MinimizableWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.ExecuteUbergraph_MinimizableWidget");

	UMinimizableWidget_C_ExecuteUbergraph_MinimizableWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyMinimizableWidgetSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyAlarmSwitchedOffEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_NotifyAlarmSwitchedOnEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMinimizableWidget_C::WidgetSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimizableWidget.MinimizableWidget_C.WidgetSizeChangedEventDispatcher__DelegateSignature");

	UMinimizableWidget_C_WidgetSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
