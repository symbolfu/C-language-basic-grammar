#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test()
{
	int* p1 = 0x1234;
	int*** p2 = 0x1111;

	printf("p1 size: %d\n", sizeof(p1));
	printf("p2 size: %d\n", sizeof(p2));



	int a = 10;
	p1 = &a;

	printf("p1 address: %p\n", &p1);
	printf("p1 address: %p\n", p1);
	printf("a address: %p\n", &a);
}




int main()
{
	test();

	system("pause");
	return 0;
}