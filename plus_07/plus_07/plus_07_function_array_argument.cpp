#include "stdafx.h"
#include <iostream>
using namespace std;

const int ArSize = 8;
int sum_arr(int arr[], int n);
int fill_array(double ar[], int limit);

int main2()
{
	int cookie[ArSize] = {1,2,3,4,5,6,7,10};

	cout << cookie << " =array address,";				//���0037FA14
	cout << sizeof cookie << " = sizeof cookies\n";		//���32�� ����cookie���ܹ����ȣ�8�����֣�һ��ռ��4���ֽڣ� 4*8=32

	int sum = sum_arr(cookie, ArSize);
	cout << "Total cookies eaten:" << sum << endl;		 //���38

	sum = sum_arr(cookie, 3);
	cout << "first three eaters ate" << sum << "cookies.\n";  //���6

	sum = sum_arr(cookie + 4, 4);                             //������ĸ�Ԫ�ص�ֵ
	cout << cookie << endl;
	cout << cookie+1 << endl;
	cout << "last four eaters ate" << sum << "cookies.\n";   //���28


	double test[5]{};
	int i = fill_array(test, 5);
	cout << i << endl;


	system("pause");
	return 0;
}

/*

���ݳ������ʱ��������ʹ�øñ����Ŀ���������������ʱ��������ʹ��ԭ�������顣
ʵ���ϣ��������𲢲�Υ��C++��ֵ���ݵķ�����sum_arr�����Դ�����һ��ֵ�����ֵ
��������һ���µı����������ֵ��һ����ַ����������������ݡ�


����Ϊ
int sum_arr(int *arr, int n)Ҳ�ǶԵģ���Ϊ��c++���У�
���ҽ��������ں���ͷ����ԭ���У�int *arr��int arr[]�ĺ�����ͬ�ġ�
���Ƕ���ζ��arr��һ��intָ�롣Ȼ���������ʾ��(int arr[])�����û���
arr����ָ��int,��ָ��int����ĵ�һ��int����ָ��ָ������ĵ�һ��Ԫ��ʱ
����ʹ�������ʾ��������ָ��ָ��һ��������ֵʱ��ʹ��ָ���ʾ���������ˣ�
���������ļ��У�int *arr��int arr[]�ĺ��岢����ͬ�����粻���ں�������
ʹ��int tip[]������ָ�롣

//�����������ʽ�Ǻ�ȵģ���ס
arr[i] == *(arr+i);
&arr[i] = arr + i;

*/


int sum_arr(int arr[], int n)
{
	int total = 0;

	cout << arr << " = arr";  

	cout << sizeof arr << " = sizeof arr\n";		//���4�� ��ָ������ĳ��ȣ���ǰϵͳ��ַռ���ĸ��ֽ�


	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];						// arr[i]�൱��*(arr+i),  sum_arr(int arr[], int n)���ݹ�������arr����ʵ��ָ����׵�ַ�����������forѭ����һֱarr[i]����ʵֱ���Ƿ������ڴ��ַ��ֵ
	}

	return total;
}


/*
const ��������Ϊ���������ܸ���
int fill_array(const double ar[], int limit)
{

}

*/



int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value#" << (i + 1) << ";";
		cin >> temp;
		cout <<"cin"<<!cin << endl;
		if (!cin)									 //�ж�������������Ͳ������������ͣ�����temp��double�ģ����������ַ���cin����1������������2��cin����0
		{
			cin.clear();							 //ͨ��cin.clear,������ȷ�������ڲ���ʶ��,����������������������.cin.sync()�������cin
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)							//signal to terminate
			break;
		ar[i] = temp;
	}
	cout << ar[0] << endl;
	cout << ar[1] << endl;
	cout << ar[2] << endl;
	cout << ar[3] << endl;
	cout << ar[4] << endl;
	return i;
}

