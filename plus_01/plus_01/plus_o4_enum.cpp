#include "stdafx.h"
#include <iostream>
#include <climits>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	//ö�� red=0, orange = 1,blue = 4���Դ�����
	enum spectrum {red , orange, yellow, green, blue, violet, indigo, ultraviolet};

	spectrum band;

	band = blue; // valid ,blue is an enumerator 
	//++band; //not valid 
	//band = 2000; // invalid , 2000 not an enumerator
	//band = orange + red;// no valid

	cout << band << endl;
	cout << orange + red << endl;


	band = spectrum(3); //���intֵ����Ч�ģ������ͨ��ǿ������ת������������ö�ٱ���
	band = spectrum(200);//�����ͼ��һ�����ʵ���ֵ����ǿ������ת����������ʲô����أ�����ǲ�ȷ���ģ�����Ϊ������������������ǲ�������������
	cout << band << endl;

	enum bits {one=1, tow=2, four = 4, eight = 8};

	enum bigstep {first, second = 100, third};
	cout << first << endl;  //first=0
	cout << third << endl;  //third=101

	enum test { zero,  null = 0, one3, numero_uno = 1 }; 
	cout << zero << endl;
	cout << one << endl;

	/*
	ö�ٵ�ȡֵ��Χ
	����ö����˵��ֻ��������ָ������Щ��Χ������Ч�ģ�Ȼ����c++����ͨ��ǿ������ת����������
	�ɸ���ö�ٱ����Ϸ���ֵ��ÿ��ö�ٶ��и�ȡֵ��Χ��ͨ��ǿ������ת�������Խ�ȡֵ��Χ�е��κ�
	����ֵ����ö�ٱ�������ʹ���ֵ����ö��ֵ
	*/
	bits myflag;
	myflag = bits(6);


	system("pause");
	return 0;
}