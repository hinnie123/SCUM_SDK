#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LevelAttributes.LevelAttributes_C
// 0x00A5 (0x0345 - 0x02A0)
class ULevelAttributes_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class UParameterLine_C*                            BCULineConstitutionChange;                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            BCULineDexterityChange;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            BCULineIntelligenceChange;                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            BCULineStrengthChange;                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    AlarmOnBodyConditionEventDispatcher;                      // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AlarmOffBodyConditionEventDispatcher;                     // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               _strengthAlarm;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _constitutionAlarm;                                       // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _dexterityAlarm;                                          // 0x0312(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _intelligenceAlarm;                                       // 0x0313(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastStrengthValue;                                       // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastConstitutionValue;                                   // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastDexterityValue;                                      // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastIntelligenceValue;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastReferentStrengthValue;                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastReferentConstitutionValue;                           // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastReferentDexterityValue;                              // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _lastReferentIntelligenceValue;                           // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _timeSinceLastStrengthUpdate;                             // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _timeSinceLastConstitutionUpdate;                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _timeSinceLastIntelligenceUpdate;                         // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _timeSinceLastDexterityUpdate;                            // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _isAlarmOn;                                               // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LevelAttributes.LevelAttributes_C");
		return ptr;
	}


	void ShouldAlarmBeOn(bool* ShouldAlarmBeOn);
	void UpdateReferentValue(float currentValue, float tollerance, float UpdateInterval, float* lastReferentValue, float* timeSinceLastUpdate, bool* referentValueUpdated);
	void InitAttributeValues();
	void CalculateChangeSpeed(float currentValue, float lastValue, float UpdateInterval, float* Speed);
	void CheckAttributeLevelAlarm(float currentAttributeValue, float dynamicChange, bool* alarmRef, int* alarmCode);
	void CheckBFPAlarm(float bodyFatPercentage, float bodyFatAlarmThreshold, int* alarmCode);
	void Init();
	void SetMeasurementUnits();
	void UpdateParameterLines();
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void OnMinimize(bool shouldMinimize);
	void Construct();
	void OnPrisonerSet();
	void UpdateContent();
	void ShouldActivateAlarm();
	void ShouldDeactivateAlarm();
	void ShouldActivateBFPAlarm();
	void AlarmOnWindowContent();
	void AlarmOffWindowContent();
	void ExecuteUbergraph_LevelAttributes(int EntryPoint);
	void AlarmOffBodyConditionEventDispatcher__DelegateSignature();
	void AlarmOnBodyConditionEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
