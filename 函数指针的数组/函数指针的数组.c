#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 函数指针的数组
void func1()
{
	printf("1111111111\n");
}

void func2()
{
	printf("2222222222\n");
}

void func3()
{
	printf("333333333333\n");
}

void test01()
{
	// 直接定义的方式： 直接定义函数指针
	void(*pArray[3])();

	pArray[0] = func1;
	pArray[1] = func2;
	pArray[2] = func3;

	for (int i = 0; i < 3; i++)
	{
		pArray[i]();
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}