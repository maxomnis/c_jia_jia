#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

using namespace std;
/*
������(union)��һ�����ݸ�ʽ�����ܹ��洢��ͬ���������ͣ���ֻ��ͬʱ�洢���е�һ�����ͣ�Ҳ����˵
�ṹ�����ͬʱ�洢int,long,double���ͣ�������ֻ�ܴ洢int, long, double����һ��

���ڹ�����ÿ��ֻ�ܴ洢һ��ֵ��������������㹻�Ŀռ����洢���ĳ�Ա�����ԣ�������ĳ�������
����Ա�ĳ���

���������;֮һ�ǣ���������ʹ�����ֻ��߸����ָ�ʽ��������ͬʱʹ��ʱ�����ɽ�ʡ�ռ䡣
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