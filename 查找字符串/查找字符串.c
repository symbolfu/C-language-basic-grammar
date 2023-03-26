#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int myStrstr(char* str, char* subStr)
{
	int num = 0;

	while (*str != '\0')
	{
		if (*str != *subStr) // 是否与首个subStr相等
		{
			num++;
			str++;
			continue;
		}

		// 创建两个临时指针，做二次对比
		char* tempStr = str;
		char* tempSubstr = subStr;

		while (*tempSubstr != '\0')
		{
			if (*tempSubstr != *tempStr)
			{
				//匹配失败
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
		printf("匹配到，start index: %d\n", flag);
	}
	else
	{
		printf("没有匹配到\n");
	}

}


int main()
{

	test01();


	system("pause");
	return 0;
}