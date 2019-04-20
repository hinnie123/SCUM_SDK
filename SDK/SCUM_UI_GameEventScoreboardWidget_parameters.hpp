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

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
struct UUI_GameEventScoreboardWidget_C_GetTogglePromptVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
struct UUI_GameEventScoreboardWidget_C_ArrangeTeams_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
struct UUI_GameEventScoreboardWidget_C_UpdateWinCounters_Params
{
	class UUI_GameEventTeamInfoWidget_C*               TeamInfoWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TeamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
struct UUI_GameEventScoreboardWidget_C_UpdateTeamScore_Params
{
	class UUI_GameEventTeamInfoWidget_C*               TeamInfoWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TeamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
struct UUI_GameEventScoreboardWidget_C_InitTeamInfoWidgets_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
struct UUI_GameEventScoreboardWidget_C_UpdateInfoCard_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
struct UUI_GameEventScoreboardWidget_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
struct UUI_GameEventScoreboardWidget_C_Construct_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
struct UUI_GameEventScoreboardWidget_C_OnUpdate_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
struct UUI_GameEventScoreboardWidget_C_InitializeScoreboard_Params
{
};

// Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
struct UUI_GameEventScoreboardWidget_C_ExecuteUbergraph_UI_GameEventScoreboardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
