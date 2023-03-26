#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void copyString(char* dest, char* src)
{
	int len = strlen(src);

	for (int i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}dest[len] = '\0';
}

void copyString2(char* dest, char* src)
{
	while (*src++ != '\0')
	{
		*dest++ = *src;
	}
	*dest = '\0';
}

void copyString3(char* dest, char* src)
{
	while (*dest++ = *src++){}
}


void test01()
{
	char* str = "hello world";
	char buf[1024];

	//copyString(buf, str);
	//printf("%s\n", str);
	//printf("%s\n", buf);

	copyString2(buf, str);
	//printf("%s\n", str);
	//printf("%s\n", buf);

	//copyString3(buf, str);
	printf("%s\n", str);
	printf("%s\n", buf);

}


int main()
{
	test01();

	system("pause");
	return 0;
}