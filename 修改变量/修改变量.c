#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 修改变量的两种方式：1、直接修改 2、间接修改


void test()
{
	int a = 10;
	
	a = 20;
	printf("%d\n", a);

	int* p = &a;
	*p = 100;
	printf("%d\n", *p);
}


int main()
{
	test();

	system("pause");
	return 0;
}