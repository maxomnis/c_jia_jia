#include "stdafx.h"
#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(const int *begin, const int *end);

/*
使用数组的区间函数
*/

int main4()
{
	int cookies[ArSize] = { 1,2,3,45,6,61,11,123 };

	int sum = sum_arr(cookies, cookies + ArSize); //cookie+ArSize指向的是数组的最后一个元素的后面一位，最后一个元素是cookie+ArSize-1

	cout << "Total cookies eaten:" << sum << endl;
	sum = sum_arr(cookies, cookies + 3);    //first 3 elements

	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);    //last 4 elements
	cout << "Last four eaters ate " << sum << "  cookies.\n";

	system("pause");
	return 0;
}


int sum_arr(const int *begin, const int *end)
{
	const int *pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
	{
		total = total + *pt;
	}

	return total;
}