#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����ָ�붨������ַ�ʽ

// ��ʽ1�������������ͣ���ͨ�����Ͷ�������ָ�����
typedef int(ARRAY_TYPE)[5];

// ��ʽ2�� ��������ָ�����ͣ��ٶ�������ָ�����
typedef int(*ARRAY_TYPE1)[5];

// ��ʽ3��ֱ�Ӷ�������ָ�����
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