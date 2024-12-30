/**
一维数组的传参

 */

#include <stdio.h>

void print(int *arr, int sz)
{
	for (size_t i = 0; i < sz; i++) {
		printf("i = %ld, *(arr++) = %d\n", i, *(arr++));
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

# ./main
i = 0, *(arr++) = 1
i = 1, *(arr++) = 2
i = 2, *(arr++) = 3
i = 3, *(arr++) = 4
i = 4, *(arr++) = 5
i = 5, *(arr++) = 6
i = 6, *(arr++) = 7
i = 7, *(arr++) = 8
i = 8, *(arr++) = 9
i = 9, *(arr++) = 10
#

 */
