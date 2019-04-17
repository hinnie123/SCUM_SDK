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

// WidgetBlueprintGeneratedClass UI_OptionsSlider.UI_OptionsSlider_C
// 0x00F2 (0x0312 - 0x0220)
class UUI_OptionsSlider_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_2;                                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_3;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_4;                                                  // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     LowerButton;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  NameText;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     RaiseButton;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    TitleSizeBox;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USizeBox*                                    ValueSizeBox;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UNamedSlot*                                  ValueSlot;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ValueText;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    ValueTextOverlay;                                         // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       Name;                                                     // 0x0288(0x0018) (Edit, BlueprintVisible)
	TArray<struct FText>                               _keys;                                                    // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               _values;                                                  // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                _index;                                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Clamp;                                                    // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	float                                              MinTitleWidth;                                            // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderWidth;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                _oldIndex;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IncrementInSteps;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	int                                                TitleFontSize;                                            // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HighlightedFontSize;                                      // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Titleless;                                                // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02F5(0x0003) MISSED OFFSET
	int                                                ValueFontSize;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValuePadding;                                             // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ValueTextPadding;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  ValueAlignment;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasValueBackground;                                       // 0x0311(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsSlider.UI_OptionsSlider_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent);
	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void GetValue(struct FText* Value);
	void ChangeValue(int Index, const struct FText& Value);
	void SetTitle(const struct FText& Title);
	void InitAsNumbers(int FirstIndex, int lastIndex);
	void InitAsFlag();
	void AddKeyValuePair(const struct FText& Key, const struct FText& Value);
	struct FEventReply OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void AddValue(const struct FText& Value);
	void ClearValues();
	void SetValue(int Index);
	void Increase();
	void Decrease();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	struct FEventReply OnClickedHigher(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnClickedLower(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnSynchronizeProperties();
	void OnFocusLost(struct FFocusEvent* InFocusEvent);
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__RaiseButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LowerButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_OptionsSlider(int EntryPoint);
	void OnValueChanged__DelegateSignature(int Index, int OldIndex, const struct FText& Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
