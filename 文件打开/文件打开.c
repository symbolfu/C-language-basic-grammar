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
		// perror()�Ǳ�׼�����ӡ�������ܴ�ӡ���ÿ⺯������ԭ��
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