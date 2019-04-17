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

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetRoundStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus");

	UUI_CTFRoundInfoWidget_C_GetRoundStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_CTFRoundInfoWidget_C::GetTimeLeftBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility");

	UUI_CTFRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetTimeLeftDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText");

	UUI_CTFRoundInfoWidget_C_GetTimeLeftDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_CTFRoundInfoWidget_C::GetTimeLeftText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText");

	UUI_CTFRoundInfoWidget_C_GetTimeLeftText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEventBase**         gameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFRoundInfoWidget_C::SetGameEvent(class AGameEventBase** gameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent");

	UUI_CTFRoundInfoWidget_C_SetGameEvent_Params params;
	params.gameEvent = gameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_CTFRoundInfoWidget_C::ExecuteUbergraph_UI_CTFRoundInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget");

	UUI_CTFRoundInfoWidget_C_ExecuteUbergraph_UI_CTFRoundInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
