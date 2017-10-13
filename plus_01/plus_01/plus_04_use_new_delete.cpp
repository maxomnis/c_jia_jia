#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

int main_plus_04_use_new_delete()
{
	/*
	��c�����У�ʹ�ÿ⺯��malloc()�������ڴ棬��c+++����Ȼ������ô������c++���и��õķ�����new�����
	ָ������������֮�����ڣ����н׶η���δ�������ڴ��Դ洢ֵ
	*/
	int *pn = new int;

	cout << pn << endl;

	cout << *pn << endl;

	cout << sizeof(pn) << endl;
	cout << sizeof(*pn) << endl;

	int nights = 1001;
	int *pt = new int; //allocate space for an int
	*pt = 1001;		   //sotre a value there;

	cout << "night value = ";
	cout << nights << ": loaction " << &nights << endl;
	cout << "int";
	cout << "value = " << *pt << ":location =" << pt << endl;
	double *pd = new double; //allocate space for a double
	*pd = 10000001.0; //store a double there

	cout << "double ";
	cout << "value = " << *pd << "; location=" << pd << endl;
	cout << "location of pointer pd:" << &pd << endl;
	cout << "size of pt=" << sizeof(pt);
	cout << ":size of *pt=" << sizeof(*pt) << endl;
	cout << "size of pd=" << sizeof(pd);
	cout << ":size of *pd=" << sizeof(*pd) << endl;

	int *ps = new int; //allocate memory with new 

	/*
	delete �����
	��ʹ����ʹ�����ڴ���ܹ�����黹���ڴ�أ�����ͨ����Ч��ʹ���ڴ�Ĺؼ�һ�����黹���ͷŵ��ڴ�ɹ���������ʹ��.
	ʹ��deleteʱ���������ָ���ڴ���ָ��(��Щ�ڴ���������new�����)
	*/
	delete ps;  //ok
	/*
	 �⽫�ͷ�psָ����ڴ棬���ǲ���ɾ��ָ�뱾�����磬���Խ�ps����ָ����һ��������ڴ�顣һ��Ҫ��Ե�ʹ��new��delete
	 ���򽫷����ڴ�й©(memory leak),Ҳ����˵����������ڴ����޷�ʹ���ˡ�������أ���������ڲ���Ѱ�Ҹ�����ڴ����ֹ��
	 ��Ҫ�����ͷ��Ѿ��ͷ��˵��ڴ棬c++��׼ָ�����������Ľ���ǲ�ȷ���ģ�����ζ��ʲô������п��ܷ��������⣬����ʹ��
	 delete���ͷ�������������õ��ڴ�
	*/
	// delete ps; //not ok, ��Ϊps�Ѿ��ͷŹ���
	int jugs = 5;
	int *pi = &jugs;
	// delete pi;   //pi�Ǳ������ڴ棬����new�����,���Բ���ʹ��delete�ͷ�

	//ֻ��ʹ��delete���ͷ�ʹ��New������ڴ档Ȼ������ָ��ʹ��delete�ǰ�ȫ��

	/*
	  һ����˵����Ҫ��������ָ��ͬһ���ڴ���ָ�룬��Ϊ�⽫����

	  int *ps = new int;
	  int *pq = ps;
	  delete pq;
	*/

	/*
	 ���ͨ���������������飬���ڳ��򱻱���ʱ��Ϊ�������ڴ棬���ܳ��������Ƿ�ʹ�����飬���鶼�������ռ���ڴ档
	 �ڱ���ʱ�����������ڴ汻��Ϊ��̬����(static binding),��ζ���������ڱ���ʱ���뵽�����еġ���ʹ��newʱ�����
	 �����н׶���Ҫ���飬�򴴽������������Ҫ���򲻴������������ڳ�������ʱѡ������ĳ��ȡ����ֱ���Ϊ��̬���루
	 dynamic binding��,��ζ���������ڳ�������ʱ�����ġ���������ж�̬���顣ʹ�þ�̬����ʱ�������ڱ�д����ʱָ��
	 ����ĳ��ȣ�ʹ�ö�̬����ʱ������������ʱȷ������ĳ��ȡ�

	 ���Լ�����⣺
	 ���������psome[50000]�Ǿ�̬�����࣬Ҳ����˵����������ʼ������һֱ���ڣ�ֱ������������
	 �������int *psome = new int[10]�Ƕ�̬�����࣬���滹����delete�������ԣ����������
	*/
	//int psome[50000]; //��̬����


	int *psome = new int[10]; // ��̬���࣬ get a block of ints
	//new ��������ص�һ��Ԫ�صĵ�ַ����������У��õ�ַ������psomeָ��

	delete []psome;   //�ͷ����飬�ǵ��Ǹ�������

	/*
	�����Ÿ��߳���Ӧ�ͷ�������飬����������ָ��ָ���Ԫ�ء���ע��delete��ָ��֮��ķ����š�
	���ʹ��newʱ�����������ţ���ʹ��deleteʱ��Ҳ��Ӧ�ô������š����ʹ��Newʱ���˷����ţ���ʹ��
	deleteʱҲӦ�ô��Ϸ����š�
	*/

	double *p3 = new double[3];  //ָ����,p3ָ���������ĵ�һ��Ԫ�أ�Ҳ����p3[0]
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3��һ��Ԫ�ص�ֵ��,"<< *p3 << endl;  //*p3ָ��������ĵ�һ��Ԫ��
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;      //ָ���ֵ(ָ��ָ��ĵ�ַ)��1��ָ������һ��Ԫ��
	cout << "now p3[0] is " << p3[0] << "and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;      //��p3��1��ָ��ָ����ԭ���ĵ�ַ��p3������׵�ַ�������������Ը�delete[]�ṩ��ȷ�ĵ�ַ
	delete[]p3;

	system("pause");
	return 0;
}