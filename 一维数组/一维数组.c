#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test01()
{
	int arr[5] = { 1,2,3,4,5 };

	printf("%d\n", sizeof(arr));

	/*
		��������������� һά���������� ָ���һ��Ԫ�ص�ָ��
			1�� sizeof
			2����������ȥ��ַ  �õ�����ָ�룬����Ϊ�������鳤��
	*/

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	//printf("%d\n", *(arr++));         // error: arr ��һ��ָ�볣�������ܱ��޸�

	printf("%d\n", arr[3]);              // *(arr + 3) �ȼ��� arr[3]
	printf("%d\n", *(arr + 3));
	printf("%d\n", arr[-1]);

}


void print_Arr(int arr[])
{
	printf("sizeof: %d\n", sizeof(arr));

}

//void print_Arr(int* arr)
//{
//	printf("sizeof: %d\n", sizeof(arr));
//}

void test02()
{
	int arr[5] = { 1,2,3,4,5 };

	printf("test02 arr len: %d\n", sizeof(arr));

	print_Arr(arr);
}


int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}