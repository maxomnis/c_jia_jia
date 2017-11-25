#include "stdafx.h"
#include <iostream>
#include "stock10.h"

const int STKS = 4;

int main()
{
	//��������������û����ʾ���г�ʼ�����򽫵���Ĭ�Ϲ��캯�������������û���ṩ�κ�
	//���캯�������������Ϊ������һ��Ĭ�Ϲ��캯��;���򣬱����Լ��ṩĬ�Ϲ��캯��
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

	//ѭ���Ƚϣ��ҳ����ֵ
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