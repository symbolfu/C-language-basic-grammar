#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void selectSort(void* pAddr, int eleSize, int len, int(*myCompare)(void*, void*))
{
	char* temp = (char*)malloc(eleSize);

	for (int i = 0; i < len; i++)
	{
		int minOrMax = i;    // 定义最大值或最小值index
		for (int j = i+1; j < len; j++)
		{
			char* pJ = (char*)pAddr + eleSize * j;
			char* pMinOrMax = (char*)pAddr + eleSize * minOrMax;

			if (myCompare(pJ, pMinOrMax))
			{
				minOrMax = j;
			}
		}
		
		if (i != minOrMax)
		{
			char* pI = (char*)pAddr + i * eleSize;
			char* pMinOrMax = (char*)pAddr + minOrMax * eleSize;
			
			memcpy(temp, pI, eleSize);
			memcpy(pI, pMinOrMax, eleSize);
			memcpy(pMinOrMax, temp, eleSize);
		}
	}

	if (temp != NULL)
	{
		free(temp);
		temp = NULL;
	}
}


int myCompreInt(void* data1, void* data2)
{
	int* num1 = (int*)data1;
	int* num2 = (int*)data1;
	if (*num1 > *num2)
	{
		return 1;
	}
	return 0;
}

void test01()
{
	int arr[] = { 10, 30, 40,5, 12 };
	int len = sizeof(arr) / sizeof(int);
	selectSort(arr, sizeof(int), len, myCompreInt);

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

struct Person
{
	char name[64];
	int age;
};


int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = (struct Person*)data1;
	struct Person* p2 = (struct Person*)data2;

	return p1->age < p2->age;
}


void test02()
{
	struct Person pArray[] =
	{
		{ "aaa", 10 },
		{ "bbb", 40 },
		{ "ccc", 20 },
		{ "ddd", 30 },
	};
	int len = sizeof(pArray) / sizeof(struct Person);
	selectSort(pArray, sizeof(struct Person), len, myComparePerson);

	for (int i = 0; i < len; i++)
	{
		printf("姓名：%s 年龄:%d\n", pArray[i].name, pArray[i].age);
	}

}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}