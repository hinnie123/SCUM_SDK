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

// WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C
// 0x0020 (0x0240 - 0x0220)
class UCustomGUIWindow_C : public UDesignableUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	struct FText                                       _title;                                                   // 0x0228(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomGUIWindow.CustomGUIWindow_C");
		return ptr;
	}


	void GetTitle(struct FText* Title);
	void SetTitle(const struct FText& titleToSet);
	void AlarmOnWindowContent();
	void AlarmOffWindowContent();
	void ExecuteUbergraph_CustomGUIWindow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
