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

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_PenaltyCountdown_Visibility
struct UUI_SpawnScreenWidget_C_Get_PenaltyCountdown_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Get_WaitTimeText
struct UUI_SpawnScreenWidget_C_Get_WaitTimeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetWaitTimeInSeconds
struct UUI_SpawnScreenWidget_C_GetWaitTimeInSeconds_Params
{
	int                                                WaitSeconds;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.CanSpawn
struct UUI_SpawnScreenWidget_C_CanSpawn_Params
{
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnKeyDown
struct UUI_SpawnScreenWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.GetButtonVisibility
struct UUI_SpawnScreenWidget_C_GetButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.OnSpawnAccept
struct UUI_SpawnScreenWidget_C_OnSpawnAccept_Params
{
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.UpdateInfo
struct UUI_SpawnScreenWidget_C_UpdateInfo_Params
{
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnScreenWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.Tick
struct UUI_SpawnScreenWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnScreenWidget.UI_SpawnScreenWidget_C.ExecuteUbergraph_UI_SpawnScreenWidget
struct UUI_SpawnScreenWidget_C_ExecuteUbergraph_UI_SpawnScreenWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
