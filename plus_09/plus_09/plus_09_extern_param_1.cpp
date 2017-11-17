#include "stdafx.h"
#include <iostream>

extern double warming;         //use warming form another file
extern float * p_fees;

// static int warming = 10;  //static 变量的作用域为当前文件，所以它会覆盖掉全局的作用域warming变量


void update(double dt);
void local();

using namespace std;

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to" << warming;
	cout << " degres.\n";
}

void local()
{
	double warming = 0.8;       //new variable hides external one

	cout << "Local warming = " << warming << " degrees.\n";

	cout << "But global warming = " << ::warming;  // (::)作用域解析运算符，放在变量名的前面，该运算符表示使用变量的全局版本。
	cout << " degres.\n";

}