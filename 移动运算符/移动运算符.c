#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ����: <<
// ���������<<��������������ֵ��ÿλ�����ƶ����ƶ���λ�������Ҳ������ָ����
// �ճ�����λ��0��䣬���Ҷ����Ƴ���������ĩ�˵�λ;

void test01()
{
	int a = 1;
	printf("%d\n", a << 2);
}

// ����


void test02()
{
	unsigned int a = 4;
	int b = 4;

	printf("%d\n", a >> 1);
	printf("%d\n", b >> 1);

}


int main()
{
	test01();
	test02();



	system("pause");
	return 0;
}