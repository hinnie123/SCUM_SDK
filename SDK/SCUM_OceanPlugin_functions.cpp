// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 A                              (Parm, IsPlainOldData)
// struct FVector                 B                              (Parm, IsPlainOldData)
// struct FVector                 C                              (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea");

	UAdvancedBuoyancyComponent_TriangleArea_Params fn_params;
	fn_params.A = A;
	fn_params.B = B;
	fn_params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBuoyancyVertex         H                              (Parm)
// struct FBuoyancyVertex         M                              (Parm)
// struct FBuoyancyVertex         L                              (Parm)
// struct FVector                 InArrow                        (Parm, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle");

	UAdvancedBuoyancyComponent_SplitTriangle_Params fn_params;
	fn_params.H = H;
	fn_params.M = M;
	fn_params.L = L;
	fn_params.InArrow = InArrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity");

	UAdvancedBuoyancyComponent_SetMeshDensity_Params fn_params;
	fn_params.NewDensity = NewDensity;
	fn_params.NewWaterDensity = NewWaterDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid");

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params fn_params;
	fn_params.Position = Position;
	fn_params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// (Final, Native, Public, BlueprintCallable)

void UAdvancedBuoyancyComponent::GetOcean()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean");

	UAdvancedBuoyancyComponent_GetOcean_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)
// struct FColor                  DebugColor                     (Parm, IsPlainOldData)

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff");

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params fn_params;
	fn_params.TriForce = TriForce;
	fn_params.DebugColor = DebugColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SlamForce                      (Parm, IsPlainOldData)
// struct FVector                 TriCenter                      (Parm, IsPlainOldData)

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce");

	UAdvancedBuoyancyComponent_ApplySlamForce_Params fn_params;
	fn_params.SlamForce = SlamForce;
	fn_params.TriCenter = TriCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce");

	UAdvancedBuoyancyComponent_ApplyForce_Params fn_params;
	fn_params.TriForce = TriForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.GetIsDriving
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACustomVehicleController::GetIsDriving()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.GetIsDriving");

	ACustomVehicleController_GetIsDriving_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// (Native, Public, BlueprintCallable)

void ACustomVehicleController::ExitVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.ExitVehicle");

	ACustomVehicleController_ExitVehicle_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnterVehicle");

	ACustomVehicleController_EnterVehicle_Params fn_params;
	fn_params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// (Exec, Native, Public)

void ACustomVehicleController::EnableBuoyancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.EnableBuoyancy");

	ACustomVehicleController_EnableBuoyancy_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// (Exec, Native, Public)

void ACustomVehicleController::DrawBuoyancyPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints");

	ACustomVehicleController_DrawBuoyancyPoints_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnEndOverlap");

	AFlockFish_OnEndOverlap_Params fn_params;
	fn_params.activatedComp = activatedComp;
	fn_params.OtherActor = OtherActor;
	fn_params.OtherComp = OtherComp;
	fn_params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.FlockFish.OnBeginOverlap");

	AFlockFish_OnBeginOverlap_Params fn_params;
	fn_params.activatedComp = activatedComp;
	fn_params.OtherActor = OtherActor;
	fn_params.OtherComp = OtherComp;
	fn_params.OtherBodyIndex = OtherBodyIndex;
	fn_params.bFromSweep = bFromSweep;
	fn_params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.MySetNetworkOffset
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void AOceanManager::MySetNetworkOffset(float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.MySetNetworkOffset");

	AOceanManager_MySetNetworkOffset_Params fn_params;
	fn_params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap");

	AOceanManager_LoadLandscapeHeightmap_Params fn_params;
	fn_params.Tex2D = Tex2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetWaveHeightValue");

	AOceanManager_GetWaveHeightValue_Params fn_params;
	fn_params.Location = Location;
	fn_params.World = World;
	fn_params.HeightOnly = HeightOnly;
	fn_params.TwoIterations = TwoIterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.OceanManager.GetHeightmapPixel");

	AOceanManager_GetHeightmapPixel_Params fn_params;
	fn_params.U = U;
	fn_params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::SetCurrentLocalTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.SetCurrentLocalTime");

	ATimeManager_SetCurrentLocalTime_Params fn_params;
	fn_params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IsLeapYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATimeManager::IsLeapYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IsLeapYear");

	ATimeManager_IsLeapYear_Params fn_params;
	fn_params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (Parm)

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.InitializeCalendar");

	ATimeManager_InitializeCalendar_Params fn_params;
	fn_params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IncrementTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.IncrementTime");

	ATimeManager_IncrementTime_Params fn_params;
	fn_params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.GetYearPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetYearPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetYearPhase");

	ATimeManager_GetYearPhase_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetElapsedDayInMinutes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes");

	ATimeManager_GetElapsedDayInMinutes_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInYear(int Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInYear");

	ATimeManager_GetDaysInYear_Params fn_params;
	fn_params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDaysInMonth");

	ATimeManager_GetDaysInMonth_Params fn_params;
	fn_params.Year = Year;
	fn_params.Month = Month;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::GetDayPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayPhase");

	ATimeManager_GetDayPhase_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.GetDayOfYear");

	ATimeManager_GetDayOfYear_Params fn_params;
	fn_params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateSunAngle");

	ATimeManager_CalculateSunAngle_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeManager::CalculateMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonPhase");

	ATimeManager_CalculateMoonPhase_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlugin.TimeManager.CalculateMoonAngle");

	ATimeManager_CalculateMoonAngle_Params fn_params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
