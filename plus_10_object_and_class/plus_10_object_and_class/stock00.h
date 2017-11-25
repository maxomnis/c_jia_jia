#pragma once

// stock00.h  Stock class interface
// version0 0
#ifndef  STOCKOO_H_
#define  STOCKOO_H_

#include <string>

class Stock			//class declaration
{

private:
	
	// ��������������ʹ�ùؼ���private����Ϊ����������Ĭ�Ϸ��ʿ��ƣ���phpĬ�ϵ���public��
	// ��Ա��һ������ǰ����� m_ ����m_shares �����ں������ "_"
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

