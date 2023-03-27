#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void reverseString01(char* p)
{
	int len = strlen(p);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = p[start];
		p[start] = p[end];
		p[end] = temp;

		start++;
		end--;
	}
}

void reverseString02(char* str)
{
	int len = strlen(str);
	char* start = str;
	char* end = str + len - 1;

	while (start < end)      // ʹ�õ�ַ��Ϊflag�������������index
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

void test01()
{
	//char* p = "hello world";   //error,�������ַ��������������ܸı�
	char p[] = "hello world";

	reverseString01(p);
	printf("%s\n", p);

	reverseString02(p);
	printf("%s\n", p);
}

int main()
{
	test01();

	system("pause");
	return 0;
}