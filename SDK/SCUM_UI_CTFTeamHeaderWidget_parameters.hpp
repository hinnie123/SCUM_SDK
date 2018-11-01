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

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
struct UUI_CTFTeamHeaderWidget_C_GetPlayerText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
struct UUI_CTFTeamHeaderWidget_C_SetTeamName_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide
struct UUI_CTFTeamHeaderWidget_C_SetLeftSide_Params
{
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide
struct UUI_CTFTeamHeaderWidget_C_SetRightSide_Params
{
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
struct UUI_CTFTeamHeaderWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters
struct UUI_CTFTeamHeaderWidget_C_ClearWinCounters_Params
{
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter
struct UUI_CTFTeamHeaderWidget_C_AddWinCounter_Params
{
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
struct UUI_CTFTeamHeaderWidget_C_SetTeamScore_Params
{
	float*                                             Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
struct UUI_CTFTeamHeaderWidget_C_SetTeamColours_Params
{
	struct FGameEventTeamColours*                      colours;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
struct UUI_CTFTeamHeaderWidget_C_ExecuteUbergraph_UI_CTFTeamHeaderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
