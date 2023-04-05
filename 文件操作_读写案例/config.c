#include "config.h"


// api:  获取文件有效行数
int getFileLines(char* filePath)
{
	FILE* file = fopen(filePath, "r");
	if (file == NULL)
	{
		perror("fopen error");
		return -1;
	}

	char buf[1024] = { 0 };
	int lines = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		if (isValidLines(buf))
		{
			lines++;
		}
		memset(buf, 0, 1024);
	}

	fclose(file);

	return lines;
}

// api； 检测当前行是否有效
int isValidLines(char* str)
{
	if (strchr(str, ':') == NULL)
	{
		return 0;
	}
	return 1;
}


//api: 解析文件内容
void parseFile(char* filePath, int lines, struct ConfigInfo** configinfo)
{
	// 堆上创建
	struct ConfigInfo* info = malloc(sizeof(struct ConfigInfo) * lines);

	if (info == NULL)
	{
		return;
	}

	FILE* file = fopen(filePath, "r");
	if (file == NULL)
	{
		return;
	}

	char buf[1024] = { 0 };
	int index = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		if (isValidLines(buf))
		{
			memset(info[index].key, 0, 64);
			memset(info[index].value, 0, 64);
			char* pos = strchr(buf, ':');
			printf("%s\n", buf);
			strncpy(info[index].key, buf, pos - buf);
			if (strchr(buf, '\n'))         // 解决最后一行没有换行符的常见
			{
				strncpy(info[index].value, pos + 1, strlen(pos + 1) - 1);
			}
			else
			{
				strncpy(info[index].value, pos + 1, strlen(pos + 1));
			}
			
			index++;
		}
		memset(buf, 0, 1024);
	}
	*configinfo = info;
}

//api： 测试根据key获取value
char* getInfoByKey(char* key, struct ConfigInfo* configinfo, int len)
{
	for (int i = 0; i < len; i++)
	{
		if (strcmp(key, configinfo[i].key) == 0)
		{
			return configinfo[i].value;
		}
	}
	return NULL;

}


// api: 释放空间
void freeConfigInfo(struct ConfigInfo* configinfo)
{
	if (configinfo != NULL)
	{
		free(configinfo);
		configinfo = NULL;
	}
}
