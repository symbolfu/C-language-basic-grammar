#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 别名的使用

typedef unsigned int u32;
typedef struct _PERSION {
	char name[32];
	int age;
} Persion;


void test()
{
	u32 val;
	Persion persion;

	val = 32;
	strcpy(persion.name, "abcd");
	persion.age = 10;

	printf("val: %d\n", val);
	printf("name: %s\n", persion.name);
	printf("age: %d\n", persion.age);

}


int main()
{
	test();

	system("pause");
	return 0;
}