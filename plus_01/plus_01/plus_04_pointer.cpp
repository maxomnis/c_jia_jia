#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int donuts = 6;
	double cpus = 4.5;
	
	cout << "donuts value=" << donuts;
	cout << "and donuts address=" << &donuts << endl;

	cout << "cpus value=" << cpus;
	cout << "and cpus address=" << &cpus << endl;


	int updates = 6;
	int *p_updates; // *���������Ϊ���ֵ�������������, һ��int���͵�ָ�룬 *p_updates��ֵ�ǣ�����ָ��ı�����ֵ�� p_updates��ֵ������ָ��ı������ڴ��ַ
	p_updates = &updates;  // &ȡ��ַ�����

	cout << "values :update = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "address:&updates = " << &updates;		//
	cout << ", p_udpates =" << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;

	// һ��Ҫ�ڶ�ָ��Ӧ�ý�������������*��֮ǰ����ָ���ʼ��Ϊһ��ȷ���ģ��ʵ��ĵ�ַ������һ������ʹ��ָ��Ľ������

	system("pause");
	return 0;
}