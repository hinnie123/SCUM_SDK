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

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShowText
struct UCircularProgressBarSprites_C_GetCurrentPercentageToShowText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCurrentPercentageToShow
struct UCircularProgressBarSprites_C_GetCurrentPercentageToShow_Params
{
	float                                              currentPercentageToShow;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCurrentPercentageToShow
struct UCircularProgressBarSprites_C_SetCurrentPercentageToShow_Params
{
	float                                              percentageToShow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetPercentageText
struct UCircularProgressBarSprites_C_GetPercentageText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextalarmColorC
struct UCircularProgressBarSprites_C_SetTextalarmColorC_Params
{
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetTextColor
struct UCircularProgressBarSprites_C_SetTextColor_Params
{
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateNormalColor
struct UCircularProgressBarSprites_C_ActivateNormalColor_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetCircularBarColor
struct UCircularProgressBarSprites_C_SetCircularBarColor_Params
{
	struct FLinearColor                                CircularBarColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetCircularBarColor
struct UCircularProgressBarSprites_C_GetCircularBarColor_Params
{
	struct FLinearColor                                CircularBarColor;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetOuterCircleColor
struct UCircularProgressBarSprites_C_SetOuterCircleColor_Params
{
	struct FLinearColor                                outerCircleColor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetOuterCircleColor
struct UCircularProgressBarSprites_C_GetOuterCircleColor_Params
{
	struct FLinearColor                                outerCircleColor;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetNormalColor
struct UCircularProgressBarSprites_C_GetNormalColor_Params
{
	struct FLinearColor                                NormalColor;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetNormalColor
struct UCircularProgressBarSprites_C_SetNormalColor_Params
{
	struct FLinearColor                                NormalColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.GetAlarmColor
struct UCircularProgressBarSprites_C_GetAlarmColor_Params
{
	struct FLinearColor                                AlarmColor;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetAlarmColor
struct UCircularProgressBarSprites_C_SetAlarmColor_Params
{
	struct FLinearColor                                AlarmColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ActivateAlarmColor
struct UCircularProgressBarSprites_C_ActivateAlarmColor_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.UpdatePercentageArc
struct UCircularProgressBarSprites_C_UpdatePercentageArc_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.SetImageAlarmColor
struct UCircularProgressBarSprites_C_SetImageAlarmColor_Params
{
	class UImage*                                      ImageWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnPercentageChanged
struct UCircularProgressBarSprites_C_OnPercentageChanged_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOn
struct UCircularProgressBarSprites_C_AlarmSwitchOn_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.AlarmSwitchOff
struct UCircularProgressBarSprites_C_AlarmSwitchOff_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Tick
struct UCircularProgressBarSprites_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.Construct
struct UCircularProgressBarSprites_C_Construct_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.OnSynchronizeProperties
struct UCircularProgressBarSprites_C_OnSynchronizeProperties_Params
{
};

// Function CircularProgressBarSprites.CircularProgressBarSprites_C.ExecuteUbergraph_CircularProgressBarSprites
struct UCircularProgressBarSprites_C_ExecuteUbergraph_CircularProgressBarSprites_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
