#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
struct UUI_GameEventParticipantStatsWidget_C_UpdateTeamColor_Params
{
	int                                                TeamIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
struct UUI_GameEventParticipantStatsWidget_C_UpdateNumber_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
struct UUI_GameEventParticipantStatsWidget_C_IsOwning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
struct UUI_GameEventParticipantStatsWidget_C_GetSelectedOverlayVisiblity_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
struct UUI_GameEventParticipantStatsWidget_C_GetInactiveOverlayVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
struct UUI_GameEventParticipantStatsWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
struct UUI_GameEventParticipantStatsWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
struct UUI_GameEventParticipantStatsWidget_C_UpdateColours_Params
{
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
struct UUI_GameEventParticipantStatsWidget_C_SetColours_Params
{
	struct FGameEventTeamColours*                      colours;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
struct UUI_GameEventParticipantStatsWidget_C_UpdateStats_Params
{
};

// Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
struct UUI_GameEventParticipantStatsWidget_C_ExecuteUbergraph_UI_GameEventParticipantStatsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
