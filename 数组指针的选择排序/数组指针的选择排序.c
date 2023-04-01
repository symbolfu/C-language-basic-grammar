#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void myPrintInt(int arr[], int len)          // 两个print函数可以用函数指针优化，api
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void myPrintString(int *arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", arr[i]);
	}
}

void mySort(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int min = i;              // 记录最小值的index
		for (int j = i+1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;          
			}
		}
		if (i != min)           // 处理最小index
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}


 

// for string array
void selectSort(char* arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = 0; j < len; j++)
		{
			if (strcmp(arr[max], arr[i]) == -1)
			{
				max = j;
			}
		}

		if (i != max)
		{
			char* tmp = arr[i];
			arr[i] = arr[max];
			arr[max] = tmp;

		}
	}
}

void test01()
{
	int arr[] = { 2,13,42,21,5,32,23,54 };
	char* arr1[] = { "abcd", "aede", "eseds", "dseq" };

	mySort(arr, sizeof(arr)/sizeof(int));

	myPrintInt(arr, sizeof(arr)/sizeof(int));

	printf("-------------------------------\n");

	selectSort(arr1, sizeof(arr1) / sizeof(char *));
	myPrintString(arr1, sizeof(arr1) / sizeof(char *));

}


int main()
{
	test01();

	system("pause");
	return 0;
}