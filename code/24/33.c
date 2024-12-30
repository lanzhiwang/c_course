/**
一维数组的传参

 */

#include <stdio.h>

void print(int arr[])		// 这里的 arr 代表数组首元素的地址, 既 arr = &(arr[0])
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2 = %d\n", sz2);
	for (size_t i = 0; i < sz2; i++) {
		printf("arr[%ld] = %d\n", i, arr[i]);
	}
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1 = %d\n", sz1);

	print(arr);

	return 0;
}

/**

# ./main
sz1 = 10
sz2 = 2
arr[0] = 1
arr[1] = 2
#

 */
