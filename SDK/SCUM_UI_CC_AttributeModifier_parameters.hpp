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

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ModifyValue
struct UUI_CC_AttributeModifier_C_ModifyValue_Params
{
	float                                              modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValue
struct UUI_CC_AttributeModifier_C_SetValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.SetValueText
struct UUI_CC_AttributeModifier_C_SetValueText_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.Construct
struct UUI_CC_AttributeModifier_C_Construct_Params
{
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseEnter
struct UUI_CC_AttributeModifier_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnMouseLeave
struct UUI_CC_AttributeModifier_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
struct UUI_CC_AttributeModifier_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
struct UUI_CC_AttributeModifier_C_BndEvt__IncreaseButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnSynchronizeProperties
struct UUI_CC_AttributeModifier_C_OnSynchronizeProperties_Params
{
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.ExecuteUbergraph_UI_CC_AttributeModifier
struct UUI_CC_AttributeModifier_C_ExecuteUbergraph_UI_CC_AttributeModifier_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnDecrease__DelegateSignature
struct UUI_CC_AttributeModifier_C_OnDecrease__DelegateSignature_Params
{
};

// Function UI_CC_AttributeModifier.UI_CC_AttributeModifier_C.OnIncrease__DelegateSignature
struct UUI_CC_AttributeModifier_C_OnIncrease__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
