#include "stdafx.h"
#include <iostream>

using namespace std;

/*
引用

引用是已定义的变量的别名（另一个名称）。如果将twain作为clement变量的引用，则可以交替使用
twain和clements来表示该变量。

引用变量的主要用途是作为函数的参数，通过引用变量用作参数，函数将使用原始数据，而不是其副本。
这样除了指针之外，引用也为函数处理大型结构提供了一种非常方便的途径。

&不是地址运算符，而是类型标识符的一部分。

int & 指的是指向int的引用


引用与指针的不同点
1. 引用更接近const指针，必须在创建时进程初始化，一旦与某个变量关联起来，就将一直效忠它。

*/

int main_first_reference()
{
	int rats = 101;

	/*
	  下面语句中的&运算符不是地址运算符，而是将rodnets的类型声明为 int & ,即指向int变量的引用。
	  int &rodnets = rats; 


	*/
	int &rodnets = rats;  // rodents is a reference

	cout << "rats = " << rats;
	cout << ", rodnets = " << rodnets << endl;

	rodnets++;

	cout << "rats = " << rats;
	cout << ", rodnets = " << rodnets << endl;

	cout << "rats address = " << &rats;
	cout << "rodnets address = " << &rodnets;

	system("pause");
	return 0;

/*
输出
rats = 101, rodnets = 101
rats = 102, rodnets = 102
rats address = 0022F72C rodnets address = 0022F72C

*/
}
