#pragma once


//
//bypass objecthookǩ��
//
void BypassCheckSign(
	_In_ PDRIVER_OBJECT pDriverObj);
//
//ע��callback
//
NTSTATUS ObRegiserCllabck(
	_In_ PVOID ObjectCllbackAddr);


//
//���̱���callback
//
OB_PREOP_CALLBACK_STATUS ObPreopCallback(
	_In_ PVOID RegistrationContext,
	_In_ POB_PRE_OPERATION_INFORMATION pOperationInformation);