#pragma once

//
//ע����������callback�����ڶ�д�ڴ�
//
NTSTATUS RegisterCallback(
	_In_ PVOID CallbackContext,
	_In_opt_ PVOID Argument1,
	_In_opt_ PVOID Argument2
);