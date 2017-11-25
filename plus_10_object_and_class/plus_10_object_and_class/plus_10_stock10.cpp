#include "stdafx.h"
#include <iostream>
#include "stock10.h"


//Ĭ�Ϲ��캯��û�в�������������������û����ʾ���г�ʼ�����򽫵���Ĭ�Ϲ��캯�������������û���ṩ�κ�
//���캯�������������Ϊ������һ��Ĭ�Ϲ��캯��;���򣬱����Լ��ṩĬ�Ϲ��캯����Ĭ�Ϲ��캯������û���κ�
//����������У����������в����ṩĬ��ֵ

Stock::Stock() {
	//  ��ȻStock::Stock() {}  ����Ĭ�Ϲ��캯����ʽҲ���ԣ�������ø���Ĭ��ֵ
	company_ = "no name";
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

Stock::Stock(const std::string &cp) {
	//  ��ȻStock::Stock() {}  ����Ĭ�Ϲ��캯����ʽҲ���ԣ�������ø���Ĭ��ֵ
	company_ = cp;
	shares_ = 0;
	share_val_ = 0.0;
	total_val_ = 0.0;
}

//���캯������ͬ��,���캯��û�з���ֵ������Ҳ��������Ϊvoid
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


//�������� ,�������κβ���;ÿ����ֻ����һ��������������������û�з������ͣ���void��û�У�Ҳû�в���
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
�Ƚ�total_val_���ҳ������Ǹ�
*/
const Stock & Stock::topval(const Stock & s) const
{
	// TODO: �ڴ˴����� return ���
	if (s.total_val_ > total_val_)
	{
		return s;
	}
	else {
		return *this;			// this��ָ��ǰ����ĵ�ַ����*thisָ��ǰ������
	}
}

int Stock::print_enum()
{
	t_shirt Floyd = t_shirt::Small;
	return Floyd;

}

