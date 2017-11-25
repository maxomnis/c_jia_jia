#include "stdafx.h"
#include <iostream>
#include "stock10.h"


//默认构造函数没有参数，因此如果创建对象没有显示进行初始化，则将调用默认构造函数，如果程序中没有提供任何
//构造函数，则编译器会为程序定义一个默认构造函数;否则，必须自己提供默认构造函数。默认构造函数可以没有任何
//参数；如果有，则必须给所有参数提供默认值

Stock::Stock() {
	//  虽然Stock::Stock() {}  这种默认构造函数方式也可以，但是最好给个默认值
	company_ = "no name";
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

Stock::Stock(const std::string &cp) {
	//  虽然Stock::Stock() {}  这种默认构造函数方式也可以，但是最好给个默认值
	company_ = cp;
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

//构造函数与类同名,构造函数没有返回值，并且也不能声明为void
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


//析构函数 ,不能有任何参数;每个类只能有一个析构函数，析构函数没有返回类型，连void都没有；也没有参数
Stock::~Stock()
{
	std::cout << "Bye, " << company_ << "\n!";
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
		cout << "You can't sell more than you have!" << "Transation is aborted.\n";
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



void Stock::show() const
{
	std::cout << "Company " << company_ << " Shares:" << shares_ << '\n' << " Share price:$" << share_val_
		<< " Total worth:$" << total_val_ << '\n';
}

/*
比较total_val_，找出最大的那个
*/
const Stock & Stock::topval(const Stock & s) const
{
	// TODO: 在此处插入 return 语句
	if (s.total_val_ > total_val_)
	{
		return s;
	}
	else {
		return *this;			// this是指向当前对象的地址；而*this指向当前对象本身
	}
}

int Stock::print_enum()
{
	t_shirt Floyd = t_shirt::Small;
	return Floyd;

}

