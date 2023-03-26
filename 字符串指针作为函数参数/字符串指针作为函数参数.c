#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test01()
{
	//字符数组只能初始化5个字符，当输出的时候，从开始位置直到找到0结束
	char str1[] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str1);

	//字符数组部分初始化，剩余填0
	char str2[100] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str2);

	// 最常用的方式
	//如果以字符串初始化，那么编译器默认会在字符串尾部添加'\0'
	char str3[] = "hello";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));

	// sizeof与strlen计算的区别：
	//sizeof计算数组大小，数组包含'\0'字符
	//strlen计算字符串的长度，到'\0'结束，不包含‘\0’
	printf("sizeof str:%d\n", sizeof(str3));
	printf("strlen str:%d\n", strlen(str3));


	char str4[] = "hello\0world";
	printf("%s\n", str4);
	printf("%d\n", sizeof(str4));
	printf("%d\n", strlen(str4));

}

int main()
{
	test01();



	system("pause");
	return 0;
}