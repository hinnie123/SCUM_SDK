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

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDoubleClick
struct UUI_OptionsSlider_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseButtonDown
struct UUI_OptionsSlider_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.GetValue
struct UUI_OptionsSlider_C_GetValue_Params
{
	struct FText                                       Value;                                                    // (Parm, OutParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.ChangeValue
struct UUI_OptionsSlider_C_ChangeValue_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.SetTitle
struct UUI_OptionsSlider_C_SetTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsNumbers
struct UUI_OptionsSlider_C_InitAsNumbers_Params
{
	int                                                FirstIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                lastIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.InitAsFlag
struct UUI_OptionsSlider_C_InitAsFlag_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.AddKeyValuePair
struct UUI_OptionsSlider_C_AddKeyValuePair_Params
{
	struct FText                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyUp
struct UUI_OptionsSlider_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.AddValue
struct UUI_OptionsSlider_C_AddValue_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.ClearValues
struct UUI_OptionsSlider_C_ClearValues_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.SetValue
struct UUI_OptionsSlider_C_SetValue_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.Increase
struct UUI_OptionsSlider_C_Increase_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.Decrease
struct UUI_OptionsSlider_C_Decrease_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnKeyDown
struct UUI_OptionsSlider_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusReceived
struct UUI_OptionsSlider_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedHigher
struct UUI_OptionsSlider_C_OnClickedHigher_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnClickedLower
struct UUI_OptionsSlider_C_OnClickedLower_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnSynchronizeProperties
struct UUI_OptionsSlider_C_OnSynchronizeProperties_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnFocusLost
struct UUI_OptionsSlider_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnMouseEnter
struct UUI_OptionsSlider_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsSlider_C_BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsSlider_C_BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.Construct
struct UUI_OptionsSlider_C_Construct_Params
{
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.ExecuteUbergraph_UI_OptionsSlider
struct UUI_OptionsSlider_C_ExecuteUbergraph_UI_OptionsSlider_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_OptionsSlider.UI_OptionsSlider_C.OnValueChanged__DelegateSignature
struct UUI_OptionsSlider_C_OnValueChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
