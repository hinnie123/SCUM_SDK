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

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SetSelectedSector
struct UUI_SpawnSectorSelector_C_SetSelectedSector_Params
{
	int                                                InRow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InColumn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.UpdateCurrentSector
struct UUI_SpawnSectorSelector_C_UpdateCurrentSector_Params
{
	int                                                ReturnRow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnColumn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.GetSelectedSector
struct UUI_SpawnSectorSelector_C_GetSelectedSector_Params
{
	int                                                X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.SelectSector
struct UUI_SpawnSectorSelector_C_SelectSector_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_544_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_561_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_15_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
struct UUI_SpawnSectorSelector_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.Construct
struct UUI_SpawnSectorSelector_C_Construct_Params
{
};

// Function UI_SpawnSectorSelector.UI_SpawnSectorSelector_C.ExecuteUbergraph_UI_SpawnSectorSelector
struct UUI_SpawnSectorSelector_C_ExecuteUbergraph_UI_SpawnSectorSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
