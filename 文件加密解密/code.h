#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 文件加密
extern void codeFile(char* sourceFilePath, char* destFilePath);

// 解密文件
extern void decodeFile(char* sourceFilePath, char* destFilePath);
