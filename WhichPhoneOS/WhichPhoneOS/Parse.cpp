#include "Parse.h"

std::string Parse(EOS_Type eType)
{
	switch (eType)
	{
	case EOS_IOS:
		return "а�̣�";
	case EOS_Android:
		return "�ȸ����������Գ���";
	case EOS_WP:
		return "������˺����۹⣬���������Ѱɣ�";
	case EOS_Symbian:
		return "�������Ǹ�ֻϲ���Ժ��ҵ���ʳ�ϹŶ�...";
	case EOS_BB:
		return "���߰���";
	case EOS_COS:
		{
			char szRet[128];
			int iy = 10 * 10 * 10 * 2;
			unsigned int u = 0xFFFFFFFF;
			int i = sizeof(u) * 8;
			sprintf_s(szRet, "˹ŵ�ǣ�%d %d", iy - 0xB, (++u < 10 ? i * 2 : i));
			return szRet;
		}
	default:
		return "Error.";
	}
}