#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*
������󴫵ݸ�����ʱ��c++ͨ����������ʹ������

*/


string version1(const string & s1, const string & s2);

const string & version2(string & s1, const string & s2);

const string & version3(string & s1, const string & s2);

int main()
{
	string input;
	string copy;
	string result;

	cout << "Enter a string";
	getline(cin, input);

	copy = input;

	cout << "Your string as entered: " << input << endl;

	result = version1(input, "***");

	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string:" << input << endl;

	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string:" << input << endl;

	cout << "Resetting original string\n";
	input = copy;
	result = version3(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string:" << input << endl;

	system("pause");
	return 0;

}


string version1(const string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(const string & s1, const string & s2)
{
	s1 = s2 + s1 + s2;   //s1��const�����ã����ܱ��ı�ģ����������Ǵ�ĵ�
	return s1;
}


const string & version3(const string & s1, const string & s2)
{
	/*
	  �����һ��������ȱ�ݣ�����һ��ָ��version3()�������ı��������ã���������ܹ�ͨ�����룬
	  ����������ͼָ��ú���ʱ�������������˵����Ϊ��temp����������version3�ڣ�
	  result = version3(input, "###");��������ͼ�����Ѿ��ͷŵ��ڴ棨temp��version3ִ����֮���Ѿ��ͷ��ˣ�
	*/
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}