#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
struct UUI_GameEventTeamInfoWidget_C_GetStatWidgetCount_Params
{
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
struct UUI_GameEventTeamInfoWidget_C_GetStatWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGameEventParticipantStatsWidget*            Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
struct UUI_GameEventTeamInfoWidget_C_SetTeamScore_Params
{
	float                                              Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
struct UUI_GameEventTeamInfoWidget_C_ClearWinCounters_Params
{
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
struct UUI_GameEventTeamInfoWidget_C_AddWinCounter_Params
{
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
struct UUI_GameEventTeamInfoWidget_C_RemoveStatWidget_Params
{
	class UGameEventParticipantStatsWidget*            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
struct UUI_GameEventTeamInfoWidget_C_AddStatWidget_Params
{
	class UGameEventParticipantStatsWidget*            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
struct UUI_GameEventTeamInfoWidget_C_AddHeader_Params
{
	class UUI_GameEventTeamHeaderWidget_C*             Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
struct UUI_GameEventTeamInfoWidget_C_Construct_Params
{
};

// Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
struct UUI_GameEventTeamInfoWidget_C_ExecuteUbergraph_UI_GameEventTeamInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
