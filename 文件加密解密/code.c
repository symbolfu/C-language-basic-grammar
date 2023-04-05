#include "code.h"

// �ļ�����
void codeFile(char* sourceFilePath, char* destFilePath)
{
	FILE* fp1 = fopen(sourceFilePath, "r");
	FILE* fp2 = fopen(destFilePath, "w");

	if (!fp1 || !fp2)
	{
		perror("fopen error");
		return -1;
	}

	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		short temp = (short)ch;
		// ��������
		temp = temp << 4;
		temp = temp | 0x8000;
		temp += rand() % 16;
		fprintf(fp2, "%hd", temp);
	}

	fclose(fp1);
	fclose(fp2);
}

// �����ļ�
void decodeFile(char* sourceFilePath, char* destFilePath)
{
	FILE* fp1 = fopen(sourceFilePath, "r");
	FILE* fp2 = fopen(destFilePath, "w");

	if (!fp1 || !fp2)
	{
		perror("fopen error");
		return -1;
	}

	short temp;
	while (!feof(fp1))
	{
		fscanf(fp1, "%hd", &temp);
		// �����߼�
		temp = temp << 1;
		temp = temp >> 5;
		char ch = (char)temp;
		fputc(ch, fp2);
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
}