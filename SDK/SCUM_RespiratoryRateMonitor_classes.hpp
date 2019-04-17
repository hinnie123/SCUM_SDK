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

// WidgetBlueprintGeneratedClass RespiratoryRateMonitor.RespiratoryRateMonitor_C
// 0x0039 (0x02D9 - 0x02A0)
class URespiratoryRateMonitor_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class UBracketedBackground_C*                      BracketedBackgroundRR;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URespiratoryRateWidget*                      RespiratoryRateWidget;                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URetainerBox*                                RespiratoryRetainerBox;                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVitalStatsRespiration_C*                    VitalStatsRespiration;                                    // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class APrisoner*                                   _prisoner_1;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrisonerLifeComponent*                      _lifeComponent;                                           // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               _respiratoryRateAlarm;                                    // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RespiratoryRateMonitor.RespiratoryRateMonitor_C");
		return ptr;
	}


	void AlarmControl(int alarmCode);
	void DeactivateAlarm();
	void ActivateAlarm();
	void CheckRespiratoryRateAlarm(int respiratoryRate, int* alarmCode);
	void SetPrisonerAndLifeComponentToMonitor(class APrisoner* prisonerToSet, bool* Success);
	void ProvideRespiratoryRateExtremes(struct FText* respiratoryRateExtremes);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_RespiratoryRateMonitor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
