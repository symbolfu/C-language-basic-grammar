#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
	�������������ԭ������Ϊ �޷��������з������ļ��㵼�µģ�
	��Ϊһ���޷��ŵ�����һ��int���͵��������㣬����������С��0;
	sizeof�ķ���ֵ����unsigned int����
*/

void test()
{
	unsigned int a = 5;
	if (a - 10 < 0)
	{
		printf("��������\n");
	}
	else
	{
		printf("<<<<<<<\n");
	}

	if (sizeof(a) - 10 > 0)    // error:(int)sizeof(a)
	{
		printf("����\n");
	}
	else
	{
		printf("С��\n");
	}

}


int main()
{
	test();

	system("pause");
	return 0;
}