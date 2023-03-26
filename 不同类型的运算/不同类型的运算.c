#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
	产生这种现象的原因是因为 无符号数和有符号数的计算导致的；
	因为一个无符号的数和一个int类型的数做运算，其结果都不会小于0;
	sizeof的返回值就是unsigned int类型
*/

void test()
{
	unsigned int a = 5;
	if (a - 10 < 0)
	{
		printf("》》》》\n");
	}
	else
	{
		printf("<<<<<<<\n");
	}

	if (sizeof(a) - 10 > 0)    // error:(int)sizeof(a)
	{
		printf("大于\n");
	}
	else
	{
		printf("小于\n");
	}

}


int main()
{
	test();

	system("pause");
	return 0;
}