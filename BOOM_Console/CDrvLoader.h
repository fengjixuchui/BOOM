#pragma once


#include <tchar.h>
#include <windows.h>

//
//usr atl template
//
#include <atlbase.h>
#include <atlstr.h>

class CDrvLoader
{
public:
	CDrvLoader();
	~CDrvLoader();

	//
	//�õ���������Ȩ�޵�����
	//
	BOOL DL_EnableDrvLoadPrivilege();

	//
	//��������
	//
	BOOL DL_InstallDriver(LPCTSTR ServiceName, LPCTSTR DriverPath);

	//
	//��������
	//
	BOOL DL_StartDriver(LPCTSTR ServiceName);

	//
	//ֹͣ����
	//
	BOOL DL_StopDriver(LPCTSTR ServiceName);

	//
	//ж������
	//
	BOOL DL_UnInstallDriver(LPCTSTR ServiceName);

private:

	DWORD m_errorCode;
};

