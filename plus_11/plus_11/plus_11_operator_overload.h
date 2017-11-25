#pragma once
#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time
{
private:
	int hours;
	int minutes;

public:
	Time();
	Time(int h, int m=0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time Sum(const Time & t) const;
	Time Time::operator+ (const Time & t) const;  //重载+号
	Time Time::operator- (const Time &t) const;   //重载-号
	Time Time::operator* (double n) const;		  //重载*号

	
	/*
		非成员函数不是由对象调用的，它使用的所有值（包括对象）都是显示参数。
		但是非成员函数又不能访问类的私有变量，所以才有了友元函数。友元函数能访问类的私有变量
	*/
	friend Time operator*(double m, const Time & t); //

	friend std::ostream & operator<<(std::ostream & os, const Time &t);	//重载"<<"运算符
	void Show() const;


};
#endif // !MYTIME0_H_


