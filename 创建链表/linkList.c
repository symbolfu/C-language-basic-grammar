#include "linkList.h"


link_node* init_linklist()
{
	// 创建头节点指针
	link_node* head = NULL;
	// 给头节点分配内存
	head = (link_node*)malloc(sizeof(link_node));
	if (head == NULL)
	{
		return -1;
	}

	head->id = -1;
	head->next = NULL;


	// 保存当前节点
	link_node* p_current = head;
	int data = -1;
	// 循环向链表插入节点
	while (1)
	{
		printf("please input data:\n");
		scanf("%d", &data);

		// 如果输入-1，退出循环
		if (data == -1)
		{
			break;
		}

		link_node* newnode = (link_node*)malloc(sizeof(link_node));
		if (newnode == NULL)
		{
			break;
		}

		// 给节点赋值
		newnode->id = data;
		newnode->next = NULL;

		// 新节点加入链表
		p_current->next = newnode;
		p_current = newnode;

	}
	return head;
}

// 遍历链表
void foreach_linklist(link_node* head)
{
	if (head == NULL)
	{
		return;
	}
	// 赋值指针变量
	link_node* p_current = head->next;
	while (p_current != NULL)
	{
		printf("id: %d\n", p_current->id);
		p_current = p_current->next;
	}
}


// 插入新节点
void insert_linklist(link_node* head, int val, int data)
{

	if (head == NULL)
	{
		return;
	}

	link_node* p_prev = head;
	link_node* p_current = p_prev->next;
	while (p_current != NULL)
	{
		if (p_current->id == val)       // 在指定值后面插入数据data
		{
			break;
		}
		p_prev = p_current;
		p_current = p_prev->next;
	}


	// 创建新节点
	link_node* newnode = (link_node*)malloc(sizeof(link_node));
	newnode->id = data;
	newnode->next = NULL;


	// 新节点加入链表
	newnode->next = p_current;
	p_prev->next = newnode;

}

// 删除链表
void delete_LinkList(link_node* header, int val)
{
	if (header == NULL)
	{
		return;
	}

	// 创建两个辅助指针变量
	link_node* p_prev = header;
	link_node* p_current = header->next;

	while (p_current != NULL)
	{
		if (p_current->id == val)
		{
			break;
		}

		p_prev = p_current;
		p_current = p_current->next;
	}

	if (p_current == NULL)
	{
		return;
	}

	p_prev->next = p_current->next;

	free(p_current);
	p_current = NULL;
}


// 清空链表
void clear_LinkList(link_node* header)
{
	if (header == NULL)
	{
		return;
	}

	link_node* p_current = header->next;

	while (p_current != NULL)
	{
		link_node* nextNode = p_current->next;
		free(p_current);
		p_current = nextNode;
	}

	header->next = NULL;
}


// 销毁链表
void destroy_LinkList(link_node* header)
{
	if (header == NULL)
	{
		return;
	}

	// 清空链表
	clear_LinkList(header);

	// 释放头节点
	free(header);
	header = NULL;      // 其实这里是无效的
}