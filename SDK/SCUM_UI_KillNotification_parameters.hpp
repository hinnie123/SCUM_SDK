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

// Function UI_KillNotification.UI_KillNotification_C.SetMessage
struct UUI_KillNotification_C_SetMessage_Params
{
	struct FText                                       prefix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       characterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       suffix;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KillNotification.UI_KillNotification_C.GetMessageVisibility
struct UUI_KillNotification_C_GetMessageVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_KillNotification.UI_KillNotification_C.Construct
struct UUI_KillNotification_C_Construct_Params
{
};

// Function UI_KillNotification.UI_KillNotification_C.ExecuteUbergraph_UI_KillNotification
struct UUI_KillNotification_C_ExecuteUbergraph_UI_KillNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
