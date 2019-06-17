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

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::SetTopShownCount(int count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount");

	UUI_GameEventLeaderboardWidget_C_SetTopShownCount_Params params;
	params.count = count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameEventLeaderboardRow_C* row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::AssignRowColor(class UUI_GameEventLeaderboardRow_C* row, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor");

	UUI_GameEventLeaderboardWidget_C_AssignRowColor_Params params;
	params.row = row;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdateTopList()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList");

	UUI_GameEventLeaderboardWidget_C_UpdateTopList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEventsRankingStatsOrderByField orderByField                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESortOrder                     sortOrder                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::RefreshData(EEventsRankingStatsOrderByField orderByField, ESortOrder sortOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData");

	UUI_GameEventLeaderboardWidget_C_RefreshData_Params params;
	params.orderByField = orderByField;
	params.sortOrder = sortOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::UpdateRankingList(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList");

	UUI_GameEventLeaderboardWidget_C_UpdateRankingList_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEventsRankingStatsItem> EventsRankingStatsItems        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UVerticalBox*            TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::UpdateList(class UVerticalBox* TargetWidget, TArray<struct FEventsRankingStatsItem>* EventsRankingStatsItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList");

	UUI_GameEventLeaderboardWidget_C_UpdateList_Params params;
	params.TargetWidget = TargetWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventsRankingStatsItems != nullptr)
		*EventsRankingStatsItems = params.EventsRankingStatsItems;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct");

	UUI_GameEventLeaderboardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct");

	UUI_GameEventLeaderboardWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
// (Event, Public, BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdateTopPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers");

	UUI_GameEventLeaderboardWidget_C_UpdateTopPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
// (Event, Public, BlueprintEvent)

void UUI_GameEventLeaderboardWidget_C::UpdatePlayerRanking()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking");

	UUI_GameEventLeaderboardWidget_C_UpdatePlayerRanking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardWidget_C::ExecuteUbergraph_UI_GameEventLeaderboardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget");

	UUI_GameEventLeaderboardWidget_C_ExecuteUbergraph_UI_GameEventLeaderboardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
