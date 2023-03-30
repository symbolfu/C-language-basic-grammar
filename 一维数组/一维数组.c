#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test01()
{
	int arr[5] = { 1,2,3,4,5 };

	printf("%d\n", sizeof(arr));

	/*
		有两种特殊情况， 一维数组名不是 指向第一个元素的指针
			1、 sizeof
			2、对数组名去地址  得到数组指针，步长为整个数组长度
	*/

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	//printf("%d\n", *(arr++));         // error: arr 是一个指针常量，不能被修改

	printf("%d\n", arr[3]);              // *(arr + 3) 等价于 arr[3]
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