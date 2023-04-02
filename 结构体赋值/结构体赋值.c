#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Person
{
	char* name;
	int age;
};


void test01()
{
	// 分配到栈空间
	struct Person p1 = {"john", 30};
	struct Person p2 = { "xiaomin", 20 };

	printf("name:%s  ; age: %d\n", p1.name, p1.age);
	printf("name:%s  ; age: %d\n", p2.name, p2.age);

	// 结构体赋值
	p2 = p1;

	printf("------------------------\n");
	printf("name:%s  ; age: %d\n", p1.name, p1.age);
	printf("name:%s  ; age: %d\n", p2.name, p2.age);

}




int main()
{
	test01();


	system("pause");
	return 0;
}