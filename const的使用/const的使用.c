#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




// const�޸ı���
void test01()
{
	// ��ʾ����ͨ������ȥ�޸�ֵ
	const int i = 0;
	//i = 100       //error: ֻ��������ʼ�������޸�

	int* p = NULL;

	p = &i;           // ����޸�
	*p = 100;

	printf("%d\n", *p);

}

// const ����ָ��
void test02()
{
	int a = 19;
	int b = 20;

	//const����*����� ����p_aָ��ָ����ڴ�ռ䲻���޸�,�����޸�ָ���ָ��
	const int* p_a = &a;   
	p_a = &b;

	printf("%d\n", *p_a);

}


//���ָ���ָ��ָ����ڴ�ռ䶼�����޸�
void test03()
{
	int a = 100;
	int b = 10;
	const int* const p_c = &a;
	// p_c = &b;    // error
	printf("%d\n", *p_c);

}

// const �����βΣ���ֹ�����
struct Persion
{
	char name[32];
	int age;
	int Id;
	int score;
};

void showPerson(const struct Persion* p)
{
	//p->age = 1000;        error
	printf("name: %s  age: %d  id: %d   score: %d\n", p->name, p->age, p->Id, p->score );
}


void test04()
{
	struct Persion p = { "Tom", 10, 100, 90 };

	showPerson(&p);
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