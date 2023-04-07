#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct LinkNode
{
	int id;
	char name[100];

	struct LinkNode* next;
}LinkNode;

void test01()
{
	// 创建节点
	struct LinkNode* node1 = malloc(sizeof(LinkNode));
	struct LinkNode* node2 = malloc(sizeof(LinkNode));
	struct LinkNode* node3 = malloc(sizeof(LinkNode));
	struct LinkNode* node4 = malloc(sizeof(LinkNode));
	struct LinkNode* node5 = malloc(sizeof(LinkNode));

	// 给数据域赋值
	node1->id = 100;
	strcpy(node1->name, "aaaa");
	//*(node1->name) = "aaaa";
	node2->id = 200;
	strcpy(node2->name, "bbbb");
	node3->id = 300;
	strcpy(node3->name, "cccc");
	node4->id = 400;
	strcpy(node4->name, "dddd");
	node5->id = 500;
	strcpy(node5->name, "ffff");

	// 建立关系
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	// 遍历链表
	struct LinkNode* pCurrent = node1;

	while (pCurrent != NULL)
	{
		printf("id: %d; name = %s\n", pCurrent->id, pCurrent->name);
		pCurrent = pCurrent->next;
	}
}



int main()
{
	test01();


	system("pause");
	return 0;
}