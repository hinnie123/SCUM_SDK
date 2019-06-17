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

// BlueprintGeneratedClass BP_BowSilencer.BP_BowSilencer_C
// 0x0008 (0x0798 - 0x0790)
class ABP_BowSilencer_C : public ABowAttachmentSilencer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BowSilencer.BP_BowSilencer_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDetachedFromItem(class AItem** Item);
	void OnAttachedToItem(class AItem** Item);
	void ExecuteUbergraph_BP_BowSilencer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
