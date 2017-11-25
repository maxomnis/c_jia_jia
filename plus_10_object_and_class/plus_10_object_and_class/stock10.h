#pragma once
/*

�Ľ�Stock
*/

#ifndef STOCK10_H
#define STOCK10_H

#include <string>
using namespace std;

class Stock
{
private:
	std::string company_;         // private by default 
	long shares_;				 // private by default 
	double share_val_;
	double total_val_;
	void set_tot() {
		total_val_ = shares_*share_val_; 
	}

	//const int Month = 12; //�в�ͨ����Ϊ������ָ�������˶������ʽ����û�д���������˴�������֮ǰ����û�д����洢�Ŀռ�

	//���������ֳ����Ķ��巽ʽ��
	enum {Month = 12};				//�����Ķ���
	static const int Month = 12;	//�����Ķ���
	double consts[Month];			


	/*
	
	 enum egg {Small, Medium, Large, Jumbo};
	 enum t_shirt {Small, Medium, Large, Xlarge};

	 �⽫�޷�ͨ�����룬��Ϊegg Small, t_shirt Small λ����ͬ���������ڣ����ǽ�������ͻ��
	 Ϊ�����������⣬c++11�ṩ����ö�٣���ö������������Ϊ�ࡣ����ö��������������������
	 enum class egg {Small, Medium, Large, Jumbo};
	 enum class t_shirt {Small, Medium, Large, Xlarge};

	 Ҳ����ʹ��struct����class�ؼ���
	 enum struct t_shirt {Small, Medium, Large, Xlarge};
	*/
	enum class egg { Small, Medium, Large, Jumbo };
	enum class t_shirt { Small=0, Medium, Large, Xlarge };

public:
	Stock();		//default constructor  Ĭ�Ϲ��캯��
	Stock(const std::string & co, long n, double pr); //���캯��
	Stock(const std::string & co);

	~Stock();      //��������

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;                   //show()�� const��Ա�����������const����˼�Ǳ�֤����show()�����޸ĵ��ö���
	const Stock & topval(const Stock &s) const;


};

#endif // !STOCK10_H
