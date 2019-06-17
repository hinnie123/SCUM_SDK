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

// Function UI_KeyBinding.UI_KeyBinding_C.BindKey
struct UUI_KeyBinding_C_BindKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
struct UUI_KeyBinding_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KeyBinding.UI_KeyBinding_C.Init
struct UUI_KeyBinding_C_Init_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
struct UUI_KeyBinding_C_OnSynchronizeProperties_Params
{
};

// Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
struct UUI_KeyBinding_C_OnDeselected_Params
{
};

// Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
struct UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
struct UUI_KeyBinding_C_OnRebindInitiated__DelegateSignature_Params
{
	class UUI_KeyBinding_C*                            keyBindingWidget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
struct UUI_KeyBinding_C_KeyPressed__DelegateSignature_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        actionKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
