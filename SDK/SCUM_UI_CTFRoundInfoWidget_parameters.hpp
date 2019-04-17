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

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetRoundStatus
struct UUI_CTFRoundInfoWidget_C_GetRoundStatus_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftBoxVisibility
struct UUI_CTFRoundInfoWidget_C_GetTimeLeftBoxVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftDescriptionText
struct UUI_CTFRoundInfoWidget_C_GetTimeLeftDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.GetTimeLeftText
struct UUI_CTFRoundInfoWidget_C_GetTimeLeftText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.SetGameEvent
struct UUI_CTFRoundInfoWidget_C_SetGameEvent_Params
{
	class AGameEventBase**                             gameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CTFRoundInfoWidget.UI_CTFRoundInfoWidget_C.ExecuteUbergraph_UI_CTFRoundInfoWidget
struct UUI_CTFRoundInfoWidget_C_ExecuteUbergraph_UI_CTFRoundInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
