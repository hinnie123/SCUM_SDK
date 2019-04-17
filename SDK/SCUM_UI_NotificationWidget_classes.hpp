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

// WidgetBlueprintGeneratedClass UI_NotificationWidget.UI_NotificationWidget_C
// 0x0035 (0x025D - 0x0228)
class UUI_NotificationWidget_C : public UNotificationWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)
	class USizeBox*                                    NotificationSize;                                         // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  Text;                                                     // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              NotificationWidth;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotificationMaxHeight;                                    // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Animating;                                                // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dismissed;                                                // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x024A(0x0002) MISSED OFFSET
	float                                              ScaleFactor;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalScaleSpeed;                                     // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalScaleSpeed;                                       // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temporary;                                                // 0x025C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationWidget.UI_NotificationWidget_C");
		return ptr;
	}


	void CheckLifespan(float DeltaTime);
	void SetLifeSpan(float Duration);
	void SetText(const struct FText& InText);
	void UpdateScale();
	void Show(bool Instant);
	void Dismiss(bool Instant);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_UI_NotificationWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
