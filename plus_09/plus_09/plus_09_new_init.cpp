#include "stdafx.h"
#include <iostream>

using namespace std;

/*

使用new运算符初始化


*/

int main_init()
{
	int *pi = new int(6);   //初始值是6
	cout << *pi << endl;

	double *pd = new double(99.99);
	cout << *pd << endl;

	struct where {double x; double y; double z; };

	//c++11支持允许这么做
	where *one = new where{2.4, 4.4, 1.3}; 

	int *ar = new int[4]{2,4,6,7};

	//new失败时，new可能找不到请求的内存量，以前是返回空指针，现在是引发std::bad_alloc异常


	system("pause");
	return 0;
}