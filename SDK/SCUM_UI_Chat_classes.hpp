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

// WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C
// 0x004B (0x03B3 - 0x0368)
class UUI_Chat_C : public UChatWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     MuteButton;                                               // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  MuteText;                                                 // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             ActiveSuggestions;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentSuggestion;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<class UUI_ChatSuggestion_C*>                ActiveSuggestionWidgets;                                  // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SuggestionsUpdated;                                       // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SuggestionSelected;                                       // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInHistoryMode;                                          // 0x03B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Chat.UI_Chat_C");
		return ptr;
	}


	void CreateSuggestionLine(const struct FString& Text, class UUI_ChatSuggestion_C** Widget);
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void SetInputFocusIfNeeded();
	struct FEventReply OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void BndEvt__MuteButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateActiveSuggestions();
	void ExecuteUbergraph_UI_Chat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
