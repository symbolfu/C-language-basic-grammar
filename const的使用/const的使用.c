#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




// const修改变量
void test01()
{
	// 表示不能通过变量去修改值
	const int i = 0;
	//i = 100       //error: 只读变量初始化后不能修改

	int* p = NULL;

	p = &i;           // 间接修改
	*p = 100;

	printf("%d\n", *p);

}

// const 修饰指针
void test02()
{
	int a = 19;
	int b = 20;

	//const放在*号左侧 修饰p_a指针指向的内存空间不能修改,但可修改指针的指向
	const int* p_a = &a;   
	p_a = &b;

	printf("%d\n", *p_a);

}


//针的指向和指针指向的内存空间都不能修改
void test03()
{
	int a = 100;
	int b = 10;
	const int* const p_c = &a;
	// p_c = &b;    // error
	printf("%d\n", *p_c);

}

// const 修饰形参，防止误操作
struct Persion
{
	char name[32];
	int age;
	int Id;
	int score;
};

void showPerson(const struct Persion* p)
{
	//p->age = 1000;        error
	printf("name: %s  age: %d  id: %d   score: %d\n", p->name, p->age, p->Id, p->score );
}


void test04()
{
	struct Persion p = { "Tom", 10, 100, 90 };

	showPerson(&p);
}


int main()
{
	test01();
	test02();
	test03();
	test04();

	system("pause");
	return 0;
}