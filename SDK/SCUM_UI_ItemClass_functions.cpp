// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ItemClass.UI_ItemClass_C.GetTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::GetTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.GetTexture");

	UUI_ItemClass_C_GetTexture_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = fn_params.Texture;
}


// Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_ItemClass_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnMouseButtonDoubleClick");

	UUI_ItemClass_C_OnMouseButtonDoubleClick_Params fn_params;
	fn_params.InMyGeometry = InMyGeometry;
	fn_params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function UI_ItemClass.UI_ItemClass_C.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::Init(class UClass** ItemClass, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Init");

	UUI_ItemClass_C_Init_Params fn_params;
	fn_params.ItemClass = ItemClass;
	fn_params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties
// (Event, Protected, BlueprintEvent)

void UUI_ItemClass_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.OnSynchronizeProperties");

	UUI_ItemClass_C_OnSynchronizeProperties_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemClass_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.Construct");

	UUI_ItemClass_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ItemClass_C::ExecuteUbergraph_UI_ItemClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemClass.UI_ItemClass_C.ExecuteUbergraph_UI_ItemClass");

	UUI_ItemClass_C_ExecuteUbergraph_UI_ItemClass_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
