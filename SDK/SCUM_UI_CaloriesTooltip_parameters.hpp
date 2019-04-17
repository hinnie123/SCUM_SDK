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

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.UpdatePercentage
struct UUI_CaloriesTooltip_C_UpdatePercentage_Params
{
};

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetTitle
struct UUI_CaloriesTooltip_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetMaxValue
struct UUI_CaloriesTooltip_C_SetMaxValue_Params
{
	float                                              MaxValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayMaxValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CaloriesTooltip.UI_CaloriesTooltip_C.SetValue
struct UUI_CaloriesTooltip_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
