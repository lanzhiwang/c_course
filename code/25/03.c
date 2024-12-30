/**
typedef

 */

#include <stdio.h>

typedef int *ptr_t;

// 数组指针
// typedef int (*)[5] parr_t; // err
typedef int (*parr_t)[5];

// 函数指针
// typedef int (*)(int, int) pf_t;  // err
typedef int (*pf_t)(int, int);

int add(int x, int y)
{
	return x + y;
}

int main(void)
{
	// 数组指针
	// int (*)[5]
	int arr[5] = { 1, 2, 3, 4, 5 };
	int (*parr1)[5] = &arr;
	parr_t parr2 = &arr;

	// 函数指针
	int (*pf1)(int, int) = add;
	pf_t pf2 = add;

	return 0;
}

/**

 */
