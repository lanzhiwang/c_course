/**
野指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

野指针就是指针指向的位置是不可知的(随机的, 不正确的, 没有明确限制的)

 */

#include <stdio.h>

////////////////////////  野指针成因 1. 指针未被初始化  ////////////////////////
int main(void)
{
	int num = 10;
	int *p = &num;

	int m;			// warning: 'm' is used uninitialized [-Wuninitialized]
	int *q;			// warning: 'q' is used uninitialized [-Wuninitialized]
	printf("m = %d\n", m);
	printf("q = %p\n", q);

	return 0;
}

/**

# ./main
m = 0
q = (nil)
#

 */