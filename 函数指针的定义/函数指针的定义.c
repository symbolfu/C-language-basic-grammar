#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void func(int a, char c)
{
	printf("hello world\n");
}

void test01()
{

	// ��ʽ1�����庯�����ͣ���ͨ�����Ͷ��庯��ָ��
	typedef void (FUNC_TYPE)(int, char);
	FUNC_TYPE* pFunc = func;
	//pFunc(10, 'b');

	// ��ʽ2�����������ָ�����ͣ�ͨ�����Ͷ��庯��ָ��
	typedef void (*FUNC_TYPE2)(int, char);

	FUNC_TYPE2 pFunc2 = func;
	//pFunc2(10, 'b');

	// ��ʽ3�� ֱ�Ӷ��庯��ָ�����
	void(*pFunc3)(int, char) = func;
	pFunc3(30, 'c');

}




int main()
{
	test01();

	system("pause");
	return 0;
}