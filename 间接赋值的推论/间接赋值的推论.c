#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 间接赋值

void func(int* a)
{
	*a = 100;
}


void test()
{
	// 从0级指针到1级指针
	int a = 0;
	func(&a);
	printf("a: %d\n", a);
}

void allocateSpace(char** p)
{
	*p = (char*)malloc(100);
	strcpy(*p, "hello world!");
}


void freeSpace(char** p)
{
	if (p == NULL)
	{
		return;
	}
	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

void test02()
{
	char* p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);

	freeSpace(&p);

	if (p == NULL)
	{
		printf("p内存释放了\n");
	}
}


int main()
{
	//test();

	test02();



	system("pause");
	return 0;
}