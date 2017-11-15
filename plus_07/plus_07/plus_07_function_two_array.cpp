#include "stdafx.h"
#include <iostream>

using namespace std;

int sum(int ar2[][4], int size);

/*
函数与二维数组的使用
*/

int main_two_array()
{
	int total = 0;
	int data[3][4] = { {1,2,3,4},{ 6,27,8,94 },{ 9,29,36,41 } };
	total = sum(data, 3);
	cout << total<<endl;
	system("pause");
	return 0;
}

int sum(int ar2[][4], int size)
{
	int total = 0;
	for (int r = 0; r < size; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			total += ar2[r][c];
		}
	}
	return total;
}
