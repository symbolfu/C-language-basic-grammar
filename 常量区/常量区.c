#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void tets01()
{
	static char arr[] = "hello world";     // ��̬�����ɶ���д
	char arr1[] = "hello world";    // stack�����ɶ���д
	arr[2] = '2';
	char* p = "hello world";        // �ַ���������������д
}


int main()
{
	test01();

	system("pause");
	return 0;
}