#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test01()
{
	//�ַ�����ֻ�ܳ�ʼ��5���ַ����������ʱ�򣬴ӿ�ʼλ��ֱ���ҵ�0����
	char str1[] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str1);

	//�ַ����鲿�ֳ�ʼ����ʣ����0
	char str2[100] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str2);

	// ��õķ�ʽ
	//������ַ�����ʼ������ô������Ĭ�ϻ����ַ���β�����'\0'
	char str3[] = "hello";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));

	// sizeof��strlen���������
	//sizeof���������С���������'\0'�ַ�
	//strlen�����ַ����ĳ��ȣ���'\0'��������������\0��
	printf("sizeof str:%d\n", sizeof(str3));
	printf("strlen str:%d\n", strlen(str3));


	char str4[] = "hello\0world";
	printf("%s\n", str4);
	printf("%d\n", sizeof(str4));
	printf("%d\n", strlen(str4));

}

int main()
{
	test01();



	system("pause");
	return 0;
}