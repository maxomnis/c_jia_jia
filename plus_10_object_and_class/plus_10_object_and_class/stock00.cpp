#include "stdafx.h"
#include <iostream>
#include "stock00.h"


Stock::Stock(const std::string & co, long n, double pr)
{
	company_ = co;

	if (n < 0)
	{
		std::cerr << "Number of shares can't be negative;" << company_ << " shares set to 0.\n";
	}
	else {
		shares_ = n;
	}

	share_val_ = pr;
	set_tot();
}

void Stock::acquire(const std::string & co, long n, double pr)
{
	company_ = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;" << company_ << " shares set to 0.\n";
		shares_ = 0;
	}
	else {
		shares_ = n;
	}

	share_val_ = pr;
	set_tot();
}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares purchased cant't be negaive." << "Transation is aborted.\n";
	}
	else {
		shares_ += num;
		share_val_ = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if (num < 0)
	{
		cout << "Number of shares purchased cant't be negaive." << "Transation is aborted.\n";
	}
	else if (num > shares_)
	{
		cout<<"You can't sell more than you have!"<< "Transation is aborted.\n";
	}
	else {
		shares_ -= num;
		share_val_ = price;
		set_tot();
	}
}


void Stock::update(double price)
{
	share_val_ = price;
	set_tot();
}


void Stock::show()
{
	std::cout << "Company " << company_ << " Shares:" << shares_ << '\n' << " Share price:$" << share_val_
		<< " Total worth:$" << total_val_ << '\n';
}
