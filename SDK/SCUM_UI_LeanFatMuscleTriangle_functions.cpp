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

// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateAttributesFromFatnessAndLeanness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Fatness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Leanness                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::UpdateAttributesFromFatnessAndLeanness(float Fatness, float Leanness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateAttributesFromFatnessAndLeanness");

	UUI_LeanFatMuscleTriangle_C_UpdateAttributesFromFatnessAndLeanness_Params fn_params;
	fn_params.Fatness = Fatness;
	fn_params.Leanness = Leanness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           updateEvenWithoutCapture       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseEvent(bool updateEvenWithoutCapture, struct FPointerEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseEvent");

	UUI_LeanFatMuscleTriangle_C_OnMouseEvent_Params fn_params;
	fn_params.updateEvenWithoutCapture = updateEvenWithoutCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = fn_params.Event;

	return fn_params.ReturnValue;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonDown");

	UUI_LeanFatMuscleTriangle_C_OnMouseButtonDown_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateVisualsFromFatnessAndLeanness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Fatness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Leanness                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::UpdateVisualsFromFatnessAndLeanness(float Fatness, float Leanness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.UpdateVisualsFromFatnessAndLeanness");

	UUI_LeanFatMuscleTriangle_C_UpdateVisualsFromFatnessAndLeanness_Params fn_params;
	fn_params.Fatness = Fatness;
	fn_params.Leanness = Leanness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseButtonUp");

	UUI_LeanFatMuscleTriangle_C_OnMouseButtonUp_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.GetFactorsFromLocalCoordinatesz
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          muscle                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          lean                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Fat                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::GetFactorsFromLocalCoordinatesz(const struct FVector2D& Coordinates, float* muscle, float* lean, float* Fat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.GetFactorsFromLocalCoordinatesz");

	UUI_LeanFatMuscleTriangle_C_GetFactorsFromLocalCoordinatesz_Params fn_params;
	fn_params.Coordinates = Coordinates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (muscle != nullptr)
		*muscle = fn_params.muscle;
	if (lean != nullptr)
		*lean = fn_params.lean;
	if (Fat != nullptr)
		*Fat = fn_params.Fat;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_LeanFatMuscleTriangle_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.OnMouseMove");

	UUI_LeanFatMuscleTriangle_C_OnMouseMove_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.AttributesChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector4                Attributes                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_LeanFatMuscleTriangle_C::AttributesChanged__DelegateSignature(const struct FVector4& Attributes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LeanFatMuscleTriangle.UI_LeanFatMuscleTriangle_C.AttributesChanged__DelegateSignature");

	UUI_LeanFatMuscleTriangle_C_AttributesChanged__DelegateSignature_Params fn_params;
	fn_params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
