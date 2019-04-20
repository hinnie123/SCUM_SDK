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

// Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
struct UUI_WarningSign_C_InitFromWarningType_Params
{
	EWarningType                                       warningType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WarningSign.UI_WarningSign_C.Construct
struct UUI_WarningSign_C_Construct_Params
{
};

// Function UI_WarningSign.UI_WarningSign_C.Tick
struct UUI_WarningSign_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
struct UUI_WarningSign_C_ExecuteUbergraph_UI_WarningSign_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
