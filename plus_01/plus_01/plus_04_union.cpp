#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

using namespace std;
/*
共用体(union)是一种数据格式，它能够存储不同的数据类型，但只能同时存储其中的一种类型，也就是说
结构体可以同时存储int,long,double类型，共用体只能存储int, long, double其中一个

由于共用体每次只能存储一个值，因此它必须有足够的空间来存储最大的成员，所以，共用体的长度是其
最大成员的长度

共用体的用途之一是，当数据项使用两种或者更多种格式（但不会同时使用时），可节省空间。
*/

union one4all
{
	int int_val;
	long long_val;
	double double_val;
};

int main_04_2()
{
	one4all pail;
	pail.int_val = 15;
	cout << pail.int_val << endl;
	cout << sizeof(pail) << endl;
	pail.long_val = 110 ;	
	cout << sizeof(pail) << endl;
	cout << pail.long_val << endl;


	struct widget
	{
		char brand[20];
		int type;
		union id
		{
			long id_num;
			char id_char[20];
		} id_val;
	};

	widget prize;
	prize.type = 1;
	if (prize.type == 1)
		cin >> prize.id_val.id_num;
	else
		cin >> prize.id_val.id_char;
	cout << sizeof(prize) << endl;

	system("pause");
	return 0;
}