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

// Function PieProgressBar.PieProgressBar_C.HidePieImages
struct UPieProgressBar_C_HidePieImages_Params
{
};

// Function PieProgressBar.PieProgressBar_C.GetPercentageText
struct UPieProgressBar_C_GetPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PieProgressBar.PieProgressBar_C.SetImageColor
struct UPieProgressBar_C_SetImageColor_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.SetTextColor
struct UPieProgressBar_C_SetTextColor_Params
{
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.SetCircularBarColor
struct UPieProgressBar_C_SetCircularBarColor_Params
{
	struct FLinearColor                                CircularBarColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.GetCircularBarColor
struct UPieProgressBar_C_GetCircularBarColor_Params
{
	struct FLinearColor                                CircularBarColor;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.SetOuterCircleColor
struct UPieProgressBar_C_SetOuterCircleColor_Params
{
	struct FLinearColor                                outerCircleColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.GetOuterCircleColor
struct UPieProgressBar_C_GetOuterCircleColor_Params
{
	struct FLinearColor                                outerCircleColor;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.GetNormalColor
struct UPieProgressBar_C_GetNormalColor_Params
{
	struct FLinearColor                                NormalColor;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.SetNormalColor
struct UPieProgressBar_C_SetNormalColor_Params
{
	struct FLinearColor                                NormalColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.UpdatePercentageArc
struct UPieProgressBar_C_UpdatePercentageArc_Params
{
};

// Function PieProgressBar.PieProgressBar_C.OnPercentageChanged
struct UPieProgressBar_C_OnPercentageChanged_Params
{
};

// Function PieProgressBar.PieProgressBar_C.Tick
struct UPieProgressBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PieProgressBar.PieProgressBar_C.Construct
struct UPieProgressBar_C_Construct_Params
{
};

// Function PieProgressBar.PieProgressBar_C.OnSynchronizeProperties
struct UPieProgressBar_C_OnSynchronizeProperties_Params
{
};

// Function PieProgressBar.PieProgressBar_C.ExecuteUbergraph_PieProgressBar
struct UPieProgressBar_C_ExecuteUbergraph_PieProgressBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
