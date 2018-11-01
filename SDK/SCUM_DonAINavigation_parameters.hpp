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

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
struct UBTTask_FlyTo_Pathfinding_OnFinish_Params
{
	struct FDoNNavigationQueryData                     Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
struct UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params
{
	struct FDonNavigationDynamicCollisionPayload       Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor
struct UDonNavigationHelper_DonNavigationManagerForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ADonNavigationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationHelper.DonNavigationManager
struct UDonNavigationHelper_DonNavigationManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ADonNavigationManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
struct ADonNavigationManager_VisualizeNAVResult_Params
{
	TArray<struct FVector>                             PathSolution;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Source;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	bool                                               Reset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FColor                                      LineColor;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
struct ADonNavigationManager_VisualizeDynamicCollisionListeners_Params
{
	struct FScriptDelegate                             Listener;                                                 // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params
{
	struct FScriptDelegate                             ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                VolumeIndex;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
struct ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params
{
	struct FScriptDelegate                             ListenerToClear;                                          // (Parm, ZeroConstructor)
	struct FDoNNavigationQueryData                     QueryData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
struct ADonNavigationManager_SchedulePathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             ResultHandlerDelegate;                                    // (Parm, ZeroConstructor)
	struct FScriptDelegate                             DynamicCollisionListener;                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
struct ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ResultHandler;                                            // (Parm, ZeroConstructor)
	struct FName                                       CustomCacheIdentifier;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceExistingTask;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCacheUsage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReloadCollisionCache;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCheapBoundsCollision;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSynchronousExecution;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
struct ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params
{
	class UPrimitiveComponent*                         Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BoundsScaleFactor;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
struct ADonNavigationManager_IsLocationWithinNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                          // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
struct ADonNavigationManager_IsLocationBeneathLandscape_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              LineTraceHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
struct ADonNavigationManager_IsDirectPathSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
struct ADonNavigationManager_IsDirectPathLineTrace_Params
{
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
struct ADonNavigationManager_IsDirectPathLineSweep_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               bFindInitialOverlaps;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CollisionShapeInflation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.HasTask
struct ADonNavigationManager_HasTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
struct ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
struct ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params
{
	class AActor*                                      NavigationActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundValidResult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredAltitude;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxZAngularDispacement;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAttempts;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
struct ADonNavigationManager_FindPathSolution_StressTesting_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	TArray<struct FVector>                             PathSolutionRaw;                                          // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             PathSolutionOptimized;                                    // (Parm, OutParm, ZeroConstructor)
	struct FDoNNavigationQueryParams                   QueryParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FDoNNavigationDebugParams                   DebugParams;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
struct ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params
{
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
struct ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params
{
	class UPrimitiveComponent*                         MeshOrPrimitive;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDrawPersistent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
struct ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	int                                                CubeSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrawPersistentLines;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoInitializeVolumes;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
struct ADonNavigationManager_Debug_DrawAllVolumes_Params
{
	float                                              LineThickness;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
struct ADonNavigationManager_Debug_ClearAllVolumes_Params
{
};

// Function DonAINavigation.DonNavigationManager.ConstructBuilder
struct ADonNavigationManager_ConstructBuilder_Params
{
};

// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
struct ADonNavigationManager_ClampLocationToNavigableWorld_Params
{
	struct FVector                                     DesiredLocation;                                          // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.CanNavigate
struct ADonNavigationManager_CanNavigate_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
struct ADonNavigationManager_AbortPathfindingTask_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigator.OnNextSegment
struct UDonNavigator_OnNextSegment_Params
{
	struct FVector                                     NextPoint;                                                // (Parm, IsPlainOldData)
};

// Function DonAINavigation.DonNavigator.OnLocomotionEnd
struct UDonNavigator_OnLocomotionEnd_Params
{
	bool                                               bLocomotionSuccess;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DonAINavigation.DonNavigator.OnLocomotionBegin
struct UDonNavigator_OnLocomotionBegin_Params
{
};

// Function DonAINavigation.DonNavigator.OnLocomotionAbort
struct UDonNavigator_OnLocomotionAbort_Params
{
};

// Function DonAINavigation.DonNavigator.AddMovementInputCustom
struct UDonNavigator_AddMovementInputCustom_Params
{
	struct FVector                                     WorldDirection;                                           // (Parm, IsPlainOldData)
	float                                              ScaleValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
