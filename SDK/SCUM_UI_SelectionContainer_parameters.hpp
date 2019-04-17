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

// Function UI_SelectionContainer.UI_SelectionContainer_C.Construct
struct UUI_SelectionContainer_C_Construct_Params
{
};

// Function UI_SelectionContainer.UI_SelectionContainer_C.OnHeaderDoubleClicked
struct UUI_SelectionContainer_C_OnHeaderDoubleClicked_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UUI_SelectionContainer_C_BndEvt__MinimizeFullButton_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SelectionContainer.UI_SelectionContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
struct UUI_SelectionContainer_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SelectionContainer.UI_SelectionContainer_C.ExecuteUbergraph_UI_SelectionContainer
struct UUI_SelectionContainer_C_ExecuteUbergraph_UI_SelectionContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
