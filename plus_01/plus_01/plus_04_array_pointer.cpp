#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main_array_pointer()
{
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	double *pw = wages;
	short *ps = &stacks[0];  //ps指向数组的第一个元素
	short *pt = stacks;      //如果数组赋值给指针，那么指针指向了数组的第一个元素，同上面的意思是一样的
	cout << pw << endl;		 //输出0048FB58
	cout << ps << endl;      //输出0048FB48
	cout << pt << endl;      //输出0048FB48

	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	pw = pw + 1;        //指针的地址+1, 比如如果pw的值是AWC2，加上1之后的地址值就是AWCA,相当于AWC2+8(double是8个字节)，16进制表示法，10等于A
	cout << "add 1 to the pw pointer:\n";
	cout << "pw=" << pw << ", *pw=" << *pw << "\n\n";

	cout << "ps=" << ps << ",*ps=" << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps=" << ps << ",*ps" << *ps << "\n\n";

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0] << ",stacks[1]=" << stacks[1] << endl;

	cout << "access two elements with pointer notation\n";
	cout << "*access two elements with pointer notation\n";
	cout << "*stacks=" << *stacks << ",*(stack+1)=" << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";  //24字节，三个double，sizeof返回数组占用的字节数
	cout << sizeof(pw) << " = size of pw pointer\n";      //4字节,sizeof返回指针的大小

	int tacos[10] = { 1, 2, 3, 4, 4, 5, 5, 65, 6, 20 };
	int *pp = tacos;   //tacos名字指向数组的第一个元素
	pp = pp + 1;       //地址加上1，这里相当于pp指向的地址值加上了4个字节，因为tacos是int类型数组，一个int类型占用四个字节
	int *pe = &tacos[9];
	pe = pe - 1;
	int diff = pe - pp;  //输出7， 相当于计算pe与pp之间的元素的个数
	cout << "diff=" << diff << endl;

	short tell[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << tell << endl;
	cout << &tell << endl;
	cout << &tell+2 << endl;
	system("pause");
	return 0;
}