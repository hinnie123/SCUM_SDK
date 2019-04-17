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

// Function UI_MenuButton.UI_MenuButton_C.SetText
struct UUI_MenuButton_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_MenuButton.UI_MenuButton_C.SetFontSize
struct UUI_MenuButton_C_SetFontSize_Params
{
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter
struct UUI_MenuButton_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MenuButton.UI_MenuButton_C.OnMouseLeave
struct UUI_MenuButton_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MenuButton.UI_MenuButton_C.OnSynchronizeProperties
struct UUI_MenuButton_C_OnSynchronizeProperties_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UUI_MenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.Construct
struct UUI_MenuButton_C_Construct_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_MenuButton_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton
struct UUI_MenuButton_C_ExecuteUbergraph_UI_MenuButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MenuButton.UI_MenuButton_C.OnClicked__DelegateSignature
struct UUI_MenuButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
