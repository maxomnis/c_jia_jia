#include "stdafx.h"
#include <iostream>

using namespace std;


template <typename T1, typename T2>
void ft(T1 x, T2 y)
{
	/*
	�����typeӦ��Ϊʲô�������ͣ����ڲ�֪��ft�����ʹ�ã�����޷�Ԥ֪����ȷ�Ŀ�����T1,T2���������͡�
	���磬 T1������double, ��T2������int����������£����ֱ����ĺͽ�Ϊdouble
	*/
	//? type ? xpy = x + y;  

	/*
	�ؼ��� decltype ��c++11�����Խ����������
	
	*/
	decltype(x + y) xpy = x + y;
}

//template <typename T1, typename T2>
//? type ? gt(T1 x, T2 x)   //�����typeӦ����ʲô���ͣ���Ȼ��decltype�Ѿ����ʺ���decltype(x+y)�����x,y�Ѿ���������������
//{
//	return x+y;
//}

// auto h(int x ,float y) ->double  �����->double ����Ϊ���÷������ͣ�auto��һ��ռλ������ʾ���÷������͡�����c++11��auto������һ�ֽ�ɫ

template <typename T1, typename T2>
auto gt(T1 x, T2 y) ->decltype(x+y)   //���Ը��ݺ��÷������ͣ�gt������������
{
	return x + y;
}

int main()
{
	
}