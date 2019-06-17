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

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleWheelsComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleWheelsComponent* ADcxVehicle::GetVehicleWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetVehicleWheels");

	ADcxVehicle_GetVehicleWheels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.GetMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* ADcxVehicle::GetMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.GetMesh");

	ADcxVehicle_GetMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Up                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Forward                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADcxVehicle::STATIC_DcxVehicleSetBasisVectors(const struct FVector& Up, const struct FVector& Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors");

	ADcxVehicle_DcxVehicleSetBasisVectors_Params params;
	params.Up = Up;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveComponent4W* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleDriveComponent4W* ADcxVehicle4W::GetVehicleDrive4W()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W");

	ADcxVehicle4W_GetVehicleDrive4W_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetWheelOffset(int WheelIndex, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset");

	UDcxVehicleWheelsComponent_SetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelData    WheelData                      (Parm, OutParm)

void UDcxVehicleWheelsComponent::SetWheelData(int WheelIndex, struct FDcxVehicleWheelData* WheelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData");

	UDcxVehicleWheelsComponent_SetWheelData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WheelData != nullptr)
		*WheelData = params.WheelData;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UDcxVehicleTire*         Tire                           (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetTire(int WheelId, class UDcxVehicleTire* Tire)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetTire");

	UDcxVehicleWheelsComponent_SetTire_Params params;
	params.WheelId = WheelId;
	params.Tire = Tire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleSuspensionData SuspensionData                 (Parm, OutParm)

void UDcxVehicleWheelsComponent::SetSuspensionData(int WheelIndex, struct FDcxVehicleSuspensionData* SuspensionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData");

	UDcxVehicleWheelsComponent_SetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuspensionData != nullptr)
		*SuspensionData = params.SuspensionData;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToIgnore(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore");

	UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetGroupsToAvoid(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid");

	UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Mass                           (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetChassisMass(float Mass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass");

	UDcxVehicleWheelsComponent_SetChassisMass_Params params;
	params.Mass = Mass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask       Mask                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDcxVehicleWheelsComponent::SetAvoidanceGroup(const struct FNavAvoidanceMask& Mask)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup");

	UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params params;
	params.Mask = Mask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FDcxAnalogControlArray  AnalogControls                 (ConstParm, Parm, ReferenceParm)
// struct FDcxGear                CurrentGear                    (ConstParm, Parm, ReferenceParm)
// struct FDcxGear                TargetGear                     (ConstParm, Parm, ReferenceParm)

void UDcxVehicleWheelsComponent::ServerUpdateState(const struct FDcxAnalogControlArray& AnalogControls, const struct FDcxGear& CurrentGear, const struct FDcxGear& TargetGear)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState");

	UDcxVehicleWheelsComponent_ServerUpdateState_Params params;
	params.AnalogControls = AnalogControls;
	params.CurrentGear = CurrentGear;
	params.TargetGear = TargetGear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleWheelsComponent::IsWheelDisabled(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled");

	UDcxVehicleWheelsComponent_IsWheelDisabled_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelState   WheelState                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleWheelsComponent::GetWheelState(int WheelIndex, struct FDcxVehicleWheelState* WheelState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState");

	UDcxVehicleWheelsComponent_GetWheelState_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WheelState != nullptr)
		*WheelState = params.WheelState;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationSpeed(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed");

	UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetWheelRotationAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle");

	UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UDcxVehicleWheelsComponent::GetWheelOffset(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset");

	UDcxVehicleWheelsComponent_GetWheelOffset_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleWheelData    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleWheelData UDcxVehicleWheelsComponent::GetWheelData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData");

	UDcxVehicleWheelsComponent_GetWheelData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDcxVehicleTire*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleTire* UDcxVehicleWheelsComponent::GetTire(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetTire");

	UDcxVehicleWheelsComponent_GetTire_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDcxVehicleSuspensionData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleSuspensionData UDcxVehicleWheelsComponent::GetSuspensionData(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData");

	UDcxVehicleWheelsComponent_GetSuspensionData_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleWheelsRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleWheelsRawInput* UDcxVehicleWheelsComponent::GetRawInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput");

	UDcxVehicleWheelsComponent_GetRawInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleWheelsComponent::GetNumWheels()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels");

	UDcxVehicleWheelsComponent_GetNumWheels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed");

	UDcxVehicleWheelsComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetChassisMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass");

	UDcxVehicleWheelsComponent_GetChassisMass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UDcxVehicleWheelsComponent::GetBoneName(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName");

	UDcxVehicleWheelsComponent_GetBoneName_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Control                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsComponent::GetAnalogControl(unsigned char Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl");

	UDcxVehicleWheelsComponent_GetAnalogControl_Params params;
	params.Control = Control;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel");

	UDcxVehicleWheelsComponent_EnableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::EnableAvoidance(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance");

	UDcxVehicleWheelsComponent_EnableAvoidance_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsComponent::DisableWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel");

	UDcxVehicleWheelsComponent_DisableWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewGear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetTargetGear(int NewGear, bool bImmediate)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear");

	UDcxVehicleDriveComponent_SetTargetGear_Params params;
	params.NewGear = NewGear;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> NewGearboxType                 (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetGearboxType(TEnumAsByte<EDcxVehicleGearbox> NewGearboxType)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType");

	UDcxVehicleDriveComponent_SetGearboxType_Params params;
	params.NewGearboxType = NewGearboxType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDcxVehicleGearboxData  NewGearboxData                 (Parm, OutParm)

void UDcxVehicleDriveComponent::SetGearboxData(struct FDcxVehicleGearboxData* NewGearboxData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData");

	UDcxVehicleDriveComponent_SetGearboxData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewGearboxData != nullptr)
		*NewGearboxData = params.NewGearboxData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          RPM                            (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponent::SetEngineRotationSpeed(float RPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed");

	UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params params;
	params.RPM = RPM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDcxVehicleEngineData   NewEngineData                  (Parm, OutParm)

void UDcxVehicleDriveComponent::SetEngineData(struct FDcxVehicleEngineData* NewEngineData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData");

	UDcxVehicleDriveComponent_SetEngineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEngineData != nullptr)
		*NewEngineData = params.NewEngineData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDcxVehicleClutchData   NewClutchData                  (Parm, OutParm)

void UDcxVehicleDriveComponent::SetClutchData(struct FDcxVehicleClutchData* NewClutchData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData");

	UDcxVehicleDriveComponent_SetClutchData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClutchData != nullptr)
		*NewClutchData = params.NewClutchData;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponent::GetTargetGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear");

	UDcxVehicleDriveComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDcxVehicleGearbox> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDcxVehicleGearbox> UDcxVehicleDriveComponent::GetGearboxType()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType");

	UDcxVehicleDriveComponent_GetGearboxType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDcxVehicleGearboxData  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleGearboxData UDcxVehicleDriveComponent::GetGearboxData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData");

	UDcxVehicleDriveComponent_GetGearboxData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveComponent::GetEngineRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed");

	UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDcxVehicleEngineData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleEngineData UDcxVehicleDriveComponent::GetEngineData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData");

	UDcxVehicleDriveComponent_GetEngineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDcxVehicleDriveComponent::GetCurrentGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear");

	UDcxVehicleDriveComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDcxVehicleClutchData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleClutchData UDcxVehicleDriveComponent::GetClutchData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData");

	UDcxVehicleDriveComponent_GetClutchData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDcxVehicleDifferentialData4W NewDifferentialData            (Parm, OutParm)

void UDcxVehicleDriveComponent4W::SetDifferentialData(struct FDcxVehicleDifferentialData4W* NewDifferentialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData");

	UDcxVehicleDriveComponent4W_SetDifferentialData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDifferentialData != nullptr)
		*NewDifferentialData = params.NewDifferentialData;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveRawInput4W* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleDriveRawInput4W* UDcxVehicleDriveComponent4W::GetRawInput4W()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W");

	UDcxVehicleDriveComponent4W_GetRawInput4W_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDcxVehicleDifferentialData4W ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDcxVehicleDifferentialData4W UDcxVehicleDriveComponent4W::GetDifferentialData()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData");

	UDcxVehicleDriveComponent4W_GetDifferentialData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDriven                      (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentNW::SetDrivenWheel(int WheelIndex, bool bIsDriven)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel");

	UDcxVehicleDriveComponentNW_SetDrivenWheel_Params params;
	params.WheelIndex = WheelIndex;
	params.bIsDriven = bIsDriven;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveComponentNW::IsDrivenWheel(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel");

	UDcxVehicleDriveComponentNW_IsDrivenWheel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveRawInputNW* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleDriveRawInputNW* UDcxVehicleDriveComponentNW::GetRawInputNW()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW");

	UDcxVehicleDriveComponentNW_GetRawInputNW_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel                   (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveComponentTank::SetDriveModel(TEnumAsByte<EDcxVehicleDriveControlModelTank> ControlModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel");

	UDcxVehicleDriveComponentTank_SetDriveModel_Params params;
	params.ControlModel = ControlModel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveRawInputTank* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleDriveRawInputTank* UDcxVehicleDriveComponentTank::GetRawInputTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank");

	UDcxVehicleDriveComponentTank_GetRawInputTank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDcxVehicleDriveControlModelTank> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EDcxVehicleDriveControlModelTank> UDcxVehicleDriveComponentTank::GetDriveModel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel");

	UDcxVehicleDriveComponentTank_GetDriveModel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Throttle                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleWheelsRawInput::SetThrottle(float Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle");

	UDcxVehicleWheelsRawInput_SetThrottle_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleWheelsRawInput::GetThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle");

	UDcxVehicleWheelsRawInput_GetThrottle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bGearUpPressed                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearUp(bool bGearUpPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp");

	UDcxVehicleDriveRawInput_SetGearUp_Params params;
	params.bGearUpPressed = bGearUpPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bGearDownPressed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetGearDown(bool bGearDownPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown");

	UDcxVehicleDriveRawInput_SetGearDown_Params params;
	params.bGearDownPressed = bGearDownPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Clutch                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput::SetClutch(float Clutch)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch");

	UDcxVehicleDriveRawInput_SetClutch_Params params;
	params.Clutch = Clutch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp");

	UDcxVehicleDriveRawInput_GetGearUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDcxVehicleDriveRawInput::GetGearDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown");

	UDcxVehicleDriveRawInput_GetGearDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput::GetClutch()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch");

	UDcxVehicleDriveRawInput_GetClutch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Steer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetSteer(float Steer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer");

	UDcxVehicleDriveRawInput4W_SetSteer_Params params;
	params.Steer = Steer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Handbrake                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetHandbrake(float Handbrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake");

	UDcxVehicleDriveRawInput4W_SetHandbrake_Params params;
	params.Handbrake = Handbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Brake                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInput4W::SetBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake");

	UDcxVehicleDriveRawInput4W_SetBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer");

	UDcxVehicleDriveRawInput4W_GetSteer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetHandbrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake");

	UDcxVehicleDriveRawInput4W_GetHandbrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInput4W::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake");

	UDcxVehicleDriveRawInput4W_GetBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Thrust                         (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetRightThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust");

	UDcxVehicleDriveRawInputTank_SetRightThrust_Params params;
	params.Thrust = Thrust;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetRightBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake");

	UDcxVehicleDriveRawInputTank_SetRightBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Thrust                         (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetLeftThrust(float Thrust)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust");

	UDcxVehicleDriveRawInputTank_SetLeftThrust_Params params;
	params.Thrust = Thrust;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleDriveRawInputTank::SetLeftBrake(float Brake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake");

	UDcxVehicleDriveRawInputTank_SetLeftBrake_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetRightThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust");

	UDcxVehicleDriveRawInputTank_GetRightThrust_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetRightBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake");

	UDcxVehicleDriveRawInputTank_GetRightBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetLeftThrust()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust");

	UDcxVehicleDriveRawInputTank_GetLeftThrust_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleDriveRawInputTank::GetLeftBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake");

	UDcxVehicleDriveRawInputTank_GetLeftBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleNoDriveComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleNoDriveComponent* ADcxVehicleNoDrive::GetVehicleNoDrive()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive");

	ADcxVehicleNoDrive_GetVehicleNoDrive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetSteerAngle(int WheelIndex, float SteerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle");

	UDcxVehicleNoDriveComponent_SetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;
	params.SteerAngle = SteerAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetDriveTorque(int WheelIndex, float DriveTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque");

	UDcxVehicleNoDriveComponent_SetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.DriveTorque = DriveTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveComponent::SetBrakeTorque(int WheelIndex, float BrakeTorque)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque");

	UDcxVehicleNoDriveComponent_SetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;
	params.BrakeTorque = BrakeTorque;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetSteerAngle(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle");

	UDcxVehicleNoDriveComponent_GetSteerAngle_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleNoDriveRawInput* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDcxVehicleNoDriveRawInput* UDcxVehicleNoDriveComponent::GetRawInputND()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND");

	UDcxVehicleNoDriveComponent_GetRawInputND_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetDriveTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque");

	UDcxVehicleNoDriveComponent_GetDriveTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveComponent::GetBrakeTorque(int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque");

	UDcxVehicleNoDriveComponent_GetBrakeTorque_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSteer                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveRawInput::SetSteer(float NewSteer)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer");

	UDcxVehicleNoDriveRawInput_SetSteer_Params params;
	params.NewSteer = NewSteer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewBrake                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDcxVehicleNoDriveRawInput::SetBrake(float NewBrake)
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake");

	UDcxVehicleNoDriveRawInput_SetBrake_Params params;
	params.NewBrake = NewBrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveRawInput::GetSteer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer");

	UDcxVehicleNoDriveRawInput_GetSteer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDcxVehicleNoDriveRawInput::GetBrake()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake");

	UDcxVehicleNoDriveRawInput_GetBrake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveComponentNW* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleDriveComponentNW* ADcxVehicleNW::GetVehicleDriveNW()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW");

	ADcxVehicleNW_GetVehicleDriveNW_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDcxVehicleDriveComponentTank* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDcxVehicleDriveComponentTank* ADcxVehicleTank::GetVehicleDriveTank()
{
	static auto fn = UObject::FindObject<UFunction>("Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank");

	ADcxVehicleTank_GetVehicleDriveTank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
