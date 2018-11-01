#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C
// 0x007C (0x02BC - 0x0240)
class UUI_GameEventParticipantStatsWidget_C : public UGameEventParticipantStatsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (Transient, DuplicateTransient)
	struct FLinearColor                                TextColor;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                _lastTeamIndex;                                           // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameEventTeamColours                       TeamColours;                                              // 0x025C(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C");
		return ptr;
	}


	void UpdateTeamColor(int TeamIndex);
	struct FText UpdateNumber();
	bool IsOwning();
	ESlateVisibility GetSelectedOverlayVisiblity();
	ESlateVisibility GetInactiveOverlayVisibility();
	void OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	void OnMouseLeave(struct FPointerEvent* MouseEvent);
	void UpdateColours();
	void SetColours(struct FGameEventTeamColours* colours);
	void UpdateStats();
	void ExecuteUbergraph_UI_GameEventParticipantStatsWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
