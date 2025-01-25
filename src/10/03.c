#include <stdio.h>

int main(void)
{
	// 自增自减
	int a = 10;
	int b = a++;
	/**
	b = a  // b = 10
	a = a + 1  // a = 11
	 */
	printf("a = %d, b = %d\n", a, b);	// a = 11, b = 10

	a = 10;
	b = ++a;
	/**
	a = a + 1  // a = 11
	b = a  // b = 11
	 */
	printf("a = %d, b = %d\n", a, b);	// a = 11, b = 11

	return 0;
}
