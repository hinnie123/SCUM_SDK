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

// Function Digestion.Digestion_C.HasContentSizeChanged
struct UDigestion_C_HasContentSizeChanged_Params
{
	int                                                oldDigestionItemCount;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                newDigestionItemCount;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               contentSizeChanged;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.PrintArrayOfDigestionItems
struct UDigestion_C_PrintArrayOfDigestionItems_Params
{
	TArray<class UDigestionItem*>                      digestionItemsTArray;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Digestion.Digestion_C.UpdateDigestionItemsCount
struct UDigestion_C_UpdateDigestionItemsCount_Params
{
};

// Function Digestion.Digestion_C.DigestionItemToText
struct UDigestion_C_DigestionItemToText_Params
{
	class UDigestionItem*                              digestionItemRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       digestionItemName;                                        // (Parm, OutParm)
	struct FText                                       digestionItemID;                                          // (Parm, OutParm)
	struct FText                                       digestionItemWeight;                                      // (Parm, OutParm)
};

// Function Digestion.Digestion_C.FillDigestionLine
struct UDigestion_C_FillDigestionLine_Params
{
	class UParameterLine_C*                            digestionLineRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDigestionItem*                              digestionItemRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.CreateDigestionLine
struct UDigestion_C_CreateDigestionLine_Params
{
	class UDigestionItem*                              digestionItemRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParameterLine_C*                            digestionParameterLine;                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Digestion.Digestion_C.ShowDigestion
struct UDigestion_C_ShowDigestion_Params
{
	ESlateVisibility                                   Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.InitDigestionItems
struct UDigestion_C_InitDigestionItems_Params
{
};

// Function Digestion.Digestion_C.AddDigestionLine
struct UDigestion_C_AddDigestionLine_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParameterLine_C*                            digestionLineRef;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Digestion.Digestion_C.CreateDigestionLineFromText
struct UDigestion_C_CreateDigestionLineFromText_Params
{
	struct FText                                       digestionItemName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       digestionItemID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       digestionItemWeightRemained;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UParameterLine_C*                            digestionLine;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Digestion.Digestion_C.GetDigestionItems
struct UDigestion_C_GetDigestionItems_Params
{
	TArray<class UDigestionItem*>                      digestionItemsTArrayRef;                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Digestion.Digestion_C.SetDigestionCount
struct UDigestion_C_SetDigestionCount_Params
{
	int                                                digestionItemsCountToSet;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.ClearDigestionLines
struct UDigestion_C_ClearDigestionLines_Params
{
};

// Function Digestion.Digestion_C.CountDigestionItems
struct UDigestion_C_CountDigestionItems_Params
{
	int                                                numberOfDigestionItems;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.HasDigestionCountChanged
struct UDigestion_C_HasDigestionCountChanged_Params
{
	bool                                               sicknessCountChanged;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.UpdateDigestion
struct UDigestion_C_UpdateDigestion_Params
{
};

// Function Digestion.Digestion_C.GetTitleText
struct UDigestion_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Digestion.Digestion_C.GetDefaultTitle
struct UDigestion_C_GetDefaultTitle_Params
{
	struct FText                                       defaultTitle;                                             // (Parm, OutParm)
};

// Function Digestion.Digestion_C.SelectCustomColor
struct UDigestion_C_SelectCustomColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Digestion.Digestion_C.Construct
struct UDigestion_C_Construct_Params
{
};

// Function Digestion.Digestion_C.OnMinimize
struct UDigestion_C_OnMinimize_Params
{
	bool                                               shouldMinimize;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Digestion.Digestion_C.OnPrisonerSet
struct UDigestion_C_OnPrisonerSet_Params
{
};

// Function Digestion.Digestion_C.UpdateContent
struct UDigestion_C_UpdateContent_Params
{
};

// Function Digestion.Digestion_C.ExecuteUbergraph_Digestion
struct UDigestion_C_ExecuteUbergraph_Digestion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
