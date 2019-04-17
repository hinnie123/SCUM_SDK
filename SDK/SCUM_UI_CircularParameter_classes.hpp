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

// WidgetBlueprintGeneratedClass UI_CircularParameter.UI_CircularParameter_C
// 0x0130 (0x0350 - 0x0220)
class UUI_CircularParameter_C : public UCircularParameterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  CurrentValueText;                                         // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  DescriptionText;                                          // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                HoverVerticalBox;                                         // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   MainScaleBox;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    MainSizeBox;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MainVerticalBox;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  maxValueText;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MeasurementUnitText1;                                     // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MeasurementUnitText2;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  PercentAddonText;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  PercentageText;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      ProgressBar;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   TextScaleBox;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    _progressMaterial;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              currentValue;                                             // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValueSecond;                                       // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Colour;                                                   // 0x02A4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ColourSecond;                                             // 0x02B4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                AboveThresholdColour;                                     // 0x02C4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                BelowThresholdColour;                                     // 0x02D4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                TextPercentageColour;                                     // 0x02E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x02F8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       measurementUnit;                                          // 0x0310(0x0018) (Edit, BlueprintVisible)
	int                                                DecimalsNumber;                                           // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHoverable;                                              // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlarmMinEnabled;                                          // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlarmMaxEnabled;                                          // 0x032E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x032F(0x0001) MISSED OFFSET
	float                                              AlarmMinThreshold;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlarmMaxThreshold;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               _isUnderAlarm;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _isUnderAlarmAbove;                                       // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               _isUnderAlarmBelow;                                       // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x033B(0x0005) MISSED OFFSET
	class UUI_ExpandableContainer_C*                   ParentContainer;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShouldMinAlarmRaiseParentAlarm;                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldMaxAlarmRaiseParentAlarm;                           // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x034A(0x0002) MISSED OFFSET
	float                                              TextScale;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CircularParameter.UI_CircularParameter_C");
		return ptr;
	}


	void GetPercentageSecond(float* percentageSecond);
	void DisableAlarm();
	void EnableAlarm(bool above);
	void CheckAlarm();
	void SetDescriptionText(const struct FText& Description);
	void SetMeasurementUnit(const struct FText& unit);
	float GetMaxValue();
	float GetCurrentValue();
	float GetPercentage();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void SetMaxValue(float* Value);
	void SetCurrentValue(float* Value);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnSynchronizeProperties();
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void SetCurrentValueSecond(float Value);
	void ExecuteUbergraph_UI_CircularParameter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
