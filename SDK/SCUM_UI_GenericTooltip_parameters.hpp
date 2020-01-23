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

// Function UI_GenericTooltip.UI_GenericTooltip_C.SetText
struct UUI_GenericTooltip_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_GenericTooltip.UI_GenericTooltip_C.PreConstruct
struct UUI_GenericTooltip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericTooltip.UI_GenericTooltip_C.ExecuteUbergraph_UI_GenericTooltip
struct UUI_GenericTooltip_C_ExecuteUbergraph_UI_GenericTooltip_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
