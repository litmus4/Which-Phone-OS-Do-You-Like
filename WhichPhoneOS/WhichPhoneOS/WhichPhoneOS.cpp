// WhichPhoneOS.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Parse.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "��ϲ���ĸ��ֻ�ϵͳ��" << std::endl;
	std::cout << "1.iOS" << std::endl;
	std::cout << "2.��׿" << std::endl;
	std::cout << "3.Windows Phone" << std::endl;
	std::cout << "4.����" << std::endl;
	std::cout << "5.��ݮ" << std::endl;
	std::cout << "6.COS" << std::endl;
	std::cout << "��ѡ���Ӧ���:";
	int iSel = 0;
	std::cin >> iSel;
	std::cout << Parse((EOS_Type)iSel) << std::endl;
	Sleep(3000);
	return 0;
}

