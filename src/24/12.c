/**
const 修饰指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

const int *p = &m;	// 等价于 int const *p = &m;
int *const p = &m;

 */

#include <stdio.h>

////////////////////////  const 修饰指针  ////////////////////////
int main(void)
{
	int m = 10;
	int n = 20;

	int *const p = &m;
	printf("p = %p\n", p);	// p = 0x7ffe6bca600c
	printf("*p = %d\n", *p);	// *p = 10

	*p = 15;
	printf("p = %p\n", p);	// p = 0x7ffe6bca600c
	printf("*p = %d\n", *p);	// *p = 15

	// p = &n;                      // error: assignment of read-only variable 'p'
	// printf("p = %p\n", p);
	// printf("*p = %d\n", *p);

	return 0;
}

/**

$ ./main
p = 0x7ffe6bca600c
*p = 10
p = 0x7ffe6bca600c
*p = 15
$

 */
