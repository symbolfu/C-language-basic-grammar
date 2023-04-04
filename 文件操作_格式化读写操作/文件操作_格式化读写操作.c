#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 写操作
void test01()
{
	FILE* fp = NULL;
	fp = fopen("test", "w");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	fprintf(fp, "hello world! : %d", 10);
	fprintf(fp, "hello world! : %d", 20);

	fclose(fp);

}

void test02()
{
	FILE* fp = NULL;
	fp = fopen("test", "r");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	char temps[1024] = { 0 };
	while (!feof(fp))
	{
		fscanf(fp, "%s", temps);   // 遇到空格和换行符时结束
		printf("%s",temps);
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