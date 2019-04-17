#pragma once

// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ParameterLine.ParameterLine_C
// 0x00A8 (0x0308 - 0x0260)
class UParameterLine_C : public UWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  TextMaxValue;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextParameterName;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextValue;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      UnderscoreLImage;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _defaultMaxValueColor;                                    // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x0298(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       _parameterName;                                           // 0x02B0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _parameterValueText;                                      // 0x02C8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _maxValueText;                                            // 0x02E0(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                _defaultValueColor;                                       // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ParameterLine.ParameterLine_C");
		return ptr;
	}


	void ActivateCustomAlarmColor(const struct FLinearColor& LinearColor);
	void AlarmControl(int alarmColorCode);
	void ActivateNormalColor();
	void ActivateAlarmColor();
	void SetAlarmColor(const struct FLinearColor& Color);
	void Update(const struct FText& parameterNameToSet, const struct FText& parameterValueToSet, const struct FText& maxParameterValueToSet);
	void SetValuesColor(const struct FSlateColor& Color);
	void SetParameterValueText(const struct FText& parameterValueText);
	void SetMaxValueText(const struct FText& maxValueText);
	void SetParameterValueSlashText(float Value, int decimalPlaces);
	void SetParameterValueTextDecimal(float Value, int decimalPlaces);
	void GetValueTextBlock(class UTextBlock** textBox);
	void SetColorOfMaxValue(const struct FSlateColor& Color);
	void SetColorOfValue(const struct FSlateColor& Color);
	void SetColorOfParameterName(const struct FSlateColor& Color);
	void SetColor(const struct FLinearColor& Color);
	void GetMaxValueTextBlock(class UTextBlock** textBox);
	void GetParameterNameTextBlock(class UTextBlock** textBox);
	void GetParameterNameText(struct FText* ParameterName);
	void SetParameterName(const struct FText& ParameterName);
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void OnMinimize(bool shouldMinimize);
	void Construct();
	void ExecuteUbergraph_ParameterLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
