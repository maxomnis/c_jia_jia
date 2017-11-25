#pragma once

// stock00.h  Stock class interface
// version0 0
#ifndef  STOCKOO_H_
#define  STOCKOO_H_

#include <string>

class Stock			//class declaration
{

private:
	
	// 不必在类声明中使用关键字private，因为这是类对象的默认访问控制，（php默认的是public）
	// 成员名一般是在前面加上 m_ 比如m_shares 或者在后面加上 "_"
	std::string company_;         // private by default 
	long shares_;				 // private by default 
	double share_val_;
	double total_val_;
	void set_tot();


public:
	Stock(const std::string & co, long n, double pr);
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};


inline void Stock::set_tot()           //use inline in definition
{
	total_val_ = shares_*share_val_;
}

#endif // ! STOCKOO_H_

