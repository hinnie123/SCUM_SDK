#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
struct UUI_GameEventLeaderboardRow_C_Get_Background_BrushColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
struct UUI_GameEventLeaderboardRow_C_SetRank_Params
{
	int                                                rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
struct UUI_GameEventLeaderboardRow_C_SetStats_Params
{
	struct FString                                     characterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FCharacterStats                             CharacterStats;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
