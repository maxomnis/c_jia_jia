#include "stdafx.h"
#include <iostream>
using namespace std;


double warming = 0.3;          //������Ϊ�ⲿ�ľ�̬������������ʵ����ȫ�ֱ���
// external warming = 0.3;  externalȥ��Ҳ���ԣ�������ı�����Ч������ȫ�ֱ�����

const int fingers = 10;     //const ȫ�ֱ�����������Ϊ�ڲ���Ҳ����˵ֻ���ڵ�ǰ�ļ�ʹ�ã���staticһ��

/*

�ڶ��ļ������У�������һ���ļ�����ֻ����һ���ļ����ж���һ���ⲿ������ʹ�øñ����������ļ�
����ʹ�ùؼ���extern������

*/


float * p_fees = new float[20];


void update(double dt);

void local();

int main_param()
{
	cout << "Global warming is " << warming << "degrees.\n";
	update(0.1);

	cout << "Global warming is " << warming << "degrees.\n";
	local();

	cout << "Global warming is " << warming << "degrees.\n";

	cout << "fingers = " << fingers << endl;
	system("pause");
	return 0;
}

