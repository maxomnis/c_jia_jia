#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int donuts = 6;
	double cpus = 4.5;
	
	cout << "donuts value=" << donuts;
	cout << "and donuts address=" << &donuts << endl;

	cout << "cpus value=" << cpus;
	cout << "and cpus address=" << &cpus << endl;


	int updates = 6;
	int *p_updates; // *运算符被称为间接值或解除引用运算符, 一个int类型的指针， *p_updates的值是，它所指向的变量的值， p_updates的值是它所指向的变量的内存地址
	p_updates = &updates;  // &取地址运算符

	cout << "values :update = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "address:&updates = " << &updates;		//
	cout << ", p_udpates =" << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;

	// 一定要在对指针应用解除引用运算符（*）之前，将指针初始化为一个确定的，适当的地址。这是一个关于使用指针的金科玉律

	system("pause");
	return 0;
}