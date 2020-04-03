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

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.EnableOption
struct UUI_SpawnMenuWidget_C_EnableOption_Params
{
	ERespawnOption                                     Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSpawnTag
struct UUI_SpawnMenuWidget_C_GetSpawnTag_Params
{
	struct FName                                       spawnTag;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSectorSelectorVisibility
struct UUI_SpawnMenuWidget_C_GetSectorSelectorVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateOptions
struct UUI_SpawnMenuWidget_C_UpdateOptions_Params
{
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText_ColorAndOpacity
struct UUI_SpawnMenuWidget_C_Get_RemainingFPText_ColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText_ColorAndOpacity
struct UUI_SpawnMenuWidget_C_Get_CurrentFPText_ColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_RemainingFPText
struct UUI_SpawnMenuWidget_C_Get_RemainingFPText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_CurrentFPText
struct UUI_SpawnMenuWidget_C_Get_CurrentFPText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Get_TotalPriceText
struct UUI_SpawnMenuWidget_C_Get_TotalPriceText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateCurrentFP
struct UUI_SpawnMenuWidget_C_UpdateCurrentFP_Params
{
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.UpdateTotalPrice
struct UUI_SpawnMenuWidget_C_UpdateTotalPrice_Params
{
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectionValid
struct UUI_SpawnMenuWidget_C_SelectionValid_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.GetSelectedLocation
struct UUI_SpawnMenuWidget_C_GetSelectedLocation_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.SelectLocation
struct UUI_SpawnMenuWidget_C_SelectLocation_Params
{
	class UUI_SpawnChoiceWidget_C*                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
struct UUI_SpawnMenuWidget_C_BndEvt__RandomLocation_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params
{
	class UUI_SpawnChoiceWidget_C*                     _this;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature
struct UUI_SpawnMenuWidget_C_BndEvt__ShelterLocation_K2Node_ComponentBoundEvent_41_OnClicked__DelegateSignature_Params
{
	class UUI_SpawnChoiceWidget_C*                     _this;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature
struct UUI_SpawnMenuWidget_C_BndEvt__SquadLocation_K2Node_ComponentBoundEvent_42_OnClicked__DelegateSignature_Params
{
	class UUI_SpawnChoiceWidget_C*                     _this;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Construct
struct UUI_SpawnMenuWidget_C_Construct_Params
{
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
struct UUI_SpawnMenuWidget_C_BndEvt__SectorLocation_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
{
	class UUI_SpawnChoiceWidget_C*                     _this;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.Tick
struct UUI_SpawnMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SpawnMenuWidget.UI_SpawnMenuWidget_C.ExecuteUbergraph_UI_SpawnMenuWidget
struct UUI_SpawnMenuWidget_C_ExecuteUbergraph_UI_SpawnMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
