#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 接口的实现案例


// 打印api
void PrintArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

// 排序api
void MySort(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
}


void test()
{
	int arr[] = {10,43,21,45,21};
	int len = sizeof(arr) / sizeof(int);

	PrintArray(arr, len);
	MySort(arr, len);
	PrintArray(arr, len);

}



int main()
{
	test();

	system("pause");
	return 0;
}