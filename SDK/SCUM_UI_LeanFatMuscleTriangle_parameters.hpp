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

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateAttributesFromFatnessAndLeanness
struct UUI_LeanFatMuscleTriangle_C_UpdateAttributesFromFatnessAndLeanness_Params
{
	float                                              Fatness;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Leanness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseEvent
struct UUI_LeanFatMuscleTriangle_C_OnMouseEvent_Params
{
	struct FPointerEvent                               Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               updateEvenWithoutCapture;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonDown
struct UUI_LeanFatMuscleTriangle_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateVisualsFromFatnessAndLeanness
struct UUI_LeanFatMuscleTriangle_C_UpdateVisualsFromFatnessAndLeanness_Params
{
	float                                              Fatness;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Leanness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonUp
struct UUI_LeanFatMuscleTriangle_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.GetFactorsFromLocalCoordinatesz
struct UUI_LeanFatMuscleTriangle_C_GetFactorsFromLocalCoordinatesz_Params
{
	struct FVector2D                                   Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              muscle;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              lean;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Fat;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseMove
struct UUI_LeanFatMuscleTriangle_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.AttributesChanged__DelegateSignature
struct UUI_LeanFatMuscleTriangle_C_AttributesChanged__DelegateSignature_Params
{
	struct FVector4                                    Attributes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
