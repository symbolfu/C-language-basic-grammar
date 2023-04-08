#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkList.h"


void test01()
{
	// 初始化链表
	link_node* pheader = init_linklist();

	// 遍历链表
	printf("------------遍历链表----------------\n");
	foreach_linklist(pheader);

	// 插入链表
	insert_linklist(pheader, 20, 100);
	insert_linklist(pheader, 30, 1000);
	insert_linklist(pheader, 300, 3000);
	printf("------------遍历链表----------------\n");
	foreach_linklist(pheader);

	// 删除链表
	delete_LinkList(pheader, 20);
	delete_LinkList(pheader, 30);
	printf("------------遍历链表----------------\n");
	foreach_linklist(pheader);

	//清空链表
	clear_LinkList(pheader);
	insert_linklist(pheader, 20, 100);
	insert_linklist(pheader, 30, 1000);

	// 销毁链表
	destroy_LinkList(pheader);
	pheader = NULL;

}


int main()
{
	test01();

	system("pause");
	return 0;
}