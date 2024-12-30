/**
一维数组的传参

 */

#include <stdio.h>

void print(int *arr, int sz)
{
	printf("print arr = %p\n", arr);
	for (size_t i = 0; i < sz; i++) {
		printf("i = %ld, *(arr++) = %d\n", i, *(arr++));
	}
	printf("print arr = %p\n", arr);
}

void set_arr(int *arr, int sz)
{
	printf("set_arr arr = %p\n", arr);
	for (size_t i = 0; i < sz; i++) {
		*(arr + i) = i + 10;
	}
	printf("set_arr arr = %p\n", arr);
}

int main(void)
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("main arr = %p\n", arr);
	print(arr, sz);
	printf("main arr = %p\n", arr);

	printf("main arr = %p\n", arr);
	set_arr(arr, sz);
	printf("main arr = %p\n", arr);

	printf("main arr = %p\n", arr);
	print(arr, sz);
	printf("main arr = %p\n", arr);

	return 0;
}

/**

# ./main

main arr = 0x7ffd68a300f0
print arr = 0x7ffd68a300f0
i = 0, *(arr++) = 0
i = 1, *(arr++) = 0
i = 2, *(arr++) = 0
i = 3, *(arr++) = 0
i = 4, *(arr++) = 0
i = 5, *(arr++) = 0
i = 6, *(arr++) = 0
i = 7, *(arr++) = 0
i = 8, *(arr++) = 0
i = 9, *(arr++) = 0
print arr = 0x7ffd68a30118
main arr = 0x7ffd68a300f0

main arr = 0x7ffd68a300f0
set_arr arr = 0x7ffd68a300f0
set_arr arr = 0x7ffd68a300f0
main arr = 0x7ffd68a300f0

main arr = 0x7ffd68a300f0
print arr = 0x7ffd68a300f0
i = 0, *(arr++) = 10
i = 1, *(arr++) = 11
i = 2, *(arr++) = 12
i = 3, *(arr++) = 13
i = 4, *(arr++) = 14
i = 5, *(arr++) = 15
i = 6, *(arr++) = 16
i = 7, *(arr++) = 17
i = 8, *(arr++) = 18
i = 9, *(arr++) = 19
print arr = 0x7ffd68a30118
main arr = 0x7ffd68a300f0

#

 */
