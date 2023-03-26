#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test01()
{
	int* p = NULL;
	int a = 10;
	p = &a;
	*p = 20;
	int b = *p;


	printf("a: %d\n", a);
	printf("*p:%d\n", *p);
	printf("b:%d\n", b);

}


int main()
{
	test01();

	system("pause");
	return 0;
}