#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

using namespace std;

int main_4()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++Owboy";

	//����������"jack",���潫 
	cout << "howdy, i'm" << name2;
	cout << "!what's your name?\n";
	cin >> name1;
	cout << "well," << name1 << ",your name has ";
	cout << strlen(name1) << " letter and is stored\n";   // ���4��strlen������ǿɼ����ַ����������ѿ��ַ�����������
	cout << "in an array of " << sizeof(name1) << "bytes.\n";
	cout << "your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << " here are first 3 characters of my name:";
	cout << name2 << endl;
	// name1 = name2;  //���ܽ�һ�����鸳ֵ������һ�������

	string s1 = "penguin";
	string s2, s3;

	cout << "you can assign one string object to another :s2 = s1 \ n";
	s2 = s1;      //string�ǿ��Եģ�������������char[]���͵��ַ���������

	string str1;
	string str2 = "panter";
	str1 = str2;
	cout << str1 << endl;

	str1 += " hello ";    //c++��string�����ǿ���ֱ����ӵ�
	cout << "the string " << str1<<endl;


	cout << R"(Jim "king" tutt uses "\n") instead of endl.)"<<'\n';  //c++����������һ�����͵��ַ�����ԭʼ�ַ�������ԭʼ�ַ������棬�ַ���ʾ�ľ����Լ�

	system("pause");
	return 0;
}