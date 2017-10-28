#include "stdafx.h"
#include <iostream>
using namespace std;

int main_test_cin()
{
	int a=0, b=0;
	cin >> a;

	cout << (!cin) << endl;

	cin.clear();
	cin >> b;
	cout << b << endl;

	system("pause");
	return 0;
}