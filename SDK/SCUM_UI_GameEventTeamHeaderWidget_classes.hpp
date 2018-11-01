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

// WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C
// 0x0004 (0x0224 - 0x0220)
class UUI_GameEventTeamHeaderWidget_C : public UGameEventTeamHeaderWidget
{
public:
	int                                                TeamIndex;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C");
		return ptr;
	}


	void SetTeamIndex(int TeamIndex);
	void SetTeamScore(float Score);
	void SetRightSide();
	void SetLeftSide();
	void SetTeamColours(const struct FGameEventTeamColours& colours);
	void SetTeamName(const struct FText& Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
