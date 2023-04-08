#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void func(int a, char c)
{
	printf("hello world\n");
}

void test01()
{

	// 方式1、定义函数类型，再通过类型定义函数指针
	typedef void (FUNC_TYPE)(int, char);
	FUNC_TYPE* pFunc = func;
	//pFunc(10, 'b');

	// 方式2：定义出函数指针类型，通过类型定义函数指针
	typedef void (*FUNC_TYPE2)(int, char);

	FUNC_TYPE2 pFunc2 = func;
	//pFunc2(10, 'b');

	// 方式3： 直接定义函数指针变量
	void(*pFunc3)(int, char) = func;
	pFunc3(30, 'c');

}




int main()
{
	test01();

	system("pause");
	return 0;
}