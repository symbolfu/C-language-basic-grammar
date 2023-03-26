#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MYADD(x,y) ((x) + (y))


void test()
{
	printf("%d\n", MYADD(10, 20));
}

int main()
{

	test();


	system("pause");
	return 0;
}