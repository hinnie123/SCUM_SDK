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

// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedHeight
struct UUI_HandInventory_C_GetMinimizedHeight_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.RefreshMaxMassAndSlots
struct UUI_HandInventory_C_RefreshMaxMassAndSlots_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimizePartial
struct UUI_HandInventory_C_ToggleMinimizePartial_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedPartial
struct UUI_HandInventory_C_GetMinimizedPartial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.GetMinimizedFull
struct UUI_HandInventory_C_GetMinimizedFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.ToggleMinimize
struct UUI_HandInventory_C_ToggleMinimize_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.SetSize
struct UUI_HandInventory_C_SetSize_Params
{
	bool                                               adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.OnMinimizePartialClicked
struct UUI_HandInventory_C_OnMinimizePartialClicked_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_HandInventory.UI_HandInventory_C.OnMinimizeAllClicked
struct UUI_HandInventory_C_OnMinimizeAllClicked_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_HandInventory.UI_HandInventory_C.OnSynchronizeProperties
struct UUI_HandInventory_C_OnSynchronizeProperties_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.UpdateDisplayValues
struct UUI_HandInventory_C_UpdateDisplayValues_Params
{
	unsigned char*                                     occupiedSlots;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             occupiedMass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.UpdateImage
struct UUI_HandInventory_C_UpdateImage_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.SetMinimizeAndAdjustSize
struct UUI_HandInventory_C_SetMinimizeAndAdjustSize_Params
{
	bool*                                              isMinimizedFull;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isMinimizedPartial;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              adjustPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.RequestUpdateSize
struct UUI_HandInventory_C_RequestUpdateSize_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.Tick
struct UUI_HandInventory_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.SetTitle
struct UUI_HandInventory_C_SetTitle_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HandInventory.UI_HandInventory_C.OnHeaderDoubleClickEvent
struct UUI_HandInventory_C_OnHeaderDoubleClickEvent_Params
{
	struct FGeometry                                   Geometry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_HandInventory.UI_HandInventory_C.RefreshSize
struct UUI_HandInventory_C_RefreshSize_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.SetGridVisibility
struct UUI_HandInventory_C_SetGridVisibility_Params
{
	ESlateVisibility*                                  gridVisibility;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.UpdateWithItem
struct UUI_HandInventory_C_UpdateWithItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.SaveLayout
struct UUI_HandInventory_C_SaveLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.LoadLayout
struct UUI_HandInventory_C_LoadLayout_Params
{
	TScriptInterface<class UAttributeMapInterface>*    Attributes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function UI_HandInventory.UI_HandInventory_C.ResetLayout
struct UUI_HandInventory_C_ResetLayout_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.Construct
struct UUI_HandInventory_C_Construct_Params
{
};

// Function UI_HandInventory.UI_HandInventory_C.ExecuteUbergraph_UI_HandInventory
struct UUI_HandInventory_C_ExecuteUbergraph_UI_HandInventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
