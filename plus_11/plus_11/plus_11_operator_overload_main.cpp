#include "stdafx.h"
#include <iostream>
#include "plus_11_operator_overload.h"

int main()
{
	using std::cout;
	using std::endl;

	Time planning;

	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	Time diff;
	Time adjuested;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time =";
	coding.Show();
	cout << endl;

	cout << "fixing time =";
	fixing.Show();
	cout << endl;

	//调用运算符重载的“+”符号
	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "more fixing time=";
	morefixing.Show();
	cout << endl;

	//也是调用运算符重载的“+”符号 ，两种运算符重载的用法
	total = morefixing.operator+(total);

	cout << "morefixing.operator+(total) =";
	total.Show();
	cout << endl;

	Time weeding(4, 35);
	Time waxing(2, 47);
	diff = weeding - waxing;		//调用重载运算符"-"
	cout << "weeding time - waxing time=";
	diff.Show();
	cout << endl;


	adjuested = total*1.5;			//调用重载运算符"*", 左侧的total才是调用对象，如果写成1.5 *total会报错,友元函数
	adjuested = total.operator*(1.5); //两种写法相同
	cout << "adjuested work time =";
	adjuested.Show();

	adjuested = 100 * total;	  //使用友元函数，使其支持 1.5*total这种写法
	cout << "adjuested work time =";
	adjuested.Show();

	cout << endl;

	cout << adjuested<<" tuesday\n";			  //第一个<<运算符调用的是重载运算符"<<"， 第二个<<运算符调用的是osteam的输出对象

	system("pause");
	return 0;
	
}