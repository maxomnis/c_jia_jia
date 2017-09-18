#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main3()
{
	//初始化和赋值进行的转换
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);  //把int类型当做一个类，然后3.9832初始化，c11的特性
	int debt = 7.2E12;  //超出了Int类型的最大值
	cout << "tree" << tree << endl;  //输出3.000000
	cout << "guess" << guess << endl; //输出3
	cout << "debt" << debt << endl; //输出1634811904，不同编译器输出的值不一样
	system("pause");
	return 0;
}