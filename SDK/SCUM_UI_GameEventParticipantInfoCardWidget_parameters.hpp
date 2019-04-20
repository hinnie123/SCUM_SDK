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

// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.UpdateStats
struct UUI_GameEventParticipantInfoCardWidget_C_UpdateStats_Params
{
	class APrisoner**                                  Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GameEventParticipantInfoCardWidget.UI_GameEventParticipantInfoCardWidget_C.ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget
struct UUI_GameEventParticipantInfoCardWidget_C_ExecuteUbergraph_UI_GameEventParticipantInfoCardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
