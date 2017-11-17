#include "stdafx.h"
#include <new>

using namespace std;

/*

定位new运算符(不同于new 那个)
通常, new负责在堆(heap)中找到一个足以能够满足要求的内存块。new运算符还有另外一种变体，被称为定位(placement) new运算符
它让您能够制定要使用的位置。程序员可能使用这种特性来设置其内存管理规程，处理需要通过特定地址进程访问的硬件或在特定
位置创建对象。

要使用定位new特性，首先需要包含头文件new, 它提供了这种版本的new运算符的原型；然后将new运算符用于提供了所需地址的参数。
除需要制定参数外，句法与常规new运算符相同。具体地说，使用定位new运算符时，变量后面可以有方括号，也可以没有。


*/

struct chaff
{
	char dross[20];
	int slag;
};

char buffer1[50];         //全局变量
char buffer2[500];		  //全局变量

int main_new_placement()
{
	chaff *p1, *p2;
	int *p3, *p4;

	p1 = new chaff;        //place structure in heap
	p3 = new int[20];      //place int array in heap

	p2 = new (buffer1) chaff;  //place structure in buffer1    从buffer1中分配空间给结构chaff
	p4 = new (buffer2) int[20]; //place int array in buffer2   



	system("pause");
	return 0;
}