#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void array_print(char** arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", arr[i]);
	}
	printf("-----------------------\n");
}

void array_sort(char** p, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			// �Ƚ������ַ���
			if (strcmp(p[j-1], p[j]) > 0 )
			{
				char* temp = p[j - 1];
				p[j - 1] = p[j];
				p[j] = temp;
			}
		}
	}
}


void test01()
{
	// �������������ڴ�
	// ָ������
	char* p[] = { "bbb", "aaa", "ccc", "eee", "ddd" };   // ���䵽ջ��
	int len = sizeof(p) / sizeof(char*);

	// ��ӡ����
	array_print(p, len);

	// ���ַ�����������
	array_sort(p, len);

	array_print(p, len);
}

// �����ڴ�
char** allocate_memory(int n)
{
	if (n < 0)
	{
		return NULL;
	}

	char** temp = (char**)malloc(sizeof(char*) * n);

	if (temp == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < n; i++)
	{
		temp[i] = (char *)malloc(sizeof(char) * 30);
		sprintf(temp[i], "%2d_hello world!", i+1);
	}
	return temp;
}


void free_memory(char** p, int len)
{
	if (p == NULL)
	{
		return;
	}

	for (int i = 0; i < len; i++)
	{
		free(p[i]);
		p[i] = NULL;
	}

	free(p);    // ֻ�ǰ�ָ����ָ���ڴ���ͷŵ�������û�а�ָ�뱾��ɵ�

}


void test02()
{
	int n = 10;
	char** p = allocate_memory(n);

	// ��ӡ����
	array_print(p, n);

	// �ͷ��ڴ�
	free_memory(p, n);

	if (p != NULL)
	{
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