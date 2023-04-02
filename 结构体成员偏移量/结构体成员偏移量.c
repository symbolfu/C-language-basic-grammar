#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Teacher
{
	char a;    // 0-3
	int b;	  // 4-7
};


void test01()
{
	struct Teacher t1;
	struct Teacher* p = &t1;

	printf("b的属性offset：%d\n", (int)&(p->b) - (int)p);
	printf("b: %d\n", offsetof(struct Teacher, b));
}

void test02()
{
	struct Teacher t1 = { 'a', 100 };
	
	printf("t1.b = %d\n", *(int *)((char *)&t1 + offsetof(struct Teacher, b)));
}

struct Teacher2
{
	char a;
	int b;
	struct Teacher c;
};

void test03()
{
	// 结构体初始化展开
	struct Teacher2 t1 = { 'a', 100, 'b', 200 };

	int offset1 = offsetof(struct Teacher2, c);
	int offset2 = offsetof(struct Teacher, b);

	printf("teacher--b: %d\n", *(int*)((char *) & t1 + offset1 + offset2));

	printf("teacher--b: %d\n", ((struct Teacher *)((char *) & t1 + offset1))->b);
}


int main()
{
	test01();
	test02();
	test03();


	system("pause");
	return 0;
}