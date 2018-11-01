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

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::GetStatWidgetCount(int* count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount");

	UUI_GameEventTeamInfoWidget_C_GetStatWidgetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (count != nullptr)
		*count = params.count;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGameEventParticipantStatsWidget* Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::GetStatWidget(int Index, class UGameEventParticipantStatsWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget");

	UUI_GameEventTeamInfoWidget_C_GetStatWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::SetTeamScore(float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore");

	UUI_GameEventTeamInfoWidget_C_SetTeamScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::ClearWinCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters");

	UUI_GameEventTeamInfoWidget_C_ClearWinCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::AddWinCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter");

	UUI_GameEventTeamInfoWidget_C_AddWinCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameEventParticipantStatsWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::RemoveStatWidget(class UGameEventParticipantStatsWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget");

	UUI_GameEventTeamInfoWidget_C_RemoveStatWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameEventParticipantStatsWidget* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::AddStatWidget(class UGameEventParticipantStatsWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget");

	UUI_GameEventTeamInfoWidget_C_AddStatWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameEventTeamHeaderWidget_C* Header                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::AddHeader(class UUI_GameEventTeamHeaderWidget_C* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader");

	UUI_GameEventTeamInfoWidget_C_AddHeader_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventTeamInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct");

	UUI_GameEventTeamInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventTeamInfoWidget_C::ExecuteUbergraph_UI_GameEventTeamInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget");

	UUI_GameEventTeamInfoWidget_C_ExecuteUbergraph_UI_GameEventTeamInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
