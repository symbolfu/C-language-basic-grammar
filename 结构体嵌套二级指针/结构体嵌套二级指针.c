#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct _Teacher
{
	char name[64];
	char** students;
}Teacher;

void create_teacher(Teacher** teacher, int n, int m)
{
	if (teacher == NULL)
	{
		return;
	}

	// 创建老师数组
	Teacher* teachers = (Teacher *)malloc(sizeof(Teacher) * n);
	if (teachers == NULL)
	{
		return;
	}

	// 给每个老师分配学生
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		sprintf(teachers[i].name, "teacher_%d", i + 1);
		teachers[i].students = (char **)malloc(sizeof(char*) * m);
		for (int j = 0; j < m; j++)
		{
			teachers[i].students[j] = malloc(64);
			sprintf(teachers[i].students[j], "stu_%d", num + 1);
			num++;
		}
	}
	*teacher = teachers;
}

void print_teacher(Teacher *teacher, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", teacher[i].name);
		for (int j = 0; j < m; j++)
		{
			printf("	%d\n", teacher[i].students[j]);
		}
		printf("---------------------------------\n");
	}
}

void free_memory(Teacher** teacher, int n, int m)
{
	if (teacher == NULL)
	{
		return;
	}

	Teacher* temp = *teacher;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			free(temp[i].students[j]);
			temp[i].students[j] = NULL;
		}
		
		free(temp[i].students);
		temp[i].students = NULL;
	}

	free(*teacher);
	*teacher = NULL;
	
}

void test01()
{
	Teacher* p = NULL;

	create_teacher(&p, 2, 3);

	print_teacher(p, 2, 3);

	free_memory(&p, 2, 3);


	if (p == NULL)
	{
		printf("p is null!\n");
	}
	else
	{
		printf("p is not null !\n");
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}