// Pubg Mobile Battelgrounds (2.7.0-64BIT) SDK Generated By @hhamk2 
// 𝚃𝚎𝚕𝚎𝚐𝚛𝚊𝚖 -: @SANSERO_MOD_1
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WebCameraFeed.WebCameraWidget.UnLockScreenOrientation
// ()

void UWebCameraWidget::UnLockScreenOrientation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.UnLockScreenOrientation");

	UWebCameraWidget_UnLockScreenOrientation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.SwitchFrontAndBackCamera
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWebCameraWidget::SwitchFrontAndBackCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.SwitchFrontAndBackCamera");

	UWebCameraWidget_SwitchFrontAndBackCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebCameraFeed.WebCameraWidget.SetDeviceId
// ()
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)

void UWebCameraWidget::SetDeviceId(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.SetDeviceId");

	UWebCameraWidget_SetDeviceId_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.SetColorAndOpacity
// ()
// Parameters:
// struct FLinearColor            InColorAndOpacity              (Parm, IsPlainOldData)

void UWebCameraWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.SetColorAndOpacity");

	UWebCameraWidget_SetColorAndOpacity_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.SaveAsImage
// ()
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWebCameraWidget::SaveAsImage(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.SaveAsImage");

	UWebCameraWidget_SaveAsImage_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebCameraFeed.WebCameraWidget.ReleaseVideoGrabber
// ()

void UWebCameraWidget::ReleaseVideoGrabber()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.ReleaseVideoGrabber");

	UWebCameraWidget_ReleaseVideoGrabber_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.LockScreenOrientation
// ()

void UWebCameraWidget::LockScreenOrientation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.LockScreenOrientation");

	UWebCameraWidget_LockScreenOrientation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.InitVideoGrabber
// ()

void UWebCameraWidget::InitVideoGrabber()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.InitVideoGrabber");

	UWebCameraWidget_InitVideoGrabber_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function WebCameraFeed.WebCameraWidget.GetFrontCameraId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWebCameraWidget::GetFrontCameraId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.GetFrontCameraId");

	UWebCameraWidget_GetFrontCameraId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebCameraFeed.WebCameraWidget.GetBackCameraId
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWebCameraWidget::GetBackCameraId()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function WebCameraFeed.WebCameraWidget.GetBackCameraId");

	UWebCameraWidget_GetBackCameraId_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

