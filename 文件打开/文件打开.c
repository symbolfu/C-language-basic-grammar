#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test01()
{

	FILE* fp = NULL;

	fp = fopen("./test", "w");

	if (fp == NULL)
	{
		// perror()是标准出错打印函数，能打印调用库函数出错原因
		perror("open error");
		return -1;
	}

	fclose(fp);
}



int main()
{
	test01();

	system("pause");
	return 0;
}