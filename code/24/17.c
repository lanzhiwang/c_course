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

////////////////////////  指针的关系运算  ////////////////////////
int main(void)
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = &arr[0];
	size_t sz = sizeof(arr) / sizeof(int);
	while (p < arr + sz) {
		printf("%d ", *p);
		p++;
	}
	printf("\n");

	return 0;
}

/**

# ./main
1 2 3 4 5 6 7 8 9 10
#

 */
