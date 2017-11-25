#include "stdafx.h"
#include <iostream>
#include "stock10.h"

const int STKS = 4;

int main()
{
	//因此如果创建对象没有显示进行初始化，则将调用默认构造函数，如果程序中没有提供任何
	//构造函数，则编译器会为程序定义一个默认构造函数;否则，必须自己提供默认构造函数
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};

	std::cout << "Stock holding:\n";
	int st;
	for (st = 0; st < STKS; st++)
	{
		stocks[st].show();
	}

	//循环比较，找出最大值
	const Stock *top = &stocks[0];
	for (st = 1; st < STKS; st++)
	{
		top = &top->topval(stocks[st]);
	}
	std::cout << "\n Most valuable holding:\n";
	top->show();
	system("pause");

	return 0;
}