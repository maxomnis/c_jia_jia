#include "stdafx.h"
#include <iostream>

int main()
{

	/*
		��const intָ��ָ�����������ʹ��pt�޸ı���age��ֵ�����ǿ���ͨ��age�������޸�age��ֵ�����ǿ��Ըı�pt������ֵ
	*/
	int age = 39;
	const int *pt = &age; 

	int age2 = 89;
	pt = &age2;   //��Ȼpt�ǳ���ָ�룬���ǿ��Ըı�����ֵ������ptָ����age2����ҪŪ���������ָ����ָ���ܸı���ָ���ֵ��������ָָ�뱾���ֵ��


	int sloth = 3;

	//ps�������޸�sloth��ֵ��������psָ������һ��λ�á�
	const int *ps = &sloth;

	//ע��finger�������ps��const��λ�õĲ�ͬ��fingerֻ��ָ��sloth������ʹ��finger���޸�sloth��ֵ��
	int *const finger = &sloth;  
	int bb = 10;
	// finger = &bb;   //����finger��constָ�룬���ܸı���ָ���λ��


	/*
		��const�����ĵ�ַ����ָ��const��ָ��
	*/
	const float g_earth = 9.80;
	const float *pe = &g_earth;

	/*
	  ��const�ĳ������������ָ���ǲ��е�

	  const float g_moom = 1.84;
	  float *pm = &g_moom;
	*/
	

	/*
	 ��ָ���������Ϊ����ָ������ɣ�
	 1. �������Ա���������޸������ݶ����µı�̴���
	 2. ʹ��constʹ�ú����ܹ�����const�ͷ�constʵ�Σ���������ʵ����ptָ����age������������ֻ�ܽ��ܷ�const�����ݡ�
	*/



}