#include "stdafx.h"
#include <iostream>

extern double warming;         //use warming form another file
extern float * p_fees;

// static int warming = 10;  //static ������������Ϊ��ǰ�ļ����������Ḳ�ǵ�ȫ�ֵ�������warming����


void update(double dt);
void local();

using namespace std;

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to" << warming;
	cout << " degres.\n";
}

void local()
{
	double warming = 0.8;       //new variable hides external one

	cout << "Local warming = " << warming << " degrees.\n";

	cout << "But global warming = " << ::warming;  // (::)�������������������ڱ�������ǰ�棬���������ʾʹ�ñ�����ȫ�ְ汾��
	cout << " degres.\n";

}