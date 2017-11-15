#include "stdafx.h"
#include <iostream>

using namespace std;

double betsy(int);
double pam(int);


/*

声明函数指针
函数指针声明应该指定函数的返回类型以及函数的特征标（参数列表）

比如： 假如有函数double pam(int)，那么其函数指针应该是 double (*pf)(int), 这与pam()声明类似，这是将pam替换为（*pf）.
由于pam是函数，因此(*pf)也是函数。而如果(*pf)是函数，那么pf就是指针。


*/
/*

获取函数的地址很简单，只要使用函数名（后面不跟参数）即可。也就是说，如果think()是一个函数，
则think就是该函数的地址。

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
