#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

/*
�ṹ��ʹ��
*/
using namespace std;

struct inflatable
{
	std::string name;
	float volume;
	double price;
};

struct inflatable_bak
{
	std::string name;
	float volume;
	double price;
};

//�����ͬʱ��������������
struct perks
{
	std::string name;
	float volume;
	double price;
} mr_simth, ms_jones;


//�����ṹͼ���͵ı���mr_glitz��֪ͨ��ʼ�����������ַ�ʽ�ɶ��Բ���
struct perks2
{
	std::string name;
	float volume;
	double price;
} mr_glitz =
{
	"jack",
	10,
	200.0
};


int main()
{
	inflatable guest = 
	{
		"glorious gloria",
		1.88,
		29.99
	};

	inflatable pal = 
	{
		"audaciour arthur",
		3.12,
		32.99
	};

	inflatable duck{}; //������Ա����Ϊ��

	cout << "expand your guest list with" << guest.name;
	cout << " and " << pal.name << "!\n";

	cout << "you can have both for $";
	cout << guest.price + pal.price << ".\n";

	duck = guest;

	cout << " duck.name " << duck.name << endl;
	cout << " duck.price " << duck.price << endl;
	duck.price = 100;
	duck.name = "f";
	cout << " duck.price " << duck.price << endl;
	cout << " guest.price " << guest.price << endl;


	//�ṹ����
	inflatable gift[100];
	int a = 10;
	string test = "";
	cout << sizeof(gift) << endl;

	//�ṹ������
	inflatable guests[2] =
	{
		{"bambi", 0.5, 21.99},
		{"godzilla", 200, 222.22}
	};

	cout << guests[0].name << endl;
	cout << guests[0].volume << endl;
	cout << guests[0].price << endl;




	system("pause");
	return 0;
}