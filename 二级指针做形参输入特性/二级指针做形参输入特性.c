#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ����ָ�����β�����������ָ���������������ڴ�

void print_arr(char** arr)
{
	printf("%s\n", *arr);
}

void test01()
{
	char str[1024] = "hello world!";

	char** arrStr = (char **)malloc(sizeof(char *));

	*arrStr = str;

	print_arr(arrStr);

}


int main()
{
	test01();

	system("pause");
	return 0;
}