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

// WidgetBlueprintGeneratedClass Digestion.Digestion_C
// 0x0079 (0x0319 - 0x02A0)
class UDigestion_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class UParameterLine_C*                            DigestionLineLeft;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UParameterLine_C*                            DigestionLineRight;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentLeft;                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContentRight;                                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _digestionItemsCount;                                     // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _digestionLines;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _digestionItemsArray;                                     // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               _hasDigestionItemsCountChanged;                           // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Digestion.Digestion_C");
		return ptr;
	}


	void HasContentSizeChanged(int oldDigestionItemCount, int newDigestionItemCount, bool* contentSizeChanged);
	void PrintArrayOfDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArray);
	void UpdateDigestionItemsCount();
	void DigestionItemToText(class UDigestionItem* digestionItemRef, struct FText* digestionItemName, struct FText* digestionItemID, struct FText* digestionItemWeight);
	void FillDigestionLine(class UParameterLine_C* digestionLineRef, class UDigestionItem* digestionItemRef);
	void CreateDigestionLine(class UDigestionItem* digestionItemRef, class UParameterLine_C** digestionParameterLine);
	void ShowDigestion(ESlateVisibility Visibility);
	void InitDigestionItems();
	void AddDigestionLine(int Index, class UParameterLine_C* digestionLineRef);
	void CreateDigestionLineFromText(const struct FText& digestionItemName, const struct FText& digestionItemID, const struct FText& digestionItemWeightRemained, class UParameterLine_C** digestionLine);
	void GetDigestionItems(TArray<class UDigestionItem*>* digestionItemsTArrayRef);
	void SetDigestionCount(int digestionItemsCountToSet);
	void ClearDigestionLines();
	void CountDigestionItems(int* numberOfDigestionItems);
	void HasDigestionCountChanged(bool* sicknessCountChanged);
	void UpdateDigestion();
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void OnMinimize(bool shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void ExecuteUbergraph_Digestion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
