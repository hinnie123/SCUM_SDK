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

// WidgetBlueprintGeneratedClass PhysicalQuantityLine.PhysicalQuantityLine_C
// 0x0088 (0x0290 - 0x0208)
class UPhysicalQuantityLine_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  TextMaxValue;                                             // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextMeasuremenUnit;                                       // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextValue;                                                // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       _parameterValueText;                                      // 0x0228(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _maxValueText;                                            // 0x0240(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _measurementUnit;                                         // 0x0258(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                _maxValueColor;                                           // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _valueColor;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PhysicalQuantityLine.PhysicalQuantityLine_C");
		return ptr;
	}


	void SetValueColor(const struct FLinearColor& maxValueLinearColorToSet);
	void GetValueColor(struct FLinearColor* maxValueColor);
	void SetMaxValueColor(const struct FLinearColor& maxValueLinearColorToSet);
	void GetMaxValueColor(struct FLinearColor* maxValueColor);
	void SetMeasurementUnit(const struct FText& measurementUnitToSet);
	void GetMeasurementUnit(struct FText* measurementUnit);
	void SetMaxValueText(const struct FText& maxValueTextToSet);
	void GetMaxValueText(struct FText* maxValueTxt);
	void SetParameterValueText(const struct FText& paramValueTextToSet);
	void GetParameterValueText(struct FText* parameterValueTxt);
	void Construct();
	void ExecuteUbergraph_PhysicalQuantityLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
