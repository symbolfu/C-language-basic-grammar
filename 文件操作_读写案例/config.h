#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// ������Ϣ �ṹ��
struct ConfigInfo
{
	char key[64];
	char value[64];
};


// api:  ��ȡ�ļ���Ч����
extern int getFileLines(char* filePath);


// api�� ��⵱ǰ���Ƿ���Ч
extern int isValidLines(char* str);


//api: �����ļ�����
extern void parseFile(char * filePath, int lines, struct ConfigInfo ** configinfo);

//api�� ���Ը���key��ȡvalue
extern char* getInfoByKey(char * key, struct ConfigInfo * configinfo, int len);


// api: �ͷſռ�
extern void freeConfigInfo(struct ConfigInfo * configinfo);


