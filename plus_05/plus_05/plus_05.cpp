// plus_05.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
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

	while ((ch = cin.get()) != EOF ) //��ȡ���룬 ����ch
	{
		cout << ch;
		++count;
		cin.get(ch);
	}

	cout << endl;
	cout << " characters read\n";
	system("pause");
	return 0;
}

