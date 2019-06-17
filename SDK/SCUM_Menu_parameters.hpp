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

// Function Menu.Menu_C.UpdateDroneVisual
struct AMenu_C_UpdateDroneVisual_Params
{
};

// Function Menu.Menu_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
struct AMenu_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.ReceiveBeginPlay
struct AMenu_C_ReceiveBeginPlay_Params
{
};

// Function Menu.Menu_C.ReceiveTick
struct AMenu_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Recapture
struct AMenu_C_Recapture_Params
{
};

// Function Menu.Menu_C.ExecuteUbergraph_Menu
struct AMenu_C_ExecuteUbergraph_Menu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
