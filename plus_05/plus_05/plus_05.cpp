// plus_05.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	/*
	基于范围的for循环（c++ 11）
	*/
	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	for (double x : prices)
		cout << x << endl;

	//修改数组的元素值
	for (double &x : prices)
		x = x*0.8;

	char ch;
	int count = 0;

	cout << "Enter characters; enter #to quit:\n";

	while ((ch = cin.get()) != EOF ) //读取输入， 存入ch
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

