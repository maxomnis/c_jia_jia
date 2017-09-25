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

	//如果输入的是"jack",下面将 
	cout << "howdy, i'm" << name2;
	cout << "!what's your name?\n";
	cin >> name1;
	cout << "well," << name1 << ",your name has ";
	cout << strlen(name1) << " letter and is stored\n";   // 输出4，strlen计算的是可见的字符串，而不把空字符串计算在内
	cout << "in an array of " << sizeof(name1) << "bytes.\n";
	cout << "your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << " here are first 3 characters of my name:";
	cout << name2 << endl;
	// name1 = name2;  //不能将一个数组赋值给另外一个数组的

	string s1 = "penguin";
	string s2, s3;

	cout << "you can assign one string object to another :s2 = s1 \ n";
	s2 = s1;      //string是可以的，所以这里是与char[]类型的字符串的区别

	string str1;
	string str2 = "panter";
	str1 = str2;
	cout << str1 << endl;

	str1 += " hello ";    //c++的string类型是可以直接相加的
	cout << "the string " << str1<<endl;


	cout << R"(Jim "king" tutt uses "\n") instead of endl.)"<<'\n';  //c++新增的另外一种类型的字符串，原始字符串，在原始字符串里面，字符表示的就是自己

	system("pause");
	return 0;
}