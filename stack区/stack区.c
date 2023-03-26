#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// stack区：内存释放机制
// 函数运算完成后，对应stack区上的内容就会释放；

char* func()
{
	char p[] = "hello world!";
	printf("%s\n", p);
	return p;
}


void test()
{
	char* p = NULL;
	p = func();
	printf("%s\n", p);

}






int main()
{
	test();

	system("pause");
	return 0;
}