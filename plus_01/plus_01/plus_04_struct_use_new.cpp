#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

char *getname(void);

/*
ӡ��ʼǱ����������ŵ���ϸ��ͼ��̫���˾Ͳ�д��
*/
struct inflatable
{
	char name[20];
	float volume;
	double price;
};


int main()
{
	/*
	c++������ָ���ṹ��Աʱ���㲻�����ʱӦʹ�þ�����������ʱӦʹ�ü�ͷ�������
	����ṹ��ʶ���ǽṹ������ʹ�þ��������������ʶ����ָ��ṹ���ָ�룬��
	ʹ�ü�ͷ�����
	*/
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable item:";
	cin.get(ps->name, 20);

	cout << "Enter volume in cubic feet:";
	cin >> (*ps).volume;

	cout << "Enter price:$";
	cin >> ps->price;

	cout << "Name:" << (*ps).name << endl;
	cout << "Volumn:" << ps->volume << endl;
	cout << "Price:$" << ps->price << endl;
	delete ps;


	char *name;
	name = getname();
	cout << name << " at " << (int *)name << "\n";
	delete []name;  //�ͷ�ָ��ָ�������
	 
	name = getname();  //��ָ��name���¸�ֵ
	cout << name << " at " << (int *)name << "\n";
	delete[]name;

	system("pause");
	return 0;
}


char *getname()
{
	/*
	
	����ʹ�÷�����̫�ã���Ϊ�ú���������new������ȴû��delete�������������delete�����ײ����ڴ�й¶������ָ����������ڽ���������
	*/
	char temp[80];
	cout << "Enter last name:";
	cin >> temp;
	char *pn = new char[strlen(temp)+1];
	strcpy(pn, temp);
	return pn;
}