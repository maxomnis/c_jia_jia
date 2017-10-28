#include "stdafx.h"
#include <iostream>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);
int fill_array(double ar[], int limit);

int main2()
{
	int cookie[ArSize] = {1,2,3,4,5,6,7,10};

	cout << cookie << " =array address,";				//输出0037FA14
	cout << sizeof cookie << " = sizeof cookies\n";		//输出32， 数组cookie的总共长度，8个数字，一个占用4个字节， 4*8=32

	int sum = sum_arr(cookie, ArSize);
	cout << "Total cookies eaten:" << sum << endl;		 //输出38

	sum = sum_arr(cookie, 3);
	cout << "first three eaters ate" << sum << "cookies.\n";  //输出6

	sum = sum_arr(cookie + 4, 4);                             //计算后四个元素的值
	cout << cookie << endl;
	cout << cookie+1 << endl;
	cout << "last four eaters ate" << sum << "cookies.\n";   //输出28


	double test[5]{};
	int i = fill_array(test, 5);
	cout << i << endl;


	system("pause");
	return 0;
}

/*

传递常规变量时，函数将使用该变量的拷贝；但传递数组时，函数将使用原来的数组。
实际上，这种区别并不违反C++按值传递的方法，sum_arr函数仍传递了一个值，这个值
被赋给了一个新的变量，但这个值是一个地址，而不是数组的内容。


当改为
int sum_arr(int *arr, int n)也是对的，因为在c++当中，
当且仅当，用于函数头或函数原型中，int *arr和int arr[]的函数相同的。
他们都意味着arr是一个int指针。然而，数组表示法(int arr[])提醒用户，
arr不仅指向int,还指向int数组的第一个int。当指针指向数组的第一个元素时
本书使用数组表示法；而当指针指向一个独立的值时，使用指针标示法。别忘了，
在其他的文件中，int *arr和int arr[]的含义并不相同。例如不能在函数体中
使用int tip[]来声明指针。

//下面两个表达式是恒等的，记住
arr[i] == *(arr+i);
&arr[i] = arr + i;

*/


int sum_arr(int arr[], int n)
{
	int total = 0;

	cout << arr << " = arr";  

	cout << sizeof arr << " = sizeof arr\n";		//输出4， 是指针变量的长度，当前系统地址占用四个字节


	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];						// arr[i]相当于*(arr+i),  sum_arr(int arr[], int n)传递过来的是arr，其实是指针的首地址，所以这里的for循环，一直arr[i]，其实直接是访问了内存地址的值
	}

	return total;
}


/*
const 声明数组为常量，不能更改
int fill_array(const double ar[], int limit)
{

}

*/



int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value#" << (i + 1) << ";";
		cin >> temp;
		cout <<"cin"<<!cin << endl;
		if (!cin)									 //判断输入的数据类型不是声明的类型，比如temp是double的，如果输入的字符串cin就是1，如果输入的是2则cin就是0
		{
			cin.clear();							 //通过cin.clear,我们能确认它的内部标识符,如果输入错误则能重新输入.cin.sync()才是清空cin
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)							//signal to terminate
			break;
		ar[i] = temp;
	}
	cout << ar[0] << endl;
	cout << ar[1] << endl;
	cout << ar[2] << endl;
	cout << ar[3] << endl;
	cout << ar[4] << endl;
	return i;
}

