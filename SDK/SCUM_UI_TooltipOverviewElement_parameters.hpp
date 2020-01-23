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

// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.PreConstruct
struct UUI_TooltipOverviewElement_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnNumberDataChanged
struct UUI_TooltipOverviewElement_C_OnNumberDataChanged_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.OnTextDataChanged
struct UUI_TooltipOverviewElement_C_OnTextDataChanged_Params
{
	struct FText*                                      Value;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_TooltipOverviewElement.UI_TooltipOverviewElement_C.ExecuteUbergraph_UI_TooltipOverviewElement
struct UUI_TooltipOverviewElement_C_ExecuteUbergraph_UI_TooltipOverviewElement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
