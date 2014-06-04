#pragma once
#include <string>

enum EOS_Type
{
	EOS_None = 0,
	EOS_IOS,
	EOS_Android,
	EOS_WP,
	EOS_Symbian,
	EOS_BB,
	EOS_COS,
};

std::string Parse(EOS_Type eType);