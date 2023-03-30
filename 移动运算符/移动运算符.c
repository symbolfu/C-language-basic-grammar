#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 左移: <<
// 左移运算符<<将其左侧操作数的值的每位向左移动，移动的位数由其右侧操作数指定。
// 空出来的位用0填充，并且丢弃移出左侧操作数末端的位;

void test01()
{
	int a = 1;
	printf("%d\n", a << 2);
}

// 右移


void test02()
{
	unsigned int a = 4;
	int b = 4;

	printf("%d\n", a >> 1);
	printf("%d\n", b >> 1);

}


int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}