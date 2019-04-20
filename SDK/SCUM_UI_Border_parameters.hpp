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

// Function UI_Border.UI_Border_C.SetColor
struct UUI_Border_C_SetColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_Border.UI_Border_C.OnSynchronizeProperties
struct UUI_Border_C_OnSynchronizeProperties_Params
{
};

// Function UI_Border.UI_Border_C.ExecuteUbergraph_UI_Border
struct UUI_Border_C_ExecuteUbergraph_UI_Border_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
