// plus_11.cpp : �������̨Ӧ�ó������ڵ㡣
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
sum�������������ã����������Time sum���ھֲ��������ں�������ʱ����ɾ����
��������ý�ָ��һ������Ķ���ʹ�÷�������Time,��ζ�ų�����ɾ��sum֮ǰ
�������Ŀ��������ú������õ��ÿ�����
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
���ء�+�������
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
����"-"�����
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
 ����*�����
 
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
ʵ����Ԫ������ʵ�����治��Ҫ����friend
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
����"<<"�����

os������cout����, adjuested��t
*/
std::ostream & operator<< (std::ostream &os, const Time & t)
{
	os << "\n";
	os << "����<<�����\n";
	os << t.hours << " hours, " << t.minutes << " minutes";
	return os;
}


void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << " minutes";
}