// plus_01.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <climits>

using namespace std;

void simon(int);

int main(void)
{
	int age;
	/*simon(3);
	cout << "input age" << endl;
	cin >> age;
	cout << age << endl;
	cout << "hello";
	cout << "world";
	cout << endl;
	int count;
	cin >> count;
	simon(count);*/

	//cout << LONG_MAX << endl; //LONG���͵����ֵ
	//cout << LONG_MIN << endl;
	//cout << CHAR_BIT << endl;

	//c++11�µĳ�ʼ������ 
	//int hamburges = { 24 }; //set hamburges to 24,��ô�����������飬�ⷽ���е��������
	//int rheas = {12};  // set rheas to 12
	//int rocs = {};   // set rocs to 0
	//int psychics{};  // set psychics to 0
	//cout << psychics << endl;

	int chest = 42; //10���ƣ�����Ϊ10, 
	int waist = 0x42;  //��һλ��0x����0X�������Ϊ16 ,16���� ����0x42 =  4*16+2*1
	int inseam = 0425; // ��һλ��0���ڶ�λ��1~7, ������8���˽��� ��

	//Ĭ������£�cout��ʮ���Ƶĸ�ʽ��ʾ��������������Щ�����ڳ������������д�ģ���������ʮ���Ƶ�
	cout << chest << endl;
	cout << waist << endl;
	cout << inseam << endl;

	//ʮ����ת��������
	int t_chest = 42;
	int t_waist = 42;
	int t_inseam = 42;

	//cout<<hex�ȴ��벻������Ļ����ʾ�κ����ݣ���ֻ���޸�cout��ʾ�����ķ�ʽ
	cout << dec;  //ָʾcout��ʮ������ʾ����
	cout << t_chest << endl;

	cout << hex;  //ָʾcout��ʮ��������ʾ����
	cout << t_waist << endl;
	
	cout << oct;  //ָ��cout�԰˽�����ʾ����
	cout << t_inseam << endl;

 	int a=0;
	cout << a << endl;
	cin.get();
	cin.get();  //��һ��cin.get()��ȡ���룬����û�д����߼������������ټ�һ��get����ֹ���ڱ��ر�
    return 0;  //��д�ɲ�д����д�Ļ�����Ĭ�Ϸ����˵���0
}

void simon(int n)
{
	cout << "simon says touche your toes" << n << "times." << endl;
}

