#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "config.h"


// 读写配置文件

void test01()
{

	char* filePath = "./config.txt";

	// api:  获取文件有效行数
	int len = getFileLines(filePath);

	struct ConfigInfo* configInfo = NULL;
	//api: 解析文件内容
	parseFile(filePath, len, &configInfo);

	//api： 测试根据key获取value
	printf("hero id: = %s\n", getInfoByKey("heroId", configInfo, len));
	printf("hero name: = %s\n", getInfoByKey("heroName", configInfo, len));
	printf("hero Atk: = %s\n", getInfoByKey("heroAtk", configInfo, len));
	printf("hero Def: = %s\n", getInfoByKey("heroDef", configInfo, len));
	printf("hero Info: = %s\n", getInfoByKey("heroInfo", configInfo, len));


	// api: 释放空间
	freeConfigInfo(configInfo);

	configInfo = NULL;

}

void test02()
{
	FILE* fp = fopen("./new.txt", "r");
	if (fp == NULL)
	{
		return -1;
	}

	//fputs("这是一个新世纪！", fp);
	char buf[1024] = { 0 };
	fgets(buf, 1024, fp);
	printf("%s", buf);

	//char buf[1024] = { 0 };

	//while (fgets(buf, 1024, fp) != NULL)
	//{
	//	printf("%s", buf);
	//	memset(buf, 0, 1024);
	//}

	fclose(fp);
}



int main()
{
	test01();
	//test02();


	system("pause");
	return 0;
}