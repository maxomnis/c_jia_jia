#include "stdafx.h"
#include <iostream>

using namespace std;

/*
����

�������Ѷ���ı����ı�������һ�����ƣ��������twain��Ϊclement���������ã�����Խ���ʹ��
twain��clements����ʾ�ñ�����

���ñ�������Ҫ��;����Ϊ�����Ĳ�����ͨ�����ñ�������������������ʹ��ԭʼ���ݣ��������丱����
��������ָ��֮�⣬����ҲΪ����������ͽṹ�ṩ��һ�ַǳ������;����

&���ǵ�ַ��������������ͱ�ʶ����һ���֡�

int & ָ����ָ��int������


������ָ��Ĳ�ͬ��
1. ���ø��ӽ�constָ�룬�����ڴ���ʱ���̳�ʼ����һ����ĳ�����������������ͽ�һֱЧ������

*/

int main_first_reference()
{
	int rats = 101;

	/*
	  ��������е�&��������ǵ�ַ����������ǽ�rodnets����������Ϊ int & ,��ָ��int���������á�
	  int &rodnets = rats; 


	*/
	int &rodnets = rats;  // rodents is a reference

	cout << "rats = " << rats;
	cout << ", rodnets = " << rodnets << endl;

	rodnets++;

	cout << "rats = " << rats;
	cout << ", rodnets = " << rodnets << endl;

	cout << "rats address = " << &rats;
	cout << "rodnets address = " << &rodnets;

	system("pause");
	return 0;

/*
���
rats = 101, rodnets = 101
rats = 102, rodnets = 102
rats address = 0022F72C rodnets address = 0022F72C

*/
}
