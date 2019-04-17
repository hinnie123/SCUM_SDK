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

// WidgetBlueprintGeneratedClass UI_ComboBoxWrapper.UI_ComboBoxWrapper_C
// 0x0011 (0x0219 - 0x0208)
class UUI_ComboBoxWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UComboBoxString*                             ComboBox;                                                 // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               Open;                                                     // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ComboBoxWrapper.UI_ComboBoxWrapper_C");
		return ptr;
	}


	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void ExecuteUbergraph_UI_ComboBoxWrapper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
