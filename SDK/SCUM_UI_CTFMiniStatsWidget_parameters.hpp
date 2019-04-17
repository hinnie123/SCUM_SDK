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

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.GetColor
struct UUI_CTFMiniStatsWidget_C_GetColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.UpdateStats
struct UUI_CTFMiniStatsWidget_C_UpdateStats_Params
{
};

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.FillLabels
struct UUI_CTFMiniStatsWidget_C_FillLabels_Params
{
};

// Function UI_CTFMiniStatsWidget.UI_CTFMiniStatsWidget_C.ExecuteUbergraph_UI_CTFMiniStatsWidget
struct UUI_CTFMiniStatsWidget_C_ExecuteUbergraph_UI_CTFMiniStatsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
