#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int myStrstr(char* str, char* subStr)
{
	int num = 0;

	while (*str != '\0')
	{
		if (*str != *subStr) // �Ƿ����׸�subStr���
		{
			num++;
			str++;
			continue;
		}

		// ����������ʱָ�룬�����ζԱ�
		char* tempStr = str;
		char* tempSubstr = subStr;

		while (*tempSubstr != '\0')
		{
			if (*tempSubstr != *tempStr)
			{
				//ƥ��ʧ��
				num++;
				str++;
				break;
			}
			tempStr++;
			tempSubstr++;
		}
		if (*tempSubstr == '\0')
		{
			return num;
		}
	}
	return -1;
}



void test01()
{
	char* str = "hello world!";
	char* str1 = "rld";
	int flag;

	flag = myStrstr(str, str1);

	if (flag != -1)
	{
		printf("ƥ�䵽��start index: %d\n", flag);
	}
	else
	{
		printf("û��ƥ�䵽\n");
	}

}


int main()
{

	test01();


	system("pause");
	return 0;
}