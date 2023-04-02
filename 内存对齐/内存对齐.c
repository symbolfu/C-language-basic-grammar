#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma pack(show)

typedef struct _STUDENT {
	int a;        // 0 - 3
	char b;       // 4
	double c;     // 8-15
	float d;      // 16-20
}Student;

/*
	对于标准数据类型，它的地址只要是它的长度的整数倍；
​	对于非标准数据类型，比如结构体，要遵循一下对齐原则：
​		数组成员对齐规则；
​			第一个数组成员应该放在offset为0的地方，以后每个数组成员应该放在offset为**min（当前成员的大小，#pargama pack(n)）**整数倍的地方开始；

​		结构体总的大小：
​			必须是**min（结构体内部最大成员，#pargama pack(n)）**的整数倍，不足要补齐；

​		结构体做为成员的对齐规则：
​			如果一个结构体B里嵌套另一个结构体A,还是以最大成员类型的大小对齐，但是结构体A的起点为A内部最大成员的整数倍的地方；
*/

void test01()
{
	printf("student size: %d\n", sizeof(Student));     // 24
}


int main()
{
	test01();

	system("pause");
	return 0;
}