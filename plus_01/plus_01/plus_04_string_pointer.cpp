#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>
using namespace std;

/*
C�����ַ�������������c++���ǲ�Ҫʹ�����֣�����Խ�磬���ҿ���ֱ�Ӹ�ֵ����������strcpy,strncpy��
*/
int main2222()
{
	char flower[10] = "rose";
	cout << flower << "s are red"<<endl; //�������������һ��Ԫ�صĵ�ַ

	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout << animal << " and ";
	cout << bird << "\n";

	cout << "Enter a kind of animal:";
	cin >> animal;

	ps = animal;   //animal�ĵ�ַ����ps,�����Ḵ���ַ���������ָ��ĵ�ַ��ȫһ��
	cout << ps << "!\n";
	cout << "before using strcp():\n";

	/*
	һ����˵�������count�ṩһ��ָ�룬������ӡ��ַ���������ָ�������Ϊcharָ�룬��count����ʾ
	ָ��ָ����ַ��������Ҫ��ʾ�����ַ����ĵ�ַ������뽫����ָ��ǿ��ת��Ϊ��һ�����͵�ָ�����ͣ�
	���磬int(*), ��������Ĵ�������������ġ���ˣ�ps��ʾΪ�ַ���"dog",��(int *)ps��ʾ���ַ����ĵ�ַ��

	*/
	cout << animal << "at" << (int *)animal << endl;  //���dogat001EFBD4
	cout << ps << "at" << (int *)ps << endl;          //���dogat001EFBD4

	ps = new char[strlen(animal)+1]; //get new stroage  //strlen������ǿɼ����ַ����������ѿ��ַ�����������
	strcpy(ps, animal); //copy string to new storage  ps���ڴ洢����animal�ĸ���

	cout << "After using strcpy():\n";
	cout << animal << "at " << (int *)animal << endl;  //���dogat001EFBD4
	cout << ps << " at " << (int *)ps << endl;		   //���dog at 004BB030

	delete []ps;


	char food[20] = "carrots";
	strcpy(food, "flan");
	cout << "food:"<< food << endl;
	system("pause");
	return 0;
}