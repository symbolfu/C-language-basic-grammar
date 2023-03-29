#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 按位取反

void test01()
{
	int num = 2;
	// 计算2的补码： 0 0010
	// 按位取反：    1 1101     // 切记这里是以补码的形式进行按位取反
	// 转源码：   
	//       取反    1 0010
	//       源码    1 0011      // -3


	// 快速计算公式： ~x = -(x + 1)

	printf("~num = %d\n", ~num);

}

// 按位与：&
void test02()
{
	int a = 5;
	int b = 3;

	// a : 0 0101              切记这里是以补码的形式运算
	// b : 0 0011    

	printf("a & b = %d\n", a & b);

}

// 按位或： |

void test03()
{
	int a = 3;
	int b = -3;

	// a: 0 0011
	// b: 1 1101         // 切记这里是以补码的形式运算
	// a|b: 1 1111     // 补码
	//      1 0001          // 源码

	printf("a|b = %d\n", a | b);
}


// 位异或： ^

void test04()
{
	int a = 3;
	int b = 4;

	// a: 0 0011         // 切记这里是以补码的形式运算
	// b: 0 0100

	printf("a^b = %d\n", a^b);
}

int main()
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return 0;
}