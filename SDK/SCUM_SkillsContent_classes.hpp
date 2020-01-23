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

// WidgetBlueprintGeneratedClass SkillsContent.SkillsContent_C
// 0x0060 (0x0300 - 0x02A0)
class USkillsContent_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class USafeZone*                                   SafeZonePadding;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	ESkillAttribute                                    _skillType;                                               // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                _skillsCount;                                             // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              deltaTimeCounter;                                         // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET
	TArray<class USkillLine2_C*>                       _currentTypeSkillLines;                                   // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillsContent.SkillsContent_C");
		return ptr;
	}


	void FilterSkillsBySkillType(TArray<class USkill*>* allSkills, TArray<class USkill*>* skillsOfType);
	void SkillToText(class USkill* skillRef, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* Percentage, float* skillLevelPercentage);
	void IsSkillTypeMatching(class USkill* Skill, bool* matchingSkill);
	void CountSkills(TArray<class USkill*>* skillArray, int* skillCount);
	void ClearSkillLinesContent();
	void UpdateSkillsCount(TArray<class USkill*>* skillArray);
	bool HasSkillCountChanged(TArray<class USkill*>* skillArray);
	void SkillToSkillText(const struct FString& skillName, float ExperiencePoints, ESkillLevel skillLevel, struct FText* skillNameText, struct FText* skillPointsText, struct FText* maxValueText, float* Percentage, float* skillLevelPercentage);
	void GetSkillsCount(int* count);
	TArray<class USkill*> GetAllSkills();
	void FillSkillLine(class USkillLine2_C* skillLine2Ref, class USkill* Skill);
	void CreateSkillLine(const struct FText& skillName, const struct FText& skillValueText, const struct FText& maxSkillValueText, float Percentage, float skillLevelPercentage, class USkillLine2_C** skillLineRef);
	void AddSkillLine(class USkillLine2_C* skillLineRef);
	void SetSkillsCount(int count);
	void InitSkillsContentCountAndType(ESkillAttribute skillType);
	void GetSkillType(ESkillAttribute* skillType);
	void SetSkillType(ESkillAttribute skillType);
	void UpdateSkills();
	struct FText GetTitleText();
	void SetSkillsContentVisibility(ESlateVisibility Visibility);
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void OnMinimize(bool shouldMinimize);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void UpdateContent();
	void OnPrisonerSet();
	void ExecuteUbergraph_SkillsContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
