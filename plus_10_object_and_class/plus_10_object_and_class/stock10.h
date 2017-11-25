#pragma once
/*

改进Stock
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

	//const int Month = 12; //行不通，因为声明类指数描述了对象的形式，并没有创建对象。因此创建对象之前，并没有创建存储的空间

	//下面是两种常量的定义方式：
	enum {Month = 12};				//常量的定义
	static const int Month = 12;	//常量的定义
	double consts[Month];			


	/*
	
	 enum egg {Small, Medium, Large, Jumbo};
	 enum t_shirt {Small, Medium, Large, Xlarge};

	 这将无法通过编译，因为egg Small, t_shirt Small 位于相同的作用域内，它们将发生冲突，
	 为避免这种问题，c++11提供了新枚举，其枚举量的作用域为类。这种枚举声明类似下面这样：
	 enum class egg {Small, Medium, Large, Jumbo};
	 enum class t_shirt {Small, Medium, Large, Xlarge};

	 也可以使用struct代替class关键字
	 enum struct t_shirt {Small, Medium, Large, Xlarge};
	*/
	enum class egg { Small, Medium, Large, Jumbo };
	enum class t_shirt { Small=0, Medium, Large, Xlarge };

public:
	Stock();		//default constructor  默认构造函数
	Stock(const std::string & co, long n, double pr); //构造函数
	Stock(const std::string & co);

	~Stock();      //析构函数

	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show() const;                   //show()是 const成员函数；这里的const的意思是保证函数show()不会修改调用对象
	const Stock & topval(const Stock &s) const;


};

#endif // !STOCK10_H
