/**
typedef

 */

#include <stdio.h>

typedef unsigned int uint;
typedef unsigned int *ptr_t;

int main(void)
{
	unsigned int num1 = 10;
	uint num2 = 20;
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);

	unsigned int *p1 = &num1;
	ptr_t p2 = &num1;
	printf("*p1 = %d\n", *p1);
	printf("*p2 = %d\n", *p2);

	return 0;
}

/**

$ ./main
num1 = 10
num2 = 20
*p1 = 10
*p2 = 10
$

 */
