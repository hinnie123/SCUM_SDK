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

// Function UI_HealthWidget2.UI_HealthWidget2_C.Construct
struct UUI_HealthWidget2_C_Construct_Params
{
};

// Function UI_HealthWidget2.UI_HealthWidget2_C.SetHealthPercentage
struct UUI_HealthWidget2_C_SetHealthPercentage_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HealthWidget2.UI_HealthWidget2_C.SetMaxHealthPercentage
struct UUI_HealthWidget2_C_SetMaxHealthPercentage_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HealthWidget2.UI_HealthWidget2_C.ExecuteUbergraph_UI_HealthWidget2
struct UUI_HealthWidget2_C_ExecuteUbergraph_UI_HealthWidget2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
