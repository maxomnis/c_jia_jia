// plus_07.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void simple();  //��simple(void)��Ч
void say_bye(...); //��c++�У���ָ�������б�ʱ��Ӧʹ��ʡ�Ժ�

void cheers(int n);

int main_function()
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
