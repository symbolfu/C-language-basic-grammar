#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void func(char* p)
{
	strcpy(p, "hello world");

}


// 输入特性
void test01()
{
	// 在主调函数上分配内存，供被调函数使用
	// 分配到栈上
	char buf[1024] = { 0 };
	func(buf);
	printf("%s\n", buf);
}

void allocateSpace(char** p)
{
	*p = (char*)malloc(1024);
	strcpy(*p, "hello world!");
}

// 输出特性
void test02()
{
	// 在被调函数上分配内存；
	// 分配到堆上
	char* p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}



int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}