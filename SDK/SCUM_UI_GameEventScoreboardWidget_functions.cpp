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

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UUI_GameEventScoreboardWidget_C::GetTogglePromptVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility");

	UUI_GameEventScoreboardWidget_C_GetTogglePromptVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::ArrangeTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams");

	UUI_GameEventScoreboardWidget_C_ArrangeTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TeamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::UpdateWinCounters(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters");

	UUI_GameEventScoreboardWidget_C_UpdateWinCounters_Params params;
	params.TeamInfoWidget = TeamInfoWidget;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TeamIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::UpdateTeamScore(class UUI_GameEventTeamInfoWidget_C* TeamInfoWidget, int TeamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore");

	UUI_GameEventScoreboardWidget_C_UpdateTeamScore_Params params;
	params.TeamInfoWidget = TeamInfoWidget;
	params.TeamIndex = TeamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::InitTeamInfoWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets");

	UUI_GameEventScoreboardWidget_C_InitTeamInfoWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::UpdateInfoCard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard");

	UUI_GameEventScoreboardWidget_C_UpdateInfoCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_GameEventScoreboardWidget_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove");

	UUI_GameEventScoreboardWidget_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct");

	UUI_GameEventScoreboardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
// (Event, Public, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::OnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate");

	UUI_GameEventScoreboardWidget_C_OnUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventScoreboardWidget_C::InitializeScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard");

	UUI_GameEventScoreboardWidget_C_InitializeScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventScoreboardWidget_C::ExecuteUbergraph_UI_GameEventScoreboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget");

	UUI_GameEventScoreboardWidget_C_ExecuteUbergraph_UI_GameEventScoreboardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
