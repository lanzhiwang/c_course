/**
一维数组的传参

 */

#include <stdio.h>

void print(int *arr, int sz)
{
	for (size_t i = 0; i < sz; i++) {
		printf("arr[%ld] = %d\n", i, arr[i]);
	}
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);

	return 0;
}

/**

$ ./main
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
arr[5] = 6
arr[6] = 7
arr[7] = 8
arr[8] = 9
arr[9] = 10
$

 */
