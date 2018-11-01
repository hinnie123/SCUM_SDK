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

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentageSecond
struct UUI_CircularParameter_C_GetPercentageSecond_Params
{
	float                                              percentageSecond;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.DisableAlarm
struct UUI_CircularParameter_C_DisableAlarm_Params
{
};

// Function UI_CircularParameter.UI_CircularParameter_C.EnableAlarm
struct UUI_CircularParameter_C_EnableAlarm_Params
{
	bool                                               above;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.CheckAlarm
struct UUI_CircularParameter_C_CheckAlarm_Params
{
};

// Function UI_CircularParameter.UI_CircularParameter_C.SetDescriptionText
struct UUI_CircularParameter_C_SetDescriptionText_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CircularParameter.UI_CircularParameter_C.SetMeasurementUnit
struct UUI_CircularParameter_C_SetMeasurementUnit_Params
{
	struct FText                                       unit;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CircularParameter.UI_CircularParameter_C.GetMaxValue
struct UUI_CircularParameter_C_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.GetCurrentValue
struct UUI_CircularParameter_C_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.GetPercentage
struct UUI_CircularParameter_C_GetPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.Tick
struct UUI_CircularParameter_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.Construct
struct UUI_CircularParameter_C_Construct_Params
{
};

// Function UI_CircularParameter.UI_CircularParameter_C.SetMaxValue
struct UUI_CircularParameter_C_SetMaxValue_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValue
struct UUI_CircularParameter_C_SetCurrentValue_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseEnter
struct UUI_CircularParameter_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CircularParameter.UI_CircularParameter_C.OnSynchronizeProperties
struct UUI_CircularParameter_C_OnSynchronizeProperties_Params
{
};

// Function UI_CircularParameter.UI_CircularParameter_C.OnMouseLeave
struct UUI_CircularParameter_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CircularParameter.UI_CircularParameter_C.SetCurrentValueSecond
struct UUI_CircularParameter_C_SetCurrentValueSecond_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CircularParameter.UI_CircularParameter_C.ExecuteUbergraph_UI_CircularParameter
struct UUI_CircularParameter_C_ExecuteUbergraph_UI_CircularParameter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
