#include "stdafx.h"
#include <new>

using namespace std;

/*

��λnew�����(��ͬ��new �Ǹ�)
ͨ��, new�����ڶ�(heap)���ҵ�һ�������ܹ�����Ҫ����ڴ�顣new�������������һ�ֱ��壬����Ϊ��λ(placement) new�����
�������ܹ��ƶ�Ҫʹ�õ�λ�á�����Ա����ʹ�������������������ڴ�����̣�������Ҫͨ���ض���ַ���̷��ʵ�Ӳ�������ض�
λ�ô�������

Ҫʹ�ö�λnew���ԣ�������Ҫ����ͷ�ļ�new, ���ṩ�����ְ汾��new�������ԭ�ͣ�Ȼ��new����������ṩ�������ַ�Ĳ�����
����Ҫ�ƶ������⣬�䷨�볣��new�������ͬ�������˵��ʹ�ö�λnew�����ʱ��������������з����ţ�Ҳ����û�С�


*/

struct chaff
{
	char dross[20];
	int slag;
};

char buffer1[50];         //ȫ�ֱ���
char buffer2[500];		  //ȫ�ֱ���

int main_new_placement()
{
	chaff *p1, *p2;
	int *p3, *p4;

	p1 = new chaff;        //place structure in heap
	p3 = new int[20];      //place int array in heap

	p2 = new (buffer1) chaff;  //place structure in buffer1    ��buffer1�з���ռ���ṹchaff
	p4 = new (buffer2) int[20]; //place int array in buffer2   



	system("pause");
	return 0;
}