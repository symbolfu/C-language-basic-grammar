#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct _LinkNode
{
	int id;
	struct _LinkNode* next;
}link_node;


extern link_node* init_linklist();

// ��������
extern void foreach_linklist(link_node* head);


// �����½ڵ�
extern void insert_linklist(link_node* head, int val, int data);

// ɾ������
extern void delete_LinkList(link_node* header, int val);


// �������
extern void clear_LinkList(link_node* header);


// ��������
extern void destroy_LinkList(link_node* header);
