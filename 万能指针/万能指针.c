#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����ָ��

void test()
{
	int a = 10;
	void* p = NULL;

	p = &a;

	/*
		�����漰����ָ���ʹ�ã�ָ�����͵�ת����ȡַ
	*/
	printf("a: %d\n", *(int *)p);

}



int main()
{
	test();

	system("pause");
	return 0;
}