// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDoNNavigationQueryData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnFinish(const struct FDoNNavigationQueryData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnFinish");

	UBTTask_FlyTo_Pathfinding_OnFinish_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDonNavigationDynamicCollisionPayload Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UBTTask_FlyTo::Pathfinding_OnDynamicCollisionAlert(const struct FDonNavigationDynamicCollisionPayload& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.BTTask_FlyTo.Pathfinding_OnDynamicCollisionAlert");

	UBTTask_FlyTo_Pathfinding_OnDynamicCollisionAlert_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::STATIC_DonNavigationManagerForActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationHelper.DonNavigationManagerForActor");

	UDonNavigationHelper_DonNavigationManagerForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationHelper.DonNavigationManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ADonNavigationManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ADonNavigationManager* UDonNavigationHelper::STATIC_DonNavigationManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationHelper.DonNavigationManager");

	UDonNavigationHelper_DonNavigationManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.VisualizeNAVResult
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         PathSolution                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Source                         (Parm, IsPlainOldData)
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// bool                           Reset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FColor                  LineColor                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADonNavigationManager::VisualizeNAVResult(TArray<struct FVector> PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeNAVResult");

	ADonNavigationManager_VisualizeNAVResult_Params params;
	params.PathSolution = PathSolution;
	params.Source = Source;
	params.Destination = Destination;
	params.Reset = Reset;
	params.DebugParams = DebugParams;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Listener                       (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::VisualizeDynamicCollisionListeners(const struct FScriptDelegate& Listener, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.VisualizeDynamicCollisionListeners");

	ADonNavigationManager_VisualizeDynamicCollisionListeners_Params params;
	params.Listener = Listener;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            VolumeIndex                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPathIndex(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData, int VolumeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPathIndex");

	ADonNavigationManager_StopListeningToDynamicCollisionsForPathIndex_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;
	params.VolumeIndex = VolumeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ListenerToClear                (Parm, ZeroConstructor)
// struct FDoNNavigationQueryData QueryData                      (ConstParm, Parm, OutParm, ReferenceParm)

void ADonNavigationManager::StopListeningToDynamicCollisionsForPath(const struct FScriptDelegate& ListenerToClear, const struct FDoNNavigationQueryData& QueryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.StopListeningToDynamicCollisionsForPath");

	ADonNavigationManager_StopListeningToDynamicCollisionsForPath_Params params;
	params.ListenerToClear = ListenerToClear;
	params.QueryData = QueryData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         ResultHandlerDelegate          (Parm, ZeroConstructor)
// struct FScriptDelegate         DynamicCollisionListener       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, const struct FScriptDelegate& ResultHandlerDelegate, const struct FScriptDelegate& DynamicCollisionListener)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.SchedulePathfindingTask");

	ADonNavigationManager_SchedulePathfindingTask_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;
	params.ResultHandlerDelegate = ResultHandlerDelegate;
	params.DynamicCollisionListener = DynamicCollisionListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         ResultHandler                  (Parm, ZeroConstructor)
// struct FName                   CustomCacheIdentifier          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceExistingTask           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableCacheUsage             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReloadCollisionCache          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCheapBoundsCollision       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceSynchronousExecution     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* Mesh, const struct FScriptDelegate& ResultHandler, const struct FName& CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ScheduleDynamicCollisionUpdate");

	ADonNavigationManager_ScheduleDynamicCollisionUpdate_Params params;
	params.Mesh = Mesh;
	params.ResultHandler = ResultHandler;
	params.CustomCacheIdentifier = CustomCacheIdentifier;
	params.bReplaceExistingTask = bReplaceExistingTask;
	params.bDisableCacheUsage = bDisableCacheUsage;
	params.bReloadCollisionCache = bReloadCollisionCache;
	params.bUseCheapBoundsCollision = bUseCheapBoundsCollision;
	params.BoundsScaleFactor = BoundsScaleFactor;
	params.bForceSynchronousExecution = bForceSynchronousExecution;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          BoundsScaleFactor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* Mesh, float BoundsScaleFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsMeshBoundsWithinNavigableWorld");

	ADonNavigationManager_IsMeshBoundsWithinNavigableWorld_Params params;
	params.Mesh = Mesh;
	params.BoundsScaleFactor = BoundsScaleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 DesiredLocation                (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationWithinNavigableWorld");

	ADonNavigationManager_IsLocationWithinNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          LineTraceHeight                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsLocationBeneathLandscape");

	ADonNavigationManager_IsLocationBeneathLandscape_Params params;
	params.Location = Location;
	params.LineTraceHeight = LineTraceHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathSweep
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Start                          (Parm, IsPlainOldData)
// struct FVector                 End                            (Parm, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathSweep");

	ADonNavigationManager_IsDirectPathSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, IsPlainOldData)
// struct FVector                 End                            (Parm, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, TArray<class AActor*> ActorsToIgnore, bool bFindInitialOverlaps, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineTrace");

	ADonNavigationManager_IsDirectPathLineTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.ActorsToIgnore = ActorsToIgnore;
	params.bFindInitialOverlaps = bFindInitialOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Start                          (Parm, IsPlainOldData)
// struct FVector                 End                            (Parm, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           bFindInitialOverlaps           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CollisionShapeInflation        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, bool bFindInitialOverlaps, float CollisionShapeInflation, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.IsDirectPathLineSweep");

	ADonNavigationManager_IsDirectPathLineSweep_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Start = Start;
	params.End = End;
	params.bFindInitialOverlaps = bFindInitialOverlaps;
	params.CollisionShapeInflation = CollisionShapeInflation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.HasTask
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::HasTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.HasTask");

	ADonNavigationManager_HasTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointFromActorInNavWorld(class AActor* Actor, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointFromActorInNavWorld");

	ADonNavigationManager_FindRandomPointFromActorInNavWorld_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  NavigationActor                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundValidResult              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxDesiredAltitude             (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxZAngularDispacement         (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxAttempts                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float Distance, float MaxDesiredAltitude, float MaxZAngularDispacement, int MaxAttempts, bool* bFoundValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindRandomPointAroundOriginInNavWorld");

	ADonNavigationManager_FindRandomPointAroundOriginInNavWorld_Params params;
	params.NavigationActor = NavigationActor;
	params.Origin = Origin;
	params.Distance = Distance;
	params.MaxDesiredAltitude = MaxDesiredAltitude;
	params.MaxZAngularDispacement = MaxZAngularDispacement;
	params.MaxAttempts = MaxAttempts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundValidResult != nullptr)
		*bFoundValidResult = params.bFoundValidResult;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// TArray<struct FVector>         PathSolutionRaw                (Parm, OutParm, ZeroConstructor)
// TArray<struct FVector>         PathSolutionOptimized          (Parm, OutParm, ZeroConstructor)
// struct FDoNNavigationQueryParams QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDoNNavigationDebugParams DebugParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.FindPathSolution_StressTesting");

	ADonNavigationManager_FindPathSolution_StressTesting_Params params;
	params.Actor = Actor;
	params.Destination = Destination;
	params.QueryParams = QueryParams;
	params.DebugParams = DebugParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathSolutionRaw != nullptr)
		*PathSolutionRaw = params.PathSolutionRaw;
	if (PathSolutionOptimized != nullptr)
		*PathSolutionOptimized = params.PathSolutionOptimized;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::Debug_ToggleWorldBoundaryInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ToggleWorldBoundaryInGame");

	ADonNavigationManager_Debug_ToggleWorldBoundaryInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     MeshOrPrimitive                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bDrawPersistent                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, bool bDrawPersistent, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVoxelCollisionProfile");

	ADonNavigationManager_Debug_DrawVoxelCollisionProfile_Params params;
	params.MeshOrPrimitive = MeshOrPrimitive;
	params.bDrawPersistent = bDrawPersistent;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// int                            CubeSize                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawPersistentLines            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoInitializeVolumes         (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawVolumesAroundPoint(const struct FVector& Location, int CubeSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawVolumesAroundPoint");

	ADonNavigationManager_Debug_DrawVolumesAroundPoint_Params params;
	params.Location = Location;
	params.CubeSize = CubeSize;
	params.DrawPersistentLines = DrawPersistentLines;
	params.Duration = Duration;
	params.LineThickness = LineThickness;
	params.bAutoInitializeVolumes = bAutoInitializeVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          LineThickness                  (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::Debug_DrawAllVolumes(float LineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_DrawAllVolumes");

	ADonNavigationManager_Debug_DrawAllVolumes_Params params;
	params.LineThickness = LineThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::Debug_ClearAllVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.Debug_ClearAllVolumes");

	ADonNavigationManager_Debug_ClearAllVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ConstructBuilder
// (Final, Native, Public, BlueprintCallable)

void ADonNavigationManager::ConstructBuilder()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ConstructBuilder");

	ADonNavigationManager_ConstructBuilder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DesiredLocation                (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ADonNavigationManager::ClampLocationToNavigableWorld(const struct FVector& DesiredLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.ClampLocationToNavigableWorld");

	ADonNavigationManager_ClampLocationToNavigableWorld_Params params;
	params.DesiredLocation = DesiredLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.CanNavigate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADonNavigationManager::CanNavigate(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.CanNavigate");

	ADonNavigationManager_CanNavigate_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DonAINavigation.DonNavigationManager.AbortPathfindingTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ADonNavigationManager::AbortPathfindingTask(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigationManager.AbortPathfindingTask");

	ADonNavigationManager_AbortPathfindingTask_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigator.OnNextSegment
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NextPoint                      (Parm, IsPlainOldData)

void UDonNavigator::OnNextSegment(const struct FVector& NextPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnNextSegment");

	UDonNavigator_OnNextSegment_Params params;
	params.NextPoint = NextPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigator.OnLocomotionEnd
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLocomotionSuccess             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDonNavigator::OnLocomotionEnd(bool bLocomotionSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionEnd");

	UDonNavigator_OnLocomotionEnd_Params params;
	params.bLocomotionSuccess = bLocomotionSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigator.OnLocomotionBegin
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDonNavigator::OnLocomotionBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionBegin");

	UDonNavigator_OnLocomotionBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigator.OnLocomotionAbort
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDonNavigator::OnLocomotionAbort()
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.OnLocomotionAbort");

	UDonNavigator_OnLocomotionAbort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DonAINavigation.DonNavigator.AddMovementInputCustom
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldDirection                 (Parm, IsPlainOldData)
// float                          ScaleValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UDonNavigator::AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DonAINavigation.DonNavigator.AddMovementInputCustom");

	UDonNavigator_AddMovementInputCustom_Params params;
	params.WorldDirection = WorldDirection;
	params.ScaleValue = ScaleValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
