#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
	1.	�Ѹ����ַ���Ϊ: helloworld@itcast.cn,�����ʵ��helloworld�����itcast.cn�����
*/


void test01()
{
	char* str = "helloworld@itcast.cn";

	char buf[1024] = {0};
	char buf1[1024] = {0};


	sscanf(str, "%[^@]@%s", buf, buf1);
	printf("%s\n", buf);
	printf("%s\n", buf1);
}

/*
	2.	�Ѹ����ַ���Ϊ:123abcd$myname@000qwe.�����ʵ��ƥ���myname�ַ����������.
*/


void test02()
{
	char* str = "123abcd$myname@000qwe";
	char buf[1024] = { 0 };

	sscanf(str,"%*[^$]$%[^@]", buf);

	printf("%s\n", buf);
}


int main()
{

	test01();
	test02();

	system("pause");
	return 0;
}