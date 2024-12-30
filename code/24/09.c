/**
const 修饰指针

16 进制表示
0 1 2 3 4 5 6 7 8 9 a  b  c  d  e  f
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

 */

#include <stdio.h>

////////////////////////  const 修饰变量  ////////////////////////
int main(void)
{
	const int m = 10;
	printf("m = %d\n", m);
	// m = 20;  // error: assignment of read-only variable 'm'

	int *p = &m;
	*p = 20;
	printf("m = %d\n", m);

	return 0;
}

/**

# ./main
m = 10
m = 20
#

 */
