#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void func(char* p)
{
	strcpy(p, "hello world");

}


// ��������
void test01()
{
	// �����������Ϸ����ڴ棬����������ʹ��
	// ���䵽ջ��
	char buf[1024] = { 0 };
	func(buf);
	printf("%s\n", buf);
}

void allocateSpace(char** p)
{
	*p = (char*)malloc(1024);
	strcpy(*p, "hello world!");
}

// �������
void test02()
{
	// �ڱ��������Ϸ����ڴ棻
	// ���䵽����
	char* p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}



int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}