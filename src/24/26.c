/**
assert 断言

assert.h 头文件中定义了宏 assert(), 用于在运行时确保程序符合指定条件, 如果不符合, 就报错终止运行.

 */

#include <stdio.h>
#include <assert.h>

int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = &arr[0];
	int i = 0;
	for (i = 0; i < 10; i++) {
		*(p++) = i + 10;
	}
	p = NULL;

	assert(p != NULL);
	for (i = 0; i < 10; i++) {
		printf("*(p++) = %d\n", *(p++));
	}

	return 0;
}

/**

$ ./main
main: 26.c:21: main: Assertion `p != NULL' failed.
Aborted
$

 */
