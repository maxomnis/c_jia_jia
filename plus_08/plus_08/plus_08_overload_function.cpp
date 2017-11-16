#include "stdafx.h"
#include <iostream>

/*

函数重载

void print(const char * str, int width);  #1
void print(double d, int width);		  #2
void print(long l, int width);	          #3
void print(int i; int width);             #4
void print(const char *str);              #5


例如
unsigned int year = 3210;
print(year, 6); 

print()调用与哪个原型匹配呢？它不与任何原型匹配！没有匹配的原型并不会自动停止使用其中的某个函数，
因为c++将尝试使用标准类型转换强制进行匹配。 如果#2原型是print()唯一的原型，则函数调用print(year,6)
将把year转换为double类型。但在上面的代码中，有3个数字作为第一个参数的原型，因此有3种转换year的方式。
这种情况下，c++将拒绝这种函数调用，并将其视为错误。

*/

using namespace std;



