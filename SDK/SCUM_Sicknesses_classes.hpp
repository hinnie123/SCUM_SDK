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

// WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C
// 0x0090 (0x0330 - 0x02A0)
class USicknesses_C : public UMonitoredWindowsContent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (Transient, DuplicateTransient)
	class UParameterLine_C*                            sicknessLine;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                VerticalBoxContent;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FLinearColor                                _color;                                                   // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       _defaultTitle;                                            // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                _sicknessCount;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TArray<class UParameterLine_C*>                    _sicknessLines;                                           // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USickness*>                           _sicknessesArray;                                         // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               _hasSicknessCountChanged;                                 // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0309(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    AlarmOnSicknessesEventDispatcher;                         // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AlarmOffSicknessesEventDispatcher;                        // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Sicknesses.Sicknesses_C");
		return ptr;
	}


	void HasContentSizeChanged(int oldSicknessCount, int newSicknessCount, bool* contentSizeChanged);
	void CheckForAlarms(int previousSicknessCount, int sicknessCount);
	void UpdateSicknessCount();
	void SicknessToText(class USickness* sicknessRef, struct FText* SicknessName, struct FText* sicknessState, struct FText* sicknessPhase);
	void FillSicknessLine(class UParameterLine_C* sicknessLineRef, class USickness* Sickness);
	void UpdateSicknessLine();
	void CreateSicknessLine(class USickness* sicknessRef, class UParameterLine_C** sicknessParameterLine);
	void ShowSickness(ESlateVisibility Visibility);
	void InitSicknesses();
	void AddSicknessLine(class UParameterLine_C* sicknessLineRef);
	void CreateSicknessLineFromText(const struct FText& SicknessName, const struct FText& SicknessTextValue, const struct FText& SicknessMaxValue, class UParameterLine_C** sicknessLine);
	TArray<class USickness*> GetSicknesses();
	void SetSicknessCount(int sicknessCountToSet);
	void ClearSicknessLines();
	void CountSicknesses(int* numberOfSicknesses);
	void HasSicknessCountChanged(bool* sicknessCountChanged);
	void UpdateSicknesses();
	struct FText GetTitleText();
	void GetDefaultTitle(struct FText* defaultTitle);
	void SelectCustomColor(struct FLinearColor* Color);
	void Construct();
	void OnMinimize(bool shouldMinimize);
	void OnPrisonerSet();
	void UpdateContent();
	void SicknessEmergedShouldActivateAlarm();
	void SicknessGoneShouldDeactivateAlarm();
	void ExecuteUbergraph_Sicknesses(int EntryPoint);
	void AlarmOffSicknessesEventDispatcher__DelegateSignature();
	void AlarmOnSicknessesEventDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
