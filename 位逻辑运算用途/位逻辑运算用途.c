#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ��λ

void test01()
{
	int a = 8;
	int b = 2;    // ��λ2

	printf("a|b = %d\n", a | b);
}

// ������λ��
void test02()
{
	int a = 3;

	printf("a|~a = %d\n", a|~a);
}

// �ر�λ
void test03()
{
	int a = 3;

	printf("a&~a = %d\n", a & ~a);
}

// ת��λ
void test04()
{
	int a = 3;

	printf("a ^0xff = %d\n", a ^ 0xff);
}

// ����������������ʱ����

void test05()
{
	int a = 10;
	int b = 20;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
}


int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();

	system("pause");
	return 0;
}