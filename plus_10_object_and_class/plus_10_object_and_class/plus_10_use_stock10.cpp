#include "stdafx.h"
#include <iostream>
#include "stock10.h"     //是stock10.h 不是stock00.h哦

int main_stock10()
{
	{   //这一层括号会强制使用析构函数，如果去掉这层括号的话，析构函数的内容就不打印了；不知道为毛

		using std::cout;
		
		//创建一个Stock对象，并将其赋给指针pstock
		Stock *pstock = new Stock("Electroshock Games", 18, 19.0);
		pstock->show();

		cout << "Using constructors to create new objects\n";

		//隐式调用构造函数
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();

		// 显示的调用构造函数
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();



		// c++11列表初始化来初始化类，并调用构造方法
		Stock hot_tip = { "Derivatives Plus plus", 100, 45.0 };
		Stock jock { "Sport Age Storge, Inc" };
		Stock temp{};


		//对于未初始化的对象，程序将使用默认构造函数来创建
		Stock bubi;				//use default
		Stock *pb = new Stock;  //use default

		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;

		cout << "Listing stock1 and stock2:\n";
		
		stock1.show();
		stock2.show();




		cout << "Using a constructor to reset an object\n";

		stock1 = Stock("Nifty Foods", 10, 50.0);
		cout << "Revised stock1:\n";
		stock1.show();


		const Stock land = Stock("Kludgehorn Properties");
		land.show();

		cout << "Done\n";
	}

	system("pause");
	return 0;
}