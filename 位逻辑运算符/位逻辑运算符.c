#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ��λȡ��

void test01()
{
	int num = 2;
	// ����2�Ĳ��룺 0 0010
	// ��λȡ����    1 1101     // �м��������Բ������ʽ���а�λȡ��
	// תԴ�룺   
	//       ȡ��    1 0010
	//       Դ��    1 0011      // -3


	// ���ټ��㹫ʽ�� ~x = -(x + 1)

	printf("~num = %d\n", ~num);

}

// ��λ�룺&
void test02()
{
	int a = 5;
	int b = 3;

	// a : 0 0101              �м��������Բ������ʽ����
	// b : 0 0011    

	printf("a & b = %d\n", a & b);

}

// ��λ�� |

void test03()
{
	int a = 3;
	int b = -3;

	// a: 0 0011
	// b: 1 1101         // �м��������Բ������ʽ����
	// a|b: 1 1111     // ����
	//      1 0001          // Դ��

	printf("a|b = %d\n", a | b);
}


// λ��� ^

void test04()
{
	int a = 3;
	int b = 4;

	// a: 0 0011         // �м��������Բ������ʽ����
	// b: 0 0100

	printf("a^b = %d\n", a^b);
}

int main()
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return 0;
}