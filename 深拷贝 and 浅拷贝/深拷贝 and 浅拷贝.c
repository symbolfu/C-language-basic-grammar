#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
	​系统提供的赋值操作是：浅拷贝----简单值拷贝， 逐字节拷贝；
​	如果结构体有属性创建在堆上，就会出现问题，在释放期间，一段内存重复释放，一段泄漏；
​	解决方案：
​			自己手动去做赋值操作，提供深拷贝；
			手动释放
*/

struct Person
{
	char* name;
	int age;
};


void test01()
{
	struct Person p1;
	struct Person p2 = {"hell", 21};
	p1.name = malloc(sizeof(char) * 128);
	memset(p1.name, 0, sizeof(char) * 128);
	strcpy(p1.name, "jerry");
	p1.age = 100;

	printf("name: %s; age: %d\n", p1.name, p1.age);
	// 系统提供的浅拷贝
	//p1 = p2;

	// 手动赋值
	if (p1.name != NULL)         // 栈上的内容不能手动释放
	{
		free(p1.name);
		p1.name = NULL;
	}

	p1.name = malloc(strlen(p2.name) + 1);
	strcpy(p1.name, p2.name);
	p1.age = p2.age;


	printf("name: %s; age: %d\n", p1.name, p1.age);

}

typedef struct _TEACHER
{
	char* name;
}Teacher;

void test02()
{
	Teacher t1;
	t1.name = (char *)malloc(64);
	strcpy(t1.name, "John");

	Teacher t2;
	
	t2.name = (char *)malloc(64);
	strcpy(t2.name, t1.name);

	printf("t1.name: %s\n", t1.name);
	printf("t2.name: %s\n", t2.name);

	if (t1.name != NULL)
	{
		free(t1.name);
		t1.name = NULL;
	}

	if (t2.name != NULL)
	{
		free(t2.name);
		t2.name = NULL;
	}
}


int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}