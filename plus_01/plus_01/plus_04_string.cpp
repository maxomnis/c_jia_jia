#include "stdafx.h"
#include <iostream>
#include <climits>


using namespace std;

int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++Owboy";

	//����������"jack",���潫 
	cout << "howdy, i'm" << name2;
	cout << "!what's your name?\n";
	cin >> name1;
	cout << "well," << name1 << ",your name has ";
	cout << strlen(name1) << " letter and is stored\n";   // ���4��strlen������ǿɼ����ַ����������ѿ��ַ�����������
	cout << "in an array of " << sizeof(name1) << "bytes.\n";
	cout << "your initial is" << name1[0] << ".\n";
	name2[3] = '\0';
	cout << " here are first 3 characters of my name:";
	cout << name2 << endl;
	system("pause");
	return 0;
}