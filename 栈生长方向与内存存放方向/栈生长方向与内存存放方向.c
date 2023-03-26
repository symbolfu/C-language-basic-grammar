#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void test01()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	printf("%p\n", &d);

}

void test02()
{
	int a = 0x11223344;

	char* p = &a;

	printf("%x\n", *p);
	printf("%x\n", *(p + 1));
}



int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}