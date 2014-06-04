#include "Parse.h"

std::string Parse(EOS_Type eType)
{
	switch (eType)
	{
	case EOS_IOS:
		return "邪教！";
	case EOS_Android:
		return "谷歌是神马？可以吃吗？";
	case EOS_WP:
		return "你这个人很有眼光，跟我做朋友吧！";
	case EOS_Symbian:
		return "看来你是个只喜欢吃核桃的挑食老古董...";
	case EOS_BB:
		return "杯具啊！";
	case EOS_COS:
		{
			char szRet[128];
			int iy = 10 * 10 * 10 * 2;
			unsigned int u = 0xFFFFFFFF;
			int i = sizeof(u) * 8;
			sprintf_s(szRet, "斯诺登！%d %d", iy - 0xB, (++u < 10 ? i * 2 : i));
			return szRet;
		}
	default:
		return "Error.";
	}
}