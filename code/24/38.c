/**
指针数组

1. 数组指针
   int (*)[10]
   将 int arr[10] 中的 arr 换成 (*p)
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int (*p)[10] = &arr;

2. 指针数组
   int *[10]

 */

#include <stdio.h>

int main(void)
{
	int arr1[5];
	char arr2[6];
	int *arr3[8];
	double *arr4[3];

	return 0;
}

/**

 */
