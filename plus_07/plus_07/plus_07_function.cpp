// plus_07.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void simple();
void cheers(int n);

int main()
{
	simple();
	system("pause");
    return 0;
}


void simple()
{
	cout << "I'm but a simple function.\n";
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Cheers!";
	}
	cout << endl;
}
