#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Person
{
	char name[64];
	int age;
};


void test01()
{
	// 在分配栈上
	struct Person p1[3] = {
		{"john", 30},
		{"xiaomin", 33},
		{"min", 44}
	};

	struct Person p2[3] = { "John", 30, "Obama", 33, "Edward", 25 };

	for (int i = 0; i < 3; i++)
	{
		printf("name:%s; age: %d\n", p1[i].name, p1[i].age);
	}

	printf("-----------------\n");

	for (int i = 0; i < 3; i++) {
		printf("Name:%s Age:%d\n", p2[i].name, p2[i].age);
	}
	printf("-----------------\n");

	// 分配到堆上
	struct Person* p3 = (struct Person *)malloc(sizeof(struct Person) * 3);

	for (int i = 0; i < 3; i++)
	{
		sprintf(p3[i].name, "name_%d", i+1);
		p3[i].age = 20 + i;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("name: %s; age: %d\n", p3[i].name, p3[i].age);
	}

}

struct Stu
{
	char * name;
	int id;
};

void test02()
{
	char* p = NULL;
	//p = malloc(64);

	//sprintf(p, "hello world");          // sprintf 第一个是buf，不仅仅是一个指针（例如空指针）
	//printf("%s\n", p);

	p = "hello world";
	printf("%s\n", p);

}




int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}