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

// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanel*            Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 widgetToDisable                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUI_ErrorMessage_C*      messageWidget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::STATIC_ShowErrorDialog(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ShowErrorDialog");

	UGUIHelperStaticFunctionLibrary_C_ShowErrorDialog_Params fn_params;
	fn_params.Message = Message;
	fn_params.Canvas = Canvas;
	fn_params.widgetToDisable = widgetToDisable;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (messageWidget != nullptr)
		*messageWidget = fn_params.messageWidget;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 coordinatesString              (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearCoordinatesToString");

	UGUIHelperStaticFunctionLibrary_C_LinearCoordinatesToString_Params fn_params;
	fn_params.Coordinates = Coordinates;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (coordinatesString != nullptr)
		*coordinatesString = fn_params.coordinatesString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 healthString                   (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_HealthToString(float Health, class UObject* __WorldContext, struct FString* healthString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.HealthToString");

	UGUIHelperStaticFunctionLibrary_C_HealthToString_Params fn_params;
	fn_params.Health = Health;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (healthString != nullptr)
		*healthString = fn_params.healthString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 postLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 descriptionString              (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_ValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToDescriptionString");

	UGUIHelperStaticFunctionLibrary_C_ValueToDescriptionString_Params fn_params;
	fn_params.preLabel = preLabel;
	fn_params.Value = Value;
	fn_params.postLabel = postLabel;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (descriptionString != nullptr)
		*descriptionString = fn_params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValueString                    (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_ValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.ValueToString");

	UGUIHelperStaticFunctionLibrary_C_ValueToString_Params fn_params;
	fn_params.Value = Value;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ValueString != nullptr)
		*ValueString = fn_params.ValueString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Acceleration                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 accelerationString             (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, struct FString* accelerationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearVectorDistanceToString");

	UGUIHelperStaticFunctionLibrary_C_LinearVectorDistanceToString_Params fn_params;
	fn_params.Acceleration = Acceleration;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (accelerationString != nullptr)
		*accelerationString = fn_params.accelerationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 velocityString                 (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, struct FString* velocityString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VelocityToString");

	UGUIHelperStaticFunctionLibrary_C_VelocityToString_Params fn_params;
	fn_params.Velocity = Velocity;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (velocityString != nullptr)
		*velocityString = fn_params.velocityString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Acceleration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 accelerationString             (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_AccelerationToString(float Acceleration, class UObject* __WorldContext, struct FString* accelerationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.AccelerationToString");

	UGUIHelperStaticFunctionLibrary_C_AccelerationToString_Params fn_params;
	fn_params.Acceleration = Acceleration;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (accelerationString != nullptr)
		*accelerationString = fn_params.accelerationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ValueString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 postLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 descriptionString              (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_StringToDescriptionString(const struct FString& preLabel, const struct FString& ValueString, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.StringToDescriptionString");

	UGUIHelperStaticFunctionLibrary_C_StringToDescriptionString_Params fn_params;
	fn_params.preLabel = preLabel;
	fn_params.ValueString = ValueString;
	fn_params.postLabel = postLabel;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (descriptionString != nullptr)
		*descriptionString = fn_params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ValueString                    (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_LinearValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToString");

	UGUIHelperStaticFunctionLibrary_C_LinearValueToString_Params fn_params;
	fn_params.Value = Value;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (ValueString != nullptr)
		*ValueString = fn_params.ValueString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Coordinates                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 coordinatesString              (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.CoordinatesToString");

	UGUIHelperStaticFunctionLibrary_C_CoordinatesToString_Params fn_params;
	fn_params.Coordinates = Coordinates;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (coordinatesString != nullptr)
		*coordinatesString = fn_params.coordinatesString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Vector                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 vectorString                   (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_VectorToString(const struct FVector& Vector, class UObject* __WorldContext, struct FString* vectorString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.VectorToString");

	UGUIHelperStaticFunctionLibrary_C_VectorToString_Params fn_params;
	fn_params.Vector = Vector;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (vectorString != nullptr)
		*vectorString = fn_params.vectorString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 rotationString                 (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, struct FString* rotationString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.RotationToString");

	UGUIHelperStaticFunctionLibrary_C_RotationToString_Params fn_params;
	fn_params.Rotation = Rotation;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (rotationString != nullptr)
		*rotationString = fn_params.rotationString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 preLabel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 postLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 descriptionString              (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_LinearValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.LinearValueToDescriptionString");

	UGUIHelperStaticFunctionLibrary_C_LinearValueToDescriptionString_Params fn_params;
	fn_params.preLabel = preLabel;
	fn_params.Value = Value;
	fn_params.postLabel = postLabel;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (descriptionString != nullptr)
		*descriptionString = fn_params.descriptionString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          floatNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Precision                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 floatAsString                  (Parm, OutParm, ZeroConstructor)

void UGUIHelperStaticFunctionLibrary_C::STATIC_FloatToStringWithPrecision(float floatNum, int Precision, class UObject* __WorldContext, struct FString* floatAsString)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToStringWithPrecision");

	UGUIHelperStaticFunctionLibrary_C_FloatToStringWithPrecision_Params fn_params;
	fn_params.floatNum = floatNum;
	fn_params.Precision = Precision;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (floatAsString != nullptr)
		*floatAsString = fn_params.floatAsString;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPrisonerMovementPace          movementPace                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   movementPaceText               (Parm, OutParm)

void UGUIHelperStaticFunctionLibrary_C::STATIC_EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, struct FText* movementPaceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.EmovementPaceToText");

	UGUIHelperStaticFunctionLibrary_C_EmovementPaceToText_Params fn_params;
	fn_params.movementPace = movementPace;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (movementPaceText != nullptr)
		*movementPaceText = fn_params.movementPaceText;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkill*>          skillArrayRef                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::STATIC_SortSkills(class UObject* __WorldContext, TArray<class USkill*>* skillArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SortSkills");

	UGUIHelperStaticFunctionLibrary_C_SortSkills_Params fn_params;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (skillArrayRef != nullptr)
		*skillArrayRef = fn_params.skillArrayRef;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::STATIC_SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToSkillPercentage");

	UGUIHelperStaticFunctionLibrary_C_SkilLevelToSkillPercentage_Params fn_params;
	fn_params.Selection = Selection;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (MaxValue != nullptr)
		*MaxValue = fn_params.MaxValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          floatNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGUIHelperStaticFunctionLibrary_C::STATIC_FloatToTextFormatted(float floatNum, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.FloatToTextFormatted");

	UGUIHelperStaticFunctionLibrary_C_FloatToTextFormatted_Params fn_params;
	fn_params.floatNum = floatNum;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGUIHelperStaticFunctionLibrary_C::STATIC_SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValue");

	UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValue_Params fn_params;
	fn_params.Selection = Selection;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (MaxValue != nullptr)
		*MaxValue = fn_params.MaxValue;
}


// Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESkillLevel                    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MaxValue                       (Parm, OutParm)

void UGUIHelperStaticFunctionLibrary_C::STATIC_SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, struct FText* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C.SkilLevelToMaxSkillValueText");

	UGUIHelperStaticFunctionLibrary_C_SkilLevelToMaxSkillValueText_Params fn_params;
	fn_params.Selection = Selection;
	fn_params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (MaxValue != nullptr)
		*MaxValue = fn_params.MaxValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
