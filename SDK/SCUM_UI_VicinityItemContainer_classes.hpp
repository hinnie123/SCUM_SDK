#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_VicinityItemContainer.UI_VicinityItemContainer_C
// 0x0011 (0x02A1 - 0x0290)
class UUI_VicinityItemContainer_C : public UVicinityItemContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (Transient, DuplicateTransient)
	class UResizableWindow_C*                          ResizableWindow;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               _isMinimized;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VicinityItemContainer.UI_VicinityItemContainer_C");
		return ptr;
	}


	void InitVicinityItemContainer();
	void SetParentHUD(class UHUD_C* parentHUD);
	void SetTitle(const struct FText& titleToSet);
	void Construct();
	void SaveLayout(TScriptInterface<class UAttributeMapInterface>* Attributes);
	void LoadLayout(TScriptInterface<class UAttributeMapInterface>* Attributes);
	void DeferredLoadLayout();
	void ResetLayout();
	void ExecuteUbergraph_UI_VicinityItemContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
