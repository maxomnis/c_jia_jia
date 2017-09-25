#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

/*
结构的使用
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

//定义的同时，声明变量类型
struct perks
{
	std::string name;
	float volume;
	double price;
} mr_simth, ms_jones;


//声明结构图类型的变量mr_glitz，通知初始化，不过这种方式可读性不好
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

	inflatable duck{}; //各个成员被置为零

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


	//结构数组
	inflatable gift[100];
	int a = 10;
	string test = "";
	cout << sizeof(gift) << endl;

	//结构体数组
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