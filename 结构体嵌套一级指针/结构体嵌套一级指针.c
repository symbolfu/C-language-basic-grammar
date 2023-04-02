#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person
{
	char* name;
	int age;
};

struct Person** allocateSpace()
{
	struct Person** temp = malloc(sizeof(struct Person*) * 3);

	for (int i = 0; i < 3; i++)
	{
		// �����ṹ���ڴ�
		temp[i] = malloc(sizeof(struct Person));

		// �����ṹ������name
		temp[i]->name = malloc(sizeof(char) * 64);

		sprintf(temp[i]->name, "name_%d", i+1);
		temp[i]->age = i + 1;
	}
	return temp;
}

void printPerson(struct Person** pArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("������ %s; ���䣺 %d\n", pArray[i]->name, pArray[i]->age);
	}
}

void releaseSpace(struct Person** pArray)
{
	for (int i = 0; i < 3; i++)
	{
		if (pArray[i]->name != NULL)
		{
			free(pArray[i]->name);
			pArray[i]->name = NULL;
		}
		free(pArray[i]);
		pArray[i] = NULL;
	}

	free(pArray);
	pArray = NULL;
}

void test01()
{
	struct Person** pArray = NULL;
	

	// �ڶ��ϴ����ռ�
	pArray = allocateSpace();

	// ��ӡ����
	printPerson(pArray, 3);

	// �ͷŶ����ڴ�
	releaseSpace(pArray);

	if (pArray != NULL)
	{
		printf("pArray not null: %d\n",pArray);
		pArray = NULL;
	}
}



int main()
{

	test01();


	system("pause");
	return 0;
}