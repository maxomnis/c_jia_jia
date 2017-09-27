#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	//枚举 red=0, orange = 1,blue = 4，以此类推
	enum spectrum {red , orange, yellow, green, blue, violet, indigo, ultraviolet};

	spectrum band;

	band = blue; // valid ,blue is an enumerator 
	//++band; //not valid 
	//band = 2000; // invalid , 2000 not an enumerator
	//band = orange + red;// no valid

	cout << band << endl;
	cout << orange + red << endl;


	band = spectrum(3); //如果int值是有效的，则可以通过强制类型转换，将它赋给枚举变量
	band = spectrum(200);//如果试图对一个不适当的值进行强制类型转换，将出现什么情况呢，结果是不确定的，这以为着这样做不会出错，但是不能依赖这个结果
	cout << band << endl;

	enum bits {one=1, tow=2, four = 4, eight = 8};

	enum bigstep {first, second = 100, third};
	cout << first << endl;  //first=0
	cout << third << endl;  //third=101

	enum test { zero,  null = 0, one3, numero_uno = 1 }; 
	cout << zero << endl;
	cout << one << endl;

	/*
	枚举的取值范围
	对于枚举来说，只有声明中指出的那些范围才是有效的，然而，c++现在通过强制类型转换，增加了
	可赋给枚举变量合法的值，每个枚举都有个取值范围，通过强制类型转换，可以将取值范围中的任何
	整数值赋给枚举变量，即使这个值不少枚举值
	*/
	bits myflag;
	myflag = bits(6);


	system("pause");
	return 0;
}