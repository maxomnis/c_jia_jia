#include "stdafx.h"
#include <iostream>

/*

默认情况下，在函数中声明的函数参数和变量的存储持续性为自动，作用域为局部，没有连接性。
*/

using namespace std;

/*
静态连续变量
c++为静态存储持续性提供了3种链接性（不懂，啥叫链接性）：
1. 外部链接性(可在其他文件中访问)
2. 内部链接性（只能在当前文件中访问）
3. 无链接性  （只能在当前函数或代码块中访问）
这3钟链接性都在整个程序的执行期间存在，与自动变量相比，他们的寿命更长。由于静态变量的数目
在程序运行期间是不变的，因此程序不需要使用特殊的装置（如栈）来管理他们。编译器将分配固定的内存
块来存储所有的静态变量，这些变量在整个程序执行期间一直存在。另外，如果没有显示地初始化静态变量，
编译器将把它设置为0,。在默认情况下，静态数组和结构每个元素或成员的所有位都设置为0.

要想创建链接性为外部的静态持续变量，必须在代码块的外面声明它， （相当于php的全部变量吧）；
要想创建链接性为内部的静态持续变量， 必须在代码块的外貌声明它， 并使用static限定符；
要创建没有链接性的静态持续变量，必须在代码块内声明它，并使用static限定符。


零初始化和常量表达式初始化被统称为静态初始化，这意味在编译处理处理文件时，初始化变量。动态初始化意味着
变量将在编译后初始化。



所有的静态变量都是被0初始化，而不管程序员是否显示地初始化它。接下里，如果使用常量表达式初始化了变量，
且编译器仅根据文件内容（包含头文件）就可以计算表达式，编译器执行常量表达式初始。必要时，编译器将执行简单运算，
如果没有足够的信息，变量将被动初始化。

int x; // 

*/

int global = 1000;	//这种变量已经分配了存储空间		//static duration , external linkage   ，外部链接性，在其他文件中也能访问
// extern int global = 1000; //去掉extern也一样，与上面的等效


static int one_file = 50;   //static duration , internal linkage  , 内部连接性，只能在当前文件中访问


int main_static_main()
{
	/*
	在funct1()中声明的变量作用域为局部，没有链接性，这意味着只能在funct1()函数使用它，就想自动变量llama一样；
	然而与llama不同的是，即使在funct1()函数没有执行时，count也留在内存中。
	*/
	static int count = 0;  //static duration ,no linkage
	int llama = 0;

	static int age;
	int test;
	cout << age << endl;
	cout << test << endl;


	// vc 限定符
	// 1. const  2. volatile
	//关键字volatile表明，即使程序代码中没有对内存单元进行修改，其值也可能发生变化；比如指针指向某个硬件的位置，其中包含了来自串行端口的时间和信息。
	//假设，编译器发现，程序中几条语句中两次使用了某个变量的值，则编译器可能不是让程序员查找这个值两次，而是将这个值的缓存到寄存器中
	//这种优化假设变量的值在两次使用之间不会变化。如果将变量不声明为volatile，则编译器将进行优化；将变量声明为volition，则相当于告诉编译器，不要进行这种优化


	// mutable  
	//指出，即使结构（或类）变量为const, 其某个成员也可以被修改。

	struct data
	{
		char name[30];
		mutable int accesses;
	};

	const data veep = {"claybourne clodde", 0};
	// strcpy(veep.name, "Joye Joux");         // not allowed
	veep.accesses++;                           //allowed




	system("pause");
	return 0;
}




