#include "stdafx.h"
#include <iostream>
#include <climits>


using namespace std;

int main()
{
	int cards[4] = { 3,4,8,10 };
	int hand[4]; //没有初始化，虽然这样的声明是可以的，但是最好初始化，否则存储的是不确定的值， hand[0]输出了-858993460
	//hand[4] = { 5,6,7,9 }; //只有在定义数组时才能初始化,以后不能使用了，也不能将一个数组赋给另外一个数组
	//hand = cards;

	/*
	初始化数组时，提供的值可以少于数组的元素数目，如果值对数组的一部分进程初始化，则编译器将把其他的值设置为0，因此将
	数组中的都初始化为0非常简单，
	*/
	float hotelTips[5] = { 5.0, 2.5 };//前两个设置，其他的为0
	long totals[500] = { 0 };
	cout << sizeof(totals) << endl;

	int test[10] = { 1 }; //第一个元素为1， 其他都为0
	short things[] = { 1,4,3,6 }; //如果[]为空，编译器将计算元素个数

	//c++ 11 新增的初始化方法
	double earnings[4]{ 1.2e4, 1.6e4, 1.1e4, 1.7e4 }; //初始化的时候可以省略等号
	unsigned int counts[10] = {};                     //把所有元素都设置为零
	float balances[100]{};                             //把所有元素都设置为零
	system("pause");
	return 0;
}