#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
struct UUI_GameEventLeaderboardWidget_C_SetTopShownCount_Params
{
	int                                                count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
struct UUI_GameEventLeaderboardWidget_C_AssignRowColor_Params
{
	class UUI_GameEventLeaderboardRow_C*               row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
struct UUI_GameEventLeaderboardWidget_C_UpdateTopList_Params
{
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
struct UUI_GameEventLeaderboardWidget_C_RefreshData_Params
{
	EEventsRankingStatsOrderByField                    orderByField;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESortOrder                                         sortOrder;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
struct UUI_GameEventLeaderboardWidget_C_UpdateRankingList_Params
{
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
struct UUI_GameEventLeaderboardWidget_C_UpdateList_Params
{
	TArray<struct FEventsRankingStatsItem>             EventsRankingStatsItems;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UVerticalBox*                                TargetWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
struct UUI_GameEventLeaderboardWidget_C_Construct_Params
{
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
struct UUI_GameEventLeaderboardWidget_C_Destruct_Params
{
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
struct UUI_GameEventLeaderboardWidget_C_UpdateTopPlayers_Params
{
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
struct UUI_GameEventLeaderboardWidget_C_UpdatePlayerRanking_Params
{
};

// Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
struct UUI_GameEventLeaderboardWidget_C_ExecuteUbergraph_UI_GameEventLeaderboardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
