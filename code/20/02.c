#include <stdio.h>

/**
二维数组

type arr_name[常量值][常量值]

 */
int main(void)
{
	/**
	创建数组
	 */
	int math[3][2];
	double score[2][3];
	char ch[3][5];

	/**
	数组初始化
	 */
	int arr1[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };	// 完全初始化
	int arr2[3][4] = { 1 };	// 不完全初始化, 第一个元素初始化为 1, 剩余的元素初始化为默认值
	// int arr3[3] = {1, 2, 3, 4};  // 错误初始化, 初始化项太多
	// int arr4[3] = (1, 2, 3, 4);  // 错误初始化, 初始化不是使用 ()
	int arr5[3][4] = { 1, 2, 3, 4, 5 };
	// int arr6[];  // 错误初始化, 既没有数组大小, 也没有初始化值
	int arr7[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };	// 按行完全初始化
	int arr8[3][4] = { { 1, 2, 3, 4 }, { 5, 6 }, { 9, 11, 12 } };	// 按行不完全初始化
	int arr9[3][4] = { { 1, 2, 3, 4 }, { }, { 9, 10, 11, 12 } };	// 按行不完全初始化

	int arr10[][4] = { { 1, 2, 3, 4 }, { }, { 9, 10, 11, 12 } };	// 二维数组初始化, 行可以省略, 但是列不能省略

	/**
	数组               数组类型      数组元素类型
	 */

	/**
	数组的下标

	数组的下标从 [0][0] 开始
	 */

	/**
	数组元素的个数
	 */
	size_t sz = sizeof(arr1) / sizeof(arr1[0][0]);
	printf("arr1 sz = %ld\n", sz);	// arr1 sz = 12
	printf("sizeof(arr1) = %ld\n", sizeof(arr1));	// sizeof(arr1) = 48
	printf("sizeof(arr1[0]) = %ld\n", sizeof(arr1[0][0]));	// sizeof(arr1[0]) = 4

	/**
	数组的行数和列数
	 */
	size_t cols = sizeof(arr1[0]) / sizeof(arr1[0][0]);
	size_t rows = sz / cols;
	printf("arr1 cols = %ld\n", cols);	// arr1 cols = 4
	printf("arr1 rows = %ld\n", rows);	// arr1 rows = 3
	printf("sizeof(arr1[0]) = %ld\n", sizeof(arr1[0]));	// sizeof(arr1[0]) = 16

	/**
	数组的内存表示
	 */
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			printf("arr1[%ld][%ld] = %d, &(arr1[%ld][%ld]) = %p\n",
			       i, j, arr1[i][j], i, j, &arr1[i][j]);
		}
		printf("&arr1[%ld] = %p\n", i, &arr1[i]);
	}
	/**
	arr1[0][0] = 1, &(arr1[0][0]) = 0x7ffec897cf60
	arr1[0][1] = 2, &(arr1[0][1]) = 0x7ffec897cf64
	arr1[0][2] = 3, &(arr1[0][2]) = 0x7ffec897cf68
	arr1[0][3] = 4, &(arr1[0][3]) = 0x7ffec897cf6c
	&arr1[0] = 0x7ffec897cf60

	arr1[1][0] = 5, &(arr1[1][0]) = 0x7ffec897cf70
	arr1[1][1] = 6, &(arr1[1][1]) = 0x7ffec897cf74
	arr1[1][2] = 7, &(arr1[1][2]) = 0x7ffec897cf78
	arr1[1][3] = 8, &(arr1[1][3]) = 0x7ffec897cf7c
	&arr1[1] = 0x7ffec897cf70

	arr1[2][0] = 9, &(arr1[2][0]) = 0x7ffec897cf80
	arr1[2][1] = 10, &(arr1[2][1]) = 0x7ffec897cf84
	arr1[2][2] = 11, &(arr1[2][2]) = 0x7ffec897cf88
	arr1[2][3] = 12, &(arr1[2][3]) = 0x7ffec897cf8c
	&arr1[2] = 0x7ffec897cf80

	 */

	printf("\n");
	return 0;
}

/**

(gdb) print math
$1 = {{0, 0}, {0, 0}, {0, 0}}

(gdb) print score
$2 = {{0, 0, 0}, {0, 0, 0}}

(gdb) print ch
$3 = {
	"\000\000\000\000",
	"\000\000\000\000",
	"\000\000\000\000"
}

(gdb) print arr1
$4 = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12}
}

(gdb) print arr2
$5 = {
	{1, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
}

(gdb) print arr5
$6 = {
	{1, 2, 3, 4},
	{5, 0, 0, 0},
	{0, 0, 0, 0}
}

(gdb) print arr7
$1 = {
	{1, 2, 3, 4},
	{5, 6, 7, 8},
	{9, 10, 11, 12}
}

(gdb) print arr8
$2 = {
	{1, 2, 3, 4},
	{5, 6, 0, 0},
	{9, 11, 12, 0}
}

(gdb) print arr9
$3 = {
	{1, 2, 3, 4},
	{0, 0, 0, 0},
	{9, 10, 11, 12}
}

(gdb)

 */
