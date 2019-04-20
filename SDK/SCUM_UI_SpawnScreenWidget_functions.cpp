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

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::Get_PenaltyCountdown_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility");

	UUI_SpawnScreenWidget_C_Get_PenaltyCountdown_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_SpawnScreenWidget_C::Get_WaitTimeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText");

	UUI_SpawnScreenWidget_C_Get_WaitTimeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaitSeconds                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::GetWaitTimeInSeconds(int* WaitSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds");

	UUI_SpawnScreenWidget_C_GetWaitTimeInSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaitSeconds != nullptr)
		*WaitSeconds = params.WaitSeconds;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanSpawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::CanSpawn(bool* CanSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn");

	UUI_SpawnScreenWidget_C_CanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSpawn != nullptr)
		*CanSpawn = params.CanSpawn;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_SpawnScreenWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown");

	UUI_SpawnScreenWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_SpawnScreenWidget_C::GetButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetButtonVisibility");

	UUI_SpawnScreenWidget_C_GetButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpawnScreenWidget_C::OnSpawnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept");

	UUI_SpawnScreenWidget_C_OnSpawnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          loadoutMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::UpdateInfo(bool* loadoutMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo");

	UUI_SpawnScreenWidget_C_UpdateInfo_Params params;
	params.loadoutMenu = loadoutMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SpawnScreenWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_SpawnScreenWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick");

	UUI_SpawnScreenWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.EnableRespawnOption
// (Event, Public, BlueprintEvent)
// Parameters:
// ERespawnOption*                Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::EnableRespawnOption(ERespawnOption* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.EnableRespawnOption");

	UUI_SpawnScreenWidget_C_EnableRespawnOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpawnScreenWidget_C::ExecuteUbergraph_UI_SpawnScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget");

	UUI_SpawnScreenWidget_C_ExecuteUbergraph_UI_SpawnScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
