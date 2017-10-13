#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

/*
C风格的字符串操作方法，c++还是不要使用这种，容易越界，并且可以直接赋值，而不是用strcpy,strncpy等
*/
int main2222()
{
	char flower[10] = "rose";
	cout << flower << "s are red"<<endl; //数组名是数组第一个元素的地址

	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout << animal << " and ";
	cout << bird << "\n";

	cout << "Enter a kind of animal:";
	cin >> animal;

	ps = animal;   //animal的地址赋给ps,并不会复制字符串，两个指针的地址完全一样
	cout << ps << "!\n";
	cout << "before using strcp():\n";

	/*
	一般来说，如果给count提供一个指针，它将打印地址。但是如果指针的类型为char指针，则count将显示
	指针指向的字符串。如果要显示的是字符串的地址，则必须将这种指针强制转换为另一种类型的指针类型，
	例如，int(*), 例如下面的代码就是这样做的。因此，ps显示为字符串"dog",而(int *)ps显示该字符串的地址。

	*/
	cout << animal << "at" << (int *)animal << endl;  //输出dogat001EFBD4
	cout << ps << "at" << (int *)ps << endl;          //输出dogat001EFBD4

	ps = new char[strlen(animal)+1]; //get new stroage  //strlen计算的是可见的字符串，而不把空字符串计算在内
	strcpy(ps, animal); //copy string to new storage  ps现在存储的是animal的副本

	cout << "After using strcpy():\n";
	cout << animal << "at " << (int *)animal << endl;  //输出dogat001EFBD4
	cout << ps << " at " << (int *)ps << endl;		   //输出dog at 004BB030

	delete []ps;


	char food[20] = "carrots";
	strcpy(food, "flan");
	cout << "food:"<< food << endl;
	system("pause");
	return 0;
}