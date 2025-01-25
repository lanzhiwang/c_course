/**
指针运算

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

指针运算有三种:
1. 指针 + - 整数
2. 指针 - 指针
3. 指针的关系运算

 */

#include <stdio.h>

////////////////////////  指针 + - 整数  ////////////////////////
int main(void)
{
	int m = 10;
	int *p = &m;
	printf("p     = %p\n", p);	// p     = 0x7ffef75d2364
	printf("p + 1 = %p\n", p + 1);	// p + 1 = 0x7ffef75d2368
	printf("p + 2 = %p\n", p + 2);	// p + 2 = 0x7ffef75d236c
	printf("\n");

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	size_t sz = sizeof(arr) / sizeof(int);
	for (size_t i = 0; i < sz; i++) {
		printf("arr[%ld] = %d, &(arr[%ld]) = %p\n", i, arr[i], i,
		       &(arr[i]));
	}
	printf("\n");

	/**
	指针 + - 整数
	 */
	printf("&(arr[0]) + 0 = %p\n", &(arr[0]) + 0);
	printf("&(arr[0]) + 1 = %p\n", &(arr[0]) + 1);
	printf("&(arr[0]) + 2 = %p\n", &(arr[0]) + 2);
	printf("&(arr[0]) + 3 = %p\n", &(arr[0]) + 3);
	printf("&(arr[0]) + 4 = %p\n", &(arr[0]) + 4);
	printf("&(arr[0]) + 5 = %p\n", &(arr[0]) + 5);
	printf("&(arr[0]) + 6 = %p\n", &(arr[0]) + 6);
	printf("&(arr[0]) + 7 = %p\n", &(arr[0]) + 7);
	printf("&(arr[0]) + 8 = %p\n", &(arr[0]) + 8);
	printf("&(arr[0]) + 9 = %p\n", &(arr[0]) + 9);
	printf("\n");

	return 0;
}

/**

$ ./main
p     = 0x7ffef75d2364
p + 1 = 0x7ffef75d2368
p + 2 = 0x7ffef75d236c

arr[0] = 1, &(arr[0]) = 0x7ffef75d2330
arr[1] = 2, &(arr[1]) = 0x7ffef75d2334
arr[2] = 3, &(arr[2]) = 0x7ffef75d2338
arr[3] = 4, &(arr[3]) = 0x7ffef75d233c
arr[4] = 5, &(arr[4]) = 0x7ffef75d2340
arr[5] = 6, &(arr[5]) = 0x7ffef75d2344
arr[6] = 7, &(arr[6]) = 0x7ffef75d2348
arr[7] = 8, &(arr[7]) = 0x7ffef75d234c
arr[8] = 9, &(arr[8]) = 0x7ffef75d2350
arr[9] = 10, &(arr[9]) = 0x7ffef75d2354

&(arr[0]) + 0 = 0x7ffef75d2330
&(arr[0]) + 1 = 0x7ffef75d2334
&(arr[0]) + 2 = 0x7ffef75d2338
&(arr[0]) + 3 = 0x7ffef75d233c
&(arr[0]) + 4 = 0x7ffef75d2340
&(arr[0]) + 5 = 0x7ffef75d2344
&(arr[0]) + 6 = 0x7ffef75d2348
&(arr[0]) + 7 = 0x7ffef75d234c
&(arr[0]) + 8 = 0x7ffef75d2350
&(arr[0]) + 9 = 0x7ffef75d2354

$

 */
