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

// 遍历链表
extern void foreach_linklist(link_node* head);


// 插入新节点
extern void insert_linklist(link_node* head, int val, int data);

// 删除链表
extern void delete_LinkList(link_node* header, int val);


// 清空链表
extern void clear_LinkList(link_node* header);


// 销毁链表
extern void destroy_LinkList(link_node* header);
