#include "stdafx.h"
#include <iostream>

/*
 ʹ������������ʽ
 1. �ں�������ǰ���Ϲؼ���inline
 2. �ں�������ǰ���Ϲؼ���inline

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