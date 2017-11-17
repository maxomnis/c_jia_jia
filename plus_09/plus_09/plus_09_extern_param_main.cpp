#include "stdafx.h"
#include <iostream>
using namespace std;


double warming = 0.3;          //链接性为外部的静态持续变量，其实就是全局变量
// external warming = 0.3;  external去掉也可以，与上面的变量等效，都是全局变量；

const int fingers = 10;     //const 全局变量的链接性为内部，也就是说只能在当前文件使用，跟static一样

/*

在多文件程序中，可以在一个文件（且只能在一个文件）中定义一个外部变量，使用该变量的其他文件
必须使用关键字extern声明它

*/


float * p_fees = new float[20];


void update(double dt);

void local();

int main_param()
{
	cout << "Global warming is " << warming << "degrees.\n";
	update(0.1);

	cout << "Global warming is " << warming << "degrees.\n";
	local();

	cout << "Global warming is " << warming << "degrees.\n";

	cout << "fingers = " << fingers << endl;
	system("pause");
	return 0;
}

