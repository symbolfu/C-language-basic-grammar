#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct LinkNode
{
	int id;
	char name[100];
	struct Stu* next;
}LinkNode;

void test01()
{
	// ��ʼ�������ṹ�����
	LinkNode node1 = { 1, "yuri", NULL };
	LinkNode node2 = { 2, "lily", NULL };
	LinkNode node3 = { 3, "lili", NULL };

	// ������ϵ
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	// ��������
	LinkNode* pCurrent = &node1;

	while (pCurrent != NULL)
	{
		printf("name: %s; id: %d\n", pCurrent->name, pCurrent->id);
		pCurrent = pCurrent->next;
	}
}




int main()
{
	test01();

	system("pause");
	return 0;
}