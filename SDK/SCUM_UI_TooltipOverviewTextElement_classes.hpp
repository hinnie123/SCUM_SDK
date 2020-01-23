#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C
// 0x0240 (0x0468 - 0x0228)
class UUI_TooltipOverviewTextElement_C : public UItemTooltipPanelElement
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class UExtendedRichTextBlock*                      ExtendedRichTextBlock_1;                                  // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       TextFormat;                                               // 0x0238(0x0018) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0250(0x01E0) (Edit, BlueprintVisible)
	struct FSlateColor                                 Color;                                                    // 0x0430(0x0028) (Edit, BlueprintVisible)
	int                                                MinimumIntegralDigits;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumIntegralDigits;                                    // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractionalDigits;                                  // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaximumFractionalDigits;                                  // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TooltipOverviewTextElement.UI_TooltipOverviewTextElement_C");
		return ptr;
	}


	void OnTextDataChanged(struct FText* Value);
	void PreConstruct(bool* IsDesignTime);
	void OnNumberDataChanged(float* Value);
	void ExecuteUbergraph_UI_TooltipOverviewTextElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
