#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// heap区

int* getSpace()
{
	int* p = malloc(sizeof(int) * 5);
	if (p == NULL)
	{
		return;
	}

	for (int i = 0; i < 5; i++)
	{
		p[i] = i + 100;
	}

	return p;
}


void test()
{
	int* p = getSpace();

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);  // 手动开辟，手动释放；
	p = NULL;

}

void allocateSpace(char* pp)    // 等价于： char *pp = p;
{
	char* tmp = malloc(100);
	memset(tmp, 0, 100);
	strcpy(tmp, "hello word");
	pp = tmp;
}


void test2()
{
	char* p = NULL;
	allocateSpace(p);  // 值传递方式,无法拿到
	printf("%s\n", p);
}

void allocateSpace01(char** ppp)
{
	char* tmp = malloc(100);
	memset(tmp, 0, 100);
	strcpy(tmp, "hello world");
	*ppp = tmp;
}

void test03()
{
	char* p = NULL;
	allocateSpace01(&p); // 地址传递
	printf("%s\n", p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}




int main()
{
	//test();
	//test2();
	test03();


	system("pause");
	return 0;
}