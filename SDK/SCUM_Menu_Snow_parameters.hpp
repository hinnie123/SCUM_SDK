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

// Function Menu_Snow.Menu_Snow_C.UpdateDroneVisual
struct AMenu_Snow_C_UpdateDroneVisual_Params
{
};

// Function Menu_Snow.Menu_Snow_C.InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1
struct AMenu_Snow_C_InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_Snow.Menu_Snow_C.ReceiveBeginPlay
struct AMenu_Snow_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Snow.Menu_Snow_C.ReceiveTick
struct AMenu_Snow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Snow.Menu_Snow_C.Recapture
struct AMenu_Snow_C_Recapture_Params
{
};

// Function Menu_Snow.Menu_Snow_C.ExecuteUbergraph_Menu_Snow
struct AMenu_Snow_C_ExecuteUbergraph_Menu_Snow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
