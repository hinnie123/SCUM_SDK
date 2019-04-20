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

// WidgetBlueprintGeneratedClass InteractionWidget.InteractionWidget_C
// 0x0008 (0x0260 - 0x0258)
class UInteractionWidget_C : public UInteractionUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InteractionWidget.InteractionWidget_C");
		return ptr;
	}


	void BndEvt___actionButton_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt___actionButton_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_InteractionWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
