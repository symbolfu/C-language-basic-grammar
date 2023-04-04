#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct _TEACHER
{
	char name[64];
	int age;
}Teacher;

// Ð´²Ù×÷
void test01()
{
	FILE* fp = NULL;
	fp = fopen("test", "wb");
	if (fp == NULL)
	{
		perror("fopen error");
		return;
	}

	Teacher teachers[4] = {
		{"aaaa", 33},
		{"bbbb", 44},
		{"cccc", 55},
		{"dddd", 66}
	};

	for (int i = 0; i < 4; i++)
	{
		fwrite(&teachers[i], 1, sizeof(Teacher), fp);
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

	Teacher temps[4];
	fread(&temps, sizeof(Teacher), 4, fp);

	for (int i = 0; i < 4; i++)
	{
		printf("name: %s, age: %d\n", temps[i].name, temps[i].age);
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