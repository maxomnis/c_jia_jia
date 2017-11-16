#include "stdafx.h"
#include <iostream>

/*
 函数模板
*/
using namespace std;


struct job
{
	char name[40];
	double slary;
	int floor;
};


//对于给定的函数名，可以有非模板函数，模板函数和显式具体化模板函数以及他们的重载版本

//非模板函数
//void Swap(job &, job &);

// 模板函数
template <typename T>  // or <class T> c++98版本使用的是class关键字
void Swap(T &a, T &b);

//explicit specialization for the job type ;;显式具体化模板函数（中文叫），函数模板不能用来处理某些数据类型，比如结构体的里面的某些属性值的交换
template <> void Swap<job>(job &j1, job &j2);   //也可以template <>  void Swap(job &, job &); 这样写，去掉Swap后面的<job>


/*

	如果有个多个原型，则编译器在选择原型时，非模板版本优先于显示具体化和模板版本，
	而显示具体化优先于使用模板生成的版本。
*/


//重载模板
template <typename T>
void Swap(T *a, T *b, int n);

void Show(int a[]);
void Show(job &j);

const int Lim = 8;


int main()
{

	cout.precision(7);  //设置浮点数的精确位数

	cout.setf(ios::fixed, ios::floatfield);

	int i = 10;
	int j = 20;

	cout << "i,j=" << i << ", " << j << endl;

	cout << "Using complier-generated int swapper:\n";
	Swap(i, j);

	cout << "Now, i,j = " << i << ", " << j << endl;


	double x = 24.5;
	double y = 81.7;

	cout << "x,y" << x << ", " << y << endl;
	cout << "Using complier-generated int swapper:\n";
	Swap(x, y);
	cout << "Now, x,y = " << x << ", " << y << endl;

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,0,6,9};

	cout << "Original arrays:\n";

	Show(d1);
	Show(d2);

	Swap(d1, d2, Lim);

	cout << "Swapped arrays:\n";

	Show(d1);
	Show(d2);

	job sue = {"Susan Yaffee", 73000.60, 7};
	job sidney = {"Sidney Taffee", 78060.72, 9};

	cout << "Before job swapping:\n";

	
	Show(sue);
	Show(sidney);

	Swap(sue, sidney);   //use void Swap<job> (job &, job&);

	cout << "After job swapping\n";
	Show(sue);
	Show(sidney);

	system("pause");
	return 0;
}



template <typename T>       //好奇怪的写法，为什么要写两次
void Swap(T &a, T &b)       //general version
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}


template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}


template <> void Swap<job>(job &j1, job &j2)
{
	double t1;
	int t2;

	t1 = j1.slary;
	j1.slary = j2.slary;
	j2.slary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}



void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";

	for (int i = 4; i < Lim; i++)
	{
		cout << a[i];
	}

	cout << endl;
}


void Show(job & j)
{
	cout << j.name << ":$" << j.slary << " On floor " << j.floor << endl;
}