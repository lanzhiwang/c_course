#include <stdio.h>

int main(void)
{
	int a = 10;
	{
		int b = 20;
		printf("a = %d, b = %d\n", a, b);	// a = 10, b = 20
	}
	printf("a = %d\n", a);	// a = 10
	// printf("b = %d\n", b); // err

	return 0;
}
