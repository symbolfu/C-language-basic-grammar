#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����ָ�������������������ָ�ɱ������������ڴ�

void allocate_space(int** arr, int n)
{
	int* temp = (int *)malloc(sizeof(int) * n);

	if (NULL == temp)
	{
		return;
	}

	memset(temp, 0, sizeof(int) * n);

	int* pTemp = temp;    // �׵�ַ���֣�����ָ��丳ֵ����

	for (int i = 0; i < n; i++)
	{
		*pTemp = i + 100;
		pTemp++;
	}

	*arr = temp;
}


void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}


void test01()
{
	int* arr = NULL;
	int n = 10;

	allocate_space(&arr, n);

	print_array(arr, n);

	if (arr != NULL)
	{
		free(arr);
		arr = NULL;
	}
}


int main()
{
	test01();

	system("pause");
	return 0;
}