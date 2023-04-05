#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 配置信息 结构体
struct ConfigInfo
{
	char key[64];
	char value[64];
};


// api:  获取文件有效行数
extern int getFileLines(char* filePath);


// api； 检测当前行是否有效
extern int isValidLines(char* str);


//api: 解析文件内容
extern void parseFile(char * filePath, int lines, struct ConfigInfo ** configinfo);

//api： 测试根据key获取value
extern char* getInfoByKey(char * key, struct ConfigInfo * configinfo, int len);


// api: 释放空间
extern void freeConfigInfo(struct ConfigInfo * configinfo);


