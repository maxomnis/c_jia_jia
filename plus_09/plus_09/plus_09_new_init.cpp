#include "stdafx.h"
#include <iostream>

using namespace std;

/*

ʹ��new�������ʼ��


*/

int main_init()
{
	int *pi = new int(6);   //��ʼֵ��6
	cout << *pi << endl;

	double *pd = new double(99.99);
	cout << *pd << endl;

	struct where {double x; double y; double z; };

	//c++11֧��������ô��
	where *one = new where{2.4, 4.4, 1.3}; 

	int *ar = new int[4]{2,4,6,7};

	//newʧ��ʱ��new�����Ҳ���������ڴ�������ǰ�Ƿ��ؿ�ָ�룬����������std::bad_alloc�쳣


	system("pause");
	return 0;
}