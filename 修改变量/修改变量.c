#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// �޸ı��������ַ�ʽ��1��ֱ���޸� 2������޸�


void test()
{
	int a = 10;
	
	a = 20;
	printf("%d\n", a);

	int* p = &a;
	*p = 100;
	printf("%d\n", *p);
}


int main()
{
	test();

	system("pause");
	return 0;
}