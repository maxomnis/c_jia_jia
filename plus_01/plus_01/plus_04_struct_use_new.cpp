#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

char *getname(void);

/*
印象笔记本里面有这张的详细截图，太多了就不写了
*/
struct inflatable
{
	char name[20];
	float volume;
	double price;
};


int main()
{
	/*
	c++新手在指定结构成员时，搞不清楚何时应使用句点运算符，何时应使用箭头运算符。
	如果结构标识符是结构名，则使用句点运算符；如果标识符是指向结构体的指针，则
	使用箭头运算符
	*/
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable item:";
	cin.get(ps->name, 20);

	cout << "Enter volume in cubic feet:";
	cin >> (*ps).volume;

	cout << "Enter price:$";
	cin >> ps->price;

	cout << "Name:" << (*ps).name << endl;
	cout << "Volumn:" << ps->volume << endl;
	cout << "Price:$" << ps->price << endl;
	delete ps;


	char *name;
	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete []name;  //释放指针指向的内容
	 
	name = getname();  //给指针name重新赋值
	cout << name << " at " << (int *)name << "\n";
	delete[]name;

	system("pause");
	return 0;
}


char *getname()
{
	/*
	
	这种使用方法不太好，因为该函数里面有new操作，却没有delete操作，如果忘记delete，容易操作内存泄露，智能指针可以有助于解决这个问题
	*/
	char temp[80];
	cout << "Enter last name:";
	cin >> temp;
	char *pn = new char[strlen(temp)+1];
	strcpy(pn, temp);
	return pn;
}