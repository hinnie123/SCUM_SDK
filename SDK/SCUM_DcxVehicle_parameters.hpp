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

// Function DcxVehicle.DcxVehicle.GetVehicleWheels
struct ADcxVehicle_GetVehicleWheels_Params
{
	class UDcxVehicleWheelsComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.GetMesh
struct ADcxVehicle_GetMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle.DcxVehicleSetBasisVectors
struct ADcxVehicle_DcxVehicleSetBasisVectors_Params
{
	struct FVector                                     Up;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicle4W.GetVehicleDrive4W
struct ADcxVehicle4W_GetVehicleDrive4W_Params
{
	class UDcxVehicleDriveComponent4W*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelOffset
struct UDcxVehicleWheelsComponent_SetWheelOffset_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetWheelData
struct UDcxVehicleWheelsComponent_SetWheelData_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelData                        WheelData;                                                // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetTire
struct UDcxVehicleWheelsComponent_SetTire_Params
{
	int                                                WheelId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UDcxVehicleTire*                             Tire;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetSuspensionData
struct UDcxVehicleWheelsComponent_SetSuspensionData_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleSuspensionData                   SuspensionData;                                           // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToIgnore
struct UDcxVehicleWheelsComponent_SetGroupsToIgnore_Params
{
	struct FNavAvoidanceMask                           Mask;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetGroupsToAvoid
struct UDcxVehicleWheelsComponent_SetGroupsToAvoid_Params
{
	struct FNavAvoidanceMask                           Mask;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetChassisMass
struct UDcxVehicleWheelsComponent_SetChassisMass_Params
{
	float                                              Mass;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.SetAvoidanceGroup
struct UDcxVehicleWheelsComponent_SetAvoidanceGroup_Params
{
	struct FNavAvoidanceMask                           Mask;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.ServerUpdateState
struct UDcxVehicleWheelsComponent_ServerUpdateState_Params
{
	struct FDcxAnalogControlArray                      AnalogControls;                                           // (ConstParm, Parm, ReferenceParm)
	struct FDcxGear                                    CurrentGear;                                              // (ConstParm, Parm, ReferenceParm)
	struct FDcxGear                                    TargetGear;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.IsWheelDisabled
struct UDcxVehicleWheelsComponent_IsWheelDisabled_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelState
struct UDcxVehicleWheelsComponent_GetWheelState_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelState                       WheelState;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationSpeed
struct UDcxVehicleWheelsComponent_GetWheelRotationSpeed_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelRotationAngle
struct UDcxVehicleWheelsComponent_GetWheelRotationAngle_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelOffset
struct UDcxVehicleWheelsComponent_GetWheelOffset_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetWheelData
struct UDcxVehicleWheelsComponent_GetWheelData_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleWheelData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetTire
struct UDcxVehicleWheelsComponent_GetTire_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDcxVehicleTire*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetSuspensionData
struct UDcxVehicleWheelsComponent_GetSuspensionData_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDcxVehicleSuspensionData                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetRawInput
struct UDcxVehicleWheelsComponent_GetRawInput_Params
{
	class UDcxVehicleWheelsRawInput*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetNumWheels
struct UDcxVehicleWheelsComponent_GetNumWheels_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetForwardSpeed
struct UDcxVehicleWheelsComponent_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetChassisMass
struct UDcxVehicleWheelsComponent_GetChassisMass_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetBoneName
struct UDcxVehicleWheelsComponent_GetBoneName_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.GetAnalogControl
struct UDcxVehicleWheelsComponent_GetAnalogControl_Params
{
	unsigned char                                      Control;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.EnableWheel
struct UDcxVehicleWheelsComponent_EnableWheel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.EnableAvoidance
struct UDcxVehicleWheelsComponent_EnableAvoidance_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsComponent.DisableWheel
struct UDcxVehicleWheelsComponent_DisableWheel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetTargetGear
struct UDcxVehicleDriveComponent_SetTargetGear_Params
{
	int                                                NewGear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxType
struct UDcxVehicleDriveComponent_SetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>                    NewGearboxType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetGearboxData
struct UDcxVehicleDriveComponent_SetGearboxData_Params
{
	struct FDcxVehicleGearboxData                      NewGearboxData;                                           // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineRotationSpeed
struct UDcxVehicleDriveComponent_SetEngineRotationSpeed_Params
{
	float                                              RPM;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetEngineData
struct UDcxVehicleDriveComponent_SetEngineData_Params
{
	struct FDcxVehicleEngineData                       NewEngineData;                                            // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.SetClutchData
struct UDcxVehicleDriveComponent_SetClutchData_Params
{
	struct FDcxVehicleClutchData                       NewClutchData;                                            // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetTargetGear
struct UDcxVehicleDriveComponent_GetTargetGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxType
struct UDcxVehicleDriveComponent_GetGearboxType_Params
{
	TEnumAsByte<EDcxVehicleGearbox>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetGearboxData
struct UDcxVehicleDriveComponent_GetGearboxData_Params
{
	struct FDcxVehicleGearboxData                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineRotationSpeed
struct UDcxVehicleDriveComponent_GetEngineRotationSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetEngineData
struct UDcxVehicleDriveComponent_GetEngineData_Params
{
	struct FDcxVehicleEngineData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetCurrentGear
struct UDcxVehicleDriveComponent_GetCurrentGear_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent.GetClutchData
struct UDcxVehicleDriveComponent_GetClutchData_Params
{
	struct FDcxVehicleClutchData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.SetDifferentialData
struct UDcxVehicleDriveComponent4W_SetDifferentialData_Params
{
	struct FDcxVehicleDifferentialData4W               NewDifferentialData;                                      // (Parm, OutParm)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.GetRawInput4W
struct UDcxVehicleDriveComponent4W_GetRawInput4W_Params
{
	class UDcxVehicleDriveRawInput4W*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponent4W.GetDifferentialData
struct UDcxVehicleDriveComponent4W_GetDifferentialData_Params
{
	struct FDcxVehicleDifferentialData4W               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DcxVehicle.DcxVehicleDriveComponentNW.SetDrivenWheel
struct UDcxVehicleDriveComponentNW_SetDrivenWheel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDriven;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentNW.IsDrivenWheel
struct UDcxVehicleDriveComponentNW_IsDrivenWheel_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentNW.GetRawInputNW
struct UDcxVehicleDriveComponentNW_GetRawInputNW_Params
{
	class UDcxVehicleDriveRawInputNW*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.SetDriveModel
struct UDcxVehicleDriveComponentTank_SetDriveModel_Params
{
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      ControlModel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.GetRawInputTank
struct UDcxVehicleDriveComponentTank_GetRawInputTank_Params
{
	class UDcxVehicleDriveRawInputTank*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveComponentTank.GetDriveModel
struct UDcxVehicleDriveComponentTank_GetDriveModel_Params
{
	TEnumAsByte<EDcxVehicleDriveControlModelTank>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.SetThrottle
struct UDcxVehicleWheelsRawInput_SetThrottle_Params
{
	float                                              Throttle;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleWheelsRawInput.GetThrottle
struct UDcxVehicleWheelsRawInput_GetThrottle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearUp
struct UDcxVehicleDriveRawInput_SetGearUp_Params
{
	bool                                               bGearUpPressed;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetGearDown
struct UDcxVehicleDriveRawInput_SetGearDown_Params
{
	bool                                               bGearDownPressed;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.SetClutch
struct UDcxVehicleDriveRawInput_SetClutch_Params
{
	float                                              Clutch;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearUp
struct UDcxVehicleDriveRawInput_GetGearUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetGearDown
struct UDcxVehicleDriveRawInput_GetGearDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput.GetClutch
struct UDcxVehicleDriveRawInput_GetClutch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetSteer
struct UDcxVehicleDriveRawInput4W_SetSteer_Params
{
	float                                              Steer;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetHandbrake
struct UDcxVehicleDriveRawInput4W_SetHandbrake_Params
{
	float                                              Handbrake;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.SetBrake
struct UDcxVehicleDriveRawInput4W_SetBrake_Params
{
	float                                              Brake;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetSteer
struct UDcxVehicleDriveRawInput4W_GetSteer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetHandbrake
struct UDcxVehicleDriveRawInput4W_GetHandbrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInput4W.GetBrake
struct UDcxVehicleDriveRawInput4W_GetBrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightThrust
struct UDcxVehicleDriveRawInputTank_SetRightThrust_Params
{
	float                                              Thrust;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetRightBrake
struct UDcxVehicleDriveRawInputTank_SetRightBrake_Params
{
	float                                              Brake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftThrust
struct UDcxVehicleDriveRawInputTank_SetLeftThrust_Params
{
	float                                              Thrust;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.SetLeftBrake
struct UDcxVehicleDriveRawInputTank_SetLeftBrake_Params
{
	float                                              Brake;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightThrust
struct UDcxVehicleDriveRawInputTank_GetRightThrust_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetRightBrake
struct UDcxVehicleDriveRawInputTank_GetRightBrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftThrust
struct UDcxVehicleDriveRawInputTank_GetLeftThrust_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleDriveRawInputTank.GetLeftBrake
struct UDcxVehicleDriveRawInputTank_GetLeftBrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDrive.GetVehicleNoDrive
struct ADcxVehicleNoDrive_GetVehicleNoDrive_Params
{
	class UDcxVehicleNoDriveComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetSteerAngle
struct UDcxVehicleNoDriveComponent_SetSteerAngle_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetDriveTorque
struct UDcxVehicleNoDriveComponent_SetDriveTorque_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.SetBrakeTorque
struct UDcxVehicleNoDriveComponent_SetBrakeTorque_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetSteerAngle
struct UDcxVehicleNoDriveComponent_GetSteerAngle_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetRawInputND
struct UDcxVehicleNoDriveComponent_GetRawInputND_Params
{
	class UDcxVehicleNoDriveRawInput*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetDriveTorque
struct UDcxVehicleNoDriveComponent_GetDriveTorque_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveComponent.GetBrakeTorque
struct UDcxVehicleNoDriveComponent_GetBrakeTorque_Params
{
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetSteer
struct UDcxVehicleNoDriveRawInput_SetSteer_Params
{
	float                                              NewSteer;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveRawInput.SetBrake
struct UDcxVehicleNoDriveRawInput_SetBrake_Params
{
	float                                              NewBrake;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetSteer
struct UDcxVehicleNoDriveRawInput_GetSteer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNoDriveRawInput.GetBrake
struct UDcxVehicleNoDriveRawInput_GetBrake_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleNW.GetVehicleDriveNW
struct ADcxVehicleNW_GetVehicleDriveNW_Params
{
	class UDcxVehicleDriveComponentNW*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DcxVehicle.DcxVehicleTank.GetVehicleDriveTank
struct ADcxVehicleTank_GetVehicleDriveTank_Params
{
	class UDcxVehicleDriveComponentTank*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
