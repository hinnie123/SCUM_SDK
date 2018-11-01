// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 RadVector                      (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_VectorRadiansToDegrees(const struct FVector& RadVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees");

	UTKMathFunctionLibrary_VectorRadiansToDegrees_Params params;
	params.RadVector = RadVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 DegVector                      (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_VectorDegreesToRadians(const struct FVector& DegVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians");

	UTKMathFunctionLibrary_VectorDegreesToRadians_Params params;
	params.DegVector = DegVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 SphereOrigin                   (Parm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BoxOrigin                      (Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_SphereBoxIntersection(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection");

	UTKMathFunctionLibrary_SphereBoxIntersection_Params params;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;
	params.BoxOrigin = BoxOrigin;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 PlaneNormal                    (Parm, IsPlainOldData)
// struct FVector                 planePoint                     (Parm, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTKMathFunctionLibrary::STATIC_SignedDistancePlanePoint(const struct FVector& PlaneNormal, const struct FVector& planePoint, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint");

	UTKMathFunctionLibrary_SignedDistancePlanePoint_Params params;
	params.PlaneNormal = PlaneNormal;
	params.planePoint = planePoint;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_SetVectorLength(const struct FVector& A, float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength");

	UTKMathFunctionLibrary_SetVectorLength_Params params;
	params.A = A;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Offset                         (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTKMathFunctionLibrary::STATIC_SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FVector& Offset, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset");

	UTKMathFunctionLibrary_SetCenterOfMassOffset_Params params;
	params.Target = Target;
	params.Offset = Offset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Multiple                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipSelf                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_RoundToUpperMultiple(int A, int Multiple, bool skipSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple");

	UTKMathFunctionLibrary_RoundToUpperMultiple_Params params;
	params.A = A;
	params.Multiple = Multiple;
	params.skipSelf = skipSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Multiple                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_RoundToNearestMultiple(int A, int Multiple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple");

	UTKMathFunctionLibrary_RoundToNearestMultiple_Params params;
	params.A = A;
	params.Multiple = Multiple;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Multiple                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           skipSelf                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_RoundToLowerMultiple(int A, int Multiple, bool skipSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple");

	UTKMathFunctionLibrary_RoundToLowerMultiple_Params params;
	params.A = A;
	params.Multiple = Multiple;
	params.skipSelf = skipSelf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineOrigin                     (Parm, IsPlainOldData)
// struct FVector                 LineDirection                  (Parm, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_ProjectPointOnLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine");

	UTKMathFunctionLibrary_ProjectPointOnLine_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDirection = LineDirection;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LinePoint1                     (Parm, IsPlainOldData)
// struct FVector                 LinePoint2                     (Parm, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_PointOnWhichSideOfLineSegment(const struct FVector& LinePoint1, const struct FVector& LinePoint2, const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment");

	UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params params;
	params.LinePoint1 = LinePoint1;
	params.LinePoint2 = LinePoint2;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UTKMathFunctionLibrary::STATIC_NegateVector2D(const struct FVector2D& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D");

	UTKMathFunctionLibrary_NegateVector2D_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_NegateInt(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt");

	UTKMathFunctionLibrary_NegateInt_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTKMathFunctionLibrary::STATIC_NegateFloat(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat");

	UTKMathFunctionLibrary_NegateFloat_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 IntersectionPoint              (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinePoint1                     (Parm, IsPlainOldData)
// struct FVector                 LineDir1                       (Parm, IsPlainOldData)
// struct FVector                 LinePoint2                     (Parm, IsPlainOldData)
// struct FVector                 LineDir2                       (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_LineToLineIntersection(const struct FVector& LinePoint1, const struct FVector& LineDir1, const struct FVector& LinePoint2, const struct FVector& LineDir2, struct FVector* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection");

	UTKMathFunctionLibrary_LineToLineIntersection_Params params;
	params.LinePoint1 = LinePoint1;
	params.LineDir1 = LineDir1;
	params.LinePoint2 = LinePoint2;
	params.LineDir2 = LineDir2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBox                    inBox                          (Parm, IsPlainOldData)
// struct FVector                 Start                          (Parm, IsPlainOldData)
// struct FVector                 End                            (Parm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 HitNormal                      (Parm, OutParm, IsPlainOldData)
// float                          HitTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_LineExtentBoxIntersection(const struct FBox& inBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector* HitLocation, struct FVector* HitNormal, float* HitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection");

	UTKMathFunctionLibrary_LineExtentBoxIntersection_Params params;
	params.inBox = inBox;
	params.Start = Start;
	params.End = End;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (HitTime != nullptr)
		*HitTime = params.HitTime;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_IsPowerOfTwo(int X)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo");

	UTKMathFunctionLibrary_IsPowerOfTwo_Params params;
	params.X = X;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (Parm, IsPlainOldData)
// struct FVector                 BoxOrigin                      (Parm, IsPlainOldData)
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_IsPointInsideBox(const struct FVector& Point, const struct FVector& BoxOrigin, const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox");

	UTKMathFunctionLibrary_IsPointInsideBox_Params params;
	params.Point = Point;
	params.BoxOrigin = BoxOrigin;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Multiple                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_IsMultipleOf(int A, int Multiple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf");

	UTKMathFunctionLibrary_IsMultipleOf_Params params;
	params.A = A;
	params.Multiple = Multiple;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LineStart                      (Parm, IsPlainOldData)
// struct FVector                 LineDir                        (Parm, IsPlainOldData)
// float                          LineLength                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SphereOrigin                   (Parm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_IsLineInsideSphere(const struct FVector& LineStart, const struct FVector& LineDir, float LineLength, const struct FVector& SphereOrigin, float SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere");

	UTKMathFunctionLibrary_IsLineInsideSphere_Params params;
	params.LineStart = LineStart;
	params.LineDir = LineDir;
	params.LineLength = LineLength;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_IsEvenNumber(float A)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber");

	UTKMathFunctionLibrary_IsEvenNumber_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (Parm, IsPlainOldData)
// float                          Grid                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_GridSnap(const struct FVector& A, float Grid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap");

	UTKMathFunctionLibrary_GridSnap_Params params;
	params.A = A;
	params.Grid = Grid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawDebugInfo                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FVector& Point, const struct FName& BoneName, bool DrawDebugInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint");

	UTKMathFunctionLibrary_GetVelocityAtPoint_Params params;
	params.Target = Target;
	params.Point = Point;
	params.BoneName = BoneName;
	params.DrawDebugInfo = DrawDebugInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTKMathFunctionLibrary::STATIC_GetConsoleVariableInt(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt");

	UTKMathFunctionLibrary_GetConsoleVariableInt_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTKMathFunctionLibrary::STATIC_GetConsoleVariableFloat(const struct FString& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat");

	UTKMathFunctionLibrary_GetConsoleVariableFloat_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (Parm, IsPlainOldData)
// TEnumAsByte<ESpeedUnit>        SpeedUnit                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTKMathFunctionLibrary::STATIC_ConvertPhysicsLinearVelocity(const struct FVector& Velocity, TEnumAsByte<ESpeedUnit> SpeedUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity");

	UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params params;
	params.Velocity = Velocity;
	params.SpeedUnit = SpeedUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnchors                CurrentAnchor                  (Parm)
// struct FMargin                 Offsets                        (Parm, IsPlainOldData)
// struct FAnchors                TargetAnchor                   (Parm)
// struct FMargin                 ConvertedOffsets               (Parm, OutParm, IsPlainOldData)

void UTKMathFunctionLibrary::STATIC_ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor");

	UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CurrentAnchor = CurrentAnchor;
	params.Offsets = Offsets;
	params.TargetAnchor = TargetAnchor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedOffsets != nullptr)
		*ConvertedOffsets = params.ConvertedOffsets;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 closestPointLine1              (Parm, OutParm, IsPlainOldData)
// struct FVector                 closestPointLine2              (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinePoint1                     (Parm, IsPlainOldData)
// struct FVector                 lineVec1                       (Parm, IsPlainOldData)
// struct FVector                 LinePoint2                     (Parm, IsPlainOldData)
// struct FVector                 lineVec2                       (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_ClosestPointsOnTwoLines(const struct FVector& LinePoint1, const struct FVector& lineVec1, const struct FVector& LinePoint2, const struct FVector& lineVec2, struct FVector* closestPointLine1, struct FVector* closestPointLine2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines");

	UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params params;
	params.LinePoint1 = LinePoint1;
	params.lineVec1 = lineVec1;
	params.LinePoint2 = LinePoint2;
	params.lineVec2 = lineVec2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (closestPointLine1 != nullptr)
		*closestPointLine1 = params.closestPointLine1;
	if (closestPointLine2 != nullptr)
		*closestPointLine2 = params.closestPointLine2;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Line1Start                     (Parm, IsPlainOldData)
// struct FVector                 Line1End                       (Parm, IsPlainOldData)
// struct FVector                 Line2Start                     (Parm, IsPlainOldData)
// struct FVector                 Line2End                       (Parm, IsPlainOldData)
// struct FVector                 LinePoint1                     (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinePoint2                     (Parm, OutParm, IsPlainOldData)

void UTKMathFunctionLibrary::STATIC_ClosestPointsOfLineSegments(const struct FVector& Line1Start, const struct FVector& Line1End, const struct FVector& Line2Start, const struct FVector& Line2End, struct FVector* LinePoint1, struct FVector* LinePoint2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments");

	UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params params;
	params.Line1Start = Line1Start;
	params.Line1End = Line1End;
	params.Line2Start = Line2Start;
	params.Line2End = Line2End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinePoint1 != nullptr)
		*LinePoint1 = params.LinePoint1;
	if (LinePoint2 != nullptr)
		*LinePoint2 = params.LinePoint2;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 SphereOrigin                   (Parm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineOrigin                     (Parm, IsPlainOldData)
// struct FVector                 LineDir                        (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_ClosestPointOnSphereToLine(const struct FVector& SphereOrigin, float SphereRadius, const struct FVector& LineOrigin, const struct FVector& LineDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine");

	UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params params;
	params.SphereOrigin = SphereOrigin;
	params.SphereRadius = SphereRadius;
	params.LineOrigin = LineOrigin;
	params.LineDir = LineDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (Parm, IsPlainOldData)
// struct FVector                 LineStart                      (Parm, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTKMathFunctionLibrary::STATIC_ClosestPointOnLineSeqment(const struct FVector& Point, const struct FVector& LineStart, const struct FVector& LineEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment");

	UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params params;
	params.Point = Point;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 pointA1                        (Parm, IsPlainOldData)
// struct FVector                 pointA2                        (Parm, IsPlainOldData)
// struct FVector                 pointB1                        (Parm, IsPlainOldData)
// struct FVector                 pointB2                        (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTKMathFunctionLibrary::STATIC_AreLineSegmentsCrossing(const struct FVector& pointA1, const struct FVector& pointA2, const struct FVector& pointB1, const struct FVector& pointB2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing");

	UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params params;
	params.pointA1 = pointA1;
	params.pointA2 = pointA2;
	params.pointB1 = pointB1;
	params.pointB2 = pointB2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_WorldType__InPIEWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld");

	UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld");

	UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_WorldType__InEditorWorld(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld");

	UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ChildWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 PossibleParent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf");

	UVictoryBPFunctionLibrary_WidgetIsChildOf_Params params;
	params.ChildWidget = ChildWidget;
	params.PossibleParent = PossibleParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ChildWidget                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UVictoryBPFunctionLibrary::STATIC_WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass");

	UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params params;
	params.ChildWidget = ChildWidget;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 ParentWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UUserWidget*>     ChildWidgets                   (Parm, OutParm, ZeroConstructor)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediateOnly                 (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_WidgetGetChildrenOfClass(class UWidget* ParentWidget, class UClass* WidgetClass, bool bImmediateOnly, TArray<class UUserWidget*>* ChildWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass");

	UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params params;
	params.ParentWidget = ParentWidget;
	params.WidgetClass = WidgetClass;
	params.bImmediateOnly = bImmediateOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildWidgets != nullptr)
		*ChildWidgets = params.ChildWidgets;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          CurrentlyRenderedActors        (Parm, OutParm, ZeroConstructor)
// float                          MinRecentTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Visibility__GetRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyRenderedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors");

	UVictoryBPFunctionLibrary_Visibility__GetRenderedActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MinRecentTime = MinRecentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentlyRenderedActors != nullptr)
		*CurrentlyRenderedActors = params.CurrentlyRenderedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          CurrentlyNotRenderedActors     (Parm, OutParm, ZeroConstructor)
// float                          MinRecentTime                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Visibility__GetNotRenderedActors(class UObject* WorldContextObject, float MinRecentTime, TArray<class AActor*>* CurrentlyNotRenderedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors");

	UVictoryBPFunctionLibrary_Visibility__GetNotRenderedActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MinRecentTime = MinRecentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentlyNotRenderedActors != nullptr)
		*CurrentlyNotRenderedActors = params.CurrentlyNotRenderedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ViewportPosition               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutWorldOrigin                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutWorldDirection              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_ViewportPositionDeproject(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, struct FVector* OutWorldOrigin, struct FVector* OutWorldDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject");

	UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ViewportPosition = ViewportPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWorldOrigin != nullptr)
		*OutWorldOrigin = params.OutWorldOrigin;
	if (OutWorldDirection != nullptr)
		*OutWorldDirection = params.OutWorldDirection;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosX                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          PosY                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition");

	UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params params;
	params.ThePC = ThePC;
	params.PosX = PosX;
	params.PosY = PosY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       ThePC                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition");

	UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params params;
	params.ThePC = ThePC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       ThePC                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosX                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PosY                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport");

	UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params params;
	params.ThePC = ThePC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RenderTheWorld                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering");

	UVictoryBPFunctionLibrary_Viewport__EnableWorldRendering_Params params;
	params.ThePC = ThePC;
	params.RenderTheWorld = RenderTheWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*             SoundClassObject               (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange");

	UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params params;
	params.SoundClassObject = SoundClassObject;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    IntArray                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    IntArrayRef                    (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictorySortIntArray(TArray<int>* IntArray, TArray<int>* IntArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray");

	UVictoryBPFunctionLibrary_VictorySortIntArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntArray != nullptr)
		*IntArray = params.IntArray;
	if (IntArrayRef != nullptr)
		*IntArrayRef = params.IntArrayRef;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  FloatArray                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  FloatArrayRef                  (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray");

	UVictoryBPFunctionLibrary_VictorySortFloatArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatArray != nullptr)
		*FloatArray = params.FloatArray;
	if (FloatArrayRef != nullptr)
		*FloatArrayRef = params.FloatArrayRef;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Delta                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySimulateMouseWheel(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel");

	UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, TEnumAsByte<EInputEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress");

	UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params params;
	params.ThePC = ThePC;
	params.Key = Key;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FVector2D               Value                          (Parm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FRotator                Value                          (Parm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// struct FLinearColor            Value                          (Parm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictorySetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool");

	UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis       ToRemove                       (Parm)

void UVictoryBPFunctionLibrary::STATIC_VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind");

	UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params params;
	params.ToRemove = ToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInput           ToRemove                       (Parm)

void UVictoryBPFunctionLibrary::STATIC_VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind");

	UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params params;
	params.ToRemove = ToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInputAxis       Original                       (Parm)
// struct FVictoryInputAxis       NewBinding                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey");

	UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params params;
	params.Original = Original;
	params.NewBinding = NewBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVictoryInput           Original                       (Parm)
// struct FVictoryInput           NewBinding                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey");

	UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params params;
	params.Original = Original;
	params.NewBinding = NewBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     CompToUpdate                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          NewAngularDamping              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping");

	UVictoryBPFunctionLibrary_VictoryPhysics_UpdateAngularDamping_Params params;
	params.CompToUpdate = CompToUpdate;
	params.NewAngularDamping = NewAngularDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__WindowsNoEditorDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir");

	UVictoryBPFunctionLibrary_VictoryPaths__WindowsNoEditorDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__Win64Dir_BinaryLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation");

	UVictoryBPFunctionLibrary_VictoryPaths__Win64Dir_BinaryLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__ScreenShotsDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir");

	UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__SavedDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir");

	UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__LogsDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir");

	UVictoryBPFunctionLibrary_VictoryPaths__LogsDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__GameRootDirectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory");

	UVictoryBPFunctionLibrary_VictoryPaths__GameRootDirectory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryPaths__ConfigDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir");

	UVictoryBPFunctionLibrary_VictoryPaths__ConfigDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapFolderOffOfContent          (Parm, ZeroConstructor)
// struct FString                 LevelName                      (Parm, ZeroConstructor)
// int                            InstanceNumber                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ULevelStreaming*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelStreaming* UVictoryBPFunctionLibrary::STATIC_VictoryLoadLevelInstance(class UObject* WorldContextObject, const struct FString& MapFolderOffOfContent, const struct FString& LevelName, int InstanceNumber, const struct FVector& Location, const struct FRotator& Rotation, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance");

	UVictoryBPFunctionLibrary_VictoryLoadLevelInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MapFolderOffOfContent = MapFolderOffOfContent;
	params.LevelName = LevelName;
	params.InstanceNumber = InstanceNumber;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AVictoryISM*>     Out                            (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors");

	UVictoryBPFunctionLibrary_VictoryISM_GetAllVictoryISMActors_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AVictoryISM*>     CreatedISMActors               (Parm, OutParm, ZeroConstructor)
// bool                           DestroyOriginalActors          (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinCountToCreateISM            (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, bool DestroyOriginalActors, int MinCountToCreateISM, TArray<class AVictoryISM*>* CreatedISMActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors");

	UVictoryBPFunctionLibrary_VictoryISM_ConvertToVictoryISMActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.DestroyOriginalActors = DestroyOriginalActors;
	params.MinCountToCreateISM = MinCountToCreateISM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CreatedISMActors != nullptr)
		*CreatedISMActors = params.CreatedISMActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ProcessId                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryIsApplicationRunning(int ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning");

	UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params params;
	params.ProcessId = ProcessId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Int                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Add                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryIntPlusEquals(int Add, int* Int, int* IntOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals");

	UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;
	if (IntOut != nullptr)
		*IntOut = params.IntOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Int                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Sub                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryIntMinusEquals(int Sub, int* Int, int* IntOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals");

	UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params params;
	params.Sub = Sub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;
	if (IntOut != nullptr)
		*IntOut = params.IntOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVictoryInputAxis       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVictoryInputAxis UVictoryBPFunctionLibrary::STATIC_VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis");

	UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVictoryInput           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVictoryInput UVictoryBPFunctionLibrary::STATIC_VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput");

	UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*             SoundClassObject               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_VictoryGetSoundVolume(class USoundClass* SoundClassObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume");

	UVictoryBPFunctionLibrary_VictoryGetSoundVolume_Params params;
	params.SoundClassObject = SoundClassObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SectionName                    (Parm, ZeroConstructor)
// struct FString                 VariableName                   (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryGetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool");

	UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params params;
	params.SectionName = SectionName;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ProcessId                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_VictoryGetApplicationName(int ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName");

	UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params params;
	params.ProcessId = ProcessId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVictoryInputAxis> Bindings                       (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings");

	UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bindings != nullptr)
		*Bindings = params.Bindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm)
// TArray<struct FVictoryInput>   ActionBindings                 (Parm, OutParm, ZeroConstructor)
// TArray<struct FVictoryInputAxis> AxisBindings                   (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey");

	UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionBindings != nullptr)
		*ActionBindings = params.ActionBindings;
	if (AxisBindings != nullptr)
		*AxisBindings = params.AxisBindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVictoryInput>   Bindings                       (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings");

	UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bindings != nullptr)
		*Bindings = params.Bindings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Float                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Add                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryFloatPlusEquals(float Add, float* Float, float* FloatOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals");

	UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;
	if (FloatOut != nullptr)
		*FloatOut = params.FloatOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Float                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Sub                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryFloatMinusEquals(float Sub, float* Float, float* FloatOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals");

	UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params params;
	params.Sub = Sub;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;
	if (FloatOut != nullptr)
		*FloatOut = params.FloatOut;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDestructibleComponent*  DestructibleComp               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            HitItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_VictoryDestructible_DestroyChunk(class UDestructibleComponent* DestructibleComp, int HitItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryDestructible_DestroyChunk");

	UVictoryBPFunctionLibrary_VictoryDestructible_DestroyChunk_Params params;
	params.DestructibleComp = DestructibleComp;
	params.HitItem = HitItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ProcessId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FullPathOfProgramToRun         (Parm, ZeroConstructor)
// TArray<struct FString>         CommandlineArgs                (Parm, ZeroConstructor)
// bool                           Detach                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OptionalWorkingDirectory       (Parm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_VictoryCreateProc(const struct FString& FullPathOfProgramToRun, TArray<struct FString> CommandlineArgs, bool Detach, bool Hidden, int Priority, const struct FString& OptionalWorkingDirectory, int* ProcessId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc");

	UVictoryBPFunctionLibrary_VictoryCreateProc_Params params;
	params.FullPathOfProgramToRun = FullPathOfProgramToRun;
	params.CommandlineArgs = CommandlineArgs;
	params.Detach = Detach;
	params.Hidden = Hidden;
	params.Priority = Priority;
	params.OptionalWorkingDirectory = OptionalWorkingDirectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProcessId != nullptr)
		*ProcessId = params.ProcessId;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 string                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ToAppend                       (Parm, ZeroConstructor)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)
// bool                           AppendNewline                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_VictoryAppendInline(const struct FString& ToAppend, bool AppendNewline, struct FString* string, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline");

	UVictoryBPFunctionLibrary_VictoryAppendInline_Params params;
	params.ToAppend = ToAppend;
	params.AppendNewline = AppendNewline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (string != nullptr)
		*string = params.string;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TrimZeroes                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds");

	UVictoryBPFunctionLibrary_Victory_SecondsToHoursMinutesSeconds_Params params;
	params.Seconds = Seconds;
	params.TrimZeroes = TrimZeroes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ToClipboard                    (Parm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Victory_SaveStringToOSClipboard(const struct FString& ToClipboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard");

	UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params params;
	params.ToClipboard = ToClipboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    ImagePixels                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           SaveAsBMP                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SRGB                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ErrorString                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Victory_SavePixels(const struct FString& FullFilePath, int Width, int Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool SRGB, struct FString* ErrorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels");

	UVictoryBPFunctionLibrary_Victory_SavePixels_Params params;
	params.FullFilePath = FullFilePath;
	params.Width = Width;
	params.Height = Height;
	params.ImagePixels = ImagePixels;
	params.SaveAsBMP = SaveAsBMP;
	params.SRGB = SRGB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorString != nullptr)
		*ErrorString = params.ErrorString;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// EJoyImageFormats               ImageFormat                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    OutPixels                      (Parm, OutParm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::STATIC_Victory_LoadTexture2D_FromFile_Pixels(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height, TArray<struct FLinearColor>* OutPixels)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels");

	UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params params;
	params.FullFilePath = FullFilePath;
	params.ImageFormat = ImageFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;
	if (OutPixels != nullptr)
		*OutPixels = params.OutPixels;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// EJoyImageFormats               ImageFormat                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::STATIC_Victory_LoadTexture2D_FromFile(const struct FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile");

	UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params params;
	params.FullFilePath = FullFilePath;
	params.ImageFormat = ImageFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 FromClipboard                  (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Victory_GetStringFromOSClipboard(struct FString* FromClipboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard");

	UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FromClipboard != nullptr)
		*FromClipboard = params.FromClipboard;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTexture2D*              T2D                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            TextureWidth                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TextureHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FLinearColor>    PixelArray                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int* TextureWidth, int* TextureHeight, TArray<struct FLinearColor>* PixelArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D");

	UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params params;
	params.T2D = T2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextureWidth != nullptr)
		*TextureWidth = params.TextureWidth;
	if (TextureHeight != nullptr)
		*TextureHeight = params.TextureHeight;
	if (PixelArray != nullptr)
		*PixelArray = params.PixelArray;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              T2D                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PixelColor                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Victory_GetPixelFromT2D(class UTexture2D* T2D, int X, int Y, struct FLinearColor* PixelColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D");

	UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params params;
	params.T2D = T2D;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PixelColor != nullptr)
		*PixelColor = params.PixelColor;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_Victory_GetGRHIAdapterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName");

	UVictoryBPFunctionLibrary_Victory_GetGRHIAdapterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 DeviceDescription              (Parm, OutParm, ZeroConstructor)
// struct FString                 Provider                       (Parm, OutParm, ZeroConstructor)
// struct FString                 DriverVersion                  (Parm, OutParm, ZeroConstructor)
// struct FString                 DriverDate                     (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Victory_GetGPUInfo(struct FString* DeviceDescription, struct FString* Provider, struct FString* DriverVersion, struct FString* DriverDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo");

	UVictoryBPFunctionLibrary_Victory_GetGPUInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceDescription != nullptr)
		*DeviceDescription = params.DeviceDescription;
	if (Provider != nullptr)
		*Provider = params.Provider;
	if (DriverVersion != nullptr)
		*DriverVersion = params.DriverVersion;
	if (DriverDate != nullptr)
		*DriverDate = params.DriverDate;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_Victory_GetGPUBrand()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand");

	UVictoryBPFunctionLibrary_Victory_GetGPUBrand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    Pixels                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ImageHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FoundColor                     (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int ImageHeight, int X, int Y, struct FLinearColor* FoundColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel");

	UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params params;
	params.Pixels = Pixels;
	params.ImageHeight = ImageHeight;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundColor != nullptr)
		*FoundColor = params.FoundColor;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Dest                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPathFollowingRequestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPathFollowingRequestResult> UVictoryBPFunctionLibrary::STATIC_Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter");

	UVictoryBPFunctionLibrary_Victory_AI_MoveToWithFilter_Params params;
	params.Pawn = Pawn;
	params.Dest = Dest;
	params.FilterClass = FilterClass;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bCanStrafe = bCanStrafe;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          HorizontalFOV                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_VerticalFOV(float HorizontalFOV, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV");

	UVictoryBPFunctionLibrary_VerticalFOV_Params params;
	params.HorizontalFOV = HorizontalFOV;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Current                        (Parm, IsPlainOldData)
// struct FVector2D               Target                         (Parm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::STATIC_Vector2DInterpTo_Constant(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant");

	UVictoryBPFunctionLibrary_Vector2DInterpTo_Constant_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Current                        (Parm, IsPlainOldData)
// struct FVector2D               Target                         (Parm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::STATIC_Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo");

	UVictoryBPFunctionLibrary_Vector2DInterpTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               UTCTime                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FDateTime               LocalTime                      (Parm, OutParm)

void UVictoryBPFunctionLibrary::STATIC_UTCToLocal(const struct FDateTime& UTCTime, struct FDateTime* LocalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal");

	UVictoryBPFunctionLibrary_UTCToLocal_Params params;
	params.UTCTime = UTCTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalTime != nullptr)
		*LocalTime = params.LocalTime;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_UnloadStreamingLevel(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel");

	UVictoryBPFunctionLibrary_UnloadStreamingLevel_Params params;
	params.LevelInstance = LevelInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle");

	UVictoryBPFunctionLibrary_TransformVectorToActorSpaceAngle_Params params;
	params.Actor = Actor;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(class AActor* Actor, const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace");

	UVictoryBPFunctionLibrary_TransformVectorToActorSpace_Params params;
	params.Actor = Actor;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TraceOwner                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutImpactPoint                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutImpactNormal                (Parm, OutParm, IsPlainOldData)
// struct FName                   ClosestSocketName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::STATIC_Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestSocketName, struct FVector* SocketLocation, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket");

	UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestSocket_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TraceOwner = TraceOwner;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = params.OutImpactPoint;
	if (OutImpactNormal != nullptr)
		*OutImpactNormal = params.OutImpactNormal;
	if (ClosestSocketName != nullptr)
		*ClosestSocketName = params.ClosestSocketName;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TraceOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutImpactPoint                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutImpactNormal                (Parm, OutParm, IsPlainOldData)
// struct FName                   ClosestBoneName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClosestBoneLocation            (Parm, OutParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::STATIC_Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FVector* OutImpactPoint, struct FVector* OutImpactNormal, struct FName* ClosestBoneName, struct FVector* ClosestBoneLocation, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone");

	UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestBone_Params params;
	params.TraceOwner = TraceOwner;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutImpactPoint != nullptr)
		*OutImpactPoint = params.OutImpactPoint;
	if (OutImpactNormal != nullptr)
		*OutImpactNormal = params.OutImpactNormal;
	if (ClosestBoneName != nullptr)
		*ClosestBoneName = params.ClosestBoneName;
	if (ClosestBoneLocation != nullptr)
		*ClosestBoneLocation = params.ClosestBoneLocation;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TraceStart                     (Parm, OutParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, OutParm, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotator                TraceRotation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          TraceLength                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawTraceData                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceDataColor                 (Parm, IsPlainOldData)
// float                          TraceDataThickness             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_TraceData__GetTraceDataFromSkeletalMeshSocket(class USkeletalMeshComponent* Mesh, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket");

	UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromSkeletalMeshSocket_Params params;
	params.Mesh = Mesh;
	params.TraceRotation = TraceRotation;
	params.TraceLength = TraceLength;
	params.Socket = Socket;
	params.DrawTraceData = DrawTraceData;
	params.TraceDataColor = TraceDataColor;
	params.TraceDataThickness = TraceDataThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceStart != nullptr)
		*TraceStart = params.TraceStart;
	if (TraceEnd != nullptr)
		*TraceEnd = params.TraceEnd;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TraceStart                     (Parm, OutParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, OutParm, IsPlainOldData)
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TraceRotation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          TraceLength                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DrawTraceData                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TraceDataColor                 (Parm, IsPlainOldData)
// float                          TraceDataThickness             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_TraceData__GetTraceDataFromCharacterSocket(class AActor* TheCharacter, const struct FRotator& TraceRotation, float TraceLength, const struct FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness, struct FVector* TraceStart, struct FVector* TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket");

	UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromCharacterSocket_Params params;
	params.TheCharacter = TheCharacter;
	params.TraceRotation = TraceRotation;
	params.TraceLength = TraceLength;
	params.Socket = Socket;
	params.DrawTraceData = DrawTraceData;
	params.TraceDataColor = TraceDataColor;
	params.TraceDataThickness = TraceDataThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceStart != nullptr)
		*TraceStart = params.TraceStart;
	if (TraceEnd != nullptr)
		*TraceEnd = params.TraceEnd;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           UseDotForThousands             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_Text_ToInt(const struct FText& Text, bool UseDotForThousands)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt");

	UVictoryBPFunctionLibrary_Text_ToInt_Params params;
	params.Text = Text;
	params.UseDotForThousands = UseDotForThousands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           UseDotForThousands             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_Text_ToFloat(const struct FText& Text, bool UseDotForThousands)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat");

	UVictoryBPFunctionLibrary_Text_ToFloat_Params params;
	params.Text = Text;
	params.UseDotForThousands = UseDotForThousands;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Text_IsNumeric(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric");

	UVictoryBPFunctionLibrary_Text_IsNumeric_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Target                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_StringIsEmpty(const struct FString& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty");

	UVictoryBPFunctionLibrary_StringIsEmpty_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TheFloat                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TheString                      (Parm, OutParm, ZeroConstructor)
// int                            Precision                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludeLeadingZero             (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_StringConversion__GetFloatAsStringWithPrecision(float TheFloat, int Precision, bool IncludeLeadingZero, struct FString* TheString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision");

	UVictoryBPFunctionLibrary_StringConversion__GetFloatAsStringWithPrecision_Params params;
	params.TheFloat = TheFloat;
	params.Precision = Precision;
	params.IncludeLeadingZero = IncludeLeadingZero;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheString != nullptr)
		*TheString = params.TheString;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         OutputStrings                  (Parm, OutParm, ZeroConstructor)
// struct FString                 InputString                    (Parm, ZeroConstructor)
// struct FString                 Separator                      (Parm, ZeroConstructor)
// int                            Limit                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTrimElements                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_String__ExplodeString(const struct FString& InputString, const struct FString& Separator, int Limit, bool bTrimElements, TArray<struct FString>* OutputStrings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString");

	UVictoryBPFunctionLibrary_String__ExplodeString_Params params;
	params.InputString = InputString;
	params.Separator = Separator;
	params.Limit = Limit;
	params.bTrimElements = bTrimElements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputStrings != nullptr)
		*OutputStrings = params.OutputStrings;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 A                              (Parm, ZeroConstructor)
// struct FString                 B                              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_String__CombineStrings_Multi(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi");

	UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 StringFirst                    (Parm, ZeroConstructor)
// struct FString                 StringSecond                   (Parm, ZeroConstructor)
// struct FString                 Separator                      (Parm, ZeroConstructor)
// struct FString                 StringFirstLabel               (Parm, ZeroConstructor)
// struct FString                 StringSecondLabel              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_String__CombineStrings(const struct FString& StringFirst, const struct FString& StringSecond, const struct FString& Separator, const struct FString& StringFirstLabel, const struct FString& StringSecondLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings");

	UVictoryBPFunctionLibrary_String__CombineStrings_Params params;
	params.StringFirst = StringFirst;
	params.StringSecond = StringSecond;
	params.Separator = Separator;
	params.StringFirstLabel = StringFirstLabel;
	params.StringSecondLabel = StringSecondLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           SpawnEvenIfColliding           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::STATIC_SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, const struct FName& Level, const struct FVector& Location, const struct FRotator& Rotation, bool SpawnEvenIfColliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel");

	UVictoryBPFunctionLibrary_SpawnActorIntoLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.Level = Level;
	params.Location = Location;
	params.Rotation = Rotation;
	params.SpawnEvenIfColliding = SpawnEvenIfColliding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewTeamId                      (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_SetGenericTeamId(class AActor* Target, unsigned char NewTeamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId");

	UVictoryBPFunctionLibrary_SetGenericTeamId_Params params;
	params.Target = Target;
	params.NewTeamId = NewTeamId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_SetComponentTickRate(class UActorComponent* Component, float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate");

	UVictoryBPFunctionLibrary_SetComponentTickRate_Params params;
	params.Component = Component;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APostProcessVolume*      PostProcessVolume              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity");

	UVictoryBPFunctionLibrary_SetBloomIntensity_Params params;
	params.PostProcessVolume = PostProcessVolume;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MapName                        (Parm, ZeroConstructor)
// bool                           bNotifyPlayers                 (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_ServerTravel(class UObject* WorldContextObject, const struct FString& MapName, bool bNotifyPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel");

	UVictoryBPFunctionLibrary_ServerTravel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MapName = MapName;
	params.bNotifyPlayers = bNotifyPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          SelectedActors                 (Parm, OutParm, ZeroConstructor)
// struct FVector2D               AnchorPoint                    (Parm, IsPlainOldData)
// struct FVector2D               DraggedPoint                   (Parm, IsPlainOldData)
// class UClass*                  ClassFilter                    (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Selection_SelectionBox(class UObject* WorldContextObject, const struct FVector2D& AnchorPoint, const struct FVector2D& DraggedPoint, class UClass* ClassFilter, TArray<class AActor*>* SelectedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox");

	UVictoryBPFunctionLibrary_Selection_SelectionBox_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AnchorPoint = AnchorPoint;
	params.DraggedPoint = DraggedPoint;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedActors != nullptr)
		*SelectedActors = params.SelectedActors;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_seedRandWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime");

	UVictoryBPFunctionLibrary_seedRandWithTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_seedRandWithEntropy()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy");

	UVictoryBPFunctionLibrary_seedRandWithEntropy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_seedRand(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand");

	UVictoryBPFunctionLibrary_seedRand_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 OriginalFileName               (Parm, OutParm, ZeroConstructor)
// struct FString                 NewName                        (Parm, ZeroConstructor)
// struct FString                 NewAbsoluteFolderPath          (Parm, ZeroConstructor)
// bool                           HighResolution                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_ScreenShots_Rename_Move_Most_Recent(const struct FString& NewName, const struct FString& NewAbsoluteFolderPath, bool HighResolution, struct FString* OriginalFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent");

	UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params params;
	params.NewName = NewName;
	params.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
	params.HighResolution = HighResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OriginalFileName != nullptr)
		*OriginalFileName = params.OriginalFileName;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         FileNames                      (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_SaveGameObject_GetAllSaveSlotFileNames(TArray<struct FString>* FileNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames");

	UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileNames != nullptr)
		*FileNames = params.FileNames;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_Rendering__UnFreezeGameRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering");

	UVictoryBPFunctionLibrary_Rendering__UnFreezeGameRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_Rendering__FreezeGameRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering");

	UVictoryBPFunctionLibrary_Rendering__FreezeGameRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLevelStreamInstanceInfo LevelInstanceInfo              (ConstParm, Parm, OutParm, ReferenceParm)

void UVictoryBPFunctionLibrary::STATIC_RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels");

	UVictoryBPFunctionLibrary_RemoveFromStreamingLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelInstanceInfo = LevelInstanceInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass");

	UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PreviousTime                   (Parm, ZeroConstructor)
// float                          MilliSeconds                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Minutes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Hours                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_RealWorldTime__GetTimePassedSincePreviousTime(const struct FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime");

	UVictoryBPFunctionLibrary_RealWorldTime__GetTimePassedSincePreviousTime_Params params;
	params.PreviousTime = PreviousTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MilliSeconds != nullptr)
		*MilliSeconds = params.MilliSeconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours != nullptr)
		*Hours = params.Hours;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PreviousTime1                  (Parm, ZeroConstructor)
// struct FString                 PreviousTime2                  (Parm, ZeroConstructor)
// float                          MilliSeconds                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Minutes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Hours                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_RealWorldTime__GetDifferenceBetweenTimes(const struct FString& PreviousTime1, const struct FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes");

	UVictoryBPFunctionLibrary_RealWorldTime__GetDifferenceBetweenTimes_Params params;
	params.PreviousTime1 = PreviousTime1;
	params.PreviousTime2 = PreviousTime2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MilliSeconds != nullptr)
		*MilliSeconds = params.MilliSeconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours != nullptr)
		*Hours = params.Hours;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MilliSeconds                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Minutes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Hours12                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Hours24                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Day                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Year                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_RealWorldTime__GetCurrentOSTime(int* MilliSeconds, int* Seconds, int* Minutes, int* Hours12, int* Hours24, int* Day, int* Month, int* Year)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime");

	UVictoryBPFunctionLibrary_RealWorldTime__GetCurrentOSTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MilliSeconds != nullptr)
		*MilliSeconds = params.MilliSeconds;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Hours12 != nullptr)
		*Hours12 = params.Hours12;
	if (Hours24 != nullptr)
		*Hours24 = params.Hours24;
	if (Day != nullptr)
		*Day = params.Day;
	if (Month != nullptr)
		*Month = params.Month;
	if (Year != nullptr)
		*Year = params.Year;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_RandInt_uniDis_MT()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT");

	UVictoryBPFunctionLibrary_RandInt_uniDis_MT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_RandInt_uniDis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis");

	UVictoryBPFunctionLibrary_RandInt_uniDis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            iMin                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            iMax                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_RandInt_MINMAX_uniDis_MT(int iMin, int iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT");

	UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_MT_Params params;
	params.iMin = iMin;
	params.iMax = iMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            iMin                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            iMax                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_RandInt_MINMAX_uniDis(int iMin, int iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis");

	UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_Params params;
	params.iMin = iMin;
	params.iMax = iMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_RandFloat_uniDis_MT()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT");

	UVictoryBPFunctionLibrary_RandFloat_uniDis_MT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_RandFloat_uniDis()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis");

	UVictoryBPFunctionLibrary_RandFloat_uniDis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          iMin                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          iMax                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_RandFloat_MINMAX_uniDis_MT(float iMin, float iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT");

	UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_MT_Params params;
	params.iMin = iMin;
	params.iMax = iMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          iMin                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          iMax                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_RandFloat_MINMAX_uniDis(float iMin, float iMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis");

	UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_Params params;
	params.iMin = iMin;
	params.iMax = iMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fBias                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_RandBool_Bernoulli_MT(float fBias)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT");

	UVictoryBPFunctionLibrary_RandBool_Bernoulli_MT_Params params;
	params.fBias = fBias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fBias                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_RandBool_Bernoulli(float fBias)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli");

	UVictoryBPFunctionLibrary_RandBool_Bernoulli_Params params;
	params.fBias = fBias;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UVictoryBPFunctionLibrary::STATIC_ProjectWorldToScreenPosition(const struct FVector& WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition");

	UVictoryBPFunctionLibrary_ProjectWorldToScreenPosition_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlane                  Plane                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_PointDistanceToPlane(const struct FPlane& Plane, const struct FVector& Point, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane");

	UVictoryBPFunctionLibrary_PointDistanceToPlane_Params params;
	params.Plane = Plane;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* UVictoryBPFunctionLibrary::STATIC_PlaySoundAttachedFromFile(const struct FString& FilePath, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAttachedFromFile");

	UVictoryBPFunctionLibrary_PlaySoundAttachedFromFile_Params params;
	params.FilePath = FilePath;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class USoundAttenuation*       AttenuationSettings            (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_PlaySoundAtLocationFromFile(class UObject* WorldContextObject, const struct FString& FilePath, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlaySoundAtLocationFromFile");

	UVictoryBPFunctionLibrary_PlaySoundAtLocationFromFile_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FilePath = FilePath;
	params.Location = Location;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;
	params.AttenuationSettings = AttenuationSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_PlayerState_GetPlayerID(class APlayerController* ThePC, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID");

	UVictoryBPFunctionLibrary_PlayerState_GetPlayerID_Params params;
	params.ThePC = ThePC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerId != nullptr)
		*PlayerId = params.PlayerId;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       ThePC                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerId                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_PlayerController_GetControllerID(class APlayerController* ThePC, int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID");

	UVictoryBPFunctionLibrary_PlayerController_GetControllerID_Params params;
	params.ThePC = ThePC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerId != nullptr)
		*ControllerId = params.ControllerId;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HeightOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation");

	UVictoryBPFunctionLibrary_Physics__UpdateCharacterCameraToRagdollLocation_Params params;
	params.TheCharacter = TheCharacter;
	params.HeightOffset = HeightOffset;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetToFallingMovementMode       (Parm, ZeroConstructor, IsPlainOldData)
// float                          HeightAboveRBMesh              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InitLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                InitRotation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FVector& InitLocation, const struct FRotator& InitRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll");

	UVictoryBPFunctionLibrary_Physics__LeaveRagDoll_Params params;
	params.TheCharacter = TheCharacter;
	params.SetToFallingMovementMode = SetToFallingMovementMode;
	params.HeightAboveRBMesh = HeightAboveRBMesh;
	params.InitLocation = InitLocation;
	params.InitRotation = InitRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__IsRagDoll(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll");

	UVictoryBPFunctionLibrary_Physics__IsRagDoll_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InitLocation                   (Parm, OutParm, IsPlainOldData)
// struct FRotator                InitRotation                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FVector* InitLocation, struct FRotator* InitRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll");

	UVictoryBPFunctionLibrary_Physics__InitializeVictoryRagDoll_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitLocation != nullptr)
		*InitLocation = params.InitLocation;
	if (InitRotation != nullptr)
		*InitRotation = params.InitRotation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RagdollLocation                (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FVector* RagdollLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll");

	UVictoryBPFunctionLibrary_Physics__GetLocationofRagDoll_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RagdollLocation != nullptr)
		*RagdollLocation = params.RagdollLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Physics__EnterRagDoll(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll");

	UVictoryBPFunctionLibrary_Physics__EnterRagDoll_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    Widths                         (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Heights                        (Parm, OutParm, ZeroConstructor)
// TArray<int>                    RefreshRates                   (Parm, OutParm, ZeroConstructor)
// bool                           IncludeRefreshRates            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_OptionsMenu__GetDisplayAdapterScreenResolutions(bool IncludeRefreshRates, TArray<int>* Widths, TArray<int>* Heights, TArray<int>* RefreshRates)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions");

	UVictoryBPFunctionLibrary_OptionsMenu__GetDisplayAdapterScreenResolutions_Params params;
	params.IncludeRefreshRates = IncludeRefreshRates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widths != nullptr)
		*Widths = params.Widths;
	if (Heights != nullptr)
		*Heights = params.Heights;
	if (RefreshRates != nullptr)
		*RefreshRates = params.RefreshRates;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Windows_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Mac                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Linux                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IOS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Android                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Android_ARM                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Android_Vulkan                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           PS4                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           XBoxOne                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HTML5                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Apple                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XBoxOne, bool* HTML5, bool* Apple)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform");

	UVictoryBPFunctionLibrary_OperatingSystem__GetCurrentPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Windows_ != nullptr)
		*Windows_ = params.Windows_;
	if (Mac != nullptr)
		*Mac = params.Mac;
	if (Linux != nullptr)
		*Linux = params.Linux;
	if (IOS != nullptr)
		*IOS = params.IOS;
	if (Android != nullptr)
		*Android = params.Android;
	if (Android_ARM != nullptr)
		*Android_ARM = params.Android_ARM;
	if (Android_Vulkan != nullptr)
		*Android_Vulkan = params.Android_Vulkan;
	if (PS4 != nullptr)
		*PS4 = params.PS4;
	if (XBoxOne != nullptr)
		*XBoxOne = params.XBoxOne;
	if (HTML5 != nullptr)
		*HTML5 = params.HTML5;
	if (Apple != nullptr)
		*Apple = params.Apple;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TheURL                         (Parm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Open_URL_In_Web_Browser(const struct FString& TheURL)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser");

	UVictoryBPFunctionLibrary_Open_URL_In_Web_Browser_Params params;
	params.TheURL = TheURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, IsPlainOldData)
// struct FVector2D               B                              (Parm, IsPlainOldData)
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_NotEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D");

	UVictoryBPFunctionLibrary_NotEqual_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         SceneComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EComponentMobility> NewMobility                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, TEnumAsByte<EComponentMobility> NewMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility");

	UVictoryBPFunctionLibrary_Mobility__SetSceneCompMobility_Params params;
	params.SceneComp = SceneComp;
	params.NewMobility = NewMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexOfMinValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_MinOfIntArray(TArray<int> IntArray, int* IndexOfMinValue, int* MinValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray");

	UVictoryBPFunctionLibrary_MinOfIntArray_Params params;
	params.IntArray = IntArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  FloatArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexOfMinValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_MinOfFloatArray(TArray<float> FloatArray, int* IndexOfMinValue, float* MinValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray");

	UVictoryBPFunctionLibrary_MinOfFloatArray_Params params;
	params.FloatArray = FloatArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = params.IndexOfMinValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    IntArray                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexOfMaxValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_MaxOfIntArray(TArray<int> IntArray, int* IndexOfMaxValue, int* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray");

	UVictoryBPFunctionLibrary_MaxOfIntArray_Params params;
	params.IntArray = IntArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  FloatArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            IndexOfMaxValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_MaxOfFloatArray(TArray<float> FloatArray, int* IndexOfMaxValue, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray");

	UVictoryBPFunctionLibrary_MaxOfFloatArray_Params params;
	params.FloatArray = FloatArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = params.IndexOfMaxValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeA                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRangeB                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeA                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutRangeB                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped");

	UVictoryBPFunctionLibrary_MapRangeClamped_Params params;
	params.Value = Value;
	params.InRangeA = InRangeA;
	params.InRangeB = InRangeB;
	params.OutRangeA = OutRangeA;
	params.OutRangeB = OutRangeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_Loops_ResetBPRunawayCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter");

	UVictoryBPFunctionLibrary_Loops_ResetBPRunawayCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::STATIC_LoadTexture2D_FromFileByExtension(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension");

	UVictoryBPFunctionLibrary_LoadTexture2D_FromFileByExtension_Params params;
	params.ImagePath = ImagePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutWidth != nullptr)
		*OutWidth = params.OutWidth;
	if (OutHeight != nullptr)
		*OutHeight = params.OutHeight;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UVictoryBPFunctionLibrary::STATIC_LoadTexture2D_FromDDSFile(const struct FString& FullFilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile");

	UVictoryBPFunctionLibrary_LoadTexture2D_FromDDSFile_Params params;
	params.FullFilePath = FullFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_LoadStringFromFile(const struct FString& FullFilePath, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile");

	UVictoryBPFunctionLibrary_LoadStringFromFile_Params params;
	params.FullFilePath = FullFilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         StringArray                    (Parm, OutParm, ZeroConstructor)
// int                            ArraySize                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 FullFilePath                   (Parm, ZeroConstructor)
// bool                           ExcludeEmptyLines              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_LoadStringArrayFromFile(const struct FString& FullFilePath, bool ExcludeEmptyLines, TArray<struct FString>* StringArray, int* ArraySize)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile");

	UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params params;
	params.FullFilePath = FullFilePath;
	params.ExcludeEmptyLines = ExcludeEmptyLines;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringArray != nullptr)
		*StringArray = params.StringArray;
	if (ArraySize != nullptr)
		*ArraySize = params.ArraySize;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Path                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UVictoryBPFunctionLibrary::STATIC_LoadObjectFromAssetPath(class UClass* ObjectClass, const struct FName& Path, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath");

	UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params params;
	params.ObjectClass = ObjectClass;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LightSource                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchOffset                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          YawOffset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RollOffset                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets");

	UVictoryBPFunctionLibrary_LensFlare__GetLensFlareOffsets_Params params;
	params.PlayerController = PlayerController;
	params.LightSource = LightSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PitchOffset != nullptr)
		*PitchOffset = params.PitchOffset;
	if (YawOffset != nullptr)
		*YawOffset = params.YawOffset;
	if (RollOffset != nullptr)
		*RollOffset = params.RollOffset;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent               KeyEvent                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FKey                    Key                            (Parm)
// bool                           Ctrl                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Shift                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Alt                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Cmd                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Match                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey");

	UVictoryBPFunctionLibrary_JoyIsKey_Params params;
	params.KeyEvent = KeyEvent;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ctrl != nullptr)
		*Ctrl = params.Ctrl;
	if (Shift != nullptr)
		*Shift = params.Shift;
	if (Alt != nullptr)
		*Alt = params.Alt;
	if (Cmd != nullptr)
		*Cmd = params.Cmd;
	if (Match != nullptr)
		*Match = params.Match;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EJoyGraphicsFullScreen> NewSetting                     (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_JoyGraphicsSettings__FullScreen_Set(TEnumAsByte<EJoyGraphicsFullScreen> NewSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set");

	UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Set_Params params;
	params.NewSetting = NewSetting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EJoyGraphicsFullScreen> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EJoyGraphicsFullScreen> UVictoryBPFunctionLibrary::STATIC_JoyGraphicsSettings__FullScreen_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get");

	UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         Files                          (Parm, OutParm, ZeroConstructor)
// struct FString                 RootFolderFullPath             (Parm, ZeroConstructor)
// struct FString                 Ext                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_JoyFileIO_GetFilesInRootAndAllSubFolders(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders");

	UVictoryBPFunctionLibrary_JoyFileIO_GetFilesInRootAndAllSubFolders_Params params;
	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Files != nullptr)
		*Files = params.Files;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         Files                          (Parm, OutParm, ZeroConstructor)
// struct FString                 RootFolderFullPath             (Parm, ZeroConstructor)
// struct FString                 Ext                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_JoyFileIO_GetFiles(const struct FString& RootFolderFullPath, const struct FString& Ext, TArray<struct FString>* Files)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles");

	UVictoryBPFunctionLibrary_JoyFileIO_GetFiles_Params params;
	params.RootFolderFullPath = RootFolderFullPath;
	params.Ext = Ext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Files != nullptr)
		*Files = params.Files;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport");

	UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_IsStandAlone(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone");

	UVictoryBPFunctionLibrary_IsStandAlone_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPlane                  Plane                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Point                          (Parm, IsPlainOldData)
// float                          Tolerance                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_IsPointOnPlane(const struct FPlane& Plane, const struct FVector& Point, float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane");

	UVictoryBPFunctionLibrary_IsPointOnPlane_Params params;
	params.Plane = Plane;
	params.Point = Point;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 string                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_IsAlphaNumeric(const struct FString& string)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric");

	UVictoryBPFunctionLibrary_IsAlphaNumeric_Params params;
	params.string = string;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelSlot*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPanelSlot* UVictoryBPFunctionLibrary::STATIC_InsertChildAt(class UWidget* Parent, int Index, class UWidget* Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt");

	UVictoryBPFunctionLibrary_InsertChildAt_Params params;
	params.Parent = Parent;
	params.Index = Index;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          VerticalFOV                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_HorizontalFOV(float VerticalFOV, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV");

	UVictoryBPFunctionLibrary_HorizontalFOV_Params params;
	params.VerticalFOV = VerticalFOV;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_HideStreamingLevel(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel");

	UVictoryBPFunctionLibrary_HideStreamingLevel_Params params;
	params.LevelInstance = LevelInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SearchIn                       (Parm, ZeroConstructor)
// struct FString                 SubString                      (Parm, ZeroConstructor)
// TEnumAsByte<ESearchCase>       SearchCase                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESearchDir>        SearchDir                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_HasSubstring(const struct FString& SearchIn, const struct FString& SubString, TEnumAsByte<ESearchCase> SearchCase, TEnumAsByte<ESearchDir> SearchDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring");

	UVictoryBPFunctionLibrary_HasSubstring_Params params;
	params.SearchIn = SearchIn;
	params.SubString = SubString;
	params.SearchCase = SearchCase;
	params.SearchDir = SearchDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_GraphicsSettings__SetFrameRateToBeUnbound()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound");

	UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateToBeUnbound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_GraphicsSettings__SetFrameRateCap(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap");

	UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateCap_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UUserWidget*             ParentUserWidget               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UVictoryBPFunctionLibrary::STATIC_GetWidgetFromName(class UUserWidget* ParentUserWidget, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName");

	UVictoryBPFunctionLibrary_GetWidgetFromName_Params params;
	params.ParentUserWidget = ParentUserWidget;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ViewportPosition               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHitResult                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FVector2D& ViewportPosition, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel");

	UVictoryBPFunctionLibrary_GetViewportPositionHitResultByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ViewportPosition = ViewportPosition;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHitResult != nullptr)
		*OutHitResult = params.OutHitResult;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               OutViewportPosition            (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_GetViewportPosition(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* OutViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition");

	UVictoryBPFunctionLibrary_GetViewportPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutViewportPosition != nullptr)
		*OutViewportPosition = params.OutViewportPosition;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ParentLocation                 (Parm, IsPlainOldData)
// struct FRotator                ParentRotation                 (Parm, IsPlainOldData)
// struct FVector                 ChildLocation                  (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::STATIC_GetVectorRelativeLocation(const struct FVector& ParentLocation, const struct FRotator& ParentRotation, const struct FVector& ChildLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation");

	UVictoryBPFunctionLibrary_GetVectorRelativeLocation_Params params;
	params.ParentLocation = ParentLocation;
	params.ParentRotation = ParentRotation;
	params.ChildLocation = ChildLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            UnixTimeStamp                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDateTime               UTCTime                        (Parm, OutParm)

void UVictoryBPFunctionLibrary::STATIC_GetUTCFromUnixTimeStamp(int UnixTimeStamp, struct FDateTime* UTCTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp");

	UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params params;
	params.UnixTimeStamp = UnixTimeStamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UTCTime != nullptr)
		*UTCTime = params.UTCTime;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsAMD                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsNvidia                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsIntel                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnknown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            UnknownId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int* UnknownId)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand");

	UVictoryBPFunctionLibrary_GetUserDisplayAdapterBrand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAMD != nullptr)
		*IsAMD = params.IsAMD;
	if (IsNvidia != nullptr)
		*IsNvidia = params.IsNvidia;
	if (IsIntel != nullptr)
		*IsIntel = params.IsIntel;
	if (IsUnknown != nullptr)
		*IsUnknown = params.IsUnknown;
	if (UnknownId != nullptr)
		*UnknownId = params.UnknownId;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime               UTCTime                        (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_GetUnixTimeStamp(const struct FDateTime& UTCTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp");

	UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params params;
	params.UTCTime = UTCTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_GetTimeInPlay(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeInPlay");

	UVictoryBPFunctionLibrary_GetTimeInPlay_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_GetTimeAlive(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive");

	UVictoryBPFunctionLibrary_GetTimeAlive_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*    Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FVector>         VertexPositions                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FVector>* VertexPositions)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations");

	UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VertexPositions != nullptr)
		*VertexPositions = params.VertexPositions;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// class USoundWave*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundWave* UVictoryBPFunctionLibrary::STATIC_GetSoundWaveFromFile(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetSoundWaveFromFile");

	UVictoryBPFunctionLibrary_GetSoundWaveFromFile_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ParentRotation                 (Parm, IsPlainOldData)
// struct FRotator                ChildRotation                  (Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_GetRotatorRelativeRotation(const struct FRotator& ParentRotation, const struct FRotator& ChildRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation");

	UVictoryBPFunctionLibrary_GetRotatorRelativeRotation_Params params;
	params.ParentRotation = ParentRotation;
	params.ChildRotation = ChildRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_GetPlayerUniqueNetID()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID");

	UVictoryBPFunctionLibrary_GetPlayerUniqueNetID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerStartName                (Parm, ZeroConstructor)
// class APlayerStart*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerStart* UVictoryBPFunctionLibrary::STATIC_GetPlayerStart(class UObject* WorldContextObject, const struct FString& PlayerStartName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart");

	UVictoryBPFunctionLibrary_GetPlayerStart_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerStartName = PlayerStartName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Obj                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UVictoryBPFunctionLibrary::STATIC_GetObjectPath(class UObject* Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath");

	UVictoryBPFunctionLibrary_GetObjectPath_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         NamesOfLoadedLevels            (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<struct FString>* NamesOfLoadedLevels)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels");

	UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NamesOfLoadedLevels != nullptr)
		*NamesOfLoadedLevels = params.NamesOfLoadedLevels;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelStreamingKismet*   LevelInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLevelStreamInstanceInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::STATIC_GetLevelInstanceInfo(class ULevelStreamingKismet* LevelInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo");

	UVictoryBPFunctionLibrary_GetLevelInstanceInfo_Params params;
	params.LevelInstance = LevelInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UVictoryBPFunctionLibrary::STATIC_GetHeadMountedDisplayDeviceType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType");

	UVictoryBPFunctionLibrary_GetHeadMountedDisplayDeviceType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UVictoryBPFunctionLibrary::STATIC_GetGenericTeamId(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId");

	UVictoryBPFunctionLibrary_GetGenericTeamId_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UVictoryBPFunctionLibrary::STATIC_GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass");

	UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ClosestPointOnCollision        (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FVector& Point, struct FVector* ClosestPointOnCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision");

	UVictoryBPFunctionLibrary_GetDistanceToCollision_Params params;
	params.CollisionComponent = CollisionComponent;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestPointOnCollision != nullptr)
		*ClosestPointOnCollision = params.ClosestPointOnCollision;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     CollisionComponent1            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     CollisionComponent2            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 PointOnSurface1                (Parm, OutParm, IsPlainOldData)
// struct FVector                 PointOnSurface2                (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FVector* PointOnSurface1, struct FVector* PointOnSurface2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces");

	UVictoryBPFunctionLibrary_GetDistanceBetweenComponentSurfaces_Params params;
	params.CollisionComponent1 = CollisionComponent1;
	params.CollisionComponent2 = CollisionComponent2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointOnSurface1 != nullptr)
		*PointOnSurface1 = params.PointOnSurface1;
	if (PointOnSurface2 != nullptr)
		*PointOnSurface2 = params.PointOnSurface2;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_GetCreationTime(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime");

	UVictoryBPFunctionLibrary_GetCreationTime_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         ParentComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ChildComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation");

	UVictoryBPFunctionLibrary_GetComponentRelativeRotation_Params params;
	params.ParentComponent = ParentComponent;
	params.ChildComponent = ChildComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         ParentComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         ChildComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::STATIC_GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation");

	UVictoryBPFunctionLibrary_GetComponentRelativeLocation_Params params;
	params.ParentComponent = ParentComponent;
	params.ChildComponent = ChildComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_GetCommandLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine");

	UVictoryBPFunctionLibrary_GetCommandLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::STATIC_GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& Center, float Radius, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation");

	UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.Center = Center;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorCenter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryBPFunctionLibrary::STATIC_GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor");

	UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.ActorCenter = ActorCenter;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 Extent                         (Parm, OutParm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_GetBoxContainingWorldPoints(TArray<struct FVector> Points, struct FVector* Center, struct FVector* Extent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints");

	UVictoryBPFunctionLibrary_GetBoxContainingWorldPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
	if (Extent != nullptr)
		*Extent = params.Extent;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UUserWidget*>     FoundWidgets                   (Parm, OutParm, ZeroConstructor)
// bool                           TopLevelOnly                   (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllWidgetsOfClass");

	UVictoryBPFunctionLibrary_GetAllWidgetsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComp               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   StartingBoneName               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           BoneNames                      (Parm, OutParm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const struct FName& StartingBoneName, TArray<struct FName>* BoneNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone");

	UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params params;
	params.SkeletalMeshComp = SkeletalMeshComp;
	params.StartingBoneName = StartingBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneNames != nullptr)
		*BoneNames = params.BoneNames;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ChildActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation");

	UVictoryBPFunctionLibrary_GetActorRelativeRotation_Params params;
	params.ParentActor = ParentActor;
	params.ChildActor = ChildActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ChildActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::STATIC_GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation");

	UVictoryBPFunctionLibrary_GetActorRelativeLocation_Params params;
	params.ParentActor = ParentActor;
	params.ChildActor = ChildActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_FlushPressedKeys(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys");

	UVictoryBPFunctionLibrary_FlushPressedKeys_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PC                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FlashContinuous                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxFlashCount                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            FlashFrequencyMilliseconds     (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int MaxFlashCount, int FlashFrequencyMilliseconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar");

	UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params params;
	params.PC = PC;
	params.FlashContinuous = FlashContinuous;
	params.MaxFlashCount = MaxFlashCount;
	params.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SaveDirectory                  (Parm, ZeroConstructor)
// struct FString                 JoyfulFileName                 (Parm, ZeroConstructor)
// struct FString                 SaveText                       (Parm, ZeroConstructor)
// bool                           AllowOverWriting               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_FileIO__SaveStringTextToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, const struct FString& SaveText, bool AllowOverWriting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile");

	UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params params;
	params.SaveDirectory = SaveDirectory;
	params.JoyfulFileName = JoyfulFileName;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SaveDirectory                  (Parm, ZeroConstructor)
// struct FString                 JoyfulFileName                 (Parm, ZeroConstructor)
// TArray<struct FString>         SaveText                       (Parm, ZeroConstructor)
// bool                           AllowOverWriting               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_FileIO__SaveStringArrayToFile(const struct FString& SaveDirectory, const struct FString& JoyfulFileName, TArray<struct FString> SaveText, bool AllowOverWriting)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile");

	UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params params;
	params.SaveDirectory = SaveDirectory;
	params.JoyfulFileName = JoyfulFileName;
	params.SaveText = SaveText;
	params.AllowOverWriting = AllowOverWriting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               A                              (Parm, IsPlainOldData)
// struct FVector2D               B                              (Parm, IsPlainOldData)
// float                          ErrorTolerance                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_EqualEqual_Vector2DVector2D(const struct FVector2D& A, const struct FVector2D& B, float ErrorTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D");

	UVictoryBPFunctionLibrary_EqualEqual_Vector2DVector2D_Params params;
	params.A = A;
	params.B = B;
	params.ErrorTolerance = ErrorTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumPoints                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (Parm, IsPlainOldData)
// struct FVector                 YAxis                          (Parm, IsPlainOldData)
// struct FVector                 ZAxis                          (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PersistentLines                (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_DrawCircle(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FVector& YAxis, const struct FVector& ZAxis, float Duration, bool PersistentLines)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle");

	UVictoryBPFunctionLibrary_DrawCircle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.NumPoints = NumPoints;
	params.Thickness = Thickness;
	params.LineColor = LineColor;
	params.YAxis = YAxis;
	params.ZAxis = ZAxis;
	params.Duration = Duration;
	params.PersistentLines = PersistentLines;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 EndPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (Parm, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket");

	UVictoryBPFunctionLibrary_Draw__Thick3DLineFromSocket_Params params;
	params.Mesh = Mesh;
	params.EndPoint = EndPoint;
	params.Socket = Socket;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (Parm, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FVector& EndPoint, const struct FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket");

	UVictoryBPFunctionLibrary_Draw__Thick3DLineFromCharacterSocket_Params params;
	params.TheCharacter = TheCharacter;
	params.EndPoint = EndPoint;
	params.Socket = Socket;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  StartActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EndActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LineColor                      (Parm, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors");

	UVictoryBPFunctionLibrary_Draw__Thick3DLineBetweenActors_Params params;
	params.StartActor = StartActor;
	params.EndActor = EndActor;
	params.LineColor = LineColor;
	params.Thickness = Thickness;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*      Mat                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Parameter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_DoesMaterialHaveParameter(class UMaterialInterface* Mat, const struct FName& Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter");

	UVictoryBPFunctionLibrary_DoesMaterialHaveParameter_Params params;
	params.Mat = Mat;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AStaticMeshActor*        TheSMA                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TestPoint                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ClosestSurfacePoint            (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FVector& TestPoint, struct FVector* ClosestSurfacePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface");

	UVictoryBPFunctionLibrary_DistanceToSurface__DistaceOfPointToMeshSurface_Params params;
	params.TheSMA = TheSMA;
	params.TestPoint = TestPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestSurfacePoint != nullptr)
		*ClosestSurfacePoint = params.ClosestSurfacePoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         BoneLocations                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FVector>* BoneLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations");

	UVictoryBPFunctionLibrary_Data__GetCharacterBoneLocations_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneLocations != nullptr)
		*BoneLocations = params.BoneLocations;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ClearColor                     (Parm, IsPlainOldData)
// float                          Gamma                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UVictoryBPFunctionLibrary::STATIC_CreateTextureRenderTarget2D(int Width, int Height, const struct FLinearColor& ClearColor, float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D");

	UVictoryBPFunctionLibrary_CreateTextureRenderTarget2D_Params params;
	params.Width = Width;
	params.Height = Height;
	params.ClearColor = ClearColor;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CompClass                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPrimitiveComponent* UVictoryBPFunctionLibrary::STATIC_CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, const struct FName& Name, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent");

	UVictoryBPFunctionLibrary_CreatePrimitiveComponent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CompClass = CompClass;
	params.Name = Name;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, IsPlainOldData)
// struct FPlane                  ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FPlane UVictoryBPFunctionLibrary::STATIC_CreatePlane(const struct FVector& Center, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane");

	UVictoryBPFunctionLibrary_CreatePlane_Params params;
	params.Center = Center;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TheObjectClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UVictoryBPFunctionLibrary::STATIC_CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject");

	UVictoryBPFunctionLibrary_CreateObject_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TheObjectClass = TheObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FileToHash                     (Parm, ZeroConstructor)
// struct FString                 FileToStoreHashTo              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_CreateMD5Hash(const struct FString& FileToHash, const struct FString& FileToStoreHashTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash");

	UVictoryBPFunctionLibrary_CreateMD5Hash_Params params;
	params.FileToHash = FileToHash;
	params.FileToStoreHashTo = FileToStoreHashTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FString                 SubString                      (Parm, ZeroConstructor)
// TEnumAsByte<ESearchCase>       SearchCase                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_CountOccurrancesOfSubString(const struct FString& Source, const struct FString& SubString, TEnumAsByte<ESearchCase> SearchCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString");

	UVictoryBPFunctionLibrary_CountOccurrancesOfSubString_Params params;
	params.Source = Source;
	params.SubString = SubString;
	params.SearchCase = SearchCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 TheVector                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_Conversions__VectorToRotator(const struct FVector& TheVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator");

	UVictoryBPFunctionLibrary_Conversions__VectorToRotator_Params params;
	params.TheVector = TheVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 string                         (Parm, ZeroConstructor)
// struct FVector                 ConvertedVector                (Parm, OutParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Conversions__StringToVector(const struct FString& string, struct FVector* ConvertedVector, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector");

	UVictoryBPFunctionLibrary_Conversions__StringToVector_Params params;
	params.string = string;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedVector != nullptr)
		*ConvertedVector = params.ConvertedVector;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 string                         (Parm, ZeroConstructor)
// struct FRotator                ConvertedRotator               (Parm, OutParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Conversions__StringToRotator(const struct FString& string, struct FRotator* ConvertedRotator, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator");

	UVictoryBPFunctionLibrary_Conversions__StringToRotator_Params params;
	params.string = string;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedRotator != nullptr)
		*ConvertedRotator = params.ConvertedRotator;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 string                         (Parm, ZeroConstructor)
// struct FLinearColor            ConvertedColor                 (Parm, OutParm, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Conversions__StringToColor(const struct FString& string, struct FLinearColor* ConvertedColor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor");

	UVictoryBPFunctionLibrary_Conversions__StringToColor_Params params;
	params.string = string;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedColor != nullptr)
		*ConvertedColor = params.ConvertedColor;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                TheRotator                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryBPFunctionLibrary::STATIC_Conversions__RotatorToVector(const struct FRotator& TheRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector");

	UVictoryBPFunctionLibrary_Conversions__RotatorToVector_Params params;
	params.TheRotator = TheRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FString                 ColorAsString                  (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Conversions__ColorToString(const struct FLinearColor& Color, struct FString* ColorAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString");

	UVictoryBPFunctionLibrary_Conversions__ColorToString_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorAsString != nullptr)
		*ColorAsString = params.ColorAsString;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          IN_Float                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryBPFunctionLibrary::STATIC_Conversion__FloatToRoundedInteger(float IN_Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger");

	UVictoryBPFunctionLibrary_Conversion__FloatToRoundedInteger_Params params;
	params.IN_Float = IN_Float;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
// (Final, Native, Static, Public, BlueprintCallable)

void UVictoryBPFunctionLibrary::STATIC_constructRand()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand");

	UVictoryBPFunctionLibrary_constructRand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures");

	UVictoryBPFunctionLibrary_Component_PrestreamTextures_Params params;
	params.Target = Target;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MD5HashFile1                   (Parm, ZeroConstructor)
// struct FString                 MD5HashFile2                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_CompareMD5Hash(const struct FString& MD5HashFile1, const struct FString& MD5HashFile2)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash");

	UVictoryBPFunctionLibrary_CompareMD5Hash_Params params;
	params.MD5HashFile1 = MD5HashFile1;
	params.MD5HashFile2 = MD5HashFile2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AStaticMeshActor*        ToClone                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationOffset                 (Parm, IsPlainOldData)
// struct FRotator                RotationOffset                 (Parm, IsPlainOldData)
// class AStaticMeshActor*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AStaticMeshActor* UVictoryBPFunctionLibrary::STATIC_Clone__StaticMeshActor(class UObject* WorldContextObject, class AStaticMeshActor* ToClone, const struct FVector& LocationOffset, const struct FRotator& RotationOffset, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor");

	UVictoryBPFunctionLibrary_Clone__StaticMeshActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ToClone = ToClone;
	params.LocationOffset = LocationOffset;
	params.RotationOffset = RotationOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_ClientWindow__GameWindowIsForeGroundInOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS");

	UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*              TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewMaxMoveSpeed                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed");

	UVictoryBPFunctionLibrary_CharacterMovement__SetMaxMoveSpeed_Params params;
	params.TheCharacter = TheCharacter;
	params.NewMaxMoveSpeed = NewMaxMoveSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryBPFunctionLibrary::STATIC_Character__GetControllerRotation(class AActor* TheCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation");

	UVictoryBPFunctionLibrary_Character__GetControllerRotation_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 ImagePath                      (ConstParm, Parm, ZeroConstructor)
// struct FLinearColor            ClearColour                    (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage");

	UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params params;
	params.Target = Target;
	params.ImagePath = ImagePath;
	params.ClearColour = ClearColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector2D               OutPixelLocation               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project");

	UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params params;
	params.Target = Target;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = params.OutPixelLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ASceneCapture2D*         Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ImagePath                      (ConstParm, Parm, ZeroConstructor)
// struct FLinearColor            ClearColour                    (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Capture2D_SaveImage(class ASceneCapture2D* Target, const struct FString& ImagePath, const struct FLinearColor& ClearColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage");

	UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params params;
	params.Target = Target;
	params.ImagePath = ImagePath;
	params.ClearColour = ClearColour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ASceneCapture2D*         Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector2D               OutPixelLocation               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Capture2D_Project(class ASceneCapture2D* Target, const struct FVector& Location, struct FVector2D* OutPixelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project");

	UVictoryBPFunctionLibrary_Capture2D_Project_Params params;
	params.Target = Target;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPixelLocation != nullptr)
		*OutPixelLocation = params.OutPixelLocation;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Source                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<struct FVector>         OtherPoints                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 ClosestPoint                   (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryBPFunctionLibrary::STATIC_Calcs__ClosestPointToSourcePoint(const struct FVector& Source, TArray<struct FVector> OtherPoints, struct FVector* ClosestPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint");

	UVictoryBPFunctionLibrary_Calcs__ClosestPointToSourcePoint_Params params;
	params.Source = Source;
	params.OtherPoints = OtherPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClosestPoint != nullptr)
		*ClosestPoint = params.ClosestPoint;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAscendingOrder                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VariableName                   (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Array_Sort(TArray<int> TargetArray, bool bAscendingOrder, const struct FName& VariableName)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort");

	UVictoryBPFunctionLibrary_Array_Sort_Params params;
	params.TargetArray = TargetArray;
	params.bAscendingOrder = bAscendingOrder;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int>                    TargetArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Array_IsValidIndex(TArray<int> TargetArray, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex");

	UVictoryBPFunctionLibrary_Array_IsValidIndex_Params params;
	params.TargetArray = TargetArray;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 A                              (Parm, ZeroConstructor)
// struct FString                 B                              (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_AppendMultiple(const struct FString& A, const struct FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple");

	UVictoryBPFunctionLibrary_AppendMultiple_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  AnimBPOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TheRotation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FRotator& TheRotation, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation");

	UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params params;
	params.AnimBPOwner = AnimBPOwner;
	params.TheRotation = TheRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  AnimBPOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets");

	UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params params;
	params.AnimBPOwner = AnimBPOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLevelStreamInstanceInfo LevelInstanceInfo              (ConstParm, Parm, OutParm, ReferenceParm)

void UVictoryBPFunctionLibrary::STATIC_AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels");

	UVictoryBPFunctionLibrary_AddToStreamingLevels_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelInstanceInfo = LevelInstanceInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TheActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                AddRot                         (Parm, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_AddToActorRotation(class AActor* TheActor, const struct FRotator& AddRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation");

	UVictoryBPFunctionLibrary_AddToActorRotation_Params params;
	params.TheActor = TheActor;
	params.AddRot = AddRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnableStreaming               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CinematicTextureGroups         (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPFunctionLibrary::STATIC_Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int CinematicTextureGroups)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures");

	UVictoryBPFunctionLibrary_Actor_PrestreamTextures_Params params;
	params.Target = Target;
	params.Seconds = Seconds;
	params.bEnableStreaming = bEnableStreaming;
	params.CinematicTextureGroups = CinematicTextureGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ActorToTeleport                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DestinationActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPFunctionLibrary::STATIC_Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor");

	UVictoryBPFunctionLibrary_Actor__TeleportToActor_Params params;
	params.ActorToTeleport = ActorToTeleport;
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsArray                    (Parm, OutParm, ZeroConstructor)

void UVictoryBPFunctionLibrary::STATIC_Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors");

	UVictoryBPFunctionLibrary_Actor__GetAttachedActors_Params params;
	params.ParentActor = ParentActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorsArray != nullptr)
		*ActorsArray = params.ActorsArray;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UVictoryBPFunctionLibrary::STATIC_Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController");

	UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 TheObject                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryBPFunctionLibrary::STATIC_Accessor__GetNameAsString(class UObject* TheObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString");

	UVictoryBPFunctionLibrary_Accessor__GetNameAsString_Params params;
	params.TheObject = TheObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UVictoryBPFunctionLibrary::STATIC_Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh");

	UVictoryBPFunctionLibrary_Accessor__GetCharacterSkeletalMesh_Params params;
	params.TheCharacter = TheCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           MakeVisible                    (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryBPHTML::STATIC_VictoryHTML5_SetCursorVisible(bool MakeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible");

	UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Params params;
	params.MakeVisible = MakeVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryBPHTML.IsHTML
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVictoryBPHTML::STATIC_IsHTML()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.IsHTML");

	UVictoryBPHTML_IsHTML_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeMultiplier               (Parm, ZeroConstructor, IsPlainOldData)
// float                          PitchMultiplier                (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* AVictoryPC::VictoryPlaySpeechSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPlaySpeechSound");

	AVictoryPC_VictoryPlaySpeechSound_Params params;
	params.Sound = Sound;
	params.VolumeMultiplier = VolumeMultiplier;
	params.PitchMultiplier = PitchMultiplier;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVictoryPC::VictoryPC_GetMyIP_SendRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_SendRequest");

	AVictoryPC_VictoryPC_GetMyIP_SendRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 YourIP                         (Parm, ZeroConstructor)

void AVictoryPC::VictoryPC_GetMyIP_DataReceived(const struct FString& YourIP)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.VictoryPC_GetMyIP_DataReceived");

	AVictoryPC_VictoryPC_GetMyIP_DataReceived_Params params;
	params.YourIP = YourIP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSubtitleCue>    VictorySubtitles               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          CueDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void AVictoryPC::Subtitles_CPPDelegate(TArray<struct FSubtitleCue> VictorySubtitles, float CueDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.Subtitles_CPPDelegate");

	AVictoryPC_Subtitles_CPPDelegate_Params params;
	params.VictorySubtitles = VictorySubtitles;
	params.CueDuration = CueDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FVictorySubtitleCue> VictorySubtitles               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          CueDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void AVictoryPC::OnVictorySubtitlesQueued(TArray<struct FVictorySubtitleCue> VictorySubtitles, float CueDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryPC.OnVictorySubtitlesQueued");

	AVictoryPC_OnVictorySubtitlesQueued_Params params;
	params.VictorySubtitles = VictorySubtitles;
	params.CueDuration = CueDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UVictoryTMapComp::String_Vector__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Remove");

	UVictoryTMapComp_String_Vector__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Get
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryTMapComp::String_Vector__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Get");

	UVictoryTMapComp_String_Vector__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::String_Vector__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__Clear");

	UVictoryTMapComp_String_Vector__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UVictoryTMapComp::String_Vector__AddPair(const struct FString& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Vector__AddPair");

	UVictoryTMapComp_String_Vector__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UVictoryTMapComp::String_String__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Remove");

	UVictoryTMapComp_String_String__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Get
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UVictoryTMapComp::String_String__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Get");

	UVictoryTMapComp_String_String__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::String_String__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__Clear");

	UVictoryTMapComp_String_String__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_String__AddPair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UVictoryTMapComp::String_String__AddPair(const struct FString& Key, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_String__AddPair");

	UVictoryTMapComp_String_String__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UVictoryTMapComp::String_Rotator__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Remove");

	UVictoryTMapComp_String_Rotator__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVictoryTMapComp::String_Rotator__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Get");

	UVictoryTMapComp_String_Rotator__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::String_Rotator__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__Clear");

	UVictoryTMapComp_String_Rotator__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FRotator                Value                          (Parm, IsPlainOldData)

void UVictoryTMapComp::String_Rotator__AddPair(const struct FString& Key, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Rotator__AddPair");

	UVictoryTMapComp_String_Rotator__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UVictoryTMapComp::String_Int__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Remove");

	UVictoryTMapComp_String_Int__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Get
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVictoryTMapComp::String_Int__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Get");

	UVictoryTMapComp_String_Int__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::String_Int__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__Clear");

	UVictoryTMapComp_String_Int__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryTMapComp::String_Int__AddPair(const struct FString& Key, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Int__AddPair");

	UVictoryTMapComp_String_Int__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UVictoryTMapComp::String_Actor__Remove(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Remove");

	UVictoryTMapComp_String_Actor__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Get
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UVictoryTMapComp::String_Actor__Get(const struct FString& Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Get");

	UVictoryTMapComp_String_Actor__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::String_Actor__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__Clear");

	UVictoryTMapComp_String_Actor__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// class AActor*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryTMapComp::String_Actor__AddPair(const struct FString& Key, class AActor* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.String_Actor__AddPair");

	UVictoryTMapComp_String_Actor__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryTMapComp::Int_Vector__Remove(int Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Remove");

	UVictoryTMapComp_Int_Vector__Remove_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVictoryTMapComp::Int_Vector__Get(int Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Get");

	UVictoryTMapComp_Int_Vector__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::Int_Vector__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__Clear");

	UVictoryTMapComp_Int_Vector__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UVictoryTMapComp::Int_Vector__AddPair(int Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Vector__AddPair");

	UVictoryTMapComp_Int_Vector__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryTMapComp::Int_Float__Remove(int Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Remove");

	UVictoryTMapComp_Int_Float__Remove_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Get
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVictoryTMapComp::Int_Float__Get(int Key, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Get");

	UVictoryTMapComp_Int_Float__Get_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear
// (Final, Native, Public, BlueprintCallable)

void UVictoryTMapComp::Int_Float__Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__Clear");

	UVictoryTMapComp_Int_Float__Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UVictoryTMapComp::Int_Float__AddPair(int Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryTMapComp.Int_Float__AddPair");

	UVictoryTMapComp_Int_Float__AddPair_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
