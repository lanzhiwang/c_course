/**
指针数组模拟二维数组

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
	int arr[3][5] =
	    { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 5; j++) {
			printf("arr[%ld][%ld] = %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}

	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 2, 3, 4, 5, 6 };
	int arr3[5] = { 3, 4, 5, 6, 7 };
	int *parr[3] = { arr1, arr2, arr3 };
	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 5; j++) {
			printf("*(parr[%ld] + %ld) = %d\n", i, j,
			       *(parr[i] + j));
		}
		printf("\n");
	}

	for (size_t i = 0; i < 3; i++) {
		for (size_t j = 0; j < 5; j++) {
			printf("*((*(parr + %ld)) + %ld) = %d\n", i, j,
			       *((*(parr + i)) + j));
		}
		printf("\n");
	}

	return 0;
}

/**

$ ./main
arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3
arr[0][3] = 4
arr[0][4] = 5

arr[1][0] = 2
arr[1][1] = 3
arr[1][2] = 4
arr[1][3] = 5
arr[1][4] = 6

arr[2][0] = 3
arr[2][1] = 4
arr[2][2] = 5
arr[2][3] = 6
arr[2][4] = 7

*(parr[0] + 0) = 1
*(parr[0] + 1) = 2
*(parr[0] + 2) = 3
*(parr[0] + 3) = 4
*(parr[0] + 4) = 5

*(parr[1] + 0) = 2
*(parr[1] + 1) = 3
*(parr[1] + 2) = 4
*(parr[1] + 3) = 5
*(parr[1] + 4) = 6

*(parr[2] + 0) = 3
*(parr[2] + 1) = 4
*(parr[2] + 2) = 5
*(parr[2] + 3) = 6
*(parr[2] + 4) = 7

*((*(parr + 0)) + 0) = 1
*((*(parr + 0)) + 1) = 2
*((*(parr + 0)) + 2) = 3
*((*(parr + 0)) + 3) = 4
*((*(parr + 0)) + 4) = 5

*((*(parr + 1)) + 0) = 2
*((*(parr + 1)) + 1) = 3
*((*(parr + 1)) + 2) = 4
*((*(parr + 1)) + 3) = 5
*((*(parr + 1)) + 4) = 6

*((*(parr + 2)) + 0) = 3
*((*(parr + 2)) + 1) = 4
*((*(parr + 2)) + 2) = 5
*((*(parr + 2)) + 3) = 6
*((*(parr + 2)) + 4) = 7

$

 */
