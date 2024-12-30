/**
数组指针
二维数组传参的本质

1. 数组指针
   int (*)[10]
   将 int arr[10] 中的 arr 换成 (*p)
   int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int (*p)[10] = &arr;

2. 指针数组
   int *[10]
   int *parr[3] = { arr1, arr2, arr3 };

note:
1. [] 优先级高于 *

 */

#include <stdio.h>

// 二维数组初始化, 行可以省略, 但是列不能省略
void print1(int arr[3][5], int r, int c)
{
	for (size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			printf("print1 arr[%ld][%ld] = %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int arr[][5], int r, int c)
{
	for (size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			printf("print2 arr[%ld][%ld] = %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
}

/**
void print3(int arr[][], int r, int c)  // error: array type has incomplete element type 'int[]'
{
	for (size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			printf("print3 arr[%ld][%ld] = %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
}
 */

/**
int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
    0  1  2  3  4
0 { 1, 2, 3, 4, 5 } -> int arr1[5]
1 { 2, 3, 4, 5, 6 } -> int arr2[5]
2 { 3, 4, 5, 6, 7 } -> int arr3[5]

1. 将二维数组理解为一维数组
int arr[3][5] 等价于 int (arr[3])[5], 也就是 arr 是一个拥有三个元素的数组, 每个元素都是一个拥有五个整型元素的一维数组
也就是二维数组其实就是一个存放一维数组的数组

2. 二维数组的首元素是 { 1, 2, 3, 4, 5 } -> int arr1[5], 也就是二维数组的首元素是第一个一维数组
数组的数组名表示第一个元素的地址, 也就是 arr = &arr1, 也就是 int (*p)[5] = &arr1, 也就是 int (*p)[5] = arr

 */
void print4(int (*p)[5], int r, int c)
{
	for(size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			// (*(p + i))[j]
			printf("print4 (*(p + %ld))[%ld] = %d\n", i, j,
			       (*(p + i))[j]);
		}
		printf("\n");
	}
}

void print5(int (*p)[5], int r, int c)
{
	for(size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			// *((*(p + i)) + j)
			printf("print5 *((*(p + %ld)) + %ld) = %d\n", i, j,
			       *((*(p + i)) + j));
		}
		printf("\n");
	}
}

void print6(int (*p)[5], int r, int c)
{
	for(size_t i = 0; i < r; i++) {
		for (size_t j = 0; j < c; j++) {
			// p[][]
			printf("print6 p[%ld][%ld] = %d\n", i, j, p[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int arr[3][5] =
	    { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	// print3(arr, 3, 5);
	print4(arr, 3, 5);
	print5(arr, 3, 5);
	print6(arr, 3, 5);

	return 0;
}

/**

# ./main
print1 arr[0][0] = 1
print1 arr[0][1] = 2
print1 arr[0][2] = 3
print1 arr[0][3] = 4
print1 arr[0][4] = 5

print1 arr[1][0] = 2
print1 arr[1][1] = 3
print1 arr[1][2] = 4
print1 arr[1][3] = 5
print1 arr[1][4] = 6

print1 arr[2][0] = 3
print1 arr[2][1] = 4
print1 arr[2][2] = 5
print1 arr[2][3] = 6
print1 arr[2][4] = 7

print2 arr[0][0] = 1
print2 arr[0][1] = 2
print2 arr[0][2] = 3
print2 arr[0][3] = 4
print2 arr[0][4] = 5

print2 arr[1][0] = 2
print2 arr[1][1] = 3
print2 arr[1][2] = 4
print2 arr[1][3] = 5
print2 arr[1][4] = 6

print2 arr[2][0] = 3
print2 arr[2][1] = 4
print2 arr[2][2] = 5
print2 arr[2][3] = 6
print2 arr[2][4] = 7

print4 (*(p + 0))[0] = 1
print4 (*(p + 0))[1] = 2
print4 (*(p + 0))[2] = 3
print4 (*(p + 0))[3] = 4
print4 (*(p + 0))[4] = 5

print4 (*(p + 1))[0] = 2
print4 (*(p + 1))[1] = 3
print4 (*(p + 1))[2] = 4
print4 (*(p + 1))[3] = 5
print4 (*(p + 1))[4] = 6

print4 (*(p + 2))[0] = 3
print4 (*(p + 2))[1] = 4
print4 (*(p + 2))[2] = 5
print4 (*(p + 2))[3] = 6
print4 (*(p + 2))[4] = 7

print5 *((*(p + 0)) + 0) = 1
print5 *((*(p + 0)) + 1) = 2
print5 *((*(p + 0)) + 2) = 3
print5 *((*(p + 0)) + 3) = 4
print5 *((*(p + 0)) + 4) = 5

print5 *((*(p + 1)) + 0) = 2
print5 *((*(p + 1)) + 1) = 3
print5 *((*(p + 1)) + 2) = 4
print5 *((*(p + 1)) + 3) = 5
print5 *((*(p + 1)) + 4) = 6

print5 *((*(p + 2)) + 0) = 3
print5 *((*(p + 2)) + 1) = 4
print5 *((*(p + 2)) + 2) = 5
print5 *((*(p + 2)) + 3) = 6
print5 *((*(p + 2)) + 4) = 7

print6 p[0][0] = 1
print6 p[0][1] = 2
print6 p[0][2] = 3
print6 p[0][3] = 4
print6 p[0][4] = 5

print6 p[1][0] = 2
print6 p[1][1] = 3
print6 p[1][2] = 4
print6 p[1][3] = 5
print6 p[1][4] = 6

print6 p[2][0] = 3
print6 p[2][1] = 4
print6 p[2][2] = 5
print6 p[2][3] = 6
print6 p[2][4] = 7

#

 */
