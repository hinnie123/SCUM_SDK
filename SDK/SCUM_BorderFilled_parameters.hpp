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

// Function BorderFilled.BorderFilled_C.UpdateBorderFilled
struct UBorderFilled_C_UpdateBorderFilled_Params
{
};

// Function BorderFilled.BorderFilled_C.SetBottomMarginOn
struct UBorderFilled_C_SetBottomMarginOn_Params
{
	bool                                               shouldBottomMarginBeOn;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.SetPaddingOnBackgroundImage
struct UBorderFilled_C_SetPaddingOnBackgroundImage_Params
{
	float                                              Margin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              marginGap;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.SetColorOnBackgroundImage
struct UBorderFilled_C_SetColorOnBackgroundImage_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.SetBackgroundColor
struct UBorderFilled_C_SetBackgroundColor_Params
{
	struct FLinearColor                                backgroundColorToSet;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.UpdateBackgroundColor
struct UBorderFilled_C_UpdateBackgroundColor_Params
{
	struct FLinearColor                                NewBackgroundColor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.SetBorderColor
struct UBorderFilled_C_SetBorderColor_Params
{
	struct FLinearColor                                borderColorToSet;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BorderFilled.BorderFilled_C.Construct
struct UBorderFilled_C_Construct_Params
{
};

// Function BorderFilled.BorderFilled_C.OnSynchronizeProperties
struct UBorderFilled_C_OnSynchronizeProperties_Params
{
};

// Function BorderFilled.BorderFilled_C.ExecuteUbergraph_BorderFilled
struct UBorderFilled_C_ExecuteUbergraph_BorderFilled_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
