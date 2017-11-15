#include "stdafx.h"
#include <iostream>

/*
 使用内联函数方式
 1. 在函数声明前加上关键字inline
 2. 在函数定义前加上关键字inline

*/

using namespace std;

inline double square(double x) { return x*x; }

int main_inline()
{
	double a, b;
	double c = 13.0;

	a = square(5.0);

	b = square(4.5 + 7.5);

	cout << "a=" << a << ",b=" << b << "\n";
	cout << "c=" << c;
	cout << ",c square = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";
	system("pause");
	return 0;
}