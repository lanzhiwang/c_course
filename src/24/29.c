/**
传值调用和传址调用

 */

#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a = 10;
	int b = 11;
	printf("交换前 a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("交换后 a = %d, b = %d\n", a, b);
	return 0;
}

/**

$ ./main
交换前 a = 10, b = 11
交换后 a = 11, b = 10
$

 */
