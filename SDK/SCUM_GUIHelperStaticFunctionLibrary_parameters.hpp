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

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog
struct UGUIHelperStaticFunctionLibrary_C_ShowErrorDialog_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCanvasPanel*                                Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     widgetToDisable;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_ErrorMessage_C*                          messageWidget;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString
struct UGUIHelperStaticFunctionLibrary_C_LinearCoordinatesToString_Params
{
	struct FVector                                     Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     coordinatesString;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString
struct UGUIHelperStaticFunctionLibrary_C_HealthToString_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     healthString;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString
struct UGUIHelperStaticFunctionLibrary_C_ValueToDescriptionString_Params
{
	struct FString                                     preLabel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     postLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     descriptionString;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString
struct UGUIHelperStaticFunctionLibrary_C_ValueToString_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueString;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString
struct UGUIHelperStaticFunctionLibrary_C_LinearVectorDistanceToString_Params
{
	struct FVector                                     Acceleration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     accelerationString;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString
struct UGUIHelperStaticFunctionLibrary_C_VelocityToString_Params
{
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     velocityString;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString
struct UGUIHelperStaticFunctionLibrary_C_AccelerationToString_Params
{
	float                                              Acceleration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     accelerationString;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString
struct UGUIHelperStaticFunctionLibrary_C_StringToDescriptionString_Params
{
	struct FString                                     preLabel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ValueString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     postLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     descriptionString;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString
struct UGUIHelperStaticFunctionLibrary_C_LinearValueToString_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ValueString;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString
struct UGUIHelperStaticFunctionLibrary_C_CoordinatesToString_Params
{
	struct FVector                                     Coordinates;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     coordinatesString;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString
struct UGUIHelperStaticFunctionLibrary_C_VectorToString_Params
{
	struct FVector                                     Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     vectorString;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString
struct UGUIHelperStaticFunctionLibrary_C_RotationToString_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     rotationString;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString
struct UGUIHelperStaticFunctionLibrary_C_LinearValueToDescriptionString_Params
{
	struct FString                                     preLabel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     postLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     descriptionString;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision
struct UGUIHelperStaticFunctionLibrary_C_FloatToStringWithPrecision_Params
{
	float                                              floatNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Precision;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     floatAsString;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText
struct UGUIHelperStaticFunctionLibrary_C_EmovementPaceToText_Params
{
	EPrisonerMovementPace                              movementPace;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       movementPaceText;                                         // (Parm, OutParm)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills
struct UGUIHelperStaticFunctionLibrary_C_SortSkills_Params
{
	TArray<class USkill*>                              skillArrayRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage
struct UGUIHelperStaticFunctionLibrary_C_SkilLevelToSkillPercentage_Params
{
	ESkillLevel                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted
struct UGUIHelperStaticFunctionLibrary_C_FloatToTextFormatted_Params
{
	float                                              floatNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue
struct UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValue_Params
{
	ESkillLevel                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText
struct UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValueText_Params
{
	ESkillLevel                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       MaxValue;                                                 // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
