#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test01()
{
	char buf[1024] = { 0 };
	sprintf(buf, "hello,%s, welcom!\n", "john");
	printf("buf: %s", buf);

	memset(buf, 0, 1024);
	sprintf(buf, "i am %d\n", 20);
	printf("buf: %s", buf);
}

void test02()
{
	char buf[1024] = { 0 };
	char str1[] = "hello";
	char str2[] = "world";

	//返回值:实际格式化的字符个数
	int len = sprintf(buf, "%s %s", str1, str2);
	printf("buf: %s, len: %d\n", buf, len);
}

void test03()
{
	char* str = "abcde12345";

	char buf[1024] = { 0 };

	// 尽可能多的匹配，遇到失败就退出匹配
	sscanf(str, "%[a-z]", buf);

	printf("len:%d\n", strlen(buf));
	printf("%s\n", buf);

}

void test04()
{
	char* str = "abcd#haofu@12345";
	char buf[1024] = { 0 };

	sscanf(str, "%*[^#]#%[^@]", buf);

	printf("name: %s\n", buf);
}


int main()
{
	//test01();
	//test02();

	//test03();
	test04();

	system("pause");
	return 0;
}