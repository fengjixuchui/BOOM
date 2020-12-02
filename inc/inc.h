
#pragma once

#define	TAG_READ		0x85648485
#define	TAG_WRITE		0x89756453
#define TAG_GETMODULE	0x56165511
#define TAG_PROTECT		0x98844446
#define TAG_PROBEREAD	0x68468846

#pragma pack(push,1)
typedef struct _BOOM_PROCESS_OPERA {
	ULONG		tag;		//���
	ULONG		flags;		//���
	ULONG64		pid;		//target process
	ULONG64		address;	//��ȡ��ַ
	ULONG64		buf;		//������ָ��
	ULONG		size;		//��Ҫ��ȡ��С
}BOOM_PROCESS_OPERA, *PBOOM_PROCESS_OPERA;
#pragma pack(pop)