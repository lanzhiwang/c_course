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
	int n = 10;
	printf("n = %d\n", n);	// n = 10
	n = 20;
	printf("n = %d\n", n);	// n = 20

	const int m = 10;
	printf("m = %d\n", m);	// m = 10
	// m = 20;  // error: assignment of read-only variable 'm'
	printf("m = %d\n", m);	// m = 10

	// int arr1[n] = {0};  // error: variable-sized object may not be initialized
	// int arr2[m] = {0};  // error: variable-sized object may not be initialized
	// 说明 n 和 m 本质上还是变量

	return 0;
}

/**

$ ./main
n = 10
n = 20
m = 10
m = 10
$

 */
