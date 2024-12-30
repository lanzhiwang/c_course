/**
野指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

野指针就是指针指向的位置是不可知的(随机的, 不正确的, 没有明确限制的)

 */

#include <stdio.h>

////////////////////////  野指针成因 3. 指针指向的空间被释放  ////////////////////////

int *test(void)
{
	int n = 100;
	return &n;		// warning: function returns address of local variable [-Wreturn-local-addr]
}

int main(void)
{
	int *p = test();
	printf("*p = %d\n", *p);

	return 0;
}

/**

# ./main
Segmentation fault
#

 */
