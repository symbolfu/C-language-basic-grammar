#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "code.h"

// �ļ����ܽ���

void test01()
{
	// �ļ�����
	codeFile("./config.txt", "./�����ļ�.txt");

	// �ļ�����
	decodeFile("./�����ļ�.txt", "./�����ļ�.txt");

}


int main()
{

	test01();

	system("pause");
	return 0;
}