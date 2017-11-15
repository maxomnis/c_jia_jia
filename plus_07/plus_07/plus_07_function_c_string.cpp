#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned int c_int_str(const char *str, char ch);

/*

c·ç¸ñµÄ×Ö·û´®
*/
int main_5()
{
	char mmm[15] = "minimum";

	char *wail = "ululate";

	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');

	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	return 0;
}

unsigned int c_int_str(const char *str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
	}

	return count;
}