#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct P
{
	char a;
	int b;
	char buf[64];
	int d;
} Persion;


void test01()
{
	Persion p = { 'a', 10, "hello world", 20 };

	printf("d属性的值为：%d\n", *(int*)((char*)&p + 72));
}


int main()
{
	test01();

	system("pause");
	return 0;
}