#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



void test01()
{
	int arr[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int arr1[][3] = { 1,2,3,4,5,6,7,8,9 };


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("%d\n", arr);
	printf("%d\n", arr + 1);
	printf("%d\n", *arr + 1);

}



int main()
{

	test01();



	system("pause");
	return 0;
}