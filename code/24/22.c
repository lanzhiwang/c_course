/**
野指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

野指针就是指针指向的位置是不可知的(随机的, 不正确的, 没有明确限制的)

 */

#include <stdio.h>

////////////////////////  避免野指针 1. 指针要初始化  ////////////////////////

/**
NULL 定义在 stdio.h 中

#ifdef __cplusplus
	#define NULL 0
#else
	#define NULL ((void *)0)
#endif
*/

int main(void)
{
	int n = 100;
	int *p = &n;
	printf("*p = %d\n", *p);

	int *q = NULL;
	printf("*q = %d\n", *q);

	return 0;
}

/**

# ./main
*p = 100
Segmentation fault
#

 */
