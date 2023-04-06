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
	// 初始化三个结构体变量
	LinkNode node1 = { 1, "yuri", NULL };
	LinkNode node2 = { 2, "lily", NULL };
	LinkNode node3 = { 3, "lili", NULL };

	// 建立关系
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	// 遍历链表
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