#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void tets01()
{
	static char arr[] = "hello world";     // 静态区，可读可写
	char arr1[] = "hello world";    // stack区，可读可写
	arr[2] = '2';
	char* p = "hello world";        // 字符串常量区，不可写
}


int main()
{
	test01();

	system("pause");
	return 0;
}