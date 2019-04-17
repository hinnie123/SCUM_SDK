// SCUM (0.1.32.12804) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_UserImage.UI_UserImage_C.SetImageBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             imageBrush                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_UserImage_C::SetImageBrush(const struct FSlateBrush& imageBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.SetImageBrush");

	UUI_UserImage_C_SetImageBrush_Params params;
	params.imageBrush = imageBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_UserImage.UI_UserImage_C.SetSizeOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               sizeOverride                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UUI_UserImage_C::SetSizeOverride(const struct FVector2D& sizeOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.SetSizeOverride");

	UUI_UserImage_C_SetSizeOverride_Params params;
	params.sizeOverride = sizeOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_UserImage.UI_UserImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_UserImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.Construct");

	UUI_UserImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_UserImage.UI_UserImage_C.ExecuteUbergraph_UI_UserImage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_UserImage_C::ExecuteUbergraph_UI_UserImage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_UserImage.UI_UserImage_C.ExecuteUbergraph_UI_UserImage");

	UUI_UserImage_C_ExecuteUbergraph_UI_UserImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
