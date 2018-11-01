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

// Function UI_TabModeTab.UI_TabModeTab_C.GetIsActive
struct UUI_TabModeTab_C_GetIsActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTab.UI_TabModeTab_C.OnClick
struct UUI_TabModeTab_C_OnClick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_TabModeTab.UI_TabModeTab_C.SetIsActive
struct UUI_TabModeTab_C_SetIsActive_Params
{
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTab.UI_TabModeTab_C.Construct
struct UUI_TabModeTab_C_Construct_Params
{
};

// Function UI_TabModeTab.UI_TabModeTab_C.OnSynchronizeProperties
struct UUI_TabModeTab_C_OnSynchronizeProperties_Params
{
};

// Function UI_TabModeTab.UI_TabModeTab_C.ExecuteUbergraph_UI_TabModeTab
struct UUI_TabModeTab_C_ExecuteUbergraph_UI_TabModeTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TabModeTab.UI_TabModeTab_C.Clicked__DelegateSignature
struct UUI_TabModeTab_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
