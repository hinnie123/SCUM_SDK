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

// Function FooterV2.FooterV2_C.SetText
struct UFooterV2_C_SetText_Params
{
	struct FText                                       textToSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                textColorToSet;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FooterV2.FooterV2_C.Construct
struct UFooterV2_C_Construct_Params
{
};

// Function FooterV2.FooterV2_C.ExecuteUbergraph_FooterV2
struct UFooterV2_C_ExecuteUbergraph_FooterV2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
