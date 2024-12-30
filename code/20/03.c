#include <stdio.h>

/**
变长数组

C99 有一个变长数组(variable-length array 简称 VLA) 的新特性, 允许我们可以使用变量指定数组大小

变长数组的根本特征, 就是数组长度只能在运行时确定, 所以变成数组不能初始化

 */
int main(void)
{
	/**
	固定长度的数组
	 */
	int arr1[5] = { 1 };
	int arr2[3 + 4] = { 1 };
	int arr3[] = { 1, 2, 3, 4 };

	/**
	变长数组
	 */
	int n = 0;
	scanf("%d", &n);
	int arr[n];

	for (size_t i = 0; i < n; i++) {
		arr[i] = i + 10;
	}

	for (size_t i = 0; i < n; i++) {
		printf("arr[%ld] = %d\n", i, arr[i]);
	}

	return 0;
}

/**
# ./main
5
arr[0] = 10
arr[1] = 11
arr[2] = 12
arr[3] = 13
arr[4] = 14
#
 */
