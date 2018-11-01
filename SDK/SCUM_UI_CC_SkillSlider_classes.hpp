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

// WidgetBlueprintGeneratedClass UI_CC_SkillSlider.UI_CC_SkillSlider_C
// 0x0088 (0x02A8 - 0x0220)
class UUI_CC_SkillSlider_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UUI_CC_NonSelectableText_C*                  UI_CC_NonSelectableText;                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CC_ProgressBar_C*                        UI_CC_ProgressBar;                                        // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               EnabledState;                                             // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	struct FSkillTemplate                              SkillTemplate;                                            // 0x0240(0x0038) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    SliderChanged;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SliderSelected;                                           // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SliderDeselected;                                         // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CC_SkillSlider.UI_CC_SkillSlider_C");
		return ptr;
	}


	void SetPercentage(float percentage);
	void SetMaxLevelAndExperienceFromPoints(float Points, bool isSelected);
	void SetMaxLevelAndExperience(ESkillLevel Level, float experiencePercentage);
	void SetSkillLevelAndExperience(ESkillLevel Level, float Experience);
	void OnSynchronizeProperties();
	void BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_98_OnIndexChanged__DelegateSignature(int Index, float LeftoverPercentage);
	void Construct();
	void BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_2_MouseUp__DelegateSignature();
	void BndEvt__UI_CC_ProgressBar_K2Node_ComponentBoundEvent_6_MouseDown__DelegateSignature();
	void ExecuteUbergraph_UI_CC_SkillSlider(int EntryPoint);
	void SliderDeselected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider);
	void SliderSelected__DelegateSignature(class UUI_CC_SkillSlider_C* Slider);
	void SliderChanged__DelegateSignature(ESkillAttribute Attribute, class UUI_CC_SkillSlider_C* Slider);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
