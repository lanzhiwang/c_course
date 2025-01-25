#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = 4;
	int c = 0;
	c = b = a + 3;
	/**
	b = a + 3  // b = 6
	c = b  // c = 6
	 */
	printf("a = %d, b = %d, c = %d\n", a, b, c);	// a = 3, b = 6, c = 6

	return 0;
}
