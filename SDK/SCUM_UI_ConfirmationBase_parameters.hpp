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

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.AddToCanvas
struct UUI_ConfirmationBase_C_AddToCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.OnNo
struct UUI_ConfirmationBase_C_OnNo_Params
{
};

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.ExecuteUbergraph_UI_ConfirmationBase
struct UUI_ConfirmationBase_C_ExecuteUbergraph_UI_ConfirmationBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ConfirmationBase.UI_ConfirmationBase_C.NoClicked__DelegateSignature
struct UUI_ConfirmationBase_C_NoClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
