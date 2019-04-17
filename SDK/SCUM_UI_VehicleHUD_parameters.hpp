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

// Function UI_VehicleHUD.UI_VehicleHUD_C.GetHealthBarCaption
struct UUI_VehicleHUD_C_GetHealthBarCaption_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_VehicleHUD.UI_VehicleHUD_C.GetMainVisibility
struct UUI_VehicleHUD_C_GetMainVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_VehicleHUD.UI_VehicleHUD_C.Tick
struct UUI_VehicleHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_VehicleHUD.UI_VehicleHUD_C.ExecuteUbergraph_UI_VehicleHUD
struct UUI_VehicleHUD_C_ExecuteUbergraph_UI_VehicleHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
