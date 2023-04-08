#include "linkList.h"


link_node* init_linklist()
{
	// ����ͷ�ڵ�ָ��
	link_node* head = NULL;
	// ��ͷ�ڵ�����ڴ�
	head = (link_node*)malloc(sizeof(link_node));
	if (head == NULL)
	{
		return -1;
	}

	head->id = -1;
	head->next = NULL;


	// ���浱ǰ�ڵ�
	link_node* p_current = head;
	int data = -1;
	// ѭ�����������ڵ�
	while (1)
	{
		printf("please input data:\n");
		scanf("%d", &data);

		// �������-1���˳�ѭ��
		if (data == -1)
		{
			break;
		}

		link_node* newnode = (link_node*)malloc(sizeof(link_node));
		if (newnode == NULL)
		{
			break;
		}

		// ���ڵ㸳ֵ
		newnode->id = data;
		newnode->next = NULL;

		// �½ڵ��������
		p_current->next = newnode;
		p_current = newnode;

	}
	return head;
}

// ��������
void foreach_linklist(link_node* head)
{
	if (head == NULL)
	{
		return;
	}
	// ��ֵָ�����
	link_node* p_current = head->next;
	while (p_current != NULL)
	{
		printf("id: %d\n", p_current->id);
		p_current = p_current->next;
	}
}


// �����½ڵ�
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
		if (p_current->id == val)       // ��ָ��ֵ�����������data
		{
			break;
		}
		p_prev = p_current;
		p_current = p_prev->next;
	}


	// �����½ڵ�
	link_node* newnode = (link_node*)malloc(sizeof(link_node));
	newnode->id = data;
	newnode->next = NULL;


	// �½ڵ��������
	newnode->next = p_current;
	p_prev->next = newnode;

}

// ɾ������
void delete_LinkList(link_node* header, int val)
{
	if (header == NULL)
	{
		return;
	}

	// ������������ָ�����
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


// �������
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


// ��������
void destroy_LinkList(link_node* header)
{
	if (header == NULL)
	{
		return;
	}

	// �������
	clear_LinkList(header);

	// �ͷ�ͷ�ڵ�
	free(header);
	header = NULL;      // ��ʵ��������Ч��
}