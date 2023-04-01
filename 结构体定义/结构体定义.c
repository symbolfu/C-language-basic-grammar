#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 定义
struct Person
{
	char name[64];
	int age;
};


typedef struct _PERSION
{
	char name[64];
	int age;
} Persion_1;

void test01()
{
	// 初始化
	struct Person p = { "hao", 20 };    // 分配到栈上

	printf("p.name: %s\n", p.name);
	printf("p.age: %d\n", p.age);

	struct Person* p1 = (struct Person *)malloc(sizeof(struct Person));   // 分配到堆上
	strcpy(p1->name, "fu");     // 字符串的赋值
	p1->age = 100;
	
	printf("p1->name: %s\n", p1->name);
	printf("p->age: %d\n", p1->age);

}

int main()
{
	test01();

	system("pause");
	return 0;
}