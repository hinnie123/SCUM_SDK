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

// Function UI_MenuItem.UI_MenuItem_C.SetItemClassAndIcon
struct UUI_MenuItem_C_SetItemClassAndIcon_Params
{
	class UClass*                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuItem.UI_MenuItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_MenuItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_MenuItem.UI_MenuItem_C.OnSynchronizeProperties
struct UUI_MenuItem_C_OnSynchronizeProperties_Params
{
};

// Function UI_MenuItem.UI_MenuItem_C.ExecuteUbergraph_UI_MenuItem
struct UUI_MenuItem_C_ExecuteUbergraph_UI_MenuItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuItem.UI_MenuItem_C.OnClickedDispatcher__DelegateSignature
struct UUI_MenuItem_C_OnClickedDispatcher__DelegateSignature_Params
{
	class UUI_MenuItem_C*                              Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
