#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void test01()
{
	char* p = (char *)malloc(50);
	char buf[] = "abcdef";

	int n = strlen(buf);


	for (int i = 0; i < n; i++)
	{
		*p = buf[i];
		p++;       // �ı�ԭָ��ָ��
	}

	printf("%s\n", p);

	free(p); // error : �����malloc�������׵�ַ��ʼ�ͷ�


}


int main()
{
	test01();

	system("pause");
	return 0;
}