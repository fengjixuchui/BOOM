#pragma once

#include <tchar.h>
#include <windows.h>

#include "../inc/inc.h"

class CDrvController
{
public:
	CDrvController();
	~CDrvController();

	//
	//�Ƿ��Ѽ�������
	//
	BOOL DC_IsLoadBoomDrv();

	//
	//��ȡģ���ַ
	//
	ULONG64 DC_GetModuleAddr(ULONG pid, LPCWSTR lpModuleName);

	//
	//�ύ����ҳ,���ڸ�ʹ��VirtualAlloc�����ڴ����Ҫ����д��
	//
	BOOL DC_ProbeRead(ULONG pid, ULONG64 addr);

	//-------------------------------READ--------------------------------------------------

	//
	//���ڴ� �ֽ���(BYTE)
	//
	BYTE DC_ReadByte(ULONG pid, ULONG64 addr);

	//
	//���ڴ� ��������(SHORT)
	//
	SHORT DC_ReadShort(ULONG pid, ULONG64 addr);

	//
	//���ڴ� ������(INT)
	//
	INT DC_ReadInt(ULONG pid, ULONG64 addr);

	//
	//���ڴ� ��������(INT64)
	//
	INT64 DC_ReadInt64(ULONG pid, ULONG64 addr);

	//
	//���ڴ� ������(FLOAT)
	//
	FLOAT DC_ReadFloat(ULONG pid, ULONG64 addr);

	//
	//���ڴ� �ֽڼ�(Bytes)
	//
	BOOL DC_ReadBytes(ULONG pid, ULONG64 addr, _Out_ PBYTE pDataBuffer, ULONG size);

	//-------------------------------WRITE--------------------------------------------------

	//
	//д�ڴ� �ֽ���(BYTE)
	//
	BOOL DC_WriteByte(ULONG pid, ULONG64 addr, _In_ BYTE pDataBuffer);

	//
	//д�ڴ� ��������(SHORT)
	//
	BOOL DC_WriteShort(ULONG pid, ULONG64 addr, _In_ SHORT pDataBuffer);

	//
	//д�ڴ� ������(INT)
	//
	BOOL DC_WriteInt(ULONG pid, ULONG64 addr, _In_ INT pDataBuffer);

	//
	//д�ڴ� ��������(INT64)
	//
	BOOL DC_WriteInt64(ULONG pid, ULONG64 addr, _In_ INT64 pDataBuffer);

	//
	//д�ڴ� ������(FLOAT)
	//
	BOOL DC_WriteFloat(ULONG pid, ULONG64 addr, _In_ FLOAT pDataBuffer);

	//
	//д�ڴ� �ֽڼ�(Bytes)
	//
	BOOL DC_WriteBytes(ULONG pid, ULONG64 addr, _In_ PBYTE pDataBuffer, ULONG size);

private:

	BOOL ReadMemory(ULONG64 pid, ULONG64 addr, _Out_ PBYTE pDataBuffer, ULONG size);

	BOOL WriteMemory(ULONG64 pid, ULONG64 addr, _In_ PBYTE pDataBuffer, ULONG size);

 };

