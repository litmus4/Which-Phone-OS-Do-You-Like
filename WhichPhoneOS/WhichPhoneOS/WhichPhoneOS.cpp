// WhichPhoneOS.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Parse.h"
#include "windows.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::cout << "你喜欢哪个手机系统？" << std::endl;
	std::cout << "1.iOS" << std::endl;
	std::cout << "2.安卓" << std::endl;
	std::cout << "3.Windows Phone" << std::endl;
	std::cout << "4.塞班" << std::endl;
	std::cout << "5.黑莓" << std::endl;
	std::cout << "6.COS" << std::endl;
	std::cout << "请选择对应编号:";
	int iSel = 0;
	std::cin >> iSel;
	std::cout << Parse((EOS_Type)iSel) << std::endl;
	Sleep(3000);
	return 0;
}

