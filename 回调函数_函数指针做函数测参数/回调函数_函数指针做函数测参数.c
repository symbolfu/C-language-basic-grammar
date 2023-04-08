#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// api: �ṩ��һ����ӡ���������Դ�ӡ�������͵�����

void printText(void* data, void(*myPrint)(void*))
{
	myPrint(data);
}

// �ص�����
void myPrintInt(void* data)
{
	int* num = (int *)data;
	printf("%d\n", *num);
}

void test01()
{
	int a = 10;
	printText(&a, myPrintInt);
}

struct Person
{
	char name[64];
	int age;
};

void myPrintPerson(void* data)
{
	struct Person* p = (struct Person*)data;
	printf("name:%s, age: %d\n", p->name, p->age);

}

void test02()
{
	struct Person p = { "Tom", 18 };
	printText(&p, myPrintPerson);
}


int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}