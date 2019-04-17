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

// WidgetBlueprintGeneratedClass ScrollableContent.ScrollableContent_C
// 0x0070 (0x02D0 - 0x0260)
class UScrollableContent_C : public UWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UEditableTextBox*                            InputChatLine;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    InputLineOverlay;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USafeZone*                                   SafeZone_1;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScrollBox*                                  Scroll;                                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FText>                               _messageStrings;                                          // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                _color;                                                   // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TextArray;                                                // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScrollableContent.ScrollableContent_C");
		return ptr;
	}


	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void ResetInputChatLineString();
	void SetInputChatLineString(const struct FText& chatLineStringToSet);
	void GetInputChatLineText(struct FText* chatLineString);
	void PrintChatMessages();
	void SelectCustomColor(struct FLinearColor* Color);
	void AutoCreateContent();
	void PopulateMessageStrings();
	void AddTextLine(const struct FText& textToSet, const struct FLinearColor& Color, bool scrollToTheEnd, bool* lineAdded);
	struct FEventReply OnMouseButtonDownOnConsole(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void StartDrag();
	void BndEvt__InputChatLine_K2Node_ComponentBoundEvent_585_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void Construct();
	void OnMinimize(bool shouldMinimize);
	void ExecuteUbergraph_ScrollableContent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
