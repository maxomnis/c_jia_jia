#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

int main3()
{
	//��ʼ���͸�ֵ���е�ת��
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);  //��int���͵���һ���࣬Ȼ��3.9832��ʼ����c11������
	int debt = 7.2E12;  //������Int���͵����ֵ
	cout << "tree" << tree << endl;  //���3.000000
	cout << "guess" << guess << endl; //���3
	cout << "debt" << debt << endl; //���1634811904����ͬ�����������ֵ��һ��
	system("pause");
	return 0;
}