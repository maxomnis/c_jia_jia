#include "stdafx.h"
#include <iostream>

using namespace std;

double betsy(int);
double pam(int);


/*

��������ָ��
����ָ������Ӧ��ָ�������ķ��������Լ������������꣨�����б�

���磺 �����к���double pam(int)����ô�亯��ָ��Ӧ���� double (*pf)(int), ����pam()�������ƣ����ǽ�pam�滻Ϊ��*pf��.
����pam�Ǻ��������(*pf)Ҳ�Ǻ����������(*pf)�Ǻ�������ôpf����ָ�롣


*/
/*

��ȡ�����ĵ�ַ�ܼ򵥣�ֻҪʹ�ú����������治�����������ɡ�Ҳ����˵�����think()��һ��������
��think���Ǹú����ĵ�ַ��

*/
void estimate(int lines, double (*pf)(int));

int main_function_pointer()
{
	int code;

	cout << "How many lines of code do you need?";
	cin >> code;

	cout << "Here's Besty's estimate:\n";
	estimate(code, betsy);

	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);

	cout << estimate << endl;
	system("pause");
	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03*lns + 0.0004*lns*lns;
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << "lines will take";
	cout << (*pf)(lines) << " hour(s)\n";
}
