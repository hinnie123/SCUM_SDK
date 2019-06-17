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

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.HighlightPartially
struct UUI_CC_NonSelectableText_C_HighlightPartially_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Unhighlight
struct UUI_CC_NonSelectableText_C_Unhighlight_Params
{
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Highlight
struct UUI_CC_NonSelectableText_C_Highlight_Params
{
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetTextColour
struct UUI_CC_NonSelectableText_C_SetTextColour_Params
{
	struct FLinearColor                                Colour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.SetText
struct UUI_CC_NonSelectableText_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.Construct
struct UUI_CC_NonSelectableText_C_Construct_Params
{
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.OnSynchronizeProperties
struct UUI_CC_NonSelectableText_C_OnSynchronizeProperties_Params
{
};

// Function UI_CC_NonSelectableText.UI_CC_NonSelectableText_C.ExecuteUbergraph_UI_CC_NonSelectableText
struct UUI_CC_NonSelectableText_C_ExecuteUbergraph_UI_CC_NonSelectableText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
