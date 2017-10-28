#include "stdafx.h"
#include <iostream>

int main()
{

	/*
		将const int指针指向变量，不能使用pt修改变量age的值，但是可以通过age变量来修改age的值，但是可以改变pt变量的值
	*/
	int age = 39;
	const int *pt = &age; 

	int age2 = 89;
	pt = &age2;   //虽然pt是常量指针，但是可以改变它的值（现在pt指向了age2），要弄清楚，常量指针是指不能改变其指向的值，而不是指指针本身的值。


	int sloth = 3;

	//ps不允许修改sloth的值，但允许ps指向另外一个位置。
	const int *ps = &sloth;

	//注意finger与上面的ps的const的位置的不同；finger只能指向sloth，允许使用finger来修改sloth的值，
	int *const finger = &sloth;  
	int bb = 10;
	// finger = &bb;   //报错，finger是const指针，不能改变其指向的位置


	/*
		将const变量的地址赋给指向const的指针
	*/
	const float g_earth = 9.80;
	const float *pe = &g_earth;

	/*
	  将const的常量赋给常规的指针是不行的

	  const float g_moom = 1.84;
	  float *pm = &g_moom;
	*/
	

	/*
	 将指针参数声明为常量指针的理由：
	 1. 这样可以避免无意间修改了数据而导致的编程错误
	 2. 使用const使得函数能够处理const和非const实参（比如上面实例的pt指向了age变量），否则只能接受非const的数据。
	*/



}