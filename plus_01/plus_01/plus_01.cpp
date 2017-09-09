// plus_01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

void simon(int);

int main(void)
{
	int age;
	/*simon(3);
	cout << "input age" << endl;
	cin >> age;
	cout << age << endl;
	cout << "hello";
	cout << "world";
	cout << endl;
	int count;
	cin >> count;
	simon(count);*/

	//cout << LONG_MAX << endl; //LONG类型的最大值
	//cout << LONG_MIN << endl;
	//cout << CHAR_BIT << endl;

	//c++11新的初始化方法 
	//int hamburges = { 24 }; //set hamburges to 24,怎么看着像是数组，这方法有点混淆视听
	//int rheas = {12};  // set rheas to 12
	//int rocs = {};   // set rocs to 0
	//int psychics{};  // set psychics to 0
	//cout << psychics << endl;

	int chest = 42; //10进制，基数为10, 
	int waist = 0x42;  //第一位是0x或者0X，则基数为16 ,16进制 ，则0x42 =  4*16+2*1
	int inseam = 0425; // 第一位是0，第二位是1~7, 基础是8，八进制 ，

	//默认情况下，cout以十进制的格式显示整数，而不管这些整数在程序中是如何书写的，下面会输出十进制的
	cout << chest << endl;
	cout << waist << endl;
	cout << inseam << endl;

	//十进制转其他进制
	int t_chest = 42;
	int t_waist = 42;
	int t_inseam = 42;

	//cout<<hex等代码不会在屏幕上显示任何内容，而只是修改cout显示整数的方式
	cout << dec;  //指示cout以十进制显示整数
	cout << t_chest << endl;

	cout << hex;  //指示cout以十六进制显示整数
	cout << t_waist << endl;
	
	cout << oct;  //指针cout以八进制显示整数
	cout << t_inseam << endl;

 	int a=0;
	cout << a << endl;
	cin.get();
	cin.get();  //第一个cin.get()获取输入，下文没有处理逻辑，所以这类再加一个get，防止窗口被关闭
    return 0;  //可写可不写，不写的话，会默认返回了的是0
}

void simon(int n)
{
	cout << "simon says touche your toes" << n << "times." << endl;
}

