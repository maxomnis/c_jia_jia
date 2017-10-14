#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

#include <vector>
#include <array>

using  namespace std;

int main()
{
	/*
	模板类vector
	模板类vector类似string，也是一种动态数组。可以在运行阶段设置vector对象的长度
	可以在末尾附加新的数据，还可以在中间插入新的数据，它是使用new创建动态数组的 替代品。
	实际上，vector类确实使用new和delete来管理内存，但这种工作是自动完成的。
	*/
	vector<int> vi;         //create a zero-size array of int
	vector<double> vd(10);  //create an array of 10 double

	/*
	模板类array (c++ 11)
	vector类的功能比数组强大，但付出的代价是效率稍低。如果您需要的是长度固定的数组，使用数组
	是更佳的选择，但代价是不那么方便和安全。有鉴于此，c++11新增模板类array。
	与数组一样，array对象的长度是固定的，也使用栈，而不是自由存储区，因此其效率与数组相同，但更
	方便，更安全。要创建array对象，需要包含头文件array。
	*/

	array<int, 5> ai;  //create array object of 5 ints
	array<double, 4> ad = {1.2, 2.1, 3.34, 4.3};


	//比较数组，vector对象，array对象

	// c ,original C++
	double a1[4] = {1.2 ,2.4 , 3.6, 4.8};

	vector<double> a2(4);   //create vector with 4 elements
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;

	a4 = a3;   //array 复制，相当于是重新创建了一个新的元素，把a3的内容复制给了a4,所以下面输出的,a3,a4的地址不一样
	
	cout <<"a3 address"<< &a3 << endl;
	cout <<"a4 address"<< &a4 << endl;

	//use array notation
	cout << "a1[2]" << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]" << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]" << a4[2] << " at " << &a4[2] << endl;   //输出

	// misdeed

	/*
	 相当于*(a1-2) = 20.2;  找到a1指向的地方，向前移动两个元素，并将20.2存储到目的地，也就是说将信息存储在数组的外面,越界了。
	 c语言与c++一样，不检查这种越界错误。 array,vector的at方法能在运行期间捕获非法索引，如果遇到越界程序默认将中断运行，
	 额外的代价就是运行的时间更长
	*/
	a1[-2] = 20.1;
	cout << a3[1] << endl;
	a3.at(1) = 2.0;
	cout << a3[1] << endl;
	cout << a3.at(1000) << endl;


	cout << "a1[-2]" << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]" << a4[2] << " at " << &a4[2] << endl;

	/*
	输出如下内容：
	a1[2]3.6 at 001BFC14
	a2[2]0.142857 at 004ED098
	a3[2]1.62 at 001BFBD4
	a4[2]1.62 at 001BFBAC
	a1[-2]20.1 at 001BFBF4
	a3[2]1.62 at 001BFBD4
	a4[2]1.62 at 001BFBAC

	首先，无论是数组，vector对象还是array对象，都可以使用标准数组表方法来访问各个元素。
	其次，从地址可知，array对象和数组存储在相同的内存区域（栈）中，而vector存储在另一个区域（自由存储区或堆）中，
	注意，
	第三，注意到可以将array对象赋给另外一个array对象；而对于数组，必须逐元素复制数据。

	*/

	system("pause");
	return 0;
}