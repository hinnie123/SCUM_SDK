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

// WidgetBlueprintGeneratedClass SkillLine2.SkillLine2_C
// 0x00D3 (0x0360 - 0x028D)
class USkillLine2_C : public UBaseProgressBar_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UPieProgressBar_C*                           PieProgressBar;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressBar*                                SkillProgressBar;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextMaxValue;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextParameterName;                                        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextPercentage;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextValue;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      UnderscoreLImage;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      UnderscorePercentImage;                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       _skillName;                                               // 0x0300(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _skillValueText;                                          // 0x0318(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _maxSkillValueText;                                       // 0x0330(0x0018) (Edit, BlueprintVisible)
	struct FText                                       _percentageText;                                          // 0x0348(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillLine2.SkillLine2_C");
		return ptr;
	}


	void UpdateSkill2(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption, const struct FText& maxValueText);
	void SetMaxSkillValueText(const struct FText& maxValueText);
	void SkilLevelToMaxSkillValueText(ESkillLevel Selection, struct FText* MaxValue);
	void SetSkillValueText(const struct FText& ValueText);
	void UpdateSkill(ESkillLevel skillLevel, float skillPoints, const struct FString& skillCaption);
	void SetAlarmColor(const struct FLinearColor& Color);
	void GetValueTextBlock(class UTextBlock** textBox);
	void SetColorOfMaxValue(const struct FSlateColor& Color);
	void SetColorOfValue(const struct FSlateColor& Color);
	void SetColorOfParameterName(const struct FSlateColor& Color);
	void SetColor(const struct FLinearColor& Color);
	void GetMaxSkillValueTextBlock(class UTextBlock** textBox);
	void GetSkillNameTextBlock(class UTextBlock** textBox);
	void GetSkillNameText(struct FText* skillNameText);
	void SetSkillName(const struct FText& skillName);
	struct FText GetTitleText();
	struct FEventReply OnMouseButtonDownOnMinimizeParameterLine(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void OnMinimize(bool shouldMinimize);
	void Construct();
	void OnSynchronizeProperties();
	void OnPercentageChanged();
	void ExecuteUbergraph_SkillLine2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
