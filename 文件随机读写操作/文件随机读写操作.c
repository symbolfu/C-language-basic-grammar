#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _TEACHER
{
	char name[64];
	int age;
}Teacher;


void test01()
{
	FILE* fp = NULL;
	fp = fopen("test", "wb+");
	if (NULL == fp)
	{
		perror("fopen error");
		return;
	}


	Teacher teachers[4] = {
		{"aaaaaaa", 1},
		{"bbbbbbb", 2},
		{"ccccccc", 3},
		{"ddddddd", 4}
	};

	for (int i = 0; i < 4; i++)
	{
		fwrite(&teachers[i], 1, sizeof(Teacher), fp);
	}
	printf("%d, before\n", ftell(fp));
	fseek(fp, -(int)sizeof(Teacher) * 2, SEEK_CUR);
	fwrite(&teachers[0], 1, sizeof(Teacher), fp);
	printf("%d, after\n", ftell(fp));

	rewind(fp);
	fwrite(&teachers[3], 1, sizeof(Teacher), fp);
	printf("%d, after\n", ftell(fp));


	rewind(fp);
	printf("%d, after\n", ftell(fp));
	printf("---------------------------------\n");
	Teacher temps;
	//memset(&temps, 0, sizeof(temps));
	//fread(&temps, sizeof(Teacher), 6, fp);

	//for (int i = 0; i < 6; i++)
	//{
	//	printf("name:%s, age: %d\n", temps[i].name, temps[i].age); 
	//	system("pause");
	//}
	while (!feof(fp))
	{
		memset(&temps, 0, sizeof(temps));
		fread(&temps, 1, sizeof(Teacher), fp);
		printf("name:%s, age: %d\n", temps.name, temps.age);

	}
	fclose(fp);

}

void test02()
{

}


int main()
{
	test01();

	system("pause");
	return 0;
}