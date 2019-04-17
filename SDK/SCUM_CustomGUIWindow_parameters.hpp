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

// Function CustomGUIWindow.CustomGUIWindow_C.GetTitle
struct UCustomGUIWindow_C_GetTitle_Params
{
	struct FText                                       Title;                                                    // (Parm, OutParm)
};

// Function CustomGUIWindow.CustomGUIWindow_C.SetTitle
struct UCustomGUIWindow_C_SetTitle_Params
{
	struct FText                                       titleToSet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOnWindowContent
struct UCustomGUIWindow_C_AlarmOnWindowContent_Params
{
};

// Function CustomGUIWindow.CustomGUIWindow_C.AlarmOffWindowContent
struct UCustomGUIWindow_C_AlarmOffWindowContent_Params
{
};

// Function CustomGUIWindow.CustomGUIWindow_C.ExecuteUbergraph_CustomGUIWindow
struct UCustomGUIWindow_C_ExecuteUbergraph_CustomGUIWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
