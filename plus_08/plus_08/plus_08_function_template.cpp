#include "stdafx.h"
#include <iostream>

/*
 ����ģ��
*/
using namespace std;


struct job
{
	char name[40];
	double slary;
	int floor;
};


//���ڸ����ĺ������������з�ģ�庯����ģ�庯������ʽ���廯ģ�庯���Լ����ǵ����ذ汾

//��ģ�庯��
//void Swap(job &, job &);

// ģ�庯��
template <typename T>  // or <class T> c++98�汾ʹ�õ���class�ؼ���
void Swap(T &a, T &b);

//explicit specialization for the job type ;;��ʽ���廯ģ�庯�������ĽУ�������ģ�岻����������ĳЩ�������ͣ�����ṹ��������ĳЩ����ֵ�Ľ���
template <> void Swap<job>(job &j1, job &j2);   //Ҳ����template <>  void Swap(job &, job &); ����д��ȥ��Swap�����<job>


/*

	����и����ԭ�ͣ����������ѡ��ԭ��ʱ����ģ��汾��������ʾ���廯��ģ��汾��
	����ʾ���廯������ʹ��ģ�����ɵİ汾��
*/


//����ģ��
template <typename T>
void Swap(T *a, T *b, int n);

void Show(int a[]);
void Show(job &j);

const int Lim = 8;


int main()
{

	cout.precision(7);  //���ø������ľ�ȷλ��

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



template <typename T>       //����ֵ�д����ΪʲôҪд����
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