#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 数组指针定义的三种方式

// 方式1：定义数组类型，再通过类型定义数组指针变量
typedef int(ARRAY_TYPE)[5];

// 方式2： 定义数组指针类型，再定义数组指针变量
typedef int(*ARRAY_TYPE1)[5];

// 方式3：直接定义数组指针变量
// int (*p)[5] = NULL;


void test01()
{
	ARRAY_TYPE* p_array = NULL;

	ARRAY_TYPE1 p = NULL;

	int(*p1)[5] = NULL;

	int arr[5] = { 1, 2, 3 };
	p_array = &arr;

	printf("%d\n", p_array);
	printf("%d\n", p_array+1);
	printf("%d\n", *p_array + 1);
	printf("%d\n", **p_array + 1);

}



int main()
{
	test01();

	system("pause");
	return 0;
}