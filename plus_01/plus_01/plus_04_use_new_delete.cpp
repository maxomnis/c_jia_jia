#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main_plus_04_use_new_delete()
{
	/*
	在c语言中，使用库函数malloc()来分配内存，在c+++中仍然可以这么做，但c++还有更好的方法，new运算符
	指针真正的用武之地在于，运行阶段分配未命名的内存以存储值
	*/
	int *pn = new int;

	cout << pn << endl;

	cout << *pn << endl;

	cout << sizeof(pn) << endl;
	cout << sizeof(*pn) << endl;

	int nights = 1001;
	int *pt = new int; //allocate space for an int
	*pt = 1001;		   //sotre a value there;

	cout << "night value = ";
	cout << nights << ": loaction " << &nights << endl;
	cout << "int";
	cout << "value = " << *pt << ":location =" << pt << endl;
	double *pd = new double; //allocate space for a double
	*pd = 10000001.0; //store a double there

	cout << "double ";
	cout << "value = " << *pd << "; location=" << pd << endl;
	cout << "location of pointer pd:" << &pd << endl;
	cout << "size of pt=" << sizeof(pt);
	cout << ":size of *pt=" << sizeof(*pt) << endl;
	cout << "size of pd=" << sizeof(pd);
	cout << ":size of *pd=" << sizeof(*pd) << endl;

	int *ps = new int; //allocate memory with new 

	/*
	delete 运算符
	它使得在使用完内存后，能够将其归还给内存池，这是通向有效地使用内存的关键一步，归还或释放的内存可供其他部分使用.
	使用delete时，后面加上指向内存块的指针(这些内存块最初是用new分配的)
	*/
	delete ps;  //ok
	/*
	 这将释放ps指向的内存，但是不会删除指针本身。例如，可以将ps重新指向另一个分配的内存块。一定要配对的使用new和delete
	 否则将发生内存泄漏(memory leak),也就是说，被分配的内存再无法使用了。如果严重，则程序将由于不断寻找更多的内存而终止。
	 不要尝试释放已经释放了的内存，c++标准指出，这样做的结果是不确定的，这意味着什么情况都有可能发生。另外，不能使用
	 delete来释放声明变量所获得的内存
	*/
	// delete ps; //not ok, 因为ps已经释放过了
	int jugs = 5;
	int *pi = &jugs;
	// delete pi;   //pi是变量的内存，不是new申请的,所以不能使用delete释放

	//只能使用delete来释放使用New分配的内存。然而，空指针使用delete是安全的

	/*
	  一般来说，不要创建两个指向同一个内存块的指针，因为这将增加

	  int *ps = new int;
	  int *pq = ps;
	  delete pq;
	*/

	/*
	 如果通过声明来创建数组，则在程序被编译时将为它分配内存，不管程序最终是否使用数组，数组都在那里，它占用内存。
	 在编译时给数组分配的内存被称为静态联编(static binding),意味着数组是在编译时加入到程序中的。但使用new时，如果
	 在运行阶段需要数组，则创建它，如果不需要，则不创建。还可以在程序运行时选择数组的长度。这种被称为动态编译（
	 dynamic binding）,意味着数组是在程序运行时创建的。这种数组叫动态数组。使用静态联编时，必须在编写程序时指定
	 数组的长度，使用动态联编时，程序将在运行时确定数组的长度。

	 我自己的理解：
	 比如下面的psome[50000]是静态的联编，也就是说从它声明开始，它就一直存在，直到程序死掉；
	 而下面的int *psome = new int[10]是动态的联编，后面还可以delete掉，所以，这就是区别
	*/
	//int psome[50000]; //静态联编


	int *psome = new int[10]; // 动态联编， get a block of ints
	//new 运算符返回第一个元素的地址，这个例子中，该地址被赋给psome指针

	delete []psome;   //释放数组，记得那个方括号

	/*
	方括号告诉程序，应释放这个数组，而不仅仅是指针指向的元素。请注意delete和指针之间的方括号。
	如果使用new时，不带方括号，则使用delete时，也不应该带方括号。如果使用New时带了方括号，则使用
	delete时也应该带上方括号。
	*/

	double *p3 = new double[3];  //指针名,p3指向的是数组的第一个元素，也就是p3[0]
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3第一个元素的值是,"<< *p3 << endl;  //*p3指向了数组的第一个元素
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;      //指针的值(指针指向的地址)加1，指向了下一个元素
	cout << "now p3[0] is " << p3[0] << "and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;      //将p3减1后，指针指向了原来的地址，p3数组的首地址，这样程序便可以给delete[]提供正确的地址
	delete[]p3;

	system("pause");
	return 0;
}