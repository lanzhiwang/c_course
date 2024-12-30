#include <stdio.h>

/**
数组

type arr_name[常量值]

 */
int main(void)
{
	/**
	创建数组
	 */
	int math[20];
	double score[10];
	char ch[5];

	/**
	数组初始化
	 */
	int arr1[5] = { 1, 2, 3, 4, 5 };	// 完全初始化
	int arr2[5] = { 1 };	// 不完全初始化, 第一个元素初始化为 1, 剩余的元素初始化为默认值
	// int arr3[3] = {1, 2, 3, 4};  // 错误初始化, 初始化项太多
	// int arr4[3] = (1, 2, 3, 4);  // 错误初始化, 初始化不是使用 ()
	int arr5[] = { 1, 2, 3, 4, 5 };
	// int arr6[];  // 错误初始化, 既没有数组大小, 也没有初始化值

	/**
	数组               数组类型      数组元素类型
	int math[20]      int [20]     int
	double score[10]  double [10]  double
	char ch[5]        char [5]     char
	int arr1[5]       int [5]      int
	int arr2[5]       int [5]      int
	int arr5[]        int [5]      int
	 */

	/**
	数组的下标

	数组的下标从 0 开始
	 */

	/**
	数组元素的个数
	 */
	size_t sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("arr1 sz = %ld\n", sz);	// arr1 sz = 5
	printf("sizeof(arr1) = %ld\n", sizeof(arr1));	// sizeof(arr1) = 20
	printf("sizeof(arr1[0]) = %ld\n", sizeof(arr1[0]));	// sizeof(arr1[0]) = 4

	/**
	数组的内存表示
	 */
	for (size_t i = 0; i < sz; i++) {
		printf("arr1[%ld] = %d, &(arr1[%ld]) = %p\n", i, arr1[i], i,
		       &arr1[i]);
	}
	/**
	arr1[0] = 1, &(arr1[0]) = 0x7ffe91294320
	arr1[1] = 2, &(arr1[1]) = 0x7ffe91294324
	arr1[2] = 3, &(arr1[2]) = 0x7ffe91294328
	arr1[3] = 4, &(arr1[3]) = 0x7ffe9129432c
	arr1[4] = 5, &(arr1[4]) = 0x7ffe91294330
	 */

	printf("\n");
	return 0;
}

/**
(gdb) print math
$1 = {0 <repeats 20 times>}
(gdb) print score
$2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
(gdb) print ch
$3 = "\000\000\000\000"
(gdb) print arr1
$4 = {1, 2, 3, 4, 5}
(gdb) print arr2
$5 = {1, 0, 0, 0, 0}
(gdb) print arr5
$6 = {1, 2, 3, 4, 5}
(gdb)
 */
