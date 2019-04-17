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

// WidgetBlueprintGeneratedClass UI_SkillsTabButton.UI_SkillsTabButton_C
// 0x0060 (0x0280 - 0x0220)
class UUI_SkillsTabButton_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UBorder*                                     MainBorder;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     MainButton;                                               // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    MainSizeBox;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FVector2D                                   Size;                                                     // 0x0248(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                FontSize;                                                 // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontSizeEnlarged;                                         // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ButtonText;                                               // 0x0258(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnClickedDispatcher;                                      // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SkillsTabButton.UI_SkillsTabButton_C");
		return ptr;
	}


	void Shrink();
	void Enlarge();
	void Construct();
	void OnSynchronizeProperties();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_SkillsTabButton(int EntryPoint);
	void OnClickedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
