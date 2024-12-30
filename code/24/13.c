/**
const 修饰指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

 */

#include <stdio.h>

////////////////////////  const 修饰指针  ////////////////////////
int main(void)
{
	int m = 10;
	int n = 20;

	const int *const p = &m;	// 等价于 int const *const p = &m;
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	// *p = 15;             // error: assignment of read-only location '*(const int *)p'
	// printf("p = %p\n", p);
	// printf("*p = %d\n", *p);

	// p = &n;                      // error: assignment of read-only variable 'p'
	// printf("p = %p\n", p);
	// printf("*p = %d\n", *p);

	return 0;
}

/**

# ./main
p = 0x7fffd8a04d8c
*p = 10
#

 */
