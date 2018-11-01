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

// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
struct UTKMathFunctionLibrary_VectorRadiansToDegrees_Params
{
	struct FVector                                     RadVector;                                                // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
struct UTKMathFunctionLibrary_VectorDegreesToRadians_Params
{
	struct FVector                                     DegVector;                                                // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
struct UTKMathFunctionLibrary_SphereBoxIntersection_Params
{
	struct FVector                                     SphereOrigin;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxOrigin;                                                // (Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
struct UTKMathFunctionLibrary_SignedDistancePlanePoint_Params
{
	struct FVector                                     PlaneNormal;                                              // (Parm, IsPlainOldData)
	struct FVector                                     planePoint;                                               // (Parm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
struct UTKMathFunctionLibrary_SetVectorLength_Params
{
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
struct UTKMathFunctionLibrary_SetCenterOfMassOffset_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
struct UTKMathFunctionLibrary_RoundToUpperMultiple_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipSelf;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
struct UTKMathFunctionLibrary_RoundToNearestMultiple_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
struct UTKMathFunctionLibrary_RoundToLowerMultiple_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               skipSelf;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
struct UTKMathFunctionLibrary_ProjectPointOnLine_Params
{
	struct FVector                                     LineOrigin;                                               // (Parm, IsPlainOldData)
	struct FVector                                     LineDirection;                                            // (Parm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
struct UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params
{
	struct FVector                                     LinePoint1;                                               // (Parm, IsPlainOldData)
	struct FVector                                     LinePoint2;                                               // (Parm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
struct UTKMathFunctionLibrary_NegateVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
struct UTKMathFunctionLibrary_NegateInt_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
struct UTKMathFunctionLibrary_NegateFloat_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
struct UTKMathFunctionLibrary_LineToLineIntersection_Params
{
	struct FVector                                     IntersectionPoint;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinePoint1;                                               // (Parm, IsPlainOldData)
	struct FVector                                     LineDir1;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     LinePoint2;                                               // (Parm, IsPlainOldData)
	struct FVector                                     LineDir2;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
struct UTKMathFunctionLibrary_LineExtentBoxIntersection_Params
{
	struct FBox                                        inBox;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              HitTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
struct UTKMathFunctionLibrary_IsPowerOfTwo_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
struct UTKMathFunctionLibrary_IsPointInsideBox_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     BoxOrigin;                                                // (Parm, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
struct UTKMathFunctionLibrary_IsMultipleOf_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Multiple;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
struct UTKMathFunctionLibrary_IsLineInsideSphere_Params
{
	struct FVector                                     LineStart;                                                // (Parm, IsPlainOldData)
	struct FVector                                     LineDir;                                                  // (Parm, IsPlainOldData)
	float                                              LineLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SphereOrigin;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
struct UTKMathFunctionLibrary_IsEvenNumber_Params
{
	float                                              A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
struct UTKMathFunctionLibrary_GridSnap_Params
{
	struct FVector                                     A;                                                        // (Parm, IsPlainOldData)
	float                                              Grid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
struct UTKMathFunctionLibrary_GetVelocityAtPoint_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugInfo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
struct UTKMathFunctionLibrary_GetConsoleVariableInt_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
struct UTKMathFunctionLibrary_GetConsoleVariableFloat_Params
{
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
struct UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params
{
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<ESpeedUnit>                            SpeedUnit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
struct UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnchors                                    CurrentAnchor;                                            // (Parm)
	struct FMargin                                     Offsets;                                                  // (Parm, IsPlainOldData)
	struct FAnchors                                    TargetAnchor;                                             // (Parm)
	struct FMargin                                     ConvertedOffsets;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
struct UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params
{
	struct FVector                                     closestPointLine1;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     closestPointLine2;                                        // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinePoint1;                                               // (Parm, IsPlainOldData)
	struct FVector                                     lineVec1;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     LinePoint2;                                               // (Parm, IsPlainOldData)
	struct FVector                                     lineVec2;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
struct UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params
{
	struct FVector                                     Line1Start;                                               // (Parm, IsPlainOldData)
	struct FVector                                     Line1End;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Line2Start;                                               // (Parm, IsPlainOldData)
	struct FVector                                     Line2End;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     LinePoint1;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LinePoint2;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
struct UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params
{
	struct FVector                                     SphereOrigin;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineOrigin;                                               // (Parm, IsPlainOldData)
	struct FVector                                     LineDir;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
struct UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (Parm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
struct UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params
{
	struct FVector                                     pointA1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     pointA2;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     pointB1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     pointB2;                                                  // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
struct UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
struct UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
struct UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
struct UVictoryBPFunctionLibrary_WidgetIsChildOf_Params
{
	class UWidget*                                     ChildWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PossibleParent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
struct UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params
{
	class UWidget*                                     ChildWidget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
struct UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params
{
	class UWidget*                                     ParentWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         ChildWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateOnly;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
struct UVictoryBPFunctionLibrary_Visibility__GetRenderedActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CurrentlyRenderedActors;                                  // (Parm, OutParm, ZeroConstructor)
	float                                              MinRecentTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
struct UVictoryBPFunctionLibrary_Visibility__GetNotRenderedActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              CurrentlyNotRenderedActors;                               // (Parm, OutParm, ZeroConstructor)
	float                                              MinRecentTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
struct UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutWorldOrigin;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutWorldDirection;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
struct UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params
{
	class APlayerController*                           ThePC;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              PosY;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
struct UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params
{
	class APlayerController*                           ThePC;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
struct UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params
{
	class APlayerController*                           ThePC;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
struct UVictoryBPFunctionLibrary_Viewport__EnableWorldRendering_Params
{
	class APlayerController*                           ThePC;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RenderTheWorld;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
struct UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params
{
	class USoundClass*                                 SoundClassObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
struct UVictoryBPFunctionLibrary_VictorySortIntArray_Params
{
	TArray<int>                                        IntArray;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        IntArrayRef;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
struct UVictoryBPFunctionLibrary_VictorySortFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      FloatArrayRef;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
struct UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
struct UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params
{
	class APlayerController*                           ThePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FVector2D                                   Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	struct FLinearColor                                Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
struct UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
struct UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params
{
	struct FVictoryInputAxis                           ToRemove;                                                 // (Parm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
struct UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params
{
	struct FVictoryInput                               ToRemove;                                                 // (Parm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
struct UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params
{
	struct FVictoryInputAxis                           Original;                                                 // (Parm)
	struct FVictoryInputAxis                           NewBinding;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
struct UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params
{
	struct FVictoryInput                               Original;                                                 // (Parm)
	struct FVictoryInput                               NewBinding;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
struct UVictoryBPFunctionLibrary_VictoryPhysics_UpdateAngularDamping_Params
{
	class UPrimitiveComponent*                         CompToUpdate;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NewAngularDamping;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
struct UVictoryBPFunctionLibrary_VictoryPaths__WindowsNoEditorDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
struct UVictoryBPFunctionLibrary_VictoryPaths__Win64Dir_BinaryLocation_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
struct UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
struct UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
struct UVictoryBPFunctionLibrary_VictoryPaths__LogsDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
struct UVictoryBPFunctionLibrary_VictoryPaths__GameRootDirectory_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
struct UVictoryBPFunctionLibrary_VictoryPaths__ConfigDir_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
struct UVictoryBPFunctionLibrary_VictoryLoadLevelInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapFolderOffOfContent;                                    // (Parm, ZeroConstructor)
	struct FString                                     LevelName;                                                // (Parm, ZeroConstructor)
	int                                                InstanceNumber;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ULevelStreaming*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
struct UVictoryBPFunctionLibrary_VictoryISM_GetAllVictoryISMActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AVictoryISM*>                         Out;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
struct UVictoryBPFunctionLibrary_VictoryISM_ConvertToVictoryISMActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AVictoryISM*>                         CreatedISMActors;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               DestroyOriginalActors;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinCountToCreateISM;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
struct UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params
{
	int                                                ProcessId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
struct UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params
{
	int                                                Int;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Add;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntOut;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
struct UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params
{
	int                                                Int;                                                      // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Sub;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntOut;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
struct UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVictoryInputAxis                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
struct UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVictoryInput                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
struct UVictoryBPFunctionLibrary_VictoryGetSoundVolume_Params
{
	class USoundClass*                                 SoundClassObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
struct UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params
{
	struct FString                                     SectionName;                                              // (Parm, ZeroConstructor)
	struct FString                                     VariableName;                                             // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
struct UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params
{
	int                                                ProcessId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
struct UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params
{
	TArray<struct FVictoryInputAxis>                   Bindings;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
struct UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TArray<struct FVictoryInput>                       ActionBindings;                                           // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVictoryInputAxis>                   AxisBindings;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
struct UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params
{
	TArray<struct FVictoryInput>                       Bindings;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
struct UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params
{
	float                                              Float;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Add;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
struct UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params
{
	float                                              Float;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Sub;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk
struct UVictoryBPFunctionLibrary_VictoryDestructible_DestroyChunk_Params
{
	class UDestructibleComponent*                      DestructibleComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HitItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
struct UVictoryBPFunctionLibrary_VictoryCreateProc_Params
{
	int                                                ProcessId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FullPathOfProgramToRun;                                   // (Parm, ZeroConstructor)
	TArray<struct FString>                             CommandlineArgs;                                          // (Parm, ZeroConstructor)
	bool                                               Detach;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OptionalWorkingDirectory;                                 // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
struct UVictoryBPFunctionLibrary_VictoryAppendInline_Params
{
	struct FString                                     string;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     ToAppend;                                                 // (Parm, ZeroConstructor)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               AppendNewline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
struct UVictoryBPFunctionLibrary_Victory_SecondsToHoursMinutesSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TrimZeroes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
struct UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params
{
	struct FString                                     ToClipboard;                                              // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
struct UVictoryBPFunctionLibrary_Victory_SavePixels_Params
{
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        ImagePixels;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               SaveAsBMP;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SRGB;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ErrorString;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
struct UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params
{
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	EJoyImageFormats                                   ImageFormat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        OutPixels;                                                // (Parm, OutParm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
struct UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params
{
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	EJoyImageFormats                                   ImageFormat;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
struct UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params
{
	struct FString                                     FromClipboard;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
struct UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params
{
	class UTexture2D*                                  T2D;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TextureWidth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TextureHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FLinearColor>                        PixelArray;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
struct UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params
{
	class UTexture2D*                                  T2D;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PixelColor;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
struct UVictoryBPFunctionLibrary_Victory_GetGRHIAdapterName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
struct UVictoryBPFunctionLibrary_Victory_GetGPUInfo_Params
{
	struct FString                                     DeviceDescription;                                        // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Provider;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     DriverVersion;                                            // (Parm, OutParm, ZeroConstructor)
	struct FString                                     DriverDate;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
struct UVictoryBPFunctionLibrary_Victory_GetGPUBrand_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
struct UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params
{
	TArray<struct FLinearColor>                        Pixels;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ImageHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FoundColor;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
struct UVictoryBPFunctionLibrary_Victory_AI_MoveToWithFilter_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dest;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
struct UVictoryBPFunctionLibrary_VerticalFOV_Params
{
	float                                              HorizontalFOV;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
struct UVictoryBPFunctionLibrary_Vector2DInterpTo_Constant_Params
{
	struct FVector2D                                   Current;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   Target;                                                   // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
struct UVictoryBPFunctionLibrary_Vector2DInterpTo_Params
{
	struct FVector2D                                   Current;                                                  // (Parm, IsPlainOldData)
	struct FVector2D                                   Target;                                                   // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
struct UVictoryBPFunctionLibrary_UTCToLocal_Params
{
	struct FDateTime                                   UTCTime;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDateTime                                   LocalTime;                                                // (Parm, OutParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
struct UVictoryBPFunctionLibrary_UnloadStreamingLevel_Params
{
	class ULevelStreamingKismet*                       LevelInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
struct UVictoryBPFunctionLibrary_TransformVectorToActorSpaceAngle_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
struct UVictoryBPFunctionLibrary_TransformVectorToActorSpace_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
struct UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestSocket_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TraceOwner;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutImpactPoint;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutImpactNormal;                                          // (Parm, OutParm, IsPlainOldData)
	struct FName                                       ClosestSocketName;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
struct UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestBone_Params
{
	class AActor*                                      TraceOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutImpactPoint;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutImpactNormal;                                          // (Parm, OutParm, IsPlainOldData)
	struct FName                                       ClosestBoneName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestBoneLocation;                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
struct UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromSkeletalMeshSocket_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, OutParm, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    TraceRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TraceLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawTraceData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceDataColor;                                           // (Parm, IsPlainOldData)
	float                                              TraceDataThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
struct UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromCharacterSocket_Params
{
	struct FVector                                     TraceStart;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, OutParm, IsPlainOldData)
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TraceRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TraceLength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawTraceData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceDataColor;                                           // (Parm, IsPlainOldData)
	float                                              TraceDataThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
struct UVictoryBPFunctionLibrary_Text_ToInt_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               UseDotForThousands;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
struct UVictoryBPFunctionLibrary_Text_ToFloat_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               UseDotForThousands;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
struct UVictoryBPFunctionLibrary_Text_IsNumeric_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
struct UVictoryBPFunctionLibrary_StringIsEmpty_Params
{
	struct FString                                     Target;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
struct UVictoryBPFunctionLibrary_StringConversion__GetFloatAsStringWithPrecision_Params
{
	float                                              TheFloat;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TheString;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                Precision;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeLeadingZero;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
struct UVictoryBPFunctionLibrary_String__ExplodeString_Params
{
	TArray<struct FString>                             OutputStrings;                                            // (Parm, OutParm, ZeroConstructor)
	struct FString                                     InputString;                                              // (Parm, ZeroConstructor)
	struct FString                                     Separator;                                                // (Parm, ZeroConstructor)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTrimElements;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
struct UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
struct UVictoryBPFunctionLibrary_String__CombineStrings_Params
{
	struct FString                                     StringFirst;                                              // (Parm, ZeroConstructor)
	struct FString                                     StringSecond;                                             // (Parm, ZeroConstructor)
	struct FString                                     Separator;                                                // (Parm, ZeroConstructor)
	struct FString                                     StringFirstLabel;                                         // (Parm, ZeroConstructor)
	struct FString                                     StringSecondLabel;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
struct UVictoryBPFunctionLibrary_SpawnActorIntoLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	bool                                               SpawnEvenIfColliding;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
struct UVictoryBPFunctionLibrary_SetGenericTeamId_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewTeamId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
struct UVictoryBPFunctionLibrary_SetComponentTickRate_Params
{
	class UActorComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
struct UVictoryBPFunctionLibrary_SetBloomIntensity_Params
{
	class APostProcessVolume*                          PostProcessVolume;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
struct UVictoryBPFunctionLibrary_ServerTravel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
	bool                                               bNotifyPlayers;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
struct UVictoryBPFunctionLibrary_Selection_SelectionBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SelectedActors;                                           // (Parm, OutParm, ZeroConstructor)
	struct FVector2D                                   AnchorPoint;                                              // (Parm, IsPlainOldData)
	struct FVector2D                                   DraggedPoint;                                             // (Parm, IsPlainOldData)
	class UClass*                                      ClassFilter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
struct UVictoryBPFunctionLibrary_seedRandWithTime_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
struct UVictoryBPFunctionLibrary_seedRandWithEntropy_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
struct UVictoryBPFunctionLibrary_seedRand_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
struct UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params
{
	struct FString                                     OriginalFileName;                                         // (Parm, OutParm, ZeroConstructor)
	struct FString                                     NewName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     NewAbsoluteFolderPath;                                    // (Parm, ZeroConstructor)
	bool                                               HighResolution;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
struct UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params
{
	TArray<struct FString>                             FileNames;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
struct UVictoryBPFunctionLibrary_Rendering__UnFreezeGameRendering_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
struct UVictoryBPFunctionLibrary_Rendering__FreezeGameRendering_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
struct UVictoryBPFunctionLibrary_RemoveFromStreamingLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLevelStreamInstanceInfo                    LevelInstanceInfo;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
struct UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
struct UVictoryBPFunctionLibrary_RealWorldTime__GetTimePassedSincePreviousTime_Params
{
	struct FString                                     PreviousTime;                                             // (Parm, ZeroConstructor)
	float                                              MilliSeconds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
struct UVictoryBPFunctionLibrary_RealWorldTime__GetDifferenceBetweenTimes_Params
{
	struct FString                                     PreviousTime1;                                            // (Parm, ZeroConstructor)
	struct FString                                     PreviousTime2;                                            // (Parm, ZeroConstructor)
	float                                              MilliSeconds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Hours;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
struct UVictoryBPFunctionLibrary_RealWorldTime__GetCurrentOSTime_Params
{
	int                                                MilliSeconds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Hours12;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Hours24;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Day;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Month;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Year;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
struct UVictoryBPFunctionLibrary_RandInt_uniDis_MT_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
struct UVictoryBPFunctionLibrary_RandInt_uniDis_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
struct UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_MT_Params
{
	int                                                iMin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
struct UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_Params
{
	int                                                iMin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
struct UVictoryBPFunctionLibrary_RandFloat_uniDis_MT_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
struct UVictoryBPFunctionLibrary_RandFloat_uniDis_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
struct UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_MT_Params
{
	float                                              iMin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              iMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
struct UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_Params
{
	float                                              iMin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              iMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
struct UVictoryBPFunctionLibrary_RandBool_Bernoulli_MT_Params
{
	float                                              fBias;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
struct UVictoryBPFunctionLibrary_RandBool_Bernoulli_Params
{
	float                                              fBias;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
struct UVictoryBPFunctionLibrary_ProjectWorldToScreenPosition_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
struct UVictoryBPFunctionLibrary_PointDistanceToPlane_Params
{
	struct FPlane                                      Plane;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile
struct UVictoryBPFunctionLibrary_PlaySoundAttachedFromFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile
struct UVictoryBPFunctionLibrary_PlaySoundAtLocationFromFile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           AttenuationSettings;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
struct UVictoryBPFunctionLibrary_PlayerState_GetPlayerID_Params
{
	class APlayerController*                           ThePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
struct UVictoryBPFunctionLibrary_PlayerController_GetControllerID_Params
{
	class APlayerController*                           ThePC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
struct UVictoryBPFunctionLibrary_Physics__UpdateCharacterCameraToRagdollLocation_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
struct UVictoryBPFunctionLibrary_Physics__LeaveRagDoll_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetToFallingMovementMode;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeightAboveRBMesh;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    InitRotation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
struct UVictoryBPFunctionLibrary_Physics__IsRagDoll_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
struct UVictoryBPFunctionLibrary_Physics__InitializeVictoryRagDoll_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitLocation;                                             // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    InitRotation;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
struct UVictoryBPFunctionLibrary_Physics__GetLocationofRagDoll_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RagdollLocation;                                          // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
struct UVictoryBPFunctionLibrary_Physics__EnterRagDoll_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
struct UVictoryBPFunctionLibrary_OptionsMenu__GetDisplayAdapterScreenResolutions_Params
{
	TArray<int>                                        Widths;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        Heights;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        RefreshRates;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               IncludeRefreshRates;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
struct UVictoryBPFunctionLibrary_OperatingSystem__GetCurrentPlatform_Params
{
	bool                                               Windows_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Mac;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Linux;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IOS;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Android;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Android_ARM;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Android_Vulkan;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PS4;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               XBoxOne;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HTML5;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Apple;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
struct UVictoryBPFunctionLibrary_Open_URL_In_Web_Browser_Params
{
	struct FString                                     TheURL;                                                   // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
struct UVictoryBPFunctionLibrary_NotEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (Parm, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
struct UVictoryBPFunctionLibrary_Mobility__SetSceneCompMobility_Params
{
	class USceneComponent*                             SceneComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    NewMobility;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
struct UVictoryBPFunctionLibrary_MinOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
struct UVictoryBPFunctionLibrary_MinOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMinValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
struct UVictoryBPFunctionLibrary_MaxOfIntArray_Params
{
	TArray<int>                                        IntArray;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
struct UVictoryBPFunctionLibrary_MaxOfFloatArray_Params
{
	TArray<float>                                      FloatArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                IndexOfMaxValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
struct UVictoryBPFunctionLibrary_MapRangeClamped_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeA;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRangeB;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeA;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutRangeB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
struct UVictoryBPFunctionLibrary_Loops_ResetBPRunawayCounter_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
struct UVictoryBPFunctionLibrary_LoadTexture2D_FromFileByExtension_Params
{
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
struct UVictoryBPFunctionLibrary_LoadTexture2D_FromDDSFile_Params
{
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
struct UVictoryBPFunctionLibrary_LoadStringFromFile_Params
{
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
struct UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params
{
	TArray<struct FString>                             StringArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                ArraySize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FullFilePath;                                             // (Parm, ZeroConstructor)
	bool                                               ExcludeEmptyLines;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
struct UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Path;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
struct UVictoryBPFunctionLibrary_LensFlare__GetLensFlareOffsets_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LightSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchOffset;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              YawOffset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RollOffset;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
struct UVictoryBPFunctionLibrary_JoyIsKey_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               Ctrl;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Shift;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Alt;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Cmd;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Match;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
struct UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Set_Params
{
	TEnumAsByte<EJoyGraphicsFullScreen>                NewSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
struct UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Get_Params
{
	TEnumAsByte<EJoyGraphicsFullScreen>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
struct UVictoryBPFunctionLibrary_JoyFileIO_GetFilesInRootAndAllSubFolders_Params
{
	TArray<struct FString>                             Files;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     RootFolderFullPath;                                       // (Parm, ZeroConstructor)
	struct FString                                     Ext;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
struct UVictoryBPFunctionLibrary_JoyFileIO_GetFiles_Params
{
	TArray<struct FString>                             Files;                                                    // (Parm, OutParm, ZeroConstructor)
	struct FString                                     RootFolderFullPath;                                       // (Parm, ZeroConstructor)
	struct FString                                     Ext;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
struct UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
struct UVictoryBPFunctionLibrary_IsStandAlone_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
struct UVictoryBPFunctionLibrary_IsPointOnPlane_Params
{
	struct FPlane                                      Plane;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
struct UVictoryBPFunctionLibrary_IsAlphaNumeric_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
struct UVictoryBPFunctionLibrary_InsertChildAt_Params
{
	class UWidget*                                     Parent;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
struct UVictoryBPFunctionLibrary_HorizontalFOV_Params
{
	float                                              VerticalFOV;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
struct UVictoryBPFunctionLibrary_HideStreamingLevel_Params
{
	class ULevelStreamingKismet*                       LevelInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
struct UVictoryBPFunctionLibrary_HasSubstring_Params
{
	struct FString                                     SearchIn;                                                 // (Parm, ZeroConstructor)
	struct FString                                     SubString;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESearchDir>                            SearchDir;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
struct UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateToBeUnbound_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
struct UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateCap_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
struct UVictoryBPFunctionLibrary_GetWidgetFromName_Params
{
	class UUserWidget*                                 ParentUserWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
struct UVictoryBPFunctionLibrary_GetViewportPositionHitResultByChannel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewportPosition;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
struct UVictoryBPFunctionLibrary_GetViewportPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   OutViewportPosition;                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
struct UVictoryBPFunctionLibrary_GetVectorRelativeLocation_Params
{
	struct FVector                                     ParentLocation;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    ParentRotation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     ChildLocation;                                            // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
struct UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params
{
	int                                                UnixTimeStamp;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   UTCTime;                                                  // (Parm, OutParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
struct UVictoryBPFunctionLibrary_GetUserDisplayAdapterBrand_Params
{
	bool                                               IsAMD;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNvidia;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsIntel;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnknown;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                UnknownId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
struct UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params
{
	struct FDateTime                                   UTCTime;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay
struct UVictoryBPFunctionLibrary_GetTimeInPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
struct UVictoryBPFunctionLibrary_GetTimeAlive_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
struct UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params
{
	class UStaticMeshComponent*                        Comp;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             VertexPositions;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile
struct UVictoryBPFunctionLibrary_GetSoundWaveFromFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class USoundWave*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
struct UVictoryBPFunctionLibrary_GetRotatorRelativeRotation_Params
{
	struct FRotator                                    ParentRotation;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    ChildRotation;                                            // (Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
struct UVictoryBPFunctionLibrary_GetPlayerUniqueNetID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
struct UVictoryBPFunctionLibrary_GetPlayerStart_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerStartName;                                          // (Parm, ZeroConstructor)
	class APlayerStart*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
struct UVictoryBPFunctionLibrary_GetObjectPath_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
struct UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             NamesOfLoadedLevels;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
struct UVictoryBPFunctionLibrary_GetLevelInstanceInfo_Params
{
	class ULevelStreamingKismet*                       LevelInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLevelStreamInstanceInfo                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
struct UVictoryBPFunctionLibrary_GetHeadMountedDisplayDeviceType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
struct UVictoryBPFunctionLibrary_GetGenericTeamId_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
struct UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
struct UVictoryBPFunctionLibrary_GetDistanceToCollision_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClosestPointOnCollision;                                  // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
struct UVictoryBPFunctionLibrary_GetDistanceBetweenComponentSurfaces_Params
{
	class UPrimitiveComponent*                         CollisionComponent1;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         CollisionComponent2;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PointOnSurface1;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     PointOnSurface2;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
struct UVictoryBPFunctionLibrary_GetCreationTime_Params
{
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
struct UVictoryBPFunctionLibrary_GetComponentRelativeRotation_Params
{
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ChildComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
struct UVictoryBPFunctionLibrary_GetComponentRelativeLocation_Params
{
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ChildComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
struct UVictoryBPFunctionLibrary_GetCommandLine_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
struct UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
struct UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorCenter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
struct UVictoryBPFunctionLibrary_GetBoxContainingWorldPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
struct UVictoryBPFunctionLibrary_GetAllWidgetsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UUserWidget*>                         FoundWidgets;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               TopLevelOnly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
struct UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       StartingBoneName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BoneNames;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
struct UVictoryBPFunctionLibrary_GetActorRelativeRotation_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ChildActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
struct UVictoryBPFunctionLibrary_GetActorRelativeLocation_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ChildActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
struct UVictoryBPFunctionLibrary_FlushPressedKeys_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
struct UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params
{
	class APlayerController*                           PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FlashContinuous;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxFlashCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlashFrequencyMilliseconds;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
struct UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params
{
	struct FString                                     SaveDirectory;                                            // (Parm, ZeroConstructor)
	struct FString                                     JoyfulFileName;                                           // (Parm, ZeroConstructor)
	struct FString                                     SaveText;                                                 // (Parm, ZeroConstructor)
	bool                                               AllowOverWriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
struct UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params
{
	struct FString                                     SaveDirectory;                                            // (Parm, ZeroConstructor)
	struct FString                                     JoyfulFileName;                                           // (Parm, ZeroConstructor)
	TArray<struct FString>                             SaveText;                                                 // (Parm, ZeroConstructor)
	bool                                               AllowOverWriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
struct UVictoryBPFunctionLibrary_EqualEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                        // (Parm, IsPlainOldData)
	struct FVector2D                                   B;                                                        // (Parm, IsPlainOldData)
	float                                              ErrorTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
struct UVictoryBPFunctionLibrary_DrawCircle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumPoints;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, IsPlainOldData)
	struct FVector                                     YAxis;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     ZAxis;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PersistentLines;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineFromSocket_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineFromCharacterSocket_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
struct UVictoryBPFunctionLibrary_Draw__Thick3DLineBetweenActors_Params
{
	class AActor*                                      StartActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      EndActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (Parm, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
struct UVictoryBPFunctionLibrary_DoesMaterialHaveParameter_Params
{
	class UMaterialInterface*                          Mat;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Parameter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
struct UVictoryBPFunctionLibrary_DistanceToSurface__DistaceOfPointToMeshSurface_Params
{
	class AStaticMeshActor*                            TheSMA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TestPoint;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ClosestSurfacePoint;                                      // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
struct UVictoryBPFunctionLibrary_Data__GetCharacterBoneLocations_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             BoneLocations;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
struct UVictoryBPFunctionLibrary_CreateTextureRenderTarget2D_Params
{
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColor;                                               // (Parm, IsPlainOldData)
	float                                              Gamma;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
struct UVictoryBPFunctionLibrary_CreatePrimitiveComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CompClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
struct UVictoryBPFunctionLibrary_CreatePlane_Params
{
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FPlane                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
struct UVictoryBPFunctionLibrary_CreateObject_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TheObjectClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
struct UVictoryBPFunctionLibrary_CreateMD5Hash_Params
{
	struct FString                                     FileToHash;                                               // (Parm, ZeroConstructor)
	struct FString                                     FileToStoreHashTo;                                        // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
struct UVictoryBPFunctionLibrary_CountOccurrancesOfSubString_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FString                                     SubString;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESearchCase>                           SearchCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
struct UVictoryBPFunctionLibrary_Conversions__VectorToRotator_Params
{
	struct FVector                                     TheVector;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
struct UVictoryBPFunctionLibrary_Conversions__StringToVector_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     ConvertedVector;                                          // (Parm, OutParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
struct UVictoryBPFunctionLibrary_Conversions__StringToRotator_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	struct FRotator                                    ConvertedRotator;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
struct UVictoryBPFunctionLibrary_Conversions__StringToColor_Params
{
	struct FString                                     string;                                                   // (Parm, ZeroConstructor)
	struct FLinearColor                                ConvertedColor;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
struct UVictoryBPFunctionLibrary_Conversions__RotatorToVector_Params
{
	struct FRotator                                    TheRotator;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
struct UVictoryBPFunctionLibrary_Conversions__ColorToString_Params
{
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     ColorAsString;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
struct UVictoryBPFunctionLibrary_Conversion__FloatToRoundedInteger_Params
{
	float                                              IN_Float;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
struct UVictoryBPFunctionLibrary_constructRand_Params
{
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
struct UVictoryBPFunctionLibrary_Component_PrestreamTextures_Params
{
	class UMeshComponent*                              Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
struct UVictoryBPFunctionLibrary_CompareMD5Hash_Params
{
	struct FString                                     MD5HashFile1;                                             // (Parm, ZeroConstructor)
	struct FString                                     MD5HashFile2;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
struct UVictoryBPFunctionLibrary_Clone__StaticMeshActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            ToClone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // (Parm, IsPlainOldData)
	class AStaticMeshActor*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
struct UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
struct UVictoryBPFunctionLibrary_CharacterMovement__SetMaxMoveSpeed_Params
{
	class ACharacter*                                  TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewMaxMoveSpeed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
struct UVictoryBPFunctionLibrary_Character__GetControllerRotation_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
struct UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params
{
	class USceneCaptureComponent2D*                    Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (ConstParm, Parm, ZeroConstructor)
	struct FLinearColor                                ClearColour;                                              // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
struct UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params
{
	class USceneCaptureComponent2D*                    Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   OutPixelLocation;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
struct UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params
{
	class ASceneCapture2D*                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (ConstParm, Parm, ZeroConstructor)
	struct FLinearColor                                ClearColour;                                              // (ConstParm, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
struct UVictoryBPFunctionLibrary_Capture2D_Project_Params
{
	class ASceneCapture2D*                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   OutPixelLocation;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
struct UVictoryBPFunctionLibrary_Calcs__ClosestPointToSourcePoint_Params
{
	struct FVector                                     Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FVector>                             OtherPoints;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     ClosestPoint;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
struct UVictoryBPFunctionLibrary_Array_Sort_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAscendingOrder;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VariableName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
struct UVictoryBPFunctionLibrary_Array_IsValidIndex_Params
{
	TArray<int>                                        TargetArray;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
struct UVictoryBPFunctionLibrary_AppendMultiple_Params
{
	struct FString                                     A;                                                        // (Parm, ZeroConstructor)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
struct UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params
{
	class AActor*                                      AnimBPOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TheRotation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
struct UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params
{
	class AActor*                                      AnimBPOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
struct UVictoryBPFunctionLibrary_AddToStreamingLevels_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLevelStreamInstanceInfo                    LevelInstanceInfo;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
struct UVictoryBPFunctionLibrary_AddToActorRotation_Params
{
	class AActor*                                      TheActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AddRot;                                                   // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
struct UVictoryBPFunctionLibrary_Actor_PrestreamTextures_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStreaming;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CinematicTextureGroups;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
struct UVictoryBPFunctionLibrary_Actor__TeleportToActor_Params
{
	class AActor*                                      ActorToTeleport;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DestinationActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
struct UVictoryBPFunctionLibrary_Actor__GetAttachedActors_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
struct UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
struct UVictoryBPFunctionLibrary_Accessor__GetNameAsString_Params
{
	class UObject*                                     TheObject;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
struct UVictoryBPFunctionLibrary_Accessor__GetCharacterSkeletalMesh_Params
{
	class AActor*                                      TheCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
struct UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Params
{
	bool                                               MakeVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryBPHTML.IsHTML
struct UVictoryBPHTML_IsHTML_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound
struct AVictoryPC_VictoryPlaySpeechSound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest
struct AVictoryPC_VictoryPC_GetMyIP_SendRequest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived
struct AVictoryPC_VictoryPC_GetMyIP_DataReceived_Params
{
	struct FString                                     YourIP;                                                   // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate
struct AVictoryPC_Subtitles_CPPDelegate_Params
{
	TArray<struct FSubtitleCue>                        VictorySubtitles;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              CueDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued
struct AVictoryPC_OnVictorySubtitlesQueued_Params
{
	TArray<struct FVictorySubtitleCue>                 VictorySubtitles;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              CueDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove
struct UVictoryTMapComp_String_Vector__Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Get
struct UVictoryTMapComp_String_Vector__Get_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear
struct UVictoryTMapComp_String_Vector__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair
struct UVictoryTMapComp_String_Vector__AddPair_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_String__Remove
struct UVictoryTMapComp_String_String__Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_String__Get
struct UVictoryTMapComp_String_String__Get_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_String__Clear
struct UVictoryTMapComp_String_String__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.String_String__AddPair
struct UVictoryTMapComp_String_String__AddPair_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove
struct UVictoryTMapComp_String_Rotator__Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get
struct UVictoryTMapComp_String_Rotator__Get_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear
struct UVictoryTMapComp_String_Rotator__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair
struct UVictoryTMapComp_String_Rotator__AddPair_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FRotator                                    Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Remove
struct UVictoryTMapComp_String_Int__Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Get
struct UVictoryTMapComp_String_Int__Get_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Clear
struct UVictoryTMapComp_String_Int__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair
struct UVictoryTMapComp_String_Int__AddPair_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove
struct UVictoryTMapComp_String_Actor__Remove_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Get
struct UVictoryTMapComp_String_Actor__Get_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear
struct UVictoryTMapComp_String_Actor__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair
struct UVictoryTMapComp_String_Actor__AddPair_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	class AActor*                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove
struct UVictoryTMapComp_Int_Vector__Remove_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get
struct UVictoryTMapComp_Int_Vector__Get_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear
struct UVictoryTMapComp_Int_Vector__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair
struct UVictoryTMapComp_Int_Vector__AddPair_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove
struct UVictoryTMapComp_Int_Float__Remove_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Get
struct UVictoryTMapComp_Int_Float__Get_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear
struct UVictoryTMapComp_Int_Float__Clear_Params
{
};

// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair
struct UVictoryTMapComp_Int_Float__AddPair_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
