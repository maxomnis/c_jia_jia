#include "stdafx.h"
#include <iostream>

using namespace std;


template <typename T1, typename T2>
void ft(T1 x, T2 y)
{
	/*
	这里的type应该为什么数据类型，由于不知道ft将如何使用，因此无法预知。正确的可能是T1,T2或其他类型。
	例如， T1可能是double, 而T2可能是int，这种情况下，两种变量的和将为double
	*/
	//? type ? xpy = x + y;  

	/*
	关键字 decltype （c++11）可以解决上述问题
	
	*/
	decltype(x + y) xpy = x + y;
}

//template <typename T1, typename T2>
//? type ? gt(T1 x, T2 x)   //这里的type应该是什么类型？显然，decltype已经不适合了decltype(x+y)这里的x,y已经不在作用域里了
//{
//	return x+y;
//}

// auto h(int x ,float y) ->double  这里的->double 被称为后置返回类型，auto是一个占位符，表示后置返回类型。这是c++11给auto新增的一种角色

template <typename T1, typename T2>
auto gt(T1 x, T2 y) ->decltype(x+y)   //所以根据后置返回类型，gt可以这样改造
{
	return x + y;
}

int main()
{
	
}