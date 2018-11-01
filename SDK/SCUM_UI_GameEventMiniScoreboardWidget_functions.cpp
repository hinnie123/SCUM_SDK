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

// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::UpdateWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters");

	UUI_GameEventMiniScoreboardWidget_C_UpdateWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::UpdateTeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores");

	UUI_GameEventMiniScoreboardWidget_C_UpdateTeamScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::InitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo");

	UUI_GameEventMiniScoreboardWidget_C_InitInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventMiniScoreboardWidget_C::EmptyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage");

	UUI_GameEventMiniScoreboardWidget_C_EmptyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
// (Event, Public, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate");

	UUI_GameEventMiniScoreboardWidget_C_OnUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventMiniScoreboardWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard");

	UUI_GameEventMiniScoreboardWidget_C_InitializeScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventMiniScoreboardWidget_C::ExecuteUbergraph_UI_GameEventMiniScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget");

	UUI_GameEventMiniScoreboardWidget_C_ExecuteUbergraph_UI_GameEventMiniScoreboardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
