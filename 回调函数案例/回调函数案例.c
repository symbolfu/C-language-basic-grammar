#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 提供一个函数，实现可以任意类型的数组

// API
void printAllArray(void* pArray, int eleSize, int len, void(*myPrint)(void*))
{
	char* p = pArray;
	for (int i = 0; i < len; i++)
	{
		char* eleAddr = p + eleSize * i;
		myPrint(eleAddr);
	}
}

void myPrintInt(void* data)
{
	int* num = (int *)data;
	printf("data: %d\n", *num);
}


void test01()
{
	int arr[5] = { 1, 2,3,4,5};
	int len = sizeof(arr) / sizeof(int);
	printAllArray(arr, sizeof(int), len, myPrintInt);
}


struct Person
{
	char name[64];
	int age;
};

void myPrintperson(void* data)
{
	struct Person* p = (struct Person*)data;
	printf("name: %s; age: %d\n", p->name, p->age);
}


int findArrayEle(void* pArray, int eleSize, int len, void* data, int(*myCompare)(void*))
{
	char* p = pArray;
	for (int i = 0; i < len; i++)
	{
		char* eleAddr = p + eleSize * i;
		if (myCompare(eleAddr, data))
		{
			return 1;
		}
	}
	return 0;
}

int myComparePerson(void* data1, void* data2)
{
	struct Person* p1 = (struct Person*)data1;
	struct Person* p2 = (struct Person*)data2;

	return (strcmp(p1->name, p2->name) == 0) && (p1->age == p2->age);
}

void test02()
{
	struct Person personArray[] = {
		{"aaa", 123},
		{"bbb", 222},
		{"ccc", 333},
	};

	int len = sizeof(personArray) / sizeof(struct Person);
	printAllArray(personArray, sizeof(struct Person), len, myPrintperson);

	// 查找数组中是否存在指定的元素
	struct Person p = { "ccc", 333 };

	int ret = findArrayEle(personArray, sizeof(struct Person), len, &p, myComparePerson);

	if (ret)
	{
		printf("找到了元素\n");
	}
	else
	{
		printf("没有找到了元素\n");
	}

}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}