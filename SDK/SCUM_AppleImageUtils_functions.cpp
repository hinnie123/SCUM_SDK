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

// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Params fn_params;
	fn_params.SourceImage = SourceImage;
	fn_params.bWantColor = bWantColor;
	fn_params.bUseGpu = bUseGpu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Params fn_params;
	fn_params.SourceImage = SourceImage;
	fn_params.bWantColor = bWantColor;
	fn_params.bUseGpu = bUseGpu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Params fn_params;
	fn_params.SourceImage = SourceImage;
	fn_params.Quality = Quality;
	fn_params.bWantColor = bWantColor;
	fn_params.bUseGpu = bUseGpu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWantColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseGpu                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Params fn_params;
	fn_params.SourceImage = SourceImage;
	fn_params.Quality = Quality;
	fn_params.bWantColor = bWantColor;
	fn_params.bUseGpu = bUseGpu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	return fn_params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
