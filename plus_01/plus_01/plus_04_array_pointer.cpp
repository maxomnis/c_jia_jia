#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main_array_pointer()
{
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};

	double *pw = wages;
	short *ps = &stacks[0];  //psָ������ĵ�һ��Ԫ��
	short *pt = stacks;      //������鸳ֵ��ָ�룬��ôָ��ָ��������ĵ�һ��Ԫ�أ�ͬ�������˼��һ����
	cout << pw << endl;		 //���0048FB58
	cout << ps << endl;      //���0048FB48
	cout << pt << endl;      //���0048FB48

	cout << "pw=" << pw << ", *pw=" << *pw << endl;
	pw = pw + 1;        //ָ��ĵ�ַ+1, �������pw��ֵ��AWC2������1֮��ĵ�ֵַ����AWCA,�൱��AWC2+8(double��8���ֽ�)��16���Ʊ�ʾ����10����A
	cout << "add 1 to the pw pointer:\n";
	cout << "pw=" << pw << ", *pw=" << *pw << "\n\n";

	cout << "ps=" << ps << ",*ps=" << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps=" << ps << ",*ps" << *ps << "\n\n";

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0] << ",stacks[1]=" << stacks[1] << endl;

	cout << "access two elements with pointer notation\n";
	cout << "*access two elements with pointer notation\n";
	cout << "*stacks=" << *stacks << ",*(stack+1)=" << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";  //24�ֽڣ�����double��sizeof��������ռ�õ��ֽ���
	cout << sizeof(pw) << " = size of pw pointer\n";      //4�ֽ�,sizeof����ָ��Ĵ�С

	int tacos[10] = { 1, 2, 3, 4, 4, 5, 5, 65, 6, 20 };
	int *pp = tacos;   //tacos����ָ������ĵ�һ��Ԫ��
	pp = pp + 1;       //��ַ����1�������൱��ppָ��ĵ�ֵַ������4���ֽڣ���Ϊtacos��int�������飬һ��int����ռ���ĸ��ֽ�
	int *pe = &tacos[9];
	pe = pe - 1;
	int diff = pe - pp;  //���7�� �൱�ڼ���pe��pp֮���Ԫ�صĸ���
	cout << "diff=" << diff << endl;

	short tell[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << tell << endl;
	cout << &tell << endl;
	cout << &tell+2 << endl;
	system("pause");
	return 0;
}