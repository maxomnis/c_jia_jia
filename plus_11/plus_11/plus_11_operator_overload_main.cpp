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

	//������������صġ�+������
	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	Time morefixing(3, 28);
	cout << "more fixing time=";
	morefixing.Show();
	cout << endl;

	//Ҳ�ǵ�����������صġ�+������ ��������������ص��÷�
	total = morefixing.operator+(total);

	cout << "morefixing.operator+(total) =";
	total.Show();
	cout << endl;

	Time weeding(4, 35);
	Time waxing(2, 47);
	diff = weeding - waxing;		//�������������"-"
	cout << "weeding time - waxing time=";
	diff.Show();
	cout << endl;


	adjuested = total*1.5;			//�������������"*", ����total���ǵ��ö������д��1.5 *total�ᱨ��,��Ԫ����
	adjuested = total.operator*(1.5); //����д����ͬ
	cout << "adjuested work time =";
	adjuested.Show();

	adjuested = 100 * total;	  //ʹ����Ԫ������ʹ��֧�� 1.5*total����д��
	cout << "adjuested work time =";
	adjuested.Show();

	cout << endl;

	cout << adjuested<<" tuesday\n";			  //��һ��<<��������õ������������"<<"�� �ڶ���<<��������õ���osteam���������

	system("pause");
	return 0;
	
}