#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test01()
{
	// 写操作： fputc
	FILE* fp = NULL;
	fp = fopen("./test.txt", "w+");

	if (fp == NULL)
	{
		perror("open error");
		return -1;
	}

	char buf[] = "this is a good idea!";

	for (int i = 0; i < strlen(buf); i++)
	{
		fputc(buf[i], fp);
	}

	fclose(fp);
}

void test02()
{
	// 读操作： fgetc
	FILE* fp = fopen("./test.txt", "r");

	if (fp == NULL)
	{
		perror("open error");
		return -1;
	}

	// 两种方式读取文件
	// 方式1：
	//while (!feof(fp))
	//{
	//	//判断文件结尾 注意：多输出一个空格
	//	printf("%d ", fgetc(fp));
	//}

	// 方式2
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	printf("\n");

	fclose(fp);

}




int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}