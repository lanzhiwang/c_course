/**
传值调用和传址调用

 */

#include <stdio.h>

void change(int *arr, int sz)
{
	for (size_t i = 0; i < sz; i++) {
		*(arr++) = i + 100;
	}
}

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (size_t i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	change(arr, 10);
	for (size_t i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

/**

# ./main
1 2 3 4 5 6 7 8 9 10
100 101 102 103 104 105 106 107 108 109
#

 */
