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

// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueLinearColorToSet       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPhysicalQuantityLine_C::SetValueColor(const struct FLinearColor& maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetValueColor");

	UPhysicalQuantityLine_C_SetValueColor_Params fn_params;
	fn_params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueColor                  (Parm, OutParm, IsPlainOldData)

void UPhysicalQuantityLine_C::GetValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetValueColor");

	UPhysicalQuantityLine_C_GetValueColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (maxValueColor != nullptr)
		*maxValueColor = fn_params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueLinearColorToSet       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPhysicalQuantityLine_C::SetMaxValueColor(const struct FLinearColor& maxValueLinearColorToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueColor");

	UPhysicalQuantityLine_C_SetMaxValueColor_Params fn_params;
	fn_params.maxValueLinearColorToSet = maxValueLinearColorToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            maxValueColor                  (Parm, OutParm, IsPlainOldData)

void UPhysicalQuantityLine_C::GetMaxValueColor(struct FLinearColor* maxValueColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueColor");

	UPhysicalQuantityLine_C_GetMaxValueColor_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (maxValueColor != nullptr)
		*maxValueColor = fn_params.maxValueColor;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnitToSet           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetMeasurementUnit(const struct FText& measurementUnitToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMeasurementUnit");

	UPhysicalQuantityLine_C_SetMeasurementUnit_Params fn_params;
	fn_params.measurementUnitToSet = measurementUnitToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   measurementUnit                (Parm, OutParm)

void UPhysicalQuantityLine_C::GetMeasurementUnit(struct FText* measurementUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMeasurementUnit");

	UPhysicalQuantityLine_C_GetMeasurementUnit_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (measurementUnit != nullptr)
		*measurementUnit = fn_params.measurementUnit;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   maxValueTextToSet              (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetMaxValueText(const struct FText& maxValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetMaxValueText");

	UPhysicalQuantityLine_C_SetMaxValueText_Params fn_params;
	fn_params.maxValueTextToSet = maxValueTextToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   maxValueTxt                    (Parm, OutParm)

void UPhysicalQuantityLine_C::GetMaxValueText(struct FText* maxValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetMaxValueText");

	UPhysicalQuantityLine_C_GetMaxValueText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (maxValueTxt != nullptr)
		*maxValueTxt = fn_params.maxValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   paramValueTextToSet            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPhysicalQuantityLine_C::SetParameterValueText(const struct FText& paramValueTextToSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.SetParameterValueText");

	UPhysicalQuantityLine_C_SetParameterValueText_Params fn_params;
	fn_params.paramValueTextToSet = paramValueTextToSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   parameterValueTxt              (Parm, OutParm)

void UPhysicalQuantityLine_C::GetParameterValueText(struct FText* parameterValueTxt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.GetParameterValueText");

	UPhysicalQuantityLine_C_GetParameterValueText_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;

	if (parameterValueTxt != nullptr)
		*parameterValueTxt = fn_params.parameterValueTxt;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPhysicalQuantityLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.Construct");

	UPhysicalQuantityLine_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhysicalQuantityLine_C::ExecuteUbergraph_PhysicalQuantityLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicalQuantityLine.PhysicalQuantityLine_C.ExecuteUbergraph_PhysicalQuantityLine");

	UPhysicalQuantityLine_C_ExecuteUbergraph_PhysicalQuantityLine_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
