#include <stdio.h>

int main(void)
{
	int i = 10;
	int j;

	j = (i++ + 10);
	/**
	j = i + 10  // j = 20
	i = i + 1  // i = 11
	 */
	printf("i = %d, j = %d\n", i, j);	// i = 11, j = 20

	j = (++i + 10);
	/**
	i = i + 1  // i = 12
	j = 12 + 10  // j = 22
	 */
	printf("i = %d, j = %d\n", i, j);	// i = 12, j = 22

	return 0;
}
