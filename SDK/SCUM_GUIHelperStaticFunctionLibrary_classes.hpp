#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGUIHelperStaticFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GUIHelperStaticFunctionLibrary.GUIHelperStaticFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ShowErrorDialog(const struct FText& Message, class UCanvasPanel* Canvas, class UWidget* widgetToDisable, class UObject* __WorldContext, class UUI_ErrorMessage_C** messageWidget);
	void STATIC_LinearCoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString);
	void STATIC_HealthToString(float Health, class UObject* __WorldContext, struct FString* healthString);
	void STATIC_ValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	void STATIC_ValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString);
	void STATIC_LinearVectorDistanceToString(const struct FVector& Acceleration, class UObject* __WorldContext, struct FString* accelerationString);
	void STATIC_VelocityToString(const struct FVector& Velocity, class UObject* __WorldContext, struct FString* velocityString);
	void STATIC_AccelerationToString(float Acceleration, class UObject* __WorldContext, struct FString* accelerationString);
	void STATIC_StringToDescriptionString(const struct FString& preLabel, const struct FString& ValueString, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	void STATIC_LinearValueToString(float Value, class UObject* __WorldContext, struct FString* ValueString);
	void STATIC_CoordinatesToString(const struct FVector& Coordinates, class UObject* __WorldContext, struct FString* coordinatesString);
	void STATIC_VectorToString(const struct FVector& Vector, class UObject* __WorldContext, struct FString* vectorString);
	void STATIC_RotationToString(const struct FRotator& Rotation, class UObject* __WorldContext, struct FString* rotationString);
	void STATIC_LinearValueToDescriptionString(const struct FString& preLabel, float Value, const struct FString& postLabel, class UObject* __WorldContext, struct FString* descriptionString);
	void STATIC_FloatToStringWithPrecision(float floatNum, int Precision, class UObject* __WorldContext, struct FString* floatAsString);
	void STATIC_EmovementPaceToText(EPrisonerMovementPace movementPace, class UObject* __WorldContext, struct FText* movementPaceText);
	void STATIC_SortSkills(class UObject* __WorldContext, TArray<class USkill*>* skillArrayRef);
	void STATIC_SkilLevelToSkillPercentage(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
	struct FText STATIC_FloatToTextFormatted(float floatNum, class UObject* __WorldContext);
	void STATIC_SkilLevelToMaxSkillValue(ESkillLevel Selection, class UObject* __WorldContext, float* MaxValue);
	void STATIC_SkilLevelToMaxSkillValueText(ESkillLevel Selection, class UObject* __WorldContext, struct FText* MaxValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
