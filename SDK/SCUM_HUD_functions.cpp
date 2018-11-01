// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD.HUD_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UHUD_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVisibility_1");

	UHUD_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsChatOpen
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::IsChatOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsChatOpen");

	UHUD_C_IsChatOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetCraftingPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCraftingPanelWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCraftingPanelWidget* UHUD_C::GetCraftingPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetCraftingPanel");

	UHUD_C_GetCraftingPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetMainCanvasVisibility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::GetMainCanvasVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetMainCanvasVisibility");

	UHUD_C_GetMainCanvasVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTempDropZoneTimeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetTempDropZoneTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTempDropZoneTimeText");

	UHUD_C_GetTempDropZoneTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetWatermarkText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetWatermarkText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetWatermarkText");

	UHUD_C_GetWatermarkText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetDebugInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_C::GetDebugInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDebugInfoText");

	UHUD_C_GetDebugInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTabModeSwitcherWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTabModeSwitcherWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTabModeSwitcherWidget* UHUD_C::GetTabModeSwitcherWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTabModeSwitcherWidget");

	UHUD_C_GetTabModeSwitcherWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCURightPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UHUD_C::GetBCURightPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCURightPanel");

	UHUD_C_GetBCURightPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetBCULeftPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UHUD_C::GetBCULeftPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetBCULeftPanel");

	UHUD_C_GetBCULeftPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetHandPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UHandPanel*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHandPanel* UHUD_C::GetHandPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetHandPanel");

	UHUD_C_GetHandPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetInventoryPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInventoryPanelSecondIteration* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInventoryPanelSecondIteration* UHUD_C::GetInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetInventoryPanel");

	UHUD_C_GetInventoryPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetVicinityPanel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UVicinityPanelSecondIteration* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVicinityPanelSecondIteration* UHUD_C::GetVicinityPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetVicinityPanel");

	UHUD_C_GetVicinityPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.CompleteInitialization
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::CompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteInitialization");

	UHUD_C_CompleteInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.StartInitialization
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::StartInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartInitialization");

	UHUD_C_StartInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.CompleteMonitorsInitialization
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::CompleteMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CompleteMonitorsInitialization");

	UHUD_C_CompleteMonitorsInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShouldCompleteInitialization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::ShouldCompleteInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldCompleteInitialization");

	UHUD_C_ShouldCompleteInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.IsEverythingReadyForInitialization
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isEverythingReady              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::IsEverythingReadyForInitialization(bool* isEverythingReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsEverythingReadyForInitialization");

	UHUD_C_IsEverythingReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isEverythingReady != nullptr)
		*isEverythingReady = params.isEverythingReady;
}


// Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::IsOwningPrisonerWithComponentsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPrisonerWithComponentsValid");

	UHUD_C_IsOwningPrisonerWithComponentsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetOwningPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::GetOwningPrisoner(bool* Success, class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetOwningPrisoner");

	UHUD_C_GetOwningPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.IsOwningPlayerPawnValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isPlayerPawnValid              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::IsOwningPlayerPawnValid(bool* isPlayerPawnValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerPawnValid");

	UHUD_C_IsOwningPlayerPawnValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayerPawnValid != nullptr)
		*isPlayerPawnValid = params.isPlayerPawnValid;
}


// Function HUD.HUD_C.IsOwningPlayerControllerValid
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isPlayerControllerValid        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::IsOwningPlayerControllerValid(bool* isPlayerControllerValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.IsOwningPlayerControllerValid");

	UHUD_C_IsOwningPlayerControllerValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isPlayerControllerValid != nullptr)
		*isPlayerControllerValid = params.isPlayerControllerValid;
}


// Function HUD.HUD_C.CheckIfReadyForInitialization
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::CheckIfReadyForInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CheckIfReadyForInitialization");

	UHUD_C_CheckIfReadyForInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AttachHUDMonitors
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::AttachHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AttachHUDMonitors");

	UHUD_C_AttachHUDMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.StartMonitorsInitialization
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::StartMonitorsInitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.StartMonitorsInitialization");

	UHUD_C_StartMonitorsInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.PrisonerValidation
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::PrisonerValidation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.PrisonerValidation");

	UHUD_C_PrisonerValidation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetUpVicinityWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetUpVicinityWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetUpVicinityWidget");

	UHUD_C_SetUpVicinityWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetVicinityWidgetFromCode
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetVicinityWidgetFromCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetVicinityWidgetFromCode");

	UHUD_C_SetVicinityWidgetFromCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShouldSerializeWidgetLayout
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHUD_C::ShouldSerializeWidgetLayout(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShouldSerializeWidgetLayout");

	UHUD_C_ShouldSerializeWidgetLayout_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.GetTopLevelPanelWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelWidget* UHUD_C::GetTopLevelPanelWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetTopLevelPanelWidget");

	UHUD_C_GetTopLevelPanelWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.ShowWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWarningType                   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowWarning(EWarningType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowWarning");

	UHUD_C_ShowWarning_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.RefreshMonitorSizes
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::RefreshMonitorSizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RefreshMonitorSizes");

	UHUD_C_RefreshMonitorSizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPrisonerToMonitorOnChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetPrisonerToMonitorOnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitorOnChildren");

	UHUD_C_SetPrisonerToMonitorOnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ToggleAllMonitorsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::ToggleAllMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleAllMonitorsVisibility");

	UHUD_C_ToggleAllMonitorsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HideLifeIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::HideLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideLifeIndicators");

	UHUD_C_HideLifeIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowLifeIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::ShowLifeIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowLifeIndicators");

	UHUD_C_ShowLifeIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.HideMonitors
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::HideMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.HideMonitors");

	UHUD_C_HideMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowMonitors
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::ShowMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowMonitors");

	UHUD_C_ShowMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetupHUDMonitors
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::SetupHUDMonitors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetupHUDMonitors");

	UHUD_C_SetupHUDMonitors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPrisonerToMonitor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrisoner*               Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetPrisonerToMonitor(class APrisoner* Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisonerToMonitor");

	UHUD_C_SetPrisonerToMonitor_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetDefaultPrisonerToMonitor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetDefaultPrisonerToMonitor(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetDefaultPrisonerToMonitor");

	UHUD_C_SetDefaultPrisonerToMonitor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function HUD.HUD_C.GetDefaultPrisoner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrisoner*               Prisoner                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_C::GetDefaultPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetDefaultPrisoner");

	UHUD_C_GetDefaultPrisoner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prisoner != nullptr)
		*Prisoner = params.Prisoner;
}


// Function HUD.HUD_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UHUD_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnKeyUp");

	UHUD_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD.HUD_C.UpdateCircularProgressBarsPercentages
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::UpdateCircularProgressBarsPercentages()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateCircularProgressBarsPercentages");

	UHUD_C_UpdateCircularProgressBarsPercentages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.GetPrisonerLifeComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrisonerLifeComponent*  LifeComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_C::GetPrisonerLifeComponent(class UPrisonerLifeComponent** LifeComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.GetPrisonerLifeComponent");

	UHUD_C_GetPrisonerLifeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LifeComponent != nullptr)
		*LifeComponent = params.LifeComponent;
}


// Function HUD.HUD_C.ToggleMonitorsVisibility
// (Event, Public, BlueprintEvent)

void UHUD_C::ToggleMonitorsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ToggleMonitorsVisibility");

	UHUD_C_ToggleMonitorsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPerformanceMonitorMaximized
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnPerformanceMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPerformanceMonitorMaximized");

	UHUD_C_OnPerformanceMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnRDAMonitorMaximized
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnRDAMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnRDAMonitorMaximized");

	UHUD_C_OnRDAMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnBCUBodyMonitorMaximized
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnBCUBodyMonitorMaximized()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnBCUBodyMonitorMaximized");

	UHUD_C_OnBCUBodyMonitorMaximized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessageToScreen
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          beep                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddMessageToScreen(struct FText* Text, bool* beep)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageToScreen");

	UHUD_C_AddMessageToScreen_Params params;
	params.Text = Text;
	params.beep = beep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddTeammateName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_C::AddTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddTeammateName");

	UHUD_C_AddTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.RemoveTeammateName
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_C::RemoveTeammateName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.RemoveTeammateName");

	UHUD_C_RemoveTeammateName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddWarning
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWarningType*                  warningType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddWarning(EWarningType* warningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddWarning");

	UHUD_C_AddWarning_Params params;
	params.warningType = warningType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddObjective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowNotification               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddObjective(class ABP_MissionObjective_C* Objective, bool PlaySound, bool ShowNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddObjective");

	UHUD_C_AddObjective_Params params;
	params.Objective = Objective;
	params.PlaySound = PlaySound;
	params.ShowNotification = ShowNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessageWithColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMessageType>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UHUD_C::AddMessageWithColor(TEnumAsByte<EMessageType> Type, const struct FText& Text, float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessageWithColor");

	UHUD_C_AddMessageWithColor_Params params;
	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ClearTeammateNames
// (Event, Public, BlueprintEvent)

void UHUD_C::ClearTeammateNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearTeammateNames");

	UHUD_C_ClearTeammateNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ObjectiveChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MissionObjective_C*  sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ObjectiveChanged(class ABP_MissionObjective_C* sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ObjectiveChanged");

	UHUD_C_ObjectiveChanged_Params params;
	params.sender = sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.UpdateAttributesHistory
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::UpdateAttributesHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.UpdateAttributesHistory");

	UHUD_C_UpdateAttributesHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddChatLine
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                string                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EChatType*                     chatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddChatLine(struct FString* string, EChatType* chatType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddChatLine");

	UHUD_C_AddChatLine_Params params;
	params.string = string;
	params.chatType = chatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetPrisoner
// (Event, Public, BlueprintEvent)
// Parameters:
// class APrisoner**              Prisoner                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetPrisoner(class APrisoner** Prisoner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetPrisoner");

	UHUD_C_SetPrisoner_Params params;
	params.Prisoner = Prisoner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OnPrisonerSet
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::OnPrisonerSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OnPrisonerSet");

	UHUD_C_OnPrisonerSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Construct");

	UHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Shake
// (BlueprintCallable, BlueprintEvent)

void UHUD_C::Shake()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Shake");

	UHUD_C_Shake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.AddMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMessageType>      Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::AddMessage(TEnumAsByte<EMessageType> Type, const struct FText& Text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.AddMessage");

	UHUD_C_AddMessage_Params params;
	params.Type = Type;
	params.Text = Text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetMainCanvasVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetMainCanvasVisibility(bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetMainCanvasVisibility");

	UHUD_C_SetMainCanvasVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SwitchTabMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SwitchTabMode(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SwitchTabMode");

	UHUD_C_SwitchTabMode_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowNotification
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowNotification(struct FString* Message, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowNotification");

	UHUD_C_ShowNotification_Params params;
	params.Message = Message;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ClearNotifications
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UHUD_C::ClearNotifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ClearNotifications");

	UHUD_C_ClearNotifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.SetTabEnabled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETabMode*                      Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::SetTabEnabled(ETabMode* Tab, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.SetTabEnabled");

	UHUD_C_SetTabEnabled_Params params;
	params.Tab = Tab;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ShowKillFeedNotification
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  prefix                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  characterName                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  suffix                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ShowKillFeedNotification(struct FText* prefix, struct FText* characterName, struct FText* suffix, bool* ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ShowKillFeedNotification");

	UHUD_C_ShowKillFeedNotification_Params params;
	params.prefix = prefix;
	params.characterName = characterName;
	params.suffix = suffix;
	params.ping = ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.OpenChat
// (Event, Public, BlueprintEvent)

void UHUD_C::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.OpenChat");

	UHUD_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.CloseChat
// (Event, Public, BlueprintEvent)

void UHUD_C::CloseChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.CloseChat");

	UHUD_C_CloseChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.Tick");

	UHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD.HUD_C.ExecuteUbergraph_HUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_C::ExecuteUbergraph_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD.HUD_C.ExecuteUbergraph_HUD");

	UHUD_C_ExecuteUbergraph_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
