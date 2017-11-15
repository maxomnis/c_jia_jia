#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*
将类对象传递给函数时，c++通常的做法是使用引用

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
	s1 = s2 + s1 + s2;   //s1是const的引用，不能被改变的，所以这里是错的的
	return s1;
}


const string & version3(const string & s1, const string & s2)
{
	/*
	  这存在一个致命的缺陷，返回一个指向version3()中声明的变量的引用，这个函数能够通过编译，
	  但当程序试图指向该函数时将奔溃，具体的说是因为，temp的作用域是version3内，
	  result = version3(input, "###");，函数试图引用已经释放的内存（temp在version3执行完之后，已经释放了）
	*/
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}