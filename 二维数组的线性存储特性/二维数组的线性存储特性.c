#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PrintArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);          // arr[i] �ȼ��� *(arr + 1)
	}
}


void test01()
{
	int arr[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};


	int len = sizeof(arr) / sizeof(int);

	//ͨ���������׵�ַָ��ת��Int*���ͣ���ô�����ͱ����4���Ϳ��Ա�����������
	int* p = (int*)arr;

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *(p+i));
	}
	printf("----------------------------\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *(p + i));
	}
	printf("----------------------------\n");
	PrintArray((int*)arr, len);
}


int main()
{
	test01();

	system("pause");
	return 0;
}