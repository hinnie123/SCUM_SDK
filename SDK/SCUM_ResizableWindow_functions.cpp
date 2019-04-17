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

// Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 displayLabelName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           footerV2Activity               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           enableResizability             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UHUD_C*                  parentHUDRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::InitializeHUDMonitor(const struct FString& displayLabelName, bool footerV2Activity, bool enableResizability, const struct FText& titleToSet, class UHUD_C* parentHUDRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.InitializeHUDMonitor");

	UResizableWindow_C_InitializeHUDMonitor_Params params;
	params.displayLabelName = displayLabelName;
	params.footerV2Activity = footerV2Activity;
	params.enableResizability = enableResizability;
	params.titleToSet = titleToSet;
	params.parentHUDRef = parentHUDRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SaveHUDLayout
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::SaveHUDLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveHUDLayout");

	UResizableWindow_C_SaveHUDLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetParentHUD
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHUD_C*                  parentHUD                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::GetParentHUD(class UHUD_C** parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetParentHUD");

	UResizableWindow_C_GetParentHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (parentHUD != nullptr)
		*parentHUD = params.parentHUD;
}


// Function ResizableWindow.ResizableWindow_C.SetParentHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_C*                  parentHUD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::SetParentHUD(class UHUD_C* parentHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetParentHUD");

	UResizableWindow_C_SetParentHUD_Params params;
	params.parentHUD = parentHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetSize");

	UResizableWindow_C_GetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::GetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetPosition");

	UResizableWindow_C_GetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.adjustPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               positionToAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGeometry               localGeometry                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Output                         (Parm, OutParm, IsPlainOldData)

void UResizableWindow_C::adjustPosition(const struct FVector2D& positionToAdjust, const struct FGeometry& localGeometry, struct FVector2D* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.adjustPosition");

	UResizableWindow_C_adjustPosition_Params params;
	params.positionToAdjust = positionToAdjust;
	params.localGeometry = localGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::MaximizeMinimizableWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MaximizeMinimizableWidgets");

	UResizableWindow_C_MaximizeMinimizableWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.HasAnyChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            PanelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::HasAnyChildren(class UPanelWidget* PanelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.HasAnyChildren");

	UResizableWindow_C_HasAnyChildren_Params params;
	params.PanelWidget = PanelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnHeaderDoubleClick(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClick");

	UResizableWindow_C_OnHeaderDoubleClick_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       contentWidgetRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::SetUpResizableWindowWithChildRef(class UWindowsContent_C* contentWidgetRef, const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindowWithChildRef");

	UResizableWindow_C_SetUpResizableWindowWithChildRef_Params params;
	params.contentWidgetRef = contentWidgetRef;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AdjustSizeToContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AdjustSizeToContent");

	UResizableWindow_C_AdjustSizeToContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               newSize                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UResizableWindow_C::SetSize(const struct FVector2D& newSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetSize");

	UResizableWindow_C_SetSize_Params params;
	params.newSize = newSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetContentSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               contentSize                    (Parm, OutParm, IsPlainOldData)

void UResizableWindow_C::GetContentSize(struct FVector2D* contentSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentSize");

	UResizableWindow_C_GetContentSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (contentSize != nullptr)
		*contentSize = params.contentSize;
}


// Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enableResizability             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetResizeEnableLocked(bool enableResizability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeEnableLocked");

	UResizableWindow_C_SetResizeEnableLocked_Params params;
	params.enableResizability = enableResizability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldActivateAlarmColor       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ActivateAlarmColor(bool shouldActivateAlarmColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ActivateAlarmColor");

	UResizableWindow_C_ActivateAlarmColor_Params params;
	params.shouldActivateAlarmColor = shouldActivateAlarmColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ShowBorder
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ShowBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ShowBorder");

	UResizableWindow_C_ShowBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::isResizableWindowSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.isResizableWindowSkills");

	UResizableWindow_C_isResizableWindowSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       windowsContentWidget           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::GetWindowsContentWidget(class UWindowsContent_C** windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetWindowsContentWidget");

	UResizableWindow_C_GetWindowsContentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (windowsContentWidget != nullptr)
		*windowsContentWidget = params.windowsContentWidget;
}


// Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       windowsContentWidget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::SetWindowsContentWidget(class UWindowsContent_C* windowsContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetWindowsContentWidget");

	UResizableWindow_C_SetWindowsContentWidget_Params params;
	params.windowsContentWidget = windowsContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           shouldBeActive                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetFooterV2Activity(bool shouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetFooterV2Activity");

	UResizableWindow_C_SetFooterV2Activity_Params params;
	params.shouldBeActive = shouldBeActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetFlags
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ResetFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetFlags");

	UResizableWindow_C_ResetFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Maximize
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Maximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Maximize");

	UResizableWindow_C_Maximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Minimize
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Minimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Minimize");

	UResizableWindow_C_Minimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::GetContentAreaSlotDesiredSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.GetContentAreaSlotDesiredSize");

	UResizableWindow_C_GetContentAreaSlotDesiredSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::SaveCurrentContentAreaSlotSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveCurrentContentAreaSlotSize");

	UResizableWindow_C_SaveCurrentContentAreaSlotSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  contentWidgetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::SetUpResizableWindow(class UClass* contentWidgetClass, const struct FText& titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetUpResizableWindow");

	UResizableWindow_C_SetUpResizableWindow_Params params;
	params.contentWidgetClass = contentWidgetClass;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Init");

	UResizableWindow_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WindowsContentClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::SetContentWidgetClass(class UClass* WindowsContentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetContentWidgetClass");

	UResizableWindow_C_SetContentWidgetClass_Params params;
	params.WindowsContentClass = WindowsContentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowsContent_C*       contentWidgetRef               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UResizableWindow_C::AttachContentWidgetRef(class UWindowsContent_C* contentWidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidgetRef");

	UResizableWindow_C_AttachContentWidgetRef_Params params;
	params.contentWidgetRef = contentWidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AttachContentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  contentWidgetClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::AttachContentWidget(class UClass* contentWidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AttachContentWidget");

	UResizableWindow_C_AttachContentWidget_Params params;
	params.contentWidgetClass = contentWidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent           LocalMouseEvent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D               LastMousePosition              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UResizableWindow_C::CalculateMouseDelta(const struct FPointerEvent& LocalMouseEvent, const struct FVector2D& LastMousePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.CalculateMouseDelta");

	UResizableWindow_C_CalculateMouseDelta_Params params;
	params.LocalMouseEvent = LocalMouseEvent;
	params.LastMousePosition = LastMousePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.IsOffscreen
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent           Input                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UResizableWindow_C::IsOffscreen(const struct FPointerEvent& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.IsOffscreen");

	UResizableWindow_C_IsOffscreen_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseButtonDownOnIRMinimize(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonDownOnIRMinimize");

	UResizableWindow_C_OnMouseButtonDownOnIRMinimize_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.SetResizeColorHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UResizableWindow_C::SetResizeColorHover(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetResizeColorHover");

	UResizableWindow_C_SetResizeColorHover_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DragEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ToggleDragEnabled(bool DragEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleDragEnabled");

	UResizableWindow_C_ToggleDragEnabled_Params params;
	params.DragEnabled = DragEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResizeEnabled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ToggleResizeEnabled(bool ResizeEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ToggleResizeEnabled");

	UResizableWindow_C_ToggleResizeEnabled_Params params;
	params.ResizeEnabled = ResizeEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.DetermineNewSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Original                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               New                            (Parm, OutParm, IsPlainOldData)

void UResizableWindow_C::DetermineNewSize(const struct FVector2D& Original, const struct FVector2D& Delta, struct FVector2D* New)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.DetermineNewSize");

	UResizableWindow_C_DetermineNewSize_Params params;
	params.Original = Original;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (New != nullptr)
		*New = params.New;
}


// Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::MouseButtonUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.MouseButtonUpEvent");

	UResizableWindow_C_MouseButtonUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ResetVariablesToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetVariablesToDefault");

	UResizableWindow_C_ResetVariablesToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnResizeAreaMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnResizeAreaMouseButtonDown");

	UResizableWindow_C_OnResizeAreaMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnHeaderMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderMouseButtonDown");

	UResizableWindow_C_OnHeaderMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseMove");

	UResizableWindow_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UResizableWindow_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseButtonUp");

	UResizableWindow_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ResizableWindow.ResizableWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Tick");

	UResizableWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature
// (BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature");

	UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_495_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature
// (BlueprintEvent)

void UResizableWindow_C::BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature");

	UResizableWindow_C_BndEvt__HeaderWidget_K2Node_ComponentBoundEvent_488_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed
// (BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::Event_RDA_Monitor_Size_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Event RDA Monitor Size Changed");

	UResizableWindow_C_Event_RDA_Monitor_Size_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent
// (BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AlarmOnWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOnWindowContent");

	UResizableWindow_C_AlarmOnWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent
// (BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::AlarmOffWindowContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.AlarmOffWindowContent");

	UResizableWindow_C_AlarmOffWindowContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::OnHeaderDoubleClickEvent(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickEvent");

	UResizableWindow_C_OnHeaderDoubleClickEvent_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnMaximized
// (BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::OnMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMaximized");

	UResizableWindow_C_OnMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SaveLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResizableWindow_C::SaveLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SaveLayout");

	UResizableWindow_C_SaveLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.LoadLayout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UAttributeMapInterface> Attributes                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UResizableWindow_C::LoadLayout(const TScriptInterface<class UAttributeMapInterface>& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.LoadLayout");

	UResizableWindow_C_LoadLayout_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ResetLayout
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ResetLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ResetLayout");

	UResizableWindow_C_ResetLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature
// (BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature");

	UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_72_MouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature
// (BlueprintEvent)

void UResizableWindow_C::BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature");

	UResizableWindow_C_BndEvt__HoveredEventWidget_K2Node_ComponentBoundEvent_67_MouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResizableWindow_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnMouseLeave");

	UResizableWindow_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResizableWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.Construct");

	UResizableWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  titleToSet                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::SetTitle(struct FText* titleToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.SetTitle");

	UResizableWindow_C_SetTitle_Params params;
	params.titleToSet = titleToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResizableWindow_C::ExecuteUbergraph_ResizableWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ExecuteUbergraph_ResizableWindow");

	UResizableWindow_C_ExecuteUbergraph_ResizableWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UResizableWindow_C::OnHeaderDoubleClickDispatcher__DelegateSignature(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.OnHeaderDoubleClickDispatcher__DelegateSignature");

	UResizableWindow_C_OnHeaderDoubleClickDispatcher__DelegateSignature_Params params;
	params.Geometry = Geometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ContentMaximizedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentMaximizedEventDispatcher__DelegateSignature");

	UResizableWindow_C_ContentMaximizedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResizableWindow_C::ContentSizeChangedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResizableWindow.ResizableWindow_C.ContentSizeChangedEventDispatcher__DelegateSignature");

	UResizableWindow_C_ContentSizeChangedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
