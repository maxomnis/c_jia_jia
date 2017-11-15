#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

/*

引用在结构体上的应用

*/


struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws  &ft);
void set_pc (free_throws &ft);
free_throws & accumulate(free_throws & target, const free_throws & source);


int main_reference_struct()
{
	free_throws one = {"Ifelsa Branch", 13, 14};
	free_throws two = { "Andor Knott", 10 ,16 };
	free_throws three = {"Minnie Max", 7, 9};
	free_throws four = {"Whily Looper", 6, 14};
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = {"Throwgoods", 0, 0};

	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);

	display(team);

	display(accumulate(team, two));

	accumulate(accumulate(team, three), four);

	display(team);

	dup = accumulate(team, five);

	system("pause");
	return 0;

}

void display(const free_throws & ft)
{

	cout << "Name: "  << ft.name << '\n';
	cout << "_Made: " << ft.made << '\t';
	cout << "Attempts" << ft.attempts << '\t';
	cout << "Percent" << ft.percent << '\t';

}

void set_pc(free_throws & ft)
{
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}

//返回的是个引用, accumulate是函数名
free_throws & accumulate(free_throws & target, const free_throws & source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}