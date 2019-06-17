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

// WidgetBlueprintGeneratedClass ObjectiveContainer.ObjectiveContainer_C
// 0x0018 (0x0238 - 0x0220)
class UObjectiveContainer_C : public UObjectivesContainerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    ObjectiveCompleted;                                       // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveContainer.ObjectiveContainer_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_ObjectiveContainer(int EntryPoint);
	void ObjectiveCompleted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
