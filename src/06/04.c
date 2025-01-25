#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("%p\n", &a);

	int *p = &a;
	printf("%p\n", p);

	return 0;
}

/**

$ ./main
0x7ffe61c28034
0x7ffe61c28034
$

 */
