#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void test01()
{
	// д������ fputc
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
	// �������� fgetc
	FILE* fp = fopen("./test.txt", "r");

	if (fp == NULL)
	{
		perror("open error");
		return -1;
	}

	// ���ַ�ʽ��ȡ�ļ�
	// ��ʽ1��
	//while (!feof(fp))
	//{
	//	//�ж��ļ���β ע�⣺�����һ���ո�
	//	printf("%d ", fgetc(fp));
	//}

	// ��ʽ2
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