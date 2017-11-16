// plus_08.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

/*

默认参数

对于带参数列表的函数，必须从右向左添加默认值。也就是说，要为某个参数设置默认值，则必须为它右边的
所有参数提供默认值。

int harpo(int n, int m=4, int j=5); //合法
int chico(int n ,int m = 6, int j); //非法
int groucho(int k=1, int m=2, int m=3); // 合法

*/

const int ArSize = 80;

char * left(const char * str, int n = 1);

int main_default_parameters()
{
	char sample[ArSize];
	
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);

	char *ps = left(sample, 4);
	
	cout << ps << endl;

	delete[] ps; //free old string

	ps = left(sample);
	cout << ps << endl;

	delete[] ps;


	system("pause");
	return 0;
}

char * left(const char * str, int n)
{
	cout << "n = " << n << endl;
	if (n < 0)
		n = 0;
	char * p = new char[n + 1];
	int i;
	for (i = 0; i < n && str[i]; i++)
	{
		p[i] = str[i];			//copy characters
	}

	while (i <= n)
	{
		p[i++] = '\0';
	}

	cout << "p str" << strlen(p) << endl;
	return p;

}

