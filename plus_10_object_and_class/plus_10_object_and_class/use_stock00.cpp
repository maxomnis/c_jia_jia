#include "stdafx.h"
#include <iostream>
#include "stock00.h"

int main_stock00()
{
	//c++提供了两种使用构造函数来初始化对象的方式
	//1. 显示的调用构造函数
	Stock food = Stock("Word Cabbage", 250, 1.25);
	food.show();

	//2. 隐式的调用构造函数
	Stock garment("Furry Mason", 50, 2.5);
	//等价于 Stock garmen = Stock("Furry Mason", 50, 2.5);
	garment.show();

	

	





}
