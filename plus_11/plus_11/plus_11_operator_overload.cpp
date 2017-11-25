// plus_11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "plus_11_operator_overload.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time(int h, int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}


void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h, int m)
{
	hours = h;
	minutes = m;
}

/*
sum返回类型是引用，但是下面的Time sum属于局部变量，在函数结束时将被删除，
、因此引用将指向一个不存的对象。使用返回类型Time,意味着程序将在删除sum之前
构造它的拷贝，调用函数将得到该拷贝。
*/

Time Time::Sum(const Time &t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

/*
重载”+“运算符
*/
Time Time::operator+ (const Time & t) const
{
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

/*
重载"-"运算符
*/
Time Time::operator-(const Time & t) const
{
	Time diff;
	int tot1, tot2;

	tot1 = t.minutes + 60 * t.hours;
	tot2 = minutes + 60 * hours;

	diff.minutes = (tot2 - tot1) % 60;
	diff.hours = (tot2 - tot1) / 60;
	return diff;
}

/*
 重载*运算符
 
 */
Time Time::operator*(double mult) const
{
	Time result;
	long totalminutes = hours*mult + minutes*mult;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}


/*
实现友元函数，实现里面不需要加上friend
*/
Time operator*(double m, const Time & t)
{
	Time result;
	long totalminutes = t.hours * m * 60 + t.minutes*m;
	result.hours = totalminutes / 60;
	result.minutes = totalminutes % 60;
	return result;
}

/*
重载"<<"运算符

os引用了cout对象, adjuested是t
*/
std::ostream & operator<< (std::ostream &os, const Time & t)
{
	os << "\n";
	os << "重载<<运算符\n";
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}


void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}