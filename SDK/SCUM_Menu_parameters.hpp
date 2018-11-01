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
