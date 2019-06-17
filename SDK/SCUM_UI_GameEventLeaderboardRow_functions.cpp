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

// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UUI_GameEventLeaderboardRow_C::Get_Background_BrushColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor");

	UUI_GameEventLeaderboardRow_C_Get_Background_BrushColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GameEventLeaderboardRow_C::SetRank(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank");

	UUI_GameEventLeaderboardRow_C_SetRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 characterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FEventsRankingStats     CharacterStats                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GameEventLeaderboardRow_C::SetStats(const struct FString& characterName, const struct FEventsRankingStats& CharacterStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats");

	UUI_GameEventLeaderboardRow_C_SetStats_Params params;
	params.characterName = characterName;
	params.CharacterStats = CharacterStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
