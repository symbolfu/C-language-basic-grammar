#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ÐÐÐ´£»
void test01()
{
	FILE* fp = NULL;
	
	fp = fopen("test", "w+");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	char* buf[] = {
		"01 this a test!\n",
		"02 this is a test!",
		"03 this is a test!",
	};

	for (int i = 0; i < 3; i++)
	{
		fputs(buf[i], fp);
	}

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

	while (!feof(fp))
	{
		char temp[1024] = { 0 };
		fgets(temp, 1024, fp);
		printf("%s", temp);
	}

	fclose(fp);
}




int main()
{
	test01();
	test02();


	system("pause");
	return 0;
}