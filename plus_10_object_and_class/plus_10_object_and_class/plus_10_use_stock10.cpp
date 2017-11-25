#include "stdafx.h"
#include <iostream>
#include "stock10.h"     //��stock10.h ����stock00.hŶ

int main_stock10()
{
	{   //��һ�����Ż�ǿ��ʹ���������������ȥ��������ŵĻ����������������ݾͲ���ӡ�ˣ���֪��Ϊë

		using std::cout;
		
		//����һ��Stock���󣬲����丳��ָ��pstock
		Stock *pstock = new Stock("Electroshock Games", 18, 19.0);
		pstock->show();

		cout << "Using constructors to create new objects\n";

		//��ʽ���ù��캯��
		Stock stock1("NanoSmart", 12, 20.0);
		stock1.show();

		// ��ʾ�ĵ��ù��캯��
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
		stock2.show();



		// c++11�б��ʼ������ʼ���࣬�����ù��췽��
		Stock hot_tip = { "Derivatives Plus plus", 100, 45.0 };
		Stock jock { "Sport Age Storge, Inc" };
		Stock temp{};


		//����δ��ʼ���Ķ��󣬳���ʹ��Ĭ�Ϲ��캯��������
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