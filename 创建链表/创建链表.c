#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkList.h"


void test01()
{
	// ��ʼ������
	link_node* pheader = init_linklist();

	// ��������
	printf("------------��������----------------\n");
	foreach_linklist(pheader);

	// ��������
	insert_linklist(pheader, 20, 100);
	insert_linklist(pheader, 30, 1000);
	insert_linklist(pheader, 300, 3000);
	printf("------------��������----------------\n");
	foreach_linklist(pheader);

	// ɾ������
	delete_LinkList(pheader, 20);
	delete_LinkList(pheader, 30);
	printf("------------��������----------------\n");
	foreach_linklist(pheader);

	//�������
	clear_LinkList(pheader);
	insert_linklist(pheader, 20, 100);
	insert_linklist(pheader, 30, 1000);

	// ��������
	destroy_LinkList(pheader);
	pheader = NULL;

}


int main()
{
	test01();

	system("pause");
	return 0;
}