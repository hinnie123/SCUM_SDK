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

// WidgetBlueprintGeneratedClass UI_VicinityItem.UI_VicinityItem_C
// 0x0019 (0x0239 - 0x0220)
class UUI_VicinityItem_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                ContainedItemsVerticalBox;                                // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_InventoryItem_C*                         UI_InventoryItem;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               _isTextHidden;                                            // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VicinityItem.UI_VicinityItem_C");
		return ptr;
	}


	void ShowText();
	void HideText();
	bool OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation);
	void RemoveItem(class AItem* Item);
	void AddItem(class AItem* Item);
	void GetItem(class AItem** Item);
	void InitFromItem(class AItem* Item);
	void SetupBindings();
	void OnItemAdded(class AItem* container, class AItem* Item, int column, int row);
	void OnItemRemoved(class AItem* container, class AItem* Item);
	void Construct();
	void BndEvt__UI_InventoryItem_K2Node_ComponentBoundEvent_2_ExpandedStateChanged__DelegateSignature(class UUI_InventoryItem_C* inventoryItemWidget, bool IsExpanded);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnItemDestroyed(class AActor* Item);
	void ExecuteUbergraph_UI_VicinityItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
