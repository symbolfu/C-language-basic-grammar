#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// stack�����ڴ��ͷŻ���
// ����������ɺ󣬶�Ӧstack���ϵ����ݾͻ��ͷţ�

char* func()
{
	char p[] = "hello world!";
	printf("%s\n", p);
	return p;
}


void test()
{
	char* p = NULL;
	p = func();
	printf("%s\n", p);

}






int main()
{
	test();

	system("pause");
	return 0;
}