#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

#include <vector>
#include <array>

using  namespace std;

int main()
{
	/*
	ģ����vector
	ģ����vector����string��Ҳ��һ�ֶ�̬���顣���������н׶�����vector����ĳ���
	������ĩβ�����µ����ݣ����������м�����µ����ݣ�����ʹ��new������̬����� ���Ʒ��
	ʵ���ϣ�vector��ȷʵʹ��new��delete�������ڴ棬�����ֹ������Զ���ɵġ�
	*/
	vector<int> vi;         //create a zero-size array of int
	vector<double> vd(10);  //create an array of 10 double

	/*
	ģ����array (c++ 11)
	vector��Ĺ��ܱ�����ǿ�󣬵������Ĵ�����Ч���Ե͡��������Ҫ���ǳ��ȹ̶������飬ʹ������
	�Ǹ��ѵ�ѡ�񣬵������ǲ���ô����Ͱ�ȫ���м��ڴˣ�c++11����ģ����array��
	������һ����array����ĳ����ǹ̶��ģ�Ҳʹ��ջ�����������ɴ洢���������Ч����������ͬ������
	���㣬����ȫ��Ҫ����array������Ҫ����ͷ�ļ�array��
	*/

	array<int, 5> ai;  //create array object of 5 ints
	array<double, 4> ad = {1.2, 2.1, 3.34, 4.3};


	//�Ƚ����飬vector����array����

	// c ,original C++
	double a1[4] = {1.2 ,2.4 , 3.6, 4.8};

	vector<double> a2(4);   //create vector with 4 elements
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;
	
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;

	a4 = a3;   //array ���ƣ��൱�������´�����һ���µ�Ԫ�أ���a3�����ݸ��Ƹ���a4,�������������,a3,a4�ĵ�ַ��һ��
	
	cout <<"a3 address"<< &a3 << endl;
	cout <<"a4 address"<< &a4 << endl;

	//use array notation
	cout << "a1[2]" << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]" << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]" << a4[2] << " at " << &a4[2] << endl;   //���

	// misdeed

	/*
	 �൱��*(a1-2) = 20.2;  �ҵ�a1ָ��ĵط�����ǰ�ƶ�����Ԫ�أ�����20.2�洢��Ŀ�ĵأ�Ҳ����˵����Ϣ�洢�����������,Խ���ˡ�
	 c������c++һ�������������Խ����� array,vector��at�������������ڼ䲶��Ƿ��������������Խ�����Ĭ�Ͻ��ж����У�
	 ����Ĵ��۾������е�ʱ�����
	*/
	a1[-2] = 20.1;
	cout << a3[1] << endl;
	a3.at(1) = 2.0;
	cout << a3[1] << endl;
	cout << a3.at(1000) << endl;


	cout << "a1[-2]" << a1[-2] << " at " << &a1[-2] << endl;
	cout << "a3[2]" << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]" << a4[2] << " at " << &a4[2] << endl;

	/*
	����������ݣ�
	a1[2]3.6 at 001BFC14
	a2[2]0.142857 at 004ED098
	a3[2]1.62 at 001BFBD4
	a4[2]1.62 at 001BFBAC
	a1[-2]20.1 at 001BFBF4
	a3[2]1.62 at 001BFBD4
	a4[2]1.62 at 001BFBAC

	���ȣ����������飬vector������array���󣬶�����ʹ�ñ�׼������������ʸ���Ԫ�ء�
	��Σ��ӵ�ַ��֪��array���������洢����ͬ���ڴ�����ջ���У���vector�洢����һ���������ɴ洢����ѣ��У�
	ע�⣬
	������ע�⵽���Խ�array���󸳸�����һ��array���󣻶��������飬������Ԫ�ظ������ݡ�

	*/

	system("pause");
	return 0;
}