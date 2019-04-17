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

// WidgetBlueprintGeneratedClass Objective.Objective_C
// 0x0038 (0x0258 - 0x0220)
class UObjective_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UCheckBox*                                   isDoneCheckBox;                                           // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ObjectiveText;                                            // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnFaded;                                                  // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_MissionObjective_C*                      _objective;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               _shouldFade;                                              // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	float                                              _fadeLength;                                              // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Objective.Objective_C");
		return ptr;
	}


	void GetObjective(class ABP_MissionObjective_C** Objective);
	void SetObjective(class ABP_MissionObjective_C* Objective, bool PlaySound);
	void UpdateWidget(class ABP_MissionObjective_C* Objective);
	void ObjectiveCompleted();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_Objective(int EntryPoint);
	void OnFaded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
