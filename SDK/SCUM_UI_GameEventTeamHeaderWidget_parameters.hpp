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

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
struct UUI_GameEventTeamHeaderWidget_C_SetTeamIndex_Params
{
	int                                                TeamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
struct UUI_GameEventTeamHeaderWidget_C_SetTeamScore_Params
{
	float                                              Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
struct UUI_GameEventTeamHeaderWidget_C_SetRightSide_Params
{
};

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
struct UUI_GameEventTeamHeaderWidget_C_SetLeftSide_Params
{
};

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
struct UUI_GameEventTeamHeaderWidget_C_SetTeamColours_Params
{
	struct FGameEventTeamColours                       colours;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
struct UUI_GameEventTeamHeaderWidget_C_SetTeamName_Params
{
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
