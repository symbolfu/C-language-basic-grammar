#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 万能指针

void test()
{
	int a = 10;
	void* p = NULL;

	p = &a;

	/*
		这里涉及万能指针的使用，指针类型的转换，取址
	*/
	printf("a: %d\n", *(int *)p);

}



int main()
{
	test();

	system("pause");
	return 0;
}