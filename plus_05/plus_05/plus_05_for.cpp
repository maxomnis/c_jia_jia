// plus_05.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

const int Cities = 5;
const int Years = 4;

int main_for()
{
	/*
	���ڷ�Χ��forѭ����c++ 11��
	*/
	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	for (double x : prices)
		cout << x << endl;

	//�޸������Ԫ��ֵ
	for (double &x : prices)
		x = x*0.8;

	char ch;
	int count = 0;

	cout << "Enter characters; enter #to quit:\n";

	/*
	while ((ch = cin.get()) != EOF ) //��ȡ���룬 ����ch
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	*/

	const char *cities[Cities] =  //array of pointers to 5 strings
	{
		"Gribble city",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] = 
	{
		{ 96, 100, 87, 101, 105 },
		{ 96, 98, 91, 107, 104 },
		{ 97, 101, 93, 108, 107 },
		{ 97, 103, 95, 109, 108 }
	};

	cout << "Maximum tempeatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << " characters read\n";
	system("pause");
	return 0;
}

