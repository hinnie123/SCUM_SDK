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

// WidgetBlueprintGeneratedClass InventorySlotWidget.InventorySlotWidget_C
// 0x0038 (0x0278 - 0x0240)
class UInventorySlotWidget_C : public UInventorySlotUserWidget
{
public:
	int                                                Width;                                                    // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDragEnterDispatcher;                                    // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragLeaveDispatcher;                                    // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDropDispatcher;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventorySlotWidget.InventorySlotWidget_C");
		return ptr;
	}


	void OnDropDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
	void OnDragLeaveDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
	void OnDragEnterDispatcher__DelegateSignature(class UInventorySlotWidget_C* Slot, class UItemWidget_C* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
