#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "code.h"

// 文件加密解密

void test01()
{
	// 文件加密
	codeFile("./config.txt", "./加密文件.txt");

	// 文件解密
	decodeFile("./加密文件.txt", "./解密文件.txt");

}


int main()
{

	test01();

	system("pause");
	return 0;
}