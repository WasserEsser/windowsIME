// IMEInstaller.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <Windows.h>
#include "Imm.h"
#pragma comment(lib,"imm32.lib")
int _tmain(int argc, _TCHAR* argv[])
{
	HKL IME = ImmInstallIME(L"imesample.ime", L"�ҵ����뷨");
	if(IME==0)
	{
		printf("ע�����뷨ʧ�ܣ���ע����������������������飡\n");
	}
	else
	{
		printf("ע�����뷨�ɹ���\n");
	}
	printf("��������˳�!\n");
	getchar();
	return 0;
}