#include "stdafx.h"
#include <iostream>

/*

��������

void print(const char * str, int width);  #1
void print(double d, int width);		  #2
void print(long l, int width);	          #3
void print(int i; int width);             #4
void print(const char *str);              #5


����
unsigned int year = 3210;
print(year, 6); 

print()�������ĸ�ԭ��ƥ���أ��������κ�ԭ��ƥ�䣡û��ƥ���ԭ�Ͳ������Զ�ֹͣʹ�����е�ĳ��������
��Ϊc++������ʹ�ñ�׼����ת��ǿ�ƽ���ƥ�䡣 ���#2ԭ����print()Ψһ��ԭ�ͣ���������print(year,6)
����yearת��Ϊdouble���͡���������Ĵ����У���3��������Ϊ��һ��������ԭ�ͣ������3��ת��year�ķ�ʽ��
��������£�c++���ܾ����ֺ������ã���������Ϊ����

*/

using namespace std;



